//traversal of linked list 
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

   void mobile(struct node *ptr){
    while(ptr != NULL)
    {
        printf("%d ",ptr -> data);
        ptr = ptr -> next;
    }
   }


int main(){

 
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));

    head -> data = 9;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 5;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    mobile(head);


    return 0;
}