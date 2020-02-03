#include <iostream>
using namespace std;

// A Program That Getting The Summation Of Evens & Odds	Numbers On Array
int main() {
	const int s = 5;
	int arr[s] = {100, 200, 200, 501, 101};
	int sumE = 0, sumO = 0;
	for (int i = 0; i <= s - 1; i++){
		if (arr[i] % 2 == 0){
			sumE += arr[i];
		}
		else if (!(arr[i] % 2 == 0)){
			sumO += arr[i];
		}
	};
	cout << "Sum of Evens Numbers" << sumE << endl;
	cout << "Sum of Odds Numbers" << sumO << endl;
	system("pause");
	return 0;


};