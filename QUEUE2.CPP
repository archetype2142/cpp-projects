#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float queue[40],e;

int front = 0,rear = 0;

void push()
{
 if(rear == 39)
 {
  cout << "Overflow" << endl << "Press anything to exit";
  exit(0);
 }
 cout << "Enter element" << endl;
 cin >> e;
 queue[rear++] = e;
}

void pop()
{
 if(front == 39)
 {
  cout << "Queue empty" << endl << "Press any key to exit" << endl;
  exit(0);
 }
 cout<<"Element from front deleted"<<endl;
 front++;
}

void display()
{
 if(front==39)
 {
  cout<<"Queue empty"<<endl<<"Press any key to exit"<<endl;
  exit(0);
  
 }
 for(int i=front;i<=rear;i++)
  cout<<queue[i]<<" ";
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
  if(choice == 4)
   break;
  else if(choice==1)
   push();
  else if(choice==2)
   pop();
  else if(choice==3)
   display();
  else
   cout << "enter valid choice"<< endl;
  cout << endl << "continue?" << endl;
  cin >> ans;
 }while(ans=='y');

 return 0;
}
