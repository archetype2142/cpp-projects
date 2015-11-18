#include <iostream>
#include <stdlib.h>
int main()
{
	void convert(float &, char &, char);
	float Distance;
	char choice, type = 'F';
	std::cout << "\n Enter Distance in feet: ";
	std::cin >> Distance;
	std::cout <<"\n You want Distance in feets or inches? (F/I): ";
	std::cin >> choice;
	switch(choice)
	{
		case 'F' : convert(Distance, type, 'F') ;
	     	break ;

		case 'I' : convert(Distance, type, 'I') ;
		    break ;

	    default : std::cout << "\n wrong choice.";

	        exit(0) ;
	}
    std::cout << "\n Distance = " << Distance << " " << type << "\n" ;
    return 0 ;
}
void convert(float &d, char&t, char ch)
{
	switch (ch)
	{
		case 'F' : if(t == 'I') 
		{
			d = d/12 ;
			t = 'F' ;
		}
		break ;

	    case 'I' : if(t == 'F') 
	    {
	    	d = d * 12 ;
	    	t = 'I' ;
	    }
	    break;	
	}
	return ;
}
