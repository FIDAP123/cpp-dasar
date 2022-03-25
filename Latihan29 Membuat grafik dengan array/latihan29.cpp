#include<iostream>
#include<array>

int main(int argc, char const *argv[])
{
    std::array<long, 6> tahun;
    
    std::cout << "Data Siswa Kelas A dari tahun 2000 s/d 2022 :\n" << std::endl;

    for (int i = 0; i < tahun.size(); i++)
    {
        std::cout << "Silahkan masukkan data di tahun ";
        if (i == 0)
        {
            std::cout << "2000 s/d 2005 = " ;
            std::cin >> tahun[i];
        }
        
        else
        {
            std::cout << 2005+i << " s/d " << 2000+i ;
            std::cin >> tahun[i];
        }
    }
    

    return 0;
}
