#include<iostream>
#include<cstring>
using namespace std;
char str[100]; //declare a string variable to store the operators as stack
int top=-1; //initially set -1 to top as empty stack
//push method
void push(char s)
{
 top=top+1; //increase the value of top
 str[top]=s;//assign the operator into stack
}
//pop method
char pop()
{
char i;
 if(top==-1) //condition for empty stack
 {
 cout<<endl<<"Stack is empty";
 return 0;
 }
 else
 {
 i=str[top]; //store the popped operator
 top=top-1;
 }
 return i;//return the popped operator
}
//method precedence 
int preced(char c)
{
if(c=='/'||c=='*')
 return 3; //return 3 for * and /
if(c=='+'||c=='-')
return 2; //return 2 for + and -
return 1;//return 1 for other operator if any
}
//method to convert the infix to postfix
void infx2pofx(char in[])
 {
 int l;
 static int i=0,px=0;
 char s,t;
 char pofx[80];
 l=strlen(in);//find the length of infix expression
 while(i<l)
 {
 s=in[i];//extract one by one characer from infix
switch(s) //check for operator precedence
 {
 case '(' : push(s);break;
 case ')' : 
 t=pop(); //pop from the stack when close parenthesis is found
 while(t != '(')
 {
 pofx[px]=t;
 px=px+1;
 t=pop();
 }
 break;
 case '+' :
 case '-' :
 case '*':
 case '/' :
 while(preced(str[top])>=preced(s))
 {
 t=pop();
 pofx[px]=t;
 px++;
 }
 push(s);
 break;
 default : pofx[px++]=s;
 break;
 }
 i=i+1;
 }
 
while(top>-1)
 {
 t=pop();
 pofx[px++]=t;
 }
 pofx[px++]='\0';
 puts(pofx);
 return;
 }
//main code
int main(void)
 {
 char ifx[50];
 cout<<endl<<"Enter the infix expression";
 //read the infix expression
 gets(ifx);
 infx2pofx(ifx); //call to the method
 return 0;
 }
