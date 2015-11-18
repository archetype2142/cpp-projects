/* pattern 
12345
1234
123
12
1
*/
#include <iostream>
#include <stdlib.h>

int main()

{
    int i,j;
  
    for(i = 5; i >= 0; i--)
    {
        for(j = 1; j <= i; j++)
        {
           std::cout << i << " ";
        }
        std::cout<<std::endl;
    }
    return 0;
}