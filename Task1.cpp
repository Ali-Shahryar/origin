#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	int sum=0,arr[6] = { 1,2,3,4,5,6 };
	ofstream file("file.txt");
	if (file) {
		for (int i = 0; i < 6; i++) {
			file << arr[i]<<" ";
		}
	}
	else {
		cout << "File not created." << endl;
	}
	file.close();
	ifstream myfile("file.txt");
	if (myfile) {
		for (int i = 0; i < 6; i++) {
			cout << arr[i] << " ";
			sum = sum + arr[i];
		}
		cout << "sum is = " << sum;
	}
	else { cout << "cannot read"; }
	file.close();
	ofstream tfile("file.txt", ios::app);
	if (tfile) {
		tfile << "sum is = " << sum;
	}
}