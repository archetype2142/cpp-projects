#include <iostream>

using namespace std;

int main ()
{
 int ctype ;
 float amt ;
 char code ;
 float discamt;
 cout << "Enter Product Code (A/B) : " << endl;
 cin >> code;
 if(code == 'A')
 {
    cout << "Enter Customer Type (1/2) : " << endl;
    cin >> ctype;
	    if(ctype == 1)
		{ 
		  	cout << "Enter Amount : "<< endl;
		    cin >> amt;
			if(amt <= 1500)
			{ 
				cout << "You get a discount of 4.8% ! "<< endl;
				discamt = amt-(amt * 0.048); 
				cout << "Discounted amount is : "<< discamt << endl;
			}
			else
			{
			    cout<<"You get a discount of 8% ! "<< endl;
			    discamt=amt-(amt*0.08);
			    cout<<"Discounted amount is : "<< discamt<< endl;
			}
		}
		  else if(ctype==2)
		  {
		  	cout << "Enter Amount : " << endl;
		    cin >> amt;
			if(amt<=1500)
			{
				cout<<"You get a discount of 8.9% ! "<< endl;
			    discamt=amt-(amt*0.089);
			    cout<<"Discounted amount is : " << discamt << endl;
			}
			else
			{
	    	    cout<<"You get a discount of 10% ! " << endl;
			    discamt=amt-(amt*0.01);
			    cout<<"Discounted amount is : " << discamt << endl;
       	    }
		  }
		 else
		  {cout<<"Wrong Customer Type !!"<<endl;
		  }
}
else if(code=='B')
     {cout<<"Enter amount : "<<endl;
      cin>>amt;
      cout<<"You get a discount of 3% "<<endl;
      discamt=amt-(amt*0.03);
      cout<<"Discounted amount is :"<<discamt<<endl;
     }
else
     {cout<<"Wrong Product Code !"<<endl;
     }

return 0;
}