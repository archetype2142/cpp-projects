#include <iostream>
using namespace std;

int main()
{
        int r, c, i, j, matrix[20][20];
        cout << "Enter the matrix number of rows: ";
        cin >> r;

        cout << "Enter the number of columns: ";
        cin >> c;
        cout << endl;

        for(i = 0; i < r; i++)
        {
                for(j = 0; j < c; j++)
                {
                        cout << "Enter values for" << i << ", " << j << ": ";
                        cin >> matrix[i][j];
                }
        }

        for(i = 0; i < r; i++)
        {
                for(j = 0; j < c; j++)
                {
                        if(i >= j)
                        {
                                cout << matrix[i][j];
                        }
                        else
                        {
                                cout << " ";
                        }
                }
        }
        return 0;
}
