/*
    Latihan 29 Membuat Grafik dengan Array :
    1.  Disini kita membuat grafik dari data array dengan * karena sistem c++ yg masih CLI
    2.  Kita membuat ini dengan algoritma iterasi agar program kita lebih ringkas
*/

#include<iostream>
#include<array>

int main(int argc, char const *argv[])
{
    int tahun_2 = 2005;
    
    std::array<double, 5> tahun;
    
    std::cout << "Data Rata-Rata Jumlah Siswa Kelas A dari tahun 2001 s/d 2022 :\n" << std::endl;

    
    for (int i = 0; i < tahun.size(); i++)
    {
        std::cout << "Silahkan masukkan data di tahun ";
        if (i == 0)
        {
            std::cout << "2001 s/d 2005 = " ;
            std::cin >> tahun[i];
        }
        else if (i == 4)
        {
            std::cout << "2021 s/d 2022 = " ;
            std::cin >> tahun[i];
            
        }
        else
        {
            int tahun_1 = tahun_2 +1;
            tahun_2 = tahun_1 + 4;
            std::cout << tahun_1 << " s/d " << tahun_2 << " = ";
            std::cin >> tahun[i];
        }
    }

    std::cout << "\n\nGrafik Data Rata-Rata Jumlah Siswa Kelas A dari tahun 2001 s/d 2022 :\n" << std::endl;
    tahun_2 = 2005;
    for (int i = 0; i < tahun.size(); i++)
    {
        if (i == 0)
        {
            std::cout << "2001 s/d 2005 = " ;
        }
        else if (i == 4)
        {
            std::cout << "2021 s/d 2022 = " ;
        }
        else
        {
            int tahun_1 = tahun_2 +1;
            tahun_2 = tahun_1 + 4;
            std::cout << tahun_1 << " s/d " << tahun_2 << " = ";
        }
        for (int bintang = 0; bintang < tahun[i]; bintang++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        
    }
    
    
    return 0;
}
