//ques 15

#include <iostream>
#include <stdio.h>

using namespace std;

int main ()

{

  char str[80] ;
  int i , count=1;
  int vowel=0;
  
  cout<<"Enter Any String :"<<endl;
  
  cin.getline(str, 80);
  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i]==' ')
    {
      count++;
      while(str[i]==' ')
      i++;
    }
    if(str[i]=='\0')
    i--;
  }
  for(i=0;str[i]!='\0';i++)
  {
    switch (str[i])
    { case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    vowel++;
  }
 }
   cout<<"Number of vowels in the string : "<<vowel<<endl;
   cout<<"Number of words in the string :"<<count<<endl;
   
return 0;

}