#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
 };
 int main(){
 struct node*head=NULL;
 struct node*second=NULL;
 struct node*third=NULL;
 
 head = malloc(sizeof(struct node));
 second=malloc(sizeof(struct node));
 third=malloc(sizeof(struct node));
 
 head->data=10;
 head->next=second;
 
 second->data=20;
 second->next=third;
 
 third->data=30;
 third->next=NULL;
 
 struct node*temp=head;
 while(temp!=NULL){
 printf("%d ->",temp->data);
 temp=temp->next;
 }
 printf("NULL\n");
 
 return 0;
 }
