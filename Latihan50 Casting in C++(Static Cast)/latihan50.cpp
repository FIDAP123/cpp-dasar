/*
	Latihan 48 Casting in C static cast :
	1. 	Salah satu fungsi static cast adalah implicit casting, implicit casting adalah casting tipe data dengan default 
		dari compilernya dan tentunya casting didalam memori lebih aman, namun hasil yang 
*/

#include <iostream>

int main(int argc, char const *argv[])
{   
	std::cout << "1. Static cast bisa digunakan untuk implicit cast dan eksplicit cast" << std::endl;
	std::cout  << std::endl;

	float desimal_1 = 9.54;
	int bulat_2 = 29;
	
	std::cout << "a. Implicit Cast Biasa\n" << std::endl;

	bulat_2 = desimal_1 + 0.9;//ditambah dengan float supaya bisa mengecek tipe data dari variable hasilnya, karena c++ tipe data float tidak ada penanda desimal atau koma nol(.0)
	std::cout << "desimal ke bulat = " << bulat_2 << std::endl;//jika casting biasa untuk tipe data dari value ditentukan berdasarkan tipe data dari variablenya
	
	bulat_2 = 29;//inisialisasi disini berfungsi agar valuenya kembali ke awal
	desimal_1 = bulat_2 + 0.9;
	std::cout << "bulat ke desimal = " << desimal_1 << std::endl;	

	std::cout  << std::endl;
	
	std::cout << "b. Implicit Cast Dengan Static Cast\n" << std::endl;

	desimal_1 = 9.54;
	bulat_2 = static_cast<int>(desimal_1+0.9);
	std::cout << "desimal ke integer (bulat isi)= " << bulat_2 << std::endl;
	desimal_1 = 9.54;
	bulat_2 = static_cast<float>(desimal_1)+ 0.9;
	std::cout << "desimal ke float (bulat isi)= " << bulat_2 << std::endl;

	bulat_2 = 29;
	desimal_1 = static_cast<float>(bulat_2 + 0.9);
	std::cout << "bulat ke float = " << desimal_1 << std::endl;
	bulat_2 = 29;
	desimal_1 = static_cast<int>(bulat_2 + 0.9);//hasilnya tetap tipe float tetapi karena kita memakai static cast yang berguna untuk casting tipe data maka hasilnya akan berupa integer tetapi tipe data variable akhirnya masihlah float dan untuk c++ sendiri tidak ada koma nol(.0) maka valuenya seperti tipe data integer namun tipe data dan value dari variable akhirnya tetap float
	std::cout << "bulat ke integer = " << desimal_1 << std::endl;

	std::cout  << std::endl;
	std::cout  << std::endl;

	std::cout << "2. Static cast bisa digunakan untuk conversion constructor & conversion operator OOP/PBO di C++" << std::endl;
	std::cout  << std::endl;

	class Mahasiswa
	{
		int angka_bulat;
		
		public:
			Mahasiswa(int x=0)//artinya constructor class Mahasiswa dengan parameter argumen default int x = 0 dengan value dari data member angka bulat diisi dengan value dari variable x dari variable constructor
			{
				angka_bulat = x;
			}
			//Mahasiswa(int x=0):{angka_bulat}
			// {

			// }
			// kita bisa menulis constructor seperti diatas, constructor diatas adalah constructor yang ada di c++ & berguna agar kodingan atau syntax kita jadi lebih ringkas

			void tampilkan_nilai()
			{
				std::cout << "nilai angka = " << angka_bulat << std::endl;
			}

			operator std::string () 
			{
				std::cout<< "conversion operator" << std::endl;
				return std::to_string(angka_bulat);
			}
				
	};

	std::cout << "a. conversion constructor & conversion operator biasa" << std::endl;
	std::cout << std::endl;

	Mahasiswa mahasiswa_1(8);
	mahasiswa_1.tampilkan_nilai();
	mahasiswa_1 = 9;//ini adalah conversion constructor, ini berfungsi mengubah dan memasukkan value yang kita tulis ke data member
	mahasiswa_1.tampilkan_nilai();

	std::string huruf_1 = mahasiswa_1;//disini merupakan conversion operator karena kita mengubah valuenya dengan menyimpan perubahan ke variable lain dengan memanfaatkan keyword operator didalam class sehingga kita tidak perlu mengubahnya sendiri dengan memakai fugsi std::tostring karena sudah diubah disana
	std::cout << "hasil pengubahan menjadi huruf atau string" + huruf_1 << std::endl;//dengan memakai conversion operator ke string kita mengubah value ke string dan kita bisa menggunakan operasi

	std::cout << std::endl;

	std::cout << "b. conversion constructor & conversion operator dengan static cast" << std::endl;
	std::cout << std::endl;
	
	mahasiswa_1 = static_cast<int>(10);
	// mahasiswa_1 = static_cast<std::string>(10);//disini tidak bisa karena variable untuk menyimpan yaitu constructornya mempunyai tipe data int, jadi harus diubah int sesuai tipe data yang akan disimpan
	mahasiswa_1.tampilkan_nilai();
	
	std::string huruf_2 = static_cast<std::string>(mahasiswa_1);
	mahasiswa_1.tampilkan_nilai();
	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "3. Static cast lebih aman digunakan untuk pengubahan tipe data dibanding menggunakan c-style cast" << std::endl;

	std::cout << "a. casting dengan c-style cast" << std::endl;
	std::cout << std::endl;

	char huruf ;//disini variable huruf mempunyai memori alocation 1 byte karena bertipe character
	int angka = static_cast<int>(huruf);//disini kita mengubah dari 
	std::cout <<" angka = " << angka << std::endl;
	angka = 90;
	std::cout <<" angka = " << angka << std::endl;

	return 0;
}