/*
    Latihan 40 Union :
    1.  Union hanya digunakan untuk pembuatan data yg hanya terpaku pada 1 tipe data saja, karena jika kita memasukkan 
        kedalamnya banyak tipe data sekaligus maka seperti yg ada di bawah akan menibulkan error atau hasil yg acak
    2.  Union memakai 1 block data yg sama di memori makanya hasilnya akan eror atau acak jika kita memasukkan tipe data 
        yg berbeda dalam satu komponen data yg bertipe union
*/

#include<iostream>
#include<string>

union terserah
{
    float berat;
    int tahun;
    bool tebak;
    char vokal [5] = {'a','i','u','e','o'};
    //std::string hari [7] = {"senin","selasa","rabu","kamis","jumat","sabtu","minggu"};
};


int main(int argc, char const *argv[])
{
    terserah acak;

    acak.berat = 4.8;
    //acak.tahun = 2;
    //acak.vokal = {'a','i','u','e','o'};
    //acak.tebak = true;

    std::cout << "  acak" << std::endl;
    std::cout << std::endl;
    std::cout << "- berat (float) = " << acak.berat << std::endl;
    std::cout << "- tahun (int) = " << acak.tahun << std::endl;
    std::cout << "- tebak (bool) = " << acak.tebak << std::endl;
    std::cout << "- vokal (char[array]) = " << acak.tebak << std::endl;
    
    return 0;
}
