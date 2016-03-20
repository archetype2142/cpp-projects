#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>


void sum_m(int a[][40],int b[][40],int &r1,int &c1,int c[][40])
{
 for(int i=0;i<r1;i++)
 {
  for(int j=0;j<c1;j++)
   c[i][j]=a[i][j]+b[i][j];
 }
}

void minus_m(int a[][40],int b[][40],int &r1,int &c1,int c[][40])
{
 for(int i=0;i<r1;i++)
 {
  for(int j=0;j<c1;j++)
   c[i][j]=a[i][j]-b[i][j];
 }
}


void take_arr(int ar[][40],int &r, int &c)
{
 cout<<"enter matrix elements"<<endl;
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
   cout<<"enter element"<<endl;
   cin>>ar[i][j];
  }
 }
}

void show_arr(int ar[][40],int &r,int &c)
{
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
   cout<<ar[i][j]<<" ";
  cout<<endl;
 }
}

void productmatrix(int a[][40],int b[][40],int c[][40],int m,int n,int p,int q)
{
 int i=0,j=0,k=0;
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
  {
   c[i][j]=0;
   for(k=0;k<n;k++)
    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
  }
 }
}


void main()
{
 int choice,r1,c1,r2,c2,a[40][40],b[40][40],c[40][40];
 char ans;
 do
 {
  again:
  clrscr();
  cout<<"1.matrices sum"<<endl;
  cout<<"2.subtraction of matrices"<<endl;
  cout<<"3.product of matrices"<<endl;
  cout<<"4.exit"<<endl;
  cin>>choice;
  if(choice==4)
   exit(0);
  else if(choice==1)
  {
   cout<<"enter the dimension of equal matrices"<<endl;
   cin>>r1>>c1;
   take_arr(a,r1,c1);
   take_arr(b,r1,c1);
   sum_m(a,b,r1,c1,c);
   show_arr(a,r1,c1);
   cout<<endl<<"\t+"<<endl;
   show_arr(b,r1,c1);
   cout<<endl<<"\t="<<endl;
   show_arr(c,r1,c1);
  }
  else if(choice==2)
  {
   cout<<"enter the dimension of equal matrices"<<endl;
   cin>>r1>>c1;
   take_arr(a,r1,c1);
   take_arr(b,r1,c1);
   minus_m(a,b,r1,c1,c);
   show_arr(a,r1,c1);
   cout<<endl<<"\t-"<<endl;
   show_arr(b,r1,c1);
   cout<<endl<<"\t="<<endl;
   show_arr(c,r1,c1);
  }
  else if(choice==3)
  {
   cout<<"enter dimensions of first matrix"<<endl;
   cin>>r1>>c1;
   cout<<"enter dimensions of second matrix"<<endl;
   cin>>r2>>c2;
   if(c1!=r2)
   {
    cout<<"oops! can't multiply"<<endl;
    getch();
    goto again;
   }
   else
   {
    take_arr(a,r1,c1);
    take_arr(b,r2,c2);
    productmatrix(a,b,c,r1,c1,r2,c2);
    show_arr(a,r1,c1);
    cout<<endl<<"\t"<<"t"<<"x"<<endl;
    show_arr(b,r2,c2);
    cout<<endl<<"\t"<<"t"<<"="<<endl;
    show_arr(c,r1,c2);
   }
  }
  else
   cout<<"enter valid choice"<<endl;
  cout<<"continue?"<<endl;
 cin>>ans;
 }while(ans=='y');
}


