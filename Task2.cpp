#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;
	cout << "Name is : ";
	cin >> name;
	cout << "Age is : ";
	cin >> age;
	ofstream file("file.txt");
	if (file) {
		file << name<<endl;
		file << age;
	}
	else {
		cout << "File not created." << endl;
	}
	file.close();
	ifstream myfile("file.txt");
	if (myfile) {
		cout << "Reading from file : " << endl;
		while (getline(myfile, name)) {
			cout << name << endl;
		}
	}
	else { cout << "Cannot read"; }
	file.close();
}