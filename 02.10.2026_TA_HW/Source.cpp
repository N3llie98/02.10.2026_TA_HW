#include <iostream>
using namespace std;
#include "Bank.h"

void printArr(Bank arr[], int N)
{
	for (int i = 0; i < N; i++) {
		arr[i].print();
	}
}

// 1
Bank* findByName(Bank arr[], int N, string name)
{
	for (int i = 0; i < N; i++) {
		if (arr[i].getName() == name) {
			return &(arr[i]);
		}
	}
	return nullptr;
}
// 2
Bank* makeArr(int n)
{
	Bank* arr = new Bank[n];
	string tempName;
	double tempMoney;
	for (int i = 0; i < n; i++) {
		cout << "- Bank #" << i + 1
			<< "\nName: ";
		cin >> tempName;
		arr[i].setName(tempName);

		cout << "Money: ";
		cin >> tempMoney;
		arr[i].setMoney(tempMoney);
		cout << endl;
	}
	return arr;
}

int main()
{
	cout << "Bank Application!\n";
	const unsigned int N = 4;
	Bank bank[N] = {
		{"Private Bank", 3e5},
		{"Raifaisen Bank", 2.5e4},
		{"MonoBank", 4.2e3},
		{"VST", 2.6e2}
	};

	// 1
	Bank* ptr = findByName(bank, N, "VST");
	cout << (*ptr).getName() << endl << endl;

	// 2
	int n;
	cout << "Enter number of banks: ";
	cin >> n;
	Bank* arr = makeArr(n);
	cout << "\n--- PRINT THE NEW ARR\n";
	printArr(arr, n);
}