// reverse string

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char string[89];
    cout << "enter\n";
    cin.getline(string, 89);
    int length_of_string = strlen(string);
    strcat(string, " ");

    for(int i = 0; i <= length_of_string; i++)
    {
        if(string[i] == ' ')
        {
            for (int k = i - 1; (k != -1) && (string[k] != ' '); k--)
                cout << string[k];
            cout << " ";
        }
    }
    return 0;
}

