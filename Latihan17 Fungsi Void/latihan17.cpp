/*
    Latihan 17 Fungsi Void atau Fungsi tanpa kembali atau tanpa return :
    1.  fungsi void jika berada di fungsinya maka 
        harus wajib menyertakan cout agar bisa tampil di console atau terminal.
    2.  Fungsi void bisa disebut worker karena fungsi ini hanya menjalankan saja tanpa memberikan 
        kembalian, karena fungsi ini bernilai 0 makanya tidak ada nilai yang dikembalikan.
    3.  void artinya kosong, void merupakan deklarasi dan dia tidak memiliki tipe data 
        datanya kosong.

*/
#include<iostream>

void tampilkan(int c)
{
    std::cout << "menampilkan void = ";
    std::cout << c*c << std::endl; 
}

void tampilkan(int a, int b)
{
    std::cout << "menampilkan void = ";
    std::cout << a+b << std::endl; 
}

int main(int argc, char const *argv[])
{
    int input1, input2, hasil;
    std::cout << "masukkan nilai kuadrat1 = ";
    std::cin >> input1;
    //hasil = tampilkan(input1); // jika menulis seperti maka akan terjadi error karena fungsi void tidak mempunyai tipe data.
    tampilkan(input1);// ketika memanggil fungsi void kita tidak bisa menambahkan cout karena fungsi void tidak punya tipe data.

    std::cout << "masukkan nilai tambah1 = ";
    std::cin >> input1;
    std::cout << "masukkan nilai tambah2 = ";
    std::cin >> input2;
    tampilkan(input1,input2);
    
    return 0;
}
