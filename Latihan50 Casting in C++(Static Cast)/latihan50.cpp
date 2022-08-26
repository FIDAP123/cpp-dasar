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

	std::cout << "a. casting dengan c-style cast secara explicit" << std::endl;
	std::cout << std::endl;
	char huruf_3;
	std::cout <<"\thuruf = " << huruf_3 << std::endl;
	int angka_3 = (int)huruf_3;//disini tidak masalah memakai c-style casting dengan secara explicit karena bukan memakai pointer yang berarti akan membuat alamat baru.
	std::cout <<"\tangka = " << angka_3 << std::endl;

	std::cout << std::endl;
	char huruf_4 ;//disini variable huruf mempunyai memori alocation 1 byte karena bertipe character
	std::cout <<"\thuruf = " << huruf_4 << std::endl;//disini variable huruf_4 akan tidak berisi atau None tapi kita bisa menampilkan dengan cout karena yang kita deklarasikan bukan pointer
	int* angka_4 = (int*)&huruf_4;///disini kita mengubah tipe datanya dengan tipe data integer yang berjumlah 4 byte memori dan merupakan sebuah pointer hal ini sangat berbahaya jika berkaitan dengan pointer karena dengan explicit cast disini maka alamat yang tadinya char dengan 1 byte memori akan mengambil alamat sebelahnya sehingga alamat memori menjadi 4 byte yaitu alamat dari integer. Nah berbahayanya jikalau alamat memori yang diambil adalah yang terpakai di komputer maka akan menyebabkan program yang kita run error atau merusak memori kita. 
	std::cout <<"\tangka = " << *angka_4 << std::endl;//disini buktinya value pointer angka jadi banyak karena hasil dari pengubahan tipe data char ke integer dengan menggabungkan alamat memori sebelahnya agar menjadi integer, hal ini berbahaya

	std::cout << std::endl;
	char* huruf_5 ;//disini variable huruf mempunyai memori alocation 1 byte karena bertipe character
	std::cout <<"\thuruf = " << &huruf_5 << std::endl;//disini karena char pointer huruf_5 masih kosong maka kita hanya bisa menampilkan keberedaannya di alamat memori kita
	int* angka_5 = (int*)huruf_5;//disini sama dengan yang diatas namun hanya saja kedua variable sama" pointer.
	std::cout <<"\tangka = " << *angka_5 << std::endl;
	std::cout << std::endl;

	std::cout << "b. casting dengan static cast" << std::endl;
	std::cout << std::endl;
	char huruf_6;
	std::cout <<"\thuruf = " << huruf_6 << std::endl;
	int angka_6 = static_cast<int>(huruf_6);// ini berhasil karena tidak ada masalah pada compile time yang bisa menyebabkan error pada program.
	std::cout <<"\tangka = " << angka_6 << std::endl;
	std::cout << std::endl;

	char huruf_7 ;
	std::cout <<"\thuruf = " << huruf_7 << std::endl;
	// int* angka_7 = static_cast<int*>(&huruf_7);// ini tidak akan bisa di compile karena ini merupakan hal yang berbahaya di memori dengan static cast karena static cast berguna memeriksa kesalahannya dulu saat compile time.
	// std::cout <<"\tangka = " << *angka_7 << std::endl;
	char* huruf_8 ;
	std::cout <<"\thuruf = " << &huruf_8 << std::endl;
	// int* angka_8 = static_cast<int*>(huruf_8);//ini juga sama seperti yang diatas, static cast sangat cocok ketika kita ingin mengubah tipe data dari variable
	// std::cout <<"\tangka = " << *angka_8 << std::endl;

	return 0;
}