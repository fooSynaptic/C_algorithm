#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

struct LinkNode{
    int data;
    LinkNode* next;
};

void init(LinkNode* &head){
    head = (LinkNode*)malloc(sizeof(LinkNode));
    head->next=NULL;
}

void add(int i,LinkNode* head){
    LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
    p->data = i;
    p->next =  head->next;
    head->next = p;
}

void printList(LinkNode* head){
    if(head==NULL)
        return;
    LinkNode* p = head->next;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}
