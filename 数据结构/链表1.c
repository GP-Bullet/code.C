#include<stdio.h>
#include<stdlib.h>
int main(){

typedef struct node{
    int data;
    struct node*next;
}Node;

//创建头结点
Node*head=(Node*)malloc(sizeof(Node));
head->next=NULL;

//结点
Node*pNew=(Node*)malloc(sizeof(Node));
pNew->data=123;

//头插法
Node *createLink(){
    //创建头结点
    Node *head=(Node *)malloc(sizeof(Node));
    head->next=NULL;
    
    int x;

    while(scanf("%d",&x)&&x!=-1){
        Node *pNew=(Node *)malloc*(sizeof(Node));
        pNew->data=x;
        pNew->next=head->next;
        head->next=pNew;
    }
    return head;



}



}


