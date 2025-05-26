#include <iostream>
int main () {
	using namespace std;
	int sum = 0, c, d;
	for (c = 0; c <10; c++) {
		cout << "Enter the number" << endl;
		cin >> d;
		sum = sum + d;
		
	}
	cout << "Sum is" << sum <<endl;
	return 0;
}
