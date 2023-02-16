#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};;
struct node* top=0;
struct node*newnode;
struct node* head=0;


void push(int x){
    if(head=0){
        newnode=head=top;
        newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    }
    else{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
}





void display(){
    struct node* temp;
    temp=top;
    if(top==0){
        cout<<"empty"<<endl;
    }
    else{

        while(temp!=0){
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
}

}

int main() {
push(1);
push(2);
push(3);
push(4);
push(5);
display();




 return 0;
}
