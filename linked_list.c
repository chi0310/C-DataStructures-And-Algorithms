#include <stdio.h>
#include <cstdlib>
#include <cstdlib>

typedef struct list_node
{
    struct list_node* next;
    int value;
}node; 

typedef node* node_pointer;
node_pointer head = NULL;

void tranverse(){
    if (head==NULL){
        printf("list is empty");
        return;
    }
    node_pointer temp = head; 
    while(temp!=NULL){
        printf(" %d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

void insert_begin(int value){
    node_pointer new_node;
    new_node = (node_pointer)malloc(sizeof(node));
    new_node -> value = value;
    new_node -> next = head ;
    head = new_node;
}

void insert_end(int value){
    node_pointer new_node, temp;
    new_node = (node_pointer)malloc(sizeof(node));
    new_node -> value = value;
    new_node -> next = NULL;
    temp = head;
    if(head==NULL){
        head = new_node;
    }
    else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}   

void delete_p(int value){
    node_pointer temp, previous;
    temp = head;
    while(temp!=NULL && temp->value!=value){
        previous = temp;
        temp = temp ->next;
    }
    if(temp==head){
        head = head->next;
        free(temp);
    }
    else if(temp==NULL){
        printf("there is no value %d in list", value);
    }
    else{
        previous->next = temp->next;
        free(temp);
    }
}

void reverse(){
    if(head==NULL || head->next==NULL){
        printf("list is empty");
    }
    node_pointer previous;
    node_pointer current = head;
    node_pointer preceding = head->next;
    while(preceding != NULL){
        current -> next = previous;
        previous = current;
        current = preceding;
        preceding = preceding -> next;
    }
    current -> next = previous;
    head = current;
}

void reverse_recursive(){
    
}

int main(){
    insert_begin(1);
    insert_begin(2);
    insert_end(3);
    delete_p(3);
    insert_end(4);
    insert_end(5);
    tranverse();
    reverse();
    tranverse();
}