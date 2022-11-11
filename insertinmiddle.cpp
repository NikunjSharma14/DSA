//insert a element in a array

#include <iostream>
using namespace std;

void insertX(int n, int arr[],int x, int pos)
{
	int i;
    n++;
    for (i = n; i >= pos; i--)
		arr[i] = arr[i - 1];
        arr[pos - 1] = x;


}


int main()
{
	int arr[100] = { 0 };
	int i, x, pos, n = 6;
	for (i = 0; i < 6; i++)
		arr[i] = i + 1;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	x = 300;
	pos = 3;
	insertX(n, arr, x, pos);
	for (i = 0; i < n + 1; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}


