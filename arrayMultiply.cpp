#include <iostream>
using namespace std;

int main()
{
	int x[10][10], y[10][10], z[10][10];
	int ro1=0, ro2=0, co1=0, co2=0;

	cout << "enter the number of rows and columns for the first array";
	cin >> ro1;
	cin >> co1;
	cout << "enter the number of rows and columns for the second array";
	cin >> ro2;
	cin >> co2;

    if (co1 != ro2) {
        cout << "the number of column in the first array is not equal to second array rows\n";
        return 0;
    }
	

    cout << endl << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < ro1; i++)
        for (int j = 0; j < co1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> x[i][j];
        }

    cout << endl << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < ro2; i++)
        for (int j = 0; j < co2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> y[i][j];
        }
    for (int i = 0; i < ro1; i++)
        for(int j = 0; j < co2; j++)
        {
            z[i][j]=0;
        }

   
    for (int i = 0; i < ro1; i++)
        for(int j = 0; j < co2; j++)
            for(int k = 0; k < co1; ++k)
            {
                z[i][j] += x[i][k] * y[k][j];
            }

   
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < ro1; i++)
    for(int j = 0; j < co2; j++)
    {
        cout << " " << z[i][j];
        if(j == co2-1)
            cout << endl;
    }}

