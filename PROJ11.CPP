#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void vowelwords()
{
 ifstream fin("text2.txt");
 ofstream fout("text3.txt");
 char line[15];
 while(!fin.eof())
 {
  fin>>line;
  if((line[0]=='A'|| line[0]=='E' || line[0]=='I' || line[0]=='O' || line[0]=='U')==0)
   fout<<line<<endl;
 }
 fin.close();
 fout.close();
}

void main()
{
 vowelwords();
}



