//convert entered amount to currency notes of denominations of 10, 20, 50, 100 and 1000

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int amount, no_hun, no_fifty, no_ten, no_five, no_two, no_one, total_notes;
    
    //takes in the amount
    cout << "Enter the amount: ";
    cin >> amount;
    
    //computes each currency bill
    no_hun = amount / 100;
    amount = amount % 100;
    no_fifty = amount / 50;
    amount = amount % 50;
    no_ten = amount / 10;
    amount = amount % 10;
    no_five=amount / 5;
    amount=amount % 5;
    no_two=amount / 2;
    amount=amount % 2;
    no_one=amount / 1;
    amount=amount % 1;
    total_notes = no_hun + no_fifty + no_ten + no_five + no_two + no_one;
    
    //prints them
    cout << "Smallest number of notes = " << total_notes << endl;

    return 0;

    }