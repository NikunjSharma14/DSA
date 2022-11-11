#include<iostream>
using namespace std;
int stack[1000];//declare a stack of size 1000
static int top = -1;//set the value of top to -1 for empty stack
 //push method to push the characters of expression
void push(int x)
{
 stack[++top] = x;
}
 //pop method will delete the top element of stack
int pop()
{
 return stack[top--];
}
//method to check the validity of expression
int isValid(char str[])
 {
int i,digit=0,oper=0;
for(i=0;i<str[i]!='\0';i++)
 {
 if(str[i]>='0' && str[i]<='9')
 digit++; //count number of digits
 else
 oper++;//count number of operators
 }
 if(digit-oper==1) //for a valid expression number of digit - number of operator must be 1
 return 1;//return 1 for valid expressison
 else
 return 0; //return 0 for invalid expression
 }
//main code
int main()
{
 char postfix[1000];   //declare the postfix as string to store the expression
 int a,b,c,val;
 //read the postfix expression
 cout<<"Enter the expression :";
 cin>>postfix;
 if(!isValid(postfix))
 {
 cout<<endl<<"Invalid expression";
 exit(0);
 }
 
 //loop will check each character of the expression
 for(int i=0;postfix[i]!='\0';i++)
 {
 
 if(postfix[i]>='0' && postfix[i]<='9')//check for digit
 {
 val = postfix[i] - 48;//convert to numeric format
 push(val);//push it to stack
 }
 else
 {
 a = pop(); //pop an element
 b = pop(); //again pop another element for operation
 switch(postfix[i]) //switch case is use to check the type of operator
 {
 case '+': //condition for +
 {
 c = a + b; //add two numbers
 break;
 }
 case '-': //condition for -
 {
 c = b - a; //subtract 
 break;
 }
 
 case '*':
 {
 c = a * b;//multiply
 break;
 }
 case '/': 
 {
 c = b / a;//divide
 break;
 }
 }
 push(c);//push the result into stack
 }
 
 }
 //prin tthe result
 cout<<"\nThe Value of expression "<<postfix<<" is "<<pop();
 return 0;
}
