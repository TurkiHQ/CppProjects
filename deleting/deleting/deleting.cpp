#include<iostream>
using namespace std;
int main()
{
    int array[7], total = 7, i, element, j, found = 0;
    cout << "enter the numbers you want to insert to the array: ";
    for (i = 0; i < total; i++)
        cin >> array[i];
    cout << "\nEnter number you want to Delete: ";
    cin >> element;
    for (i = 0; i < total; i++)
    {
        if (array[i] == element)
        {
            for (j = i; j < (total - 1); j++)
                array[j] = array[j + 1];
            found++;
            i--;
            total--;
        }
    }
    if (found == 0)
        cout << "\n invalid input";
    else
        cout << "\n the number you select have been removed from the array";
    cout << endl;
    cout << "the arrau element after the deleting are :";

    for (int i = element; i >= 0; i--) {
        cout << array[i];
    }
    return 0;
}