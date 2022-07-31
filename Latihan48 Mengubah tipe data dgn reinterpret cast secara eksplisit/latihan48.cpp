/*
	Latihan 48 Casting in C static cast :
	1. 	Static_cast adalah salah satu dari 4 jenis casting di C dengan menerjemahkan tipe data secara implicit atau 
		membiarkan compiler bekerja dan lebih aman dibanding reinterprate_cast
*/
#include <iostream>
using namespace std;

int main()
{
	// int* p = new int(65);
	int p = 28/10;
	// int* pa ;
	float ch;
	// cout << "pa = " << pa << endl;
	// cout << "&pa = " << &pa << endl;
	cout << "&ch = " << &ch << endl;
	cout << "ch = " << ch << endl;
	// cout << "*ch = " << *ch << endl;
	// cout << "*p = " << &p << endl;
	// cout << "*ch = " << &ch << endl;
	// cout << "p = " << p << endl;
	cout << "ch = " << ch << endl;

	cout << "selesai" << endl;
    // int nomor = 127;
    // char* cp = reinterpret_cast<char*>(&nomor);
    // cout << cp,sizeof(nomor) ;
    // cout << *cp,sizeof(nomor);
    return 0;
}

// struct S1 { int a; } s1;
// struct S2 { int a; private: int b; } s2; // not standard-layout
// union U { int a; double b; } u = {0};
// int arr[2];
 
// int* p1 = reinterpret_cast<int*>(&s1); // value of p1 is "pointer to s1.a" because
//                                        // s1.a and s1 are pointer-interconvertible
 
// int* p2 = reinterpret_cast<int*>(&s2); // value of p2 is unchanged by reinterpret_cast
//                                        // and is "pointer to s2". 
 
// int* p3 = reinterpret_cast<int*>(&u);  // value of p3 is "pointer to u.a":
//                                        // u.a and u are pointer-interconvertible
 
// double* p4 = reinterpret_cast<double*>(p3); // value of p4 is "pointer to u.b": u.a and
//                                             // u.b are pointer-interconvertible because
//                                             // both are pointer-interconvertible with u
 
// int* p5 = reinterpret_cast<int*>(&arr); // value of p5 is unchanged by reinterpret_cast
//                                         // and is "pointer to arr"