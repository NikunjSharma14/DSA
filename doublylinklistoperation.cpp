//applying all operation of double link list
#include<iostream>
using namespace std;
struct node           //creating structure
{
    int info;
    node*next;
    node*prev;
    
};
int main(){                         
    char ch;
    node*header,*tail,*ptr;      //creating the node
    header=NULL;
    tail=NULL;
    ptr=new node;
    ptr->info=10;
    header=ptr;
    tail=ptr;
    ptr->next=NULL;
    ptr->prev=NULL;

    cout<<"do you want to insert new node";    //applying 
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




