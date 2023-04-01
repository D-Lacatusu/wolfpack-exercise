#ifndef SHOP_H
#define SHOP_H

#include<time.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct {
	char *name;
	float price;
} Product;

typedef struct {
	time_t order_time;
	Product** products;
	char* owner;

} Order;

typedef struct {
	char* name;
	int nr_cart;
	Product **cart;
	int nr_order;
	Order **orders;

} User;

Product *create_product(char* name, float price);

Order *place_order(User* u);

User *create_user(char* name);

void add_to_cart(User* u, Product* p);
#endif
