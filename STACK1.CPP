#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct student
{
 char name[60];
 float marks;
 student *next;
}*front,*ptr,*temp,*p;

int stackheight=0;

void push()
{
 if(stackheight==0)
 {
  student *ptr=new student;
  front=ptr;
  cout<<"Enter name"<<endl;
  cin >> front->name;
  cout<<"Enter marks"<<endl;
  cin>>front->marks;
  stackheight++;
 }
 else
 {
  ptr=new student;
  ptr->next=front;
  front=ptr;
  cout<<"Enter name"<<endl;
  cin >> front->name;
  cout<<"Enter marks"<<endl;
  cin>>front->marks;
  stackheight++;
 }
}

void display()
{
 if(stackheight==0)
 {
  cout<<"Stack empty"<<endl;
  return ;
 }
 p=front;
 cout<<"Displaying from top of stack"<<endl<<endl;
 while(p!=NULL)
 {
  cout<<"Name  :"<<p->name<<endl;
  cout<<"Marks :"<<p->marks<<endl;
  cout<<endl;
  p=p->next;
 }
}

void pop()
{
 if(stackheight<1)
 {
  cout<<"Underflow"<<endl;
  return ;
 }
 temp=front;
 cout<<"Name  :"<<front->name<<endl;
 cout<<"Marks :"<<front->marks<<endl;
 cout<<"This node was deleted"<<endl;
 cout<<endl;
 front=front->next;
 delete temp;
 stackheight--;
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
   cout<<"enter valid choice"<<endl;
  cout<<endl<<"continue?"<<endl;
  cin>>ans;
 }while(ans=='y');
return 0;
}