#include "shop.h"

Product *create_product(char* name, float price) {
	Product *p = (Product*)malloc(sizeof(Product));
	if(p==NULL) {
			printf("Memory allocation failed!");
			return NULL;
	}
	p->name = name;
	p->price = price;
	return p;
}
