#include<iostream.h>
#include<conio.h>
#include<process.h>

int c_q[40],res,front=-1,rear=-1;

void disp()
{
 cout<<"Note :Free space is '-',rear '<<<',front '>>>'"<<endl;
 int i=0;
 if(front==-1)
  return ;
 if(rear >=front)
 {
  for(i=0;i<front;i++)
   cout<<"-";
  cout<<">>>"<<endl;
  for(i=front;i<rear;i++)
   cout<<c_q[i]<<"<-";
  cout<<c_q[rear]<<"<<<"<<endl;
 }
 else
 {
  for(i=0;i<rear;i++)
   cout<<c_q[i]<<"<-";
  cout<<c_q[rear]<<"<<<";
  for(;i<front;i++)
   cout<<"-";
  cout<<">>>";
  for(i=front;i<40;i++)
   cout<<c_q[i]<<"<-";
  cout<<"\t";
 }
}



void push()
{
 int item;
 cout<<"Enter item"<<endl;
 cin>>item;
 if((front==0 && rear==39) || (front==rear+1))
 {
  cout<<"Overflow"<<endl;
  return ;
 }
 else if(rear==-1)
  front=rear=0;
 else if(rear==39)
  rear=0;
 else
  rear++;
 c_q[rear]=item;
 cout<<endl<<"Now queue is"<<endl;
 disp();
}

void pop()
{
 int ret;
 ret=c_q[front];
 if(front==-1)
 {
  cout<<"Can't be done"<<endl;
  return ;
 }
 if(front==rear)
  front=rear=-1;
 else if(front==39)
  front=0;
 else
  front++;
 cout<<"Element deleted is"<<endl<<ret<<endl<<endl;
 cout<<"Now the queue is"<<endl;
 disp();
}

void main()
{
 int choice;
 char ans;
 do
 {
  clrscr();
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
   disp();
  else
   cout<<"enter valid choice"<<endl;
  cout<<endl<<"continue?"<<endl;
  cin>>ans;
 }while(ans=='y');
}