#include "shop.h"
#include <string.h>
User *create_user(char* name) {
	User* u = (User*)malloc(sizeof(User));
	if(u==NULL)
		return NULL;
	strcpy(u->name, name);
	u->nr_cart = 0;
	u->nr_order = 0;
	u->cart= NULL;
	u->orders = NULL;
	return u;
}

void add_to_cart(User* u, Product* p) {
	u->nr_cart++;
	if(u->nr_cart == 1){
		u->cart= (Product**)malloc(sizeof(Product*));
		if(u->cart== NULL) return;
	}
	else {
		u->cart= (Product**)realloc(u->cart, sizeof(Product*)*u->nr_cart);
		if(u->cart== NULL) return;
		u->cart[u->nr_cart-1] = p;
	}
}
