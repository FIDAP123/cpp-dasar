/*
    Latihan 30 Looping Khusus Array :
    1.  Looping ini khusus untuk array dan hanya ada di c++11 keatas
    2.  kita bisa memakai standard library array ataupun tidak jika kita ingin menggunakan fitur looping ini
    3.  looping ini hanya menampilkan value dari variable lain dengan cara setelah ditampilkan value yg pertama dari 
        value milik array maka ketika kembali ke awal loop maka value pertama tadi akan dihapus dan diganti dengan value 
        kedua sampai looping ini berhasil menampilkan semua value dari array
*/

#include<iostream>
#include<array>

int main(int argc, char const *argv[])
{
    std::array<int, 5> loop_arr = {1,4,6,7};//disini array yg kita deklarasikan adalah 5 tapi kita baru memasukkan data 4 yg akan terjadi index ke empat akan diisi dengan 0 karena belum kita isi
    
    for (int nilai : loop_arr )//disini artinya kita akan memasukkan nilai yg ada di array loop_arr ke variable nilai dan variable nilai akan automatis menampilkan satu-satu value yg ada di array loop_arr
    {
        std::cout << "alamat memori nilai : " << &nilai << " = " << nilai << std::endl;//disini prosses yg dilakukan variable nilai dengan menampilkan lalu menghapus lalu menampilkan lagi sampai selesai, karena variable hanya punya 1 memori sedangkan array punya banyak memori
    }

    std::cout << std::endl;
    
    for (int nilai : loop_arr )
    {
        nilai += 2;//disini akan percuma karena value dari array tidak akan berubah karena yg berubah hanya lah value dari variable nilai
        // nilai = 2;
        std::cout << "alamat memori nilai : " << &nilai << " = " << nilai << std::endl;//disini prosses yg dilakukan variable nilai dengan menampilkan lalu menghapus lalu menampilkan lagi sampai selesai, karena variable hanya punya 1 memori sedangkan array punya banyak memori
    }
    
    std::cout << std::endl;
    
    for (int &nilaiRef : loop_arr )
    {
        nilaiRef+=2;//disini array akan berubah karena nilaiRef adalah referensi dari array sehingga sistemnya memori array akan terhubung ke nilaiRef
        std::cout << "alamat memori nilaiRef : " << &nilaiRef << " = " << nilaiRef << std::endl;//disini karena kita menggunakan referencing maka variable nilaiRef hanya berupa penunjuk ke memori dari array loop_arr sehingga kita bisa memanipulasi nilai array dalam loop_arr dengan merubah variable nilaiRef nya
    }
    
    for (int nilai : loop_arr )//disini artinya kita akan memasukkan nilai yg ada di array loop_arr ke variable nilai dan variable nilai akan automatis menampilkan satu-satu value yg ada di array loop_arr
    {
        std::cout << "alamat memori nilai : " << &nilai << " = " << nilai << std::endl;//disini prosses yg dilakukan variable nilai dengan menampilkan lalu menghapus lalu menampilkan lagi sampai selesai, karena variable hanya punya 1 memori sedangkan array punya banyak memori
    }
    
    std::cout << std::endl;
    
    int loop_arr2[5] = {1,4,6,7};
   
    for (int nilai2 : loop_arr2 )
    {
        nilai2 += 2;//disini akan percuma karena value dari array tidak akan berubah karena yg berubah hanya lah value dari variable nilai
        // nilai2 = 2;
        std::cout << "alamat memori nilai : " << &nilai2 << " = " << nilai2 << std::endl;//disini prosses yg dilakukan variable nilai dengan menampilkan lalu menghapus lalu menampilkan lagi sampai selesai, karena variable hanya punya 1 memori sedangkan array punya banyak memori
    }
    
    std::cout << std::endl;
    
    for (int &nilaiRef2 : loop_arr2 )
    {
        nilaiRef2+=2;//disini array akan berubah karena nilaiRef adalah referensi dari array sehingga sistemnya memori array akan terhubung ke nilaiRef
        std::cout << "alamat memori nilaiRef2 : " << &nilaiRef2 << " = " << nilaiRef2 << std::endl;//disini karena kita menggunakan referencing maka variable nilaiRef hanya berupa penunjuk ke memori dari array loop_arr sehingga kita bisa memanipulasi nilai array dalam loop_arr dengan merubah variable nilaiRef nya
    }
    return 0;
}