
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
int delete(int pos){
    nd*p,*q;
    int x=-1,i;
    if(pos==1){
        x=first->data;
        p=first;
        first=first->next;
        free(p);
    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<pos-1&&p;i++){
          q=p;
          p=p->next;
          
        }
        if(p!=NULL){
        q->next=p->next;
          x=p->data;
          free(p);
        }
    }
}

void Display(nd*p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    delete(2);
    
    Display(first);
    

    return 0;
}
