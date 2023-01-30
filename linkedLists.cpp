// linked lists all

#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* next;
};

// insertion at the end
struct node* insert (struct node* head, int data) {

   struct node* new_node = (struct node*) malloc(sizeof(struct node));
   new_node->data = data;
   new_node->next = NULL;

   if(head == NULL){
    head = new_node;
    // cout<<"yes head null";
    return head;
   }
   
   struct node* ptr = head;
   while(ptr->next){
    ptr = ptr->next;
   }
   ptr->next =  new_node;
   
   return head;
}

// insert at the beginning of the list
struct node* inserthead(struct node* head, int data){
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    new_node->data = data;
    if(head == NULL){
        head = new_node;
        new_node ->next = NULL;
        return head;
    }

    new_node ->next = head;
    head = new_node;
    return head;
}
void printList(struct node* head){
    struct node* ptr = head;
    while(ptr !=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
// delete a node from end
struct node* deleteNode(struct node* head){
    
    struct node* ptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    struct node* delnode = ptr->next;
    ptr->next = NULL;
    free(delnode);

    return head;
}

int main(){
    // new node creation
    struct node * head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = inserthead(head, 30);
    printList(head);
    head = deleteNode(head);
    printList(head);
    
    return 0;
}