#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
#include <initializer_list>  
#include<malloc.h>  

class linked_list {  
public:  
   typedef struct node_t {  
       void* previous_node;  
       int value;  
   };  
   int len;  
   node_t* last_node;  
   linked_list();  
   linked_list(std::initializer_list<int> list);  
   void Add(int val);  
   void Insert(int val, int index);
   void Remove();
   void RemoveIndex(int index);
   int Search(int val);
   int& operator[](int index);
   const int& operator[](int index) const;
   void sort();
   ~linked_list();
};  

linked_list::linked_list() {  
   printf("ham tao khong doi so");    
   len = 0;  
   last_node = nullptr;  
}  

void linked_list::Add(int val) {  
   node_t* new_node = (node_t*)malloc(sizeof(node_t));  
   new_node->value = val;  
   new_node->previous_node = last_node;  
   last_node = new_node;  
   len++;  
}  
void linked_list::Insert(int val, int index) {
    if (index > len|| index < 0) {
        return ;
    }
    else if(index == len){
        Add(2);

        return;
    }
    else {
        node_t* new_node = (node_t*)malloc(sizeof(node_t));
        for (int i = 0; i < index - 1; i++) {
            new_node =(node_t*) new_node->previous_node;

        }
        len++;
        new_node->previous_node =(node_t*) new_node->previous_node;
        new_node->previous_node = new_node;
    }
}
void linked_list:: Remove() {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
   
    last_node =(node_t*) new_node->previous_node;
    free(new_node);
}
void linked_list::RemoveIndex(int index ){
    if (index<0 || index>len) {
        return;
    }
    else if (index==len) {
        Remove();
        return;
    }
    else {
        node_t* del = last_node;
        node_t* prev = last_node;
        for (int i = 0; i < index - 1; i) {
            prev = (node_t*)prev->previous_node;

        }
        del = (node_t*)prev->previous_node;
        prev->previous_node = del->previous_node;
        free(del);
        len--;
    }
}
int linked_list::Search(int val) { 
    
    node_t* new_node = last_node;

    while (len > 0) {
       new_node =(node_t*) new_node->previous_node;
        if (new_node->value == val) {
            return len;
        }
        else {
            len--;
        }


    }
    if (len == 0) {
        return -1;
    }
}
//int& linked_list::operator[](int index) {
//    if (index < 0 || index >= len)
//        throw std::out_of_range("Index out of bounds");
//    node_t* current = last_node;
//    int steps = len - 1 - index;
//    while (steps-- > 0) {
//        current = static_cast<node_t*>(current->previous_node);
//    }
//    return current->value;
//}
//
//const int& linked_list::operator[](int index) const {
//    if (index < 0 || index >= len)
//        throw std::out_of_range("Index out of bounds");
//    node_t* current = last_node;
//    int steps = len - 1 - index;
//    while (steps-- > 0) {
//        current = static_cast<node_t*>(current->previous_node);
//    }
//    return current->value;
//}
int& linked_list::operator[](int index) {
    if (index < 0 || index >= len) {
        return;
    }
    int steps = len - 1 - index;
    node_t* new_node = last_node;
    while (steps > 0) {
        new_node = (node_t*)new_node->previous_node;
        steps--;
    }
    return new_node->value;

}
const int& linked_list::operator[](int index) const {
    if (index < 0 || index >= len) {
        return;
    }
    int steps = len - 1 - index;
    node_t* new_node = last_node;
    while (steps > 0) {
        new_node = (node_t*)new_node->previous_node;
        steps--;
    }
    return new_node->value;
}
void Sort() {

}
linked_list::~linked_list() {
   
}
int main() {  
   linked_list A;  
   linked_list B = { 1, 2, 3 };  
   A.Add(2);  
   A.Insert(1, 2);
   A.Remove();
   A.RemoveIndex(2);
   int a = B[1];
   B[2] = 2;
}
