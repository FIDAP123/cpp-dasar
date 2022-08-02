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
	std::cout << "implicit cast biasa\n" << std::endl;
	bulat_1 = desimal_1;
	std::cout << "implicit cast biasa = " << bulat_1 << std::endl;
	desimal_2 = bulat_2;
	std::cout << "implicit cast biasa = " << desimal_2 << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << "implicit cast dengan static_cast = \n" << std::endl;
	bulat_1 = static_cast<float>(desimal_1);
	std::cout  << std::endl;
	desimal_2 = static_cast<int>(bulat_2);

	return 0;
}