#include<iostream>
using namespace std;

    struct node{     //first we have to create structure to make link list
        int info;
        struct node*next;
    };


    int main()
    {                
    
    //declaring ist node
    char ch;
    node  *ptr , *header;
    ptr=new(node);
    ptr->info=50;
    ptr->next=NULL;
    header=ptr;

    

    cout<<"do you want to insert new node";
    cin>>ch;


     
     while (ch=='y')
    {
        ptr=new(node);
        cout<<"enter the element";
        cin>>ptr->info;
        ptr->next=header;
        header=ptr;
        cout<<"do you wish to input one more";
        cin>>ch;
    }
    }