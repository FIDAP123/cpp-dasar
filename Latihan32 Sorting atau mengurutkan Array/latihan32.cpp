/*
    Latihan 32 Sorting dan search array:
    1.a.    sorting berguna untuk mengurutkan array
      b.    sorting berasal dari library algorithm
      c.    sort array butuh fungsi begin dan end dari library array agar 
            fungsi sort tau batas array memory yg diakses awal dan akhir
    2.a.    seearch array dapat dilakukan ketika kita sudah mengurutkan dengan 
            sorting
      b.    search array juga berasal dari library algorithm
*/

#include<iostream>
#include<array>
#include<algorithm>

const size_t data_array = 10;

void fungsi_arr_angka (std::array<int,data_array>&array_angka)
{
    std::cout << "[ ";
    for (int &nilai :  array_angka)
    {
        std::cout << nilai << ",";
    }
    std::cout << "\b ]" << std::endl;
}

void fungsi_arr_huruf (std::array<char,data_array>&array_huruf)
{
    std::cout << "[ ";
    for (char &nilai :  array_huruf)
    {
        std::cout << nilai << ",";
    }
    std::cout << "\b ]" << std::endl;
}

int main(int argc, char const *argv[])
{
    int angka_cari;
    char huruf_cari;
    bool ketemu_angka, ketemu_huruf;//disini tidak berpengaruh jika kita mengganti ke tipe data angka karena fungsi dari binary search berupa boolean yaitu 1 dan 0
    std::array<int, data_array> array_angka = {9,6,4,3,2,1,7,8,5,10};
    std::array<char, data_array> array_huruf = {'q','w','e','r','t','y','u','i','o','p'};

    std::cout << "sebelum diurutkan : " << std::endl;
    
    fungsi_arr_angka(array_angka);
    fungsi_arr_huruf(array_huruf);
    
    std::cout << std::endl;
    
    std::sort(array_angka.begin(),array_angka.end());//sort adalah salah satu fungsi yg ada di library algorithm, jika kita ingin mengurutkan maka memakai fungsi sort ini dan fungsi ini biasanya dipadukan dengan library array untuk fungsi begin dan end nya
    std::sort(array_huruf.begin(),array_huruf.end());
    
    std::cout << "Mengurutkan angka dan huruf : " << std::endl;
    
    fungsi_arr_angka(array_angka);//disini fungsi hanya untuk menampilkan array keseluruhan
    fungsi_arr_huruf(array_huruf);

    std::cout << std::endl;
    
    std::cout << "masukkan angka yg di cari = ";
    std::cin >> angka_cari;
    std::cout<< "masukkan huruf yg di cari = ";
    std::cin >> huruf_cari;
    ketemu_angka = std::binary_search(array_angka.begin(),array_angka.end(),angka_cari);//disini binary_search bisa dilakukan bila kita sudah mengurutkan angkanya terlebih dahulu dengan fungsi sort yg ada di library algorithm
    ketemu_huruf = std::binary_search(array_huruf.begin(),array_huruf.end(),huruf_cari);//dan fungsi ini berupa boolean yaitu 1 dan 0
    std::cout << ketemu_angka << std::endl;
    std::cout << ketemu_huruf << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "mencari angka : " << std::endl;
    
    std::cout << std::endl;
    
    if (ketemu_angka)
    {
        std::cout << "ketemu, angka " << angka_cari << " yang anda cari telah ditemukan" << std::endl;
    } 
    else
    {
        std::cout << "tidak ketemu, angka " << angka_cari << " yang anda cari tidak ditemukan" << std::endl;
    }
    
    std::cout << std::endl;
    
    std::cout << "mencari huruf : " << std::endl;
    
    std::cout << std::endl;
    
    if (ketemu_huruf)
    {
        std::cout << "ketemu, huruf " << huruf_cari << " yang anda cari telah ditemukan" << std::endl;
    } 
    else
    {
        std::cout << "tidak ketemu, huruf " << huruf_cari << " yang anda cari tidak ditemukan" << std::endl;
    }
    
    return 0;
}
