/* to print the pattern
9876543210
987654321
98765432
9876543
987654
98765
9876
987
98
9 
*/
#include <iostream>
#include <stdlib.h>
void main()

{

int i, j;
	for ( i = 1 ; i < 11 ; i++ )
	{
		cout << "\n" << i;

		for ( j = i + 1 ; j < 11 ; j++ )	

		cout << j;
	}
	cout << "\n";

	return 0;
}
 