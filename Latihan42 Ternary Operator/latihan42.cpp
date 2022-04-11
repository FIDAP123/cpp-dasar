
#include<iostream>

int main(int argc, char const *argv[])
{
    int angka_1, angka_2;
    std::string hasil, input_logika, input_keluar;
    std::string benar = "benar";
    std::string salah("salah");

    while (true)
    {
        std::cout << "Program Pengecek Logika Boolean" << std::endl;
        std::cout << "Masukkan angka 1 = ";
        std::cin >> angka_1;
        std::cout << "Masukkan angka 2 = ";
        std::cin >> angka_2;
        std::cout << "Masukkan Logika Pengecekan(ketik \'<\' atau \'>\' saja) " << std::endl;
        std::cin >> input_logika;
        std::cout << std::endl;
        
        if (input_logika == "<")
        {
            std::cout << "Apakah " << angka_1 << " < " << angka_2 << " ?" << std::endl;
            hasil = (angka_1 < angka_2) ? benar : salah ;
            std::cout << hasil << std::endl;
            std::cout << std::endl;
            std::cout << "Apakah anda ingin mengulang ? (ketik \'ya\' atau \'tidak\')" << std::endl;
            std::cin >> input_keluar;
            if (input_keluar == "tidak")
            {
                break;
            }  
            std::cout << std::endl;
        }
        else if (input_logika == ">")
        {
            std::cout << "Apakah " << angka_1 << " > " << angka_2 << " ?" << std::endl;
            hasil = (angka_1 > angka_2) ? benar : salah ;
            std::cout << hasil << std::endl;
            std::cout << std::endl;
            std::cout << "Apakah anda ingin mengulang ? (ketik \'ya\' atau \'tidak\')" << std::endl;
            std::cin >> input_keluar;
            if (input_keluar == "tidak")
            {
                break;
            }  
            std::cout << std::endl;
        }
        else
        {
            std::cout << "Perintah yang anda masukkan salah" << std::endl;
            std::cout << std::endl;
            std::cout << "Apakah anda ingin mengulang ? (ketik \'ya\' atau \'tidak\')" << std::endl;
            std::cin >> input_keluar;
            if (input_keluar == "tidak")
            {
                break;
            }  
            std::cout << std::endl;
        }   
    }

    return 0;
}








