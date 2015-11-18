#include <iostream>

using namespace std;

struct Distance{
    int feet;
    float inch;
}d1,d2,sum;

int main(){
    cout << "Enter information for 1st distance" << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;
    cout << endl << "Enter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

/* If inch is greater than 12, changing it to feet.*/
    do{
        sum.inch=sum.inch-12.0;
        ++sum.feet;
    }while(sum.inch>12.0);

    cout << endl << "Sum of distances= " << sum.feet << " feet  " << sum.inch << " inches" << endl;
    return 0;
}