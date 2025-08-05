#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *head = new node();
void insertNodeAtEnd(node *h, node *t, int val){
    while(h->next!=NULL)
    h = h->next;
    t->data = val;
    t->next = NULL;
    h->next = t;
}
void AddNodeBeforeHead(node *h, node *t, int val, int key){
    while(h!=NULL){
        if(h->data==key){
            
        }
    }
}