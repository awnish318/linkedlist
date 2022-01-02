
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
    }*first=NULL;
typedef struct node nd;
void create (int a[],int n){
    int i;
    nd*t,*last;
    first=(nd*)malloc(sizeof(nd));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(nd*)malloc(sizeof(nd));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Insert(int pos,int x){
    nd*t,*p;
    if(pos==0){
        t=(nd*)malloc(sizeof(nd));
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0){
        t=(nd*)malloc(sizeof(nd));
        t->data=x;
        p=first;
        for(int i=0;i<pos-1&&p;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
        
    }
}
void Display(nd*p){
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
}

int main()
{
    Insert(0,15);
    Insert(0,8);  
    Insert(0,9);  
    Insert(1,10);  
    Display(first);
    

    return 0;
}
