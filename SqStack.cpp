#include<stdio.h>
#include<stdlib.h>

struct SqStack{
    LinkNode* data[MAX_SIZE];
    int length;
}; 

void init(SqStack* &stack){
    stack = (SqStack*)malloc(sizeof(SqStack));
    stack->length=0; 
}

bool isEmpty(SqStack* stack){
    if(stack->length > 0)
        return false;
    return true;
}

bool isFull(SqStack* stack){
    if(stack->length == MAX_SIZE)
        return true;
    return false;
}

void push(LinkNode* i,SqStack* stack){
    if(stack==NULL)
        return;
    if(!isFull(stack)){
        stack->data[stack->length++] = i;
    }
}

bool pop(SqStack* stack,LinkNode* &i){
    if(stack==NULL)
        return false;
    if(!isEmpty(stack))
        i = stack->data[--stack->length];
        return true;
}
