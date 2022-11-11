#include<iostream>
using namespace std;

    struct node{     //first we have to create structure to make link list
        int info;
         node*next;
    };
    main(){                
    //declaring ist node
    node  *ptr , *header;
    ptr=new(node);
    ptr->info=50;
    ptr->next=NULL;
    header=ptr;
    cout<<ptr->info
    

    // //declaring 2nd node
    // node*header, *ptr1
    // ptr=new(node);
    // ptr->info=100;
    // ptr->next=ptr1;
    // ptr1->next=NULL;
    // cout<<ptr1->info;
    }

    
