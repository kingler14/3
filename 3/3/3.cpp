#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Name: Vladlen, Nick" << endl;

	cout << "Input name " << endl;

	cin >> name;

	if (name == "Vladlen") cout << "Hello Vladlen" << endl;
	else if (name == "Nick") cout << "Hello Nick" << endl;
	else cout << "Hello User" << endl;

	system("pause");
	return 0;

}