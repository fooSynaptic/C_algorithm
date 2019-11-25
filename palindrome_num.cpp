#include<stdio.h>
#include "LinkList.cpp"
#include "SqStack.cpp"

/*
    判断某链表是否是回文结构
    1、首先找到链表的中间结点（若是偶数个结点则是中间位置的左边一个结点）
    2、使用一个栈将中间结点之前的结点压栈，然后从中间结点的后一个结点开始从栈中拿出结点比较 
*/

bool isPalindromeList(LinkNode* head){
    if(head == NULL)
        return false;

    LinkNode *slow = head , *fast = head;
    SqStack* stack;
    init(stack);

    //fast指针每走两步，slow指针才走一步 
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;    
        slow = slow->next;    
        push(slow,stack);
    }

    //链表没有结点或只有一个结点，不是回文结构
    if(isEmpty(stack)) 
        return false;

    //判断偶数个结点还是奇数个结点
    if(fast->next != NULL){    //奇数个结点,slow需要再走一步 
        slow = slow->next;
    }


    //这段程序非常神奇的一点就是，利用两个指针来判断中点，当两倍指针已经指向NULL时，一倍指针
    //已经指向了后半部分的序列。（学习了）
    //从slow的后继结点开始遍历链表，将每个结点与栈顶结点比较
    LinkNode* node;
    slow = slow->next;
    while(slow != NULL){
        pop(stack,node);
        //一旦发现有一个结点不同就不是回文结构 
        if(slow->data != node->data)
            return false;
        slow = slow->next;
    } 
    return true;
}

int main(){

    LinkNode* head;
    init(head);
    add(2,head);
    add(3,head);
    add(3,head);
    add(2,head);
    printList(head);

    if(isPalindromeList(head)){
        printf("是回文链表\n");
    }else{
        printf("不是回文链表\n");
    }
    return 0;
}
