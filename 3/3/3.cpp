#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Name: Vladlen, Rob" << endl;

	cout << "Input name " << endl;

	cin >> name;

	if (name == "Vladlen") cout << "Hello Vladlen" << endl;
	else if (name == "rob") cout << "Hello rob" << endl;
	else if (name == "Nick") cout << "Hello Nick" << endl;
	else cout << "Hello User" << endl;

	system("pause");
	return 0;

}