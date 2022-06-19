/*
    Latihan 31 Array Multi Dimensi :
    1.  Kita bisa membuat array ini tidak atau dengan library array
    2.  Pembuatan fungsi untuk menampilkan array dengan atau tidak dengan library array disarankan membuat variable baris 
        dan kolomnya dengan memakai const atau constanta karena constanta berfungsi agar value dari variable tidak berubah
    3.  Pemakaian dengan library array atau tidak mempunyai keuntungan dan kekurangan dalam syntax penulisannya
    4.  pointer hanya dapat dipakai array tanpa library, karena array tanpa library berupa memori dari komputer berbeda 
        dengan array dengan library karena di dalam array dengan library memorinya sudah dimodifikasi sehingga kita 
        bisanya menggunakan reference berbeda lagi dengan array tdk dengan library, array tidak dengan library tidak bisa 
        memakai reference
*/

#include<iostream>
#include<array>

const int baris = 2;//const adalah constanta berguna agar value yg ada di dalam variable tetap dan array butuh constanta karena jika value berubah maka array bisa error
const int kolom = 3;

void arr_fungsi (int *, int baris, int kolom);//untuk prototype dari pointer kita cukup mendeklarasikan dengan * saja

void arr_fungsiMD (std::array<std::array<int,kolom>,baris> &nilai_array);

int main(int argc, char const *argv[])
{\
    std::cout << "Array yg tdk/ dgn library dan dgn variable const" << std::endl;
    
    int arr_1[baris][kolom] = {0,1,2,3};
    std::cout << "[ " << arr_1 [0][0] << "," << arr_1 [0][1] << "," << arr_1 [0][2] << " ]" << std::endl;
    std::cout << "[ " << arr_1 [1][0] << "," << arr_1 [1][1] << "," << arr_1 [1][2] << " ]" << std::endl;
    
    std::cout << std::endl;

    std::array< std::array < int,kolom >, baris > arr_MD = {4,5,6,7,8,9};
    std::cout << "[ " << arr_MD [0][0] << "," << arr_MD [0][1] << "," << arr_MD [0][2] << " ]" << std::endl;
    std::cout << "[ " << arr_MD [1][0] << "," << arr_MD [1][1] << "," << arr_MD [1][2] << " ]" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Array yg tdk/ dgn library dan tdk dgn variable const" << std::endl;
    
    int arr_2[3][3] = {10,11,12,13,14,15,16,17,18};
    std::cout << "[ " << arr_2 [0][0] << "," << arr_2 [0][1] << "," << arr_2 [0][2] << " ]" << std::endl;
    std::cout << "[ " << arr_2 [1][0] << "," << arr_2 [1][1] << "," << arr_2 [1][2] << " ]" << std::endl;
    std::cout << "[ " << arr_2 [2][0] << "," << arr_2 [2][1] << "," << arr_2 [2][2] << " ]" << std::endl;
    
    std::cout << std::endl;
    
    std::array<std::array< int, 2 >, 3> arr_MD2 = {19,20,21,22,23,24};
    std::cout << "[ " << arr_MD2 [0][0] << "," << arr_MD2 [0][1] << " ]" << std::endl;
    std::cout << "[ " << arr_MD2 [1][0] << "," << arr_MD2 [1][1] << " ]" << std::endl;
    std::cout << "[ " << arr_MD2 [2][0] << "," << arr_MD2 [2][1] << " ]" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Array yg tdk/ dgn library, tdk/ dgn variable const, dan brp fungsi" << std::endl;
    arr_fungsi(*arr_1,baris,kolom);
    
    //arr_fungsi(*arr_MD,baris,kolom);// disini array yg dari standard library tidak cocok dengan pointer sehingga akan menimbulkan error
    
    std::cout << std::endl;
    
    arr_fungsi(*arr_2,3,3);
    
    //arr_fungsi(*arr_MD2,2,3);

    std::cout << std::endl;

    arr_fungsiMD(arr_MD);//disini kita hanya bisa menggunakan fungsi void khusus yg dibuat dengan library
    
    //arr_fungsiMD(arr_MD2);//disini jika kita ingin menampilkan ini tanpa error maka kita harus membuat fungsi lagi karena fungsi yg dibuat dengan library hanya punya 2 tipe yg pertama tulis baris dan kolom ke bentuk angka yg kedua ke bentuk variable, lebih disarankan bentuk ke variable const karena kita bisa memasukkan angka apapun ke variablenya sedangkan jika kita pilih dalam angka maka ketika kita ingin mengganti baris atau kolom maka kita harus mengedit banyak kodingan

    return 0;
}

void arr_fungsi (int *ptr_arr, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        std::cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            std::cout << *(ptr_arr + index);//disni * berperan sebagai dereference, arti dari 1 baris ini adalah ptr_array yg berupa memori ditambah dengan index(index disini sudah di modifikasi ke memori agar bisa ditambahkan) lalu memori hasilnya di ubah ke bentuk value dan ditampilkan ke console
            index++;
            std::cout << ",";
        }
        std::cout << "\b ]";
        std::cout << std::endl;
    }
}

void arr_fungsiMD (std::array <std::array <int, kolom>, baris> &nilai_array)
{
    for (std::array <int,kolom> nilai_baris : nilai_array)
    {
        std::cout << "[ ";
        for (int nilai_kolom : nilai_baris)
        {
            std::cout << nilai_kolom << "," ;
        }
        std::cout << "\b ]" << std::endl;
    }
}