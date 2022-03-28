#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	string s2;
	string s3;
	string s4 = s1 + s2 + s3;

	cout << "주어: ";
	cin >> s1;
	cout << "동사: ";
	cin >> s2;
	cout << "목적어: ";
	cin >> s3;
	cout << s4 << s1 + " " + s2 + " a " + s3;
	return 0;

}


