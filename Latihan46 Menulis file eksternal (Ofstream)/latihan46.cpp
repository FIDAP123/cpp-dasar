/*
    Latihan 46 Menulis File Eksternal (Ofstream) :
    1.  library dengan header fstream berisi library dari ofstream atau ouput file stream dan ifstream atau input file 
        stream
*/

#include<iostream>
#include<fstream>//menulis atau membaca file menggunakan library fstream, libray fstream terdiri dari library ofstream atau output file stream dan library ifstream atau library input file stream

int main(int argc, char const *argv[])
{
    std::ofstream file_ku;//di ofstream ada ios::out, ios::trunc, ios::app, file_ku adalah object file yg dibuat dari class offstream

    std::cout << "Membuat file 1 dengan ios out\n" << std::endl;
    file_ku.open("1. file_1_ios_out.txt", std::ios::out);//ini artinya kita membuat folder file_1.txt
    file_ku << "halo file 1 ios::out" << std::endl;
    file_ku.close();

    std::cout << "Membuat file 2 dengan ios out\n" << std::endl;
    file_ku.open("2. file_2_ios_out.txt", std::ios::out);//ios::out adalah sebagai default yg berfungsi sebagai operasi output
    file_ku << "halo file 2 ios::out" << std::endl;
    file_ku.close();

    std::cout << "Membuat file 1 dengan ios trunc\n" << std::endl;
    file_ku.open("3. file_1_ios_trunc.txt", std::ios::trunc);//ios::trunc adalah sebagai default juga sama dengan ios::out, ios::trunc berfungsi untuk membuat file jika tidak ada dan jika ada maka file akan dihapus
    file_ku << "halo file 1 ios::trunc" << std::endl;
    file_ku.close();

    std::cout << "Membuat file 2 dengan ios trunc\n" << std::endl;
    file_ku.open("4. file_2_ios_trunc.txt", std::ios::trunc);
    file_ku << "halo file 2 ios::trunc" << std::endl;
    file_ku.close();
    
    std::cout << "Membuat file 1 dengan ios app\n" << std::endl;
    file_ku.open("5. file_1_ios_app.txt", std::ios::app);
    file_ku << "halo file 2 ios::app" << std::endl;
    file_ku.close();
    
    std::cout << "Membuat file 2 dengan ios app\n" << std::endl;
    file_ku.open("6. file_2_ios_app.txt", std::ios::app);
    file_ku << "halo file 2 ios::app" << std::endl;
    file_ku.close();
    
    
    return 0;
}
