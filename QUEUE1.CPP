#include <iostream>
#include <stdio.h>

using namespace std;

struct student
{
 char name[40];
 float marks;
 student *next;
}*front,*rear,*temp,*ptr,*ptr2,*p;

int length=0;

void push()
{
 if(length==0)
 {
  ptr=new student;
  ptr->next=NULL;
  front=rear=ptr;
  cout << "Enter name: ";
  cin >> ptr -> name;
  cout<<"Enter marks: ";
  cin>>ptr->marks;
  length++;
 }
 else
 {
  ptr = new student;
  rear -> next = ptr;
  rear = ptr;
  rear -> next = NULL;
  cout << "Enter name " << endl;
  cin >> ptr -> name;
  cout << "Enter marks " << endl;
  cin >> ptr -> marks;
  length++;
  }
}

void pop()
{
 if(length == 0)
 {
  cout << "Queue already empty" << endl<< "Add more elements" << endl;
  return ;
 }
 else
 {
  temp = front;
  cout<<"Name  :"<<temp->name<<endl;
  cout<<"Marks :"<<temp->marks<<endl;
  length--;
  front = front->next;
  delete temp;
  cout<<endl<<"The above node is deleted"<<endl;
 }
}

void display()
{
 if(length==0)
 {
  cout << "Empty queue cannot be displayed " << endl << "Add some elements " << endl;
  return ;
 }
 p = front;
 cout << "Displaying from front to rear" << endl;
 while(p != NULL)
 {
  cout <<"Name  :"<< p-> name << endl;
  cout <<"Marks :"<< p-> marks << endl;
  cout << endl;
  p = p -> next;
 }
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
  cout << "choice: ";
  cin >> choice;
  if(choice==4)
   break;
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
