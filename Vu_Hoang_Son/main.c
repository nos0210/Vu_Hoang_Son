#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;


void Add(linked_list_t* ll, int val) //Them node o vi tri cuo cung 
{
	node_t* new_node = malloc(sizeof(node_t));
	new_node->value = val;

	new_node->previous_node = ll->last_node;
	ll->last_node = new_node;
	ll->len++;
}
void Insert(linked_list_t* ll, int val, int index) { //Them node o vi tri index 
	node_t* new_node = malloc(sizeof(node_t));
	if (index <= 0 || index > ll->len) {
		return;

	}
	else if (index == ll->len) {
		Add(ll, val);
		return;
	}
	else {
		new_node->value = val;

		new_node->previous_node = ll->last_node;
		ll->last_node = new_node;
		/*	new_node->previous_node = NULL;*/
		node_t* tg = ll->last_node;
		for (int i = 0; i < index - 1; i++) {
			tg = tg->previous_node;
		}
		ll->len++;
		new_node->previous_node = tg->previous_node;
		tg->previous_node = new_node;
	}

}
void Remove(linked_list_t* ll) {
	//if (ll->last_node == NULL) {
	//	return;
	//}
	node_t* del = ll->last_node;

	ll->last_node = del->previous_node;
	 
	free(del);
	ll->len--;
}
void RemoveIndex(linked_list_t* ll, int index) { // Xoa node o vii tri index 
	node_t* del = ll->last_node;
	node_t* prev = ll->last_node;
	if (index < 0 || index < ll->len) {
		return;
	}
	else if (index == ll->len) {
		Remove(&ll);
		return;
	}
	else {
		for (int i = 0; i < index -1 ; i++) {
			prev = prev->previous_node;

		}
		del = prev->previous_node;
		prev->previous_node = del->previous_node;
		free(del);
		ll->len--; 

		
	}
}
int Search(linked_list_t* ll, int val) { //Tim gia tri 
	int len = ll->len;
	node_t* tg = ll->last_node;
	
	while(len>0) {
		tg = tg->previous_node;
		if (tg->value==val){
			return len;
		}
		else{
			len--;
		}
		
		
	}
	if (len == 0) {
		return -1;
	}
}
int Getvalue(linked_list_t* ll) { //Lay gtri o vi tri cuoi cung 
	node_t* tg = ll->last_node;
	return tg->value;

}
int GetValieIndex(linked_list_t* ll, int index) { // Lay gtri o vi tri index  
	if (index<0 || index> ll->len) {
		return;
	}
	else if (index == ll->len) {
		Getvalue(&ll);
		return;
	}
	else {
		node_t* tg = ll->last_node;
		for (int i = 0; i < index - 1; i++) {
			tg = tg->previous_node;
		}
		tg = tg->value;
		return tg;
	}

}
void DeleteAll(linked_list_t* ll ) {//Xoa tat ca cac node 
	node_t* tg = ll->last_node;
	while (ll->len > 0) {
		tg = tg->previous_node;
		free(tg);
		ll->len--;
	}
}

linked_list_t ll;
void main()
{
	Add(&ll, 1);
	Add(&ll, 2);
	Add(&ll, 3);
	Add(&ll, 4);

	Insert(&ll, 6, 3);

	Remove(&ll);
	
	Search(&ll, 3);

	Getvalue(&ll);

	GetValieIndex(&ll, 2);

	DeleteAll(&ll);
}

