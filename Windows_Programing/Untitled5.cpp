#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "»ç°ú"; 
	string s2;
	
	s2 = s1 + " " + to_string(10) + "°³";
	cout << s2 <<end; 

	return 0;
}
