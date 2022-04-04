/*
    Latihan 35 Akses Substring :
    1.  Akses substring atau akses ke bagian dalam string, kita bisa menggunakan substr untuk menampilkan string 
        didalamnya dengan index, lalu fungsi find untuk menemukan string yg ingin kita cari dalam satu variable
    2.  Fungsi find sangat berguna sekali karena fungsi ini dapat mencari dan menyimpan index awal dari kata yg kita 
        masukkan
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string kalimat_1("monyet kok pergi ke pasar harusnya ke hutan"); 
    std::string kalimat_2 = "mau jadi Programmer ya harus mau rajin latihan lah, eat sleep code harus mau brother, jangan hanya pengen mau lulus aja lu";
    
    std::cout << "Menampilkan Substring dari kalimat_1 di index ke-7 dan panjang 3 huruf : " << std::endl;
    std::cout << kalimat_1.substr(7,3) << std::endl;//rumus variable.substr(index,panjang)
    
    std::cout << std::endl;
    
    std::cout << "Menampilkan Substring dari kalimat_2 di index ke-9 dan panjang 10 huruf : " << std::endl;
    std::string kalimat_3 = kalimat_2.substr(kalimat_2.find("Programmer"),10);//disini fungsi bisa disimpan di variable lain, tipe data variable simpan harus bertipe string, karena fungsi substr menghasilkan string
    std::cout << kalimat_3 << std::endl;//disini kita bisa menampilkan variable kalimat_3 yg menunjuk ke variable kalimat_2

    std::cout << std::endl;

    std::cout << "Posisi index awal dari kata pergi di kalimat_1 posisi 1 = " << kalimat_1.find("pergi") << std::endl;//fungsi find(kata yg dicari) untuk menunjukkan kata yg dicari pada posisi pertama

    std::cout << std::endl;

    std::cout << "Posisi index awal dari kata mau di kalimat_2 posisi 1 : ";
    int kalimat_4 = kalimat_2.find("mau");
    std::cout << kalimat_4 << std::endl;
    std::cout << "Posisi index awal dari kata mau di kalimat_2 posisi 2 : ";
    std::cout << kalimat_2.find("mau", kalimat_4 + 1) << std::endl;//disini variable kalimat 4 valuenya berupa integer dari find variable kalimat_2 sehingga sama saja index posisi kalimat_2 tambah 1 yakni 0 + 1 maka find akan mencari setelah index 1
    //rumusnya adalah variable.find(string kata yg dicari , posisi index untuk memulai pencarian sampai akhir string); 

    std::cout << kalimat_2.find("mau") << std::endl;//fungsi find(kata yg dicari, variable + 1) untuk menunjuk ke kata yg dicari pada posisi kedua
    
    std::cout << std::endl;
    
    std::cout << kalimat_2.rfind("mau") << std::endl;//fungsi rfind(kata yg dicari) untuk menunjuk ke kata yg dicari pada posisi terakhir
    
    return 0;
}
