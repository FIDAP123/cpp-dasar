/*
	Latihan 48 Casting in C static cast :
	1. 	Salah satu fungsi static cast adalah implicit casting, implicit casting adalah casting tipe data dengan default dari compilernya dan tentunya casting didalam memori lebih aman, namun hasil yang 
*/

#include <iostream>

int main(int argc, char const *argv[])
{   
	float desimal_1 = 9.54, desimal_2;
	int bulat_1, bulat_2 = 29;

	//contoh implisit cast yang bisa memakai static_cast
	std::cout << "-------------implicit cast biasa------------\n" << std::endl;

	bulat_1 = desimal_1;
	std::cout << "desimal ke bulat (bulat kosong)= " << bulat_1 << std::endl;
	bulat_2 = 29;
	desimal_2 = bulat_2;
	std::cout << "bulat ke desimal (desimal kosong) = " << desimal_2 << std::endl;
	int bulat_3 = desimal_2 + 3.8;
	std::cout << "bulat 3 = " << bulat_3 << std::endl;
	float desimal_3 = bulat_3 + 3.8;
	std::cout << "desimal 3 = " << desimal_3 << std::endl;
	std::cout  << std::endl;
	desimal_1 = 9.54;
	bulat_2 = desimal_1;
	std::cout << "desimal ke bulat (bulat isi)= " << bulat_2 << std::endl;
	bulat_2 = 29;
	desimal_1 = bulat_2;
	std::cout << "bulat ke desimal (desimal isi) = " << desimal_1 << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << "-----------implicit cast dengan static_cast------------\n" << std::endl;

	desimal_1 = 9.54;
	bulat_1 = static_cast<int>(desimal_1);
	std::cout << "desimal ke integer (bulat kosong)= " << bulat_1 << std::endl;
	desimal_1 = 9.54;
	bulat_1 = static_cast<float>(desimal_1);
	std::cout << "desimal ke float (bulat kosong)= " << bulat_1 << std::endl;
	std::cout  << std::endl;
	bulat_2 = 29;
	desimal_2 = static_cast<float>(bulat_2);
	std::cout << "bulat ke float (desimal kosong) = " << desimal_2 << std::endl;
	bulat_2 = 29;
	desimal_2 = static_cast<int>(bulat_2);
	std::cout << "bulat ke integer (desimal kosong) = " << desimal_2 << std::endl;
	std::cout  << std::endl;
	desimal_1 = 9.54;
	bulat_2 = static_cast<int>(desimal_1);
	std::cout << "desimal ke integer (bulat isi)= " << bulat_2 << std::endl;
	desimal_1 = 9.54;
	bulat_2 = static_cast<float>(desimal_1);
	std::cout << "desimal ke float (bulat isi)= " << bulat_2 << std::endl;
	std::cout  << std::endl;
	bulat_2 = 29;
	desimal_1 = static_cast<float>(bulat_2);
	std::cout << "bulat ke float (desimal isi) = " << desimal_1 << std::endl;
	bulat_2 = 29;
	desimal_1 = static_cast<int>(bulat_2);
	std::cout << "bulat ke integer (desimal isi) = " << desimal_1 << std::endl;

	return 0;
}