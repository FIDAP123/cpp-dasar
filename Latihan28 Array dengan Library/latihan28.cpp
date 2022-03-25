/*
    Latihan 28 Array dengan Library :
    1.  b
*/

#include<iostream>
#include<array>

int main(int argc, char const *argv[])
{
    std::array < int, 5 > nilai;//deklarasi ini hanya berlaku ketika kita memasukkan standard library array saja

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        std::cout << "nilai [" << i << "] = " << nilai[i] << " alamatnya = " << &nilai[i] << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "ukuran array = " << nilai.size() << std::endl;//disini kita menuliskan fungsi dari library array yg bertujuan agar kita dapat melihat berapa ukuran array yg akan kita tampilkan
    //sebenarnya nilai ukuran array ini adalah ukuran array yg ingin kita buat diawal ketika kita mendeklarasikannya
    std::cout << "alamat memori/addres awal = " << nilai.begin() << std::endl;//fungsi begin() adalah untuk mengetahui batas awal dari array
    std::cout << "alamat memori/addres akhir = " << nilai.end() << std::endl;//fungsi end() adalah untuk mengetahui batas akhir dari array
    std::cout << "nilai ke 3 = " << nilai.at(3) << std::endl;//fungsi at(x) x disini merupakan index dan fungsi ini berfungsi untuk meampilkan nilai dari index yg kita masukkan dalam tanda ()
    
    return 0;
}
