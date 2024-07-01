// CPP_MangArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swapNums(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;;
}

int main()
{
    cout << "Hello World!\n";
    int A[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap phan tu thu " << i << ":";
		cin >> A[i];
	}
	for (int x : A)
		cout << x << " ";

	int vitrimax = 0;
	int somax = 0;
	for (int i = 0; i < 5; i++)
	{
		if (somax < A[i])
		{
			somax = A[i];
			vitrimax = i;
		}
	}
	cout << "\nSo max: " << somax;
	cout << "\nSau khi swap\n";
	swapNums(A[0], A[vitrimax]);
	for (int i : A)
	{
		cout << i << " ";
	}
}	
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
