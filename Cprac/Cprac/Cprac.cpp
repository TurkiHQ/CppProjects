#include <iostream>
using namespace std;
class Array {
private:
int size;
int length;
int* items;
public:
	Array(int arrsize)
	{
		size = arrsize;
		length = 0;
		items = new int[arrsize];
	}
	void fill() {
		int no_of_itmes;
		cout << "how many itmes you want to fill\n";
		
		cin >> no_of_itmes;
		if (no_of_itmes > size) {
			cout << "exceeded the array size";
			return;
		}
		else 
		{ for (int i = 0; i < no_of_itmes; i++) {
				cout << "enter item number" << i << endl;
				cin >> items[i];
				length++;
			}
		}
	}
	void display() {
		cout << "array items :";
		for (int i = 0; i < length; i++) {
			cout << items[i] << "\t";
		}
		cout << endl;
	}
	int getsize() {
		return size;
	}
	int getlength() {
		return length;
	}
};
int main()
{
   /*cout << "Hello array \n";
   int arraysize;
   cout << "enter the array size";
   cin >> arraysize;
   Array myarray(arraysize);
   myarray.fill();
   cout << "array size = " << myarray.getsize() << " array length = " << myarray.getlength()<<"\n";
   myarray.display();*/
	int array[5] = { 1,7,9,4,5 };
	for (int i = 0; i < 4; i++) { cout << array[i]<<""; }
	return 0;

}