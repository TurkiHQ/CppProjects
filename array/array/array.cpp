#include <iostream>
using namespace std;

int const SIZE = 10;

int A[SIZE], n = 0;


bool isfull() {if (n == SIZE) return true; else return false;}

bool isempty() { if (n == 0) return true; else return false; }

int find_location_insert(int item) {
	
	int lb = 0, ub = n - 1;
	
	for (int i = lb; i <= ub; i++){if (A[i] > item)
			return i;
	}
		}

void insert(int k, int item) {
	/*item is the data we want to insert
	k is the positon we want to insert the item into*/

	int j = n - 1; //here we initialize the counter j
	
	while (j >= k) { A[j + 1]; j--; }
	A[k] = item;
	n++;
}
void travers() {
	int lb = 0, ub = n - 1;
	for (int i = lb; i <= ub; i++)
		cout <<A[i]<< "	";
}
int find_location_delete(int item) {
	int lb = 0, ub = n - 1;
	for (int i = lb; i <= ub; i++) {
		if (A[i] = item)
		return item;}
	return item;
}

int Delete(int k, int item) {
	item = A[k];
	for (int i = k; i <= k; i++)

		A[i] = A[i = 1];
	n--;
	return item;
}

int main()
{
	int ch, ITEM, K;

	while (1)
	{
		cout << "\n\n\n\n\n";
		cout << "\t1- insert value\n";
		cout << "\t2- delete value\n";
		cout << "\t3- traverse array\n";
		cout << "\t4- exit\n\n";
		cout << "\n\t\tyour choice :";
		cin >> ch;

		switch (ch)
		{
		case 1: if (isfull()) { cout << "\n\nArray is full\n\n"; break; }
			  cout << "\n\n For Insertion, Put a value : ";
			  cin >> ITEM;
			  K = find_location_insert(ITEM);
			  insert(K, ITEM);
			  break;
		case 2: if (isempty()) { cout << "\n\nArray is Empty\n\n"; break; }
			  cout << "\n\n For Deletion, Put a value : ";
			  cin >> ITEM;
			  K = find_location_delete(ITEM);
			  if (K == -1) cout << "\n\n" << ITEM << " Not Found in array \n";
			  else cout << "\n\n " << Delete(K, ITEM) << " deleted from array\n ";
			  break;
		case 3: if (isempty()) { cout << "\n\nArray is Empty\n\n"; break; }
			  travers();
			  break;
		case 4: exit(0);
		default: cout << "\n\nInvalid choice\n";
		}// end of switch
	}// end of while loop
	return 0;
}// end of main( )

