/*
Latihan 5 Komparasi / perbandingan :

1. komparasi sama dengan membandingkan dengan metode boolean, not bertanda ! harus 
   ditaruh di depan suatu nilai yg di komparasikan dan nilai komparasi tersebut harus
   diberi kurung contoh : !(a>b), maka ini artinya a tidak boleh lebih besar dari b
*/
#include <iostream>

int main()
{
	int a,b;
	std::cout << "masukkan a = \n";
	std::cin >> a;
	std::cout << "masukkan b = \n";
	std::cin >> b;
	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6, hasil7, hasil8, hasil9, hasil10;
	
	hasil1 = (a==b);//mengkomparasi apakah variable a sama dengan b, jika sama maka 
	//hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil2 = (!(a==b));//mengkomparasi apakah variable a tidak sama dengan b, jika sama 
	//maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil3 = (a<b);//mengkomparasi apakah variable a kurang dari b, jika sama maka 
	//hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil4 = (!(a<b));//mengkomparasi apakah variable a tidak kurang dari b, jika sama 
	//maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil5 = (a>b);//mengkomparasi apakah variable a lebih dari b, jika sama maka 
	//hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil6 = (!(a>b));//mengkomparasi apakah variable a tidak lebih dari b, jika sama 
	//maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil7 = (a<=b);//mengkomparasi apakah variable a kurang dari sama dengan b, jika 
	//sama maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil8 = (!(a<=b));//mengkomparasi apakah variable a tidak kurang dari sama dengan b, 
	//jika sama maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil9 = (a>=b);//mengkomparasi apakah variable a lebih dari sama dengan b, jika 
	//sama maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	hasil10 = (!(a>=b));//mengkomparasi apakah variable a tidak lebih dari sama dengan b, 
	//jika sama maka hasilnya true atau 1 dan jika salah maka hasilnya false atau 0
	
	
	std::cout << "(" << a << " == " << b << ")" << " = " << hasil1 << "\n(!(" << a << " == " << b << "))" << " = " << hasil2 << "\n" << std::endl;
	std::cout << "(" << a << " < " << b << ")" << " = " << hasil3 << "\n(!(" << a << " < " << b << "))" << " = " << hasil4 << "\n" << std::endl;	
	std::cout << "(" << a << " > " << b << ")" << " = " << hasil5 << "\n(!(" << a << " > " << b << "))" << " = " << hasil6 << "\n" << std::endl;
	std::cout << "(" << a << " <= " << b << ")" << " = " << hasil7 << "\n(!(" << a << " <= " << b << "))" << " = " << hasil8 << "\n" << std::endl;
	std::cout << "(" << a << " <= " << b << ")" <<" = " << hasil9 << "\n(!(" << a << " <= " << b << "))" << " = "  << hasil10 << "\n" << std::endl;
	
	return 0;
}
