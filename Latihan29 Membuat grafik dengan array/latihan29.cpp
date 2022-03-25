#include<iostream>
#include<array>

int main(int argc, char const *argv[])
{
    std::array<double, 5> tahun;
    
    std::cout << "Data Rata-Rata Jumlah Siswa Kelas A dari tahun 2001 s/d 2022 :\n" << std::endl;

    
    for (int i = 0; i < tahun.size(); i++)
    {
        int tahun_2 = 2005;
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
            int tahun_1 = tahun_2 +i;
            tahun_2 = tahun_1 + 4;
            std::cout << tahun_1 << " s/d " << tahun_2 ;
            std::cin >> tahun[i];
        }

    }
    

    return 0;
}
