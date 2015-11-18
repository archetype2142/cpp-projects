#include <iostream>
#include <stdlib.h>

int main(void)

{
    for ( int i = 1; i <= 6; i++ )

    {
        for( int k = 1; k < i; k++ )

        {
        	std::cout << "*";
        }
   
        std::cout << std::endl;
    }

return 0;	
}
