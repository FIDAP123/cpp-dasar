/*
    Latihan 42 Ternary Operator :
    1.  Ternery Operator adalah ("?")
    2.  Ternary Operator berguna agar mempermudah kita
    3.  Ternary operator berfungsi sebagai logika boolean yang akan 
        mengeksekusi salah satu variable dari logika tersebut, variable pertama 
        artinya variable untuk logika boolean true atau 1 dan variable kedua 
        artinya variable untuk logika boolean false atau 0
    4.  terary operator berfungsi agar memudahkan kita dalam membadingkan 2     
        variable
*/

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
            //std::cout << (angka_1 < angka_2) ? benar : salah;//disini ternary operator tidak akan menampilkan nilai value dari variable benar tetapi menampilkan nilai logika boolean yaitu true atau 1
            hasil = (angka_1 > angka_2) ? benar : salah ;//disini ternary operator harus disimpan didalam variable lain yaitu hasil karena jika tidak maka yang ditampilkannya bukan value dari variable benar dan tidak tetapi logika boolean
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
            if (angka_1>angka_2)//ini adalah versi panjang dari ternary operator yaitu berupa if dan else
            {
                hasil = benar;
            }
            else
            {
                hasil= salah;
            }
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