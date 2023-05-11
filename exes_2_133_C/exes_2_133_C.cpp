#include <iostream>
using namespace std;

int Daffa[29];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan jumlah data pada Array : ";
		cin >> n;

		if (n <= 29)
		{
			break;

		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 29 elemen. \n";
		}
	}
	cout << endl;
	cout << "============================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "============================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Daffa[i];
	}
};

void insertionsort()
{
	int temp;
	int j; 

	for (int i = 1; i < n; i++)
	{

	}
}