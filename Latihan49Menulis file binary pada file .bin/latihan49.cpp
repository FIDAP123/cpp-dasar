// CPP program to demonstrate working of
// reinterpret_cast
#include <iostream>
using namespace std;

int main()
{
	int* p = new int(65);
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	cout << p << endl;
	cout << ch << endl;

	cout << "nyoba" << endl;
    int nomor = 127;
    char* cp = reinterpret_cast<char*>(&nomor);
    cout << cp,sizeof(nomor) ;
    cout << *cp,sizeof(nomor);
    return 0;
}
