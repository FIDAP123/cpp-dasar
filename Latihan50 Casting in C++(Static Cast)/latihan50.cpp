/*
	Latihan 48 Casting in C static cast :
	1. 	Salah satu fungsi static cast adalah implicit casting, implicit casting adalah casting tipe data dengan default dari compilernya dan tentunya casting didalam memori lebih aman, namun hasil yang 
*/

#include <iostream>

int main(int argc, char const *argv[])
{   
	float desimal_1 = 9.54;
	int bulat_2 = 29;

	std::cout << "-------------implicit cast biasa------------\n" << std::endl;

	bulat_2 = desimal_1 + 0.9;//ditambah dengan float supaya bisa mengecek tipe data dari variable hasilnya, karena c++ tipe data float tidak ada penanda desimal atau koma nol(.0)
	std::cout << "desimal ke bulat = " << bulat_2 << std::endl;//jika casting biasa untuk tipe data dari value ditentukan berdasarkan tipe data dari variablenya
	
	bulat_2 = 29;
	desimal_1 = bulat_2 + 0.9;
	std::cout << "bulat ke desimal = " << desimal_1 << std::endl;	

	std::cout  << std::endl;
	
	std::cout << "---------implicit cast dengan static cast--------\n" << std::endl;

	desimal_1 = 9.54;
	bulat_2 = static_cast<int>(desimal_1+0.9);
	std::cout << "desimal ke integer (bulat isi)= " << bulat_2 << std::endl;
	desimal_1 = 9.54;
	bulat_2 = static_cast<float>(desimal_1)+0.9;
	std::cout << "desimal ke float (bulat isi)= " << bulat_2 << std::endl;

	bulat_2 = 29;
	desimal_1 = static_cast<float>(bulat_2 + 0.9);
	std::cout << "bulat ke float = " << desimal_1 << std::endl;
	bulat_2 = 29;
	desimal_1 = static_cast<int>(bulat_2 + 0.9);//hasilnya tetap tipe float tetapi karena kita memakai static cast yang berguna untuk casting tipe data maka hasilnya akan berupa integer tetapi tipe data variable akhirnya masihlah float dan untuk c++ sendiri tidak ada koma nol(.0) maka valuenya seperti tipe data integer namun tipe data dan value dari variable akhirnya tetap float
	std::cout << "bulat ke integer = " << desimal_1 << std::endl;

	return 0;
}