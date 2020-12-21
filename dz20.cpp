#include <iostream>
using namespace std;

class Dymanic_Array
{
public:
	int *createArray(int n)
	{
		int* array = new int [n];
		for (int ind = 0; ind < n; ++ind)
		{
			cout << "Input array[" << ind << "] = ";
			int elem = 0;
			cin >> elem;
			array[ind] = elem;
		}
		return array;
	}
	void deleteArray(int* array)
	{
		delete[] array;
	}
	int getElement(int* array, int ind)
	{
		return array[ind];
	}
	void changeElement(int* array, int ind, int value)
	{
		array[ind] = value;
	}
};

int main()
{
	Dymanic_Array array1, array2;

	cout << "Input is correct if m > n" << endl;

	cout << "Input m: ";
	int m = 0;
	cin >> m;
	int *ar1 = array1.createArray(m);


	cout << "Input n: ";
	int n = 0;
	cin >> n;
	int *ar2 = array2.createArray(n);


	int scalMul = 0;
	for (int ind = 0; ind < n; ++ind)
	{
		scalMul += array1.getElement(ar1, m - n + ind) * array2.getElement(ar2, ind);
	}

	cout << "Scalar multiplication: " << scalMul << endl;

	array1.deleteArray(ar1);
	array2.deleteArray(ar2);

	return 0;
}