#include<time.h>
#include<stdlib.h>
struct product{
	char *name;
	float price;
}

struct order{
	time_t order_time;
	struct product** products;
	struct user *owner;

}

struct user{
	char* user_name;
	int nr_cart;
	struct product **cart;
	int nr_order;
	struct order **orders;

}

struct product *create_product(char* name, float price);

struct order *place_order(struct *user);

struct user *create_user(char* name);

void add_to_cart(struct* user, struct* product);
