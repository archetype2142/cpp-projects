#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float stack[40];
int top=0;
float e;

void push()
{
 if(top==39)
 {
  cout<<"Stack overflow"<<endl<<"Delete some elements"<<endl;
  return ;
 }
 cout<<"Enter element(Maximum number of elements is 40)"<<endl;
 cin>>e;
 stack[top]=e;
 top++;
}

void pop()
{
 if(top<=0)
 {
  cout<<"Stack underflow"<<endl<<"Add some elements"<<endl;
  return ;
 }
 top--;
}

void display()
{
 if(top<=0)
 {
  cout<<"Stack underflow"<<endl<<"Add some elements"<<endl;
  return ;
 }
 for(int i=top-1;i>=0;i--)
  cout<<stack[i]<<" ";
 cout<<endl;
}


int main()
{
 int choice;
 char ans;
 do
 {
  cout<<"1.Push"<<endl;
  cout<<"2.Pop"<<endl;
  cout<<"3.Display"<<endl;
  cout<<"4.Exit"<<endl;
  cin>>choice;
  if(choice==4)
   exit(0);
  else if(choice==1)
   push();
  else if(choice==2)
   pop();
  else if(choice==3)
   display();
  else
   cout<<"Enter valid choice"<<endl;
  cout<<"Continue?"<<endl;
  cin>>ans;
 }while(ans=='y');
 return 0;
}
