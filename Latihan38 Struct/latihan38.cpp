/*
    Latihan 38 Struct :
    1.  Struct berguna seperti tamplate untuk membuat sebuah data
    2.  variable yg bertipe struct harus mengambil komponen structnya seperti yg ada dibawah yaitu string nama, warna, 
        umur dan berat lalu di inisialisasi karena belum mempunya value didalam komponennya
*/
#include <iostream>

struct kucing//ini adalah sebuah tipe data kucing yg mempunyai komponen
{
    std::string nama;
    std::string warna;
    int umur;
    float berat;
};

int main(int argc, char const *argv[])
{
    kucing oyen;//kucing disini berlaku sebagai tipe data dan oyen adalah variable yg mempunyai komponen didalam sub data-nya


    std::cout << "sebelum diberi komponen berupa value didalam variable atau sub datanya : " << std::endl;
    std::cout << "Kucing Oyen : " << std::endl;
    std::cout << "Nama = " << oyen.nama << std::endl;
    std::cout << "Warna = " << oyen.warna << std::endl;
    std::cout << "Umur = " << oyen.umur << std::endl;
    std::cout << "Berat = " << oyen.berat << std::endl;

    std::cout << std::endl;
    
    oyen.nama = "oren";
    oyen.warna = "oranye";
    oyen.umur = 1;
    oyen.berat = 2.5;
    
    std::cout << "sesudah diberi komponen berupa value didalam variable atau sub datanya : " << std::endl;
    std::cout << "Kucing Oyen : " << std::endl;
    std::cout << "Nama = " << oyen.nama << std::endl;
    std::cout << "Warna = " << oyen.warna << std::endl;
    std::cout << "Umur = " << oyen.umur << std::endl;
    std::cout << "Berat = " << oyen.berat << std::endl;
    
    return 0;
}
