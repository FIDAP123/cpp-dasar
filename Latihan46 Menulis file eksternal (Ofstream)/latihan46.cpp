/*
    Latihan 46 Menulis File Eksternal (Ofstream) :
    1.  library dengan header fstream berisi library dari ofstream atau ouput file stream dan ifstream atau input file 
        stream
    2.  Dengan menulis file eksternal atau ouput file kita bisa membuat file ekstension apa saja 
    3.  Kita bisa memasukkan output apa saja termasuk variable di dalam file kita tapi nanti hasil output-an yg kita 
        masukkan akan berubah string didalam file yg kita outputkan
    4.  std::ios::out dan std::ios::trunc merupakan default dari ofstream, gunanya kita tidak harus menulis tipe file 
        output-an kita nantinya misalkan std::ios::app, std::ios::out atau std::ios::trunc
    5.  std::ios::out berfungsi untuk operasi output, std::ios::trunc berfungsi untuk membuat file jika tidak ada dan 
        jika ada maka file akan dihapus sedangkan std::ios::app berfungsi untuk menuliskan pada akhir baris, app adalah 
        kepanjangan append
    6.  kita bisa ketik std::ios atau std::ofstream setelah itu baru elemen didalamnya seperti ::out , ::trunc , ::app. Tapi lebih baik untuk ::out dan ::trunc tidak dituliskan karena itu merupakan defaultnya berbeda dengan ::app
*/

#include<iostream>
#include<fstream>//menulis atau membaca file menggunakan library fstream, libray fstream terdiri dari library ofstream atau output file stream dan library ifstream atau library input file stream

int main(int argc, char const *argv[])
{
    std::ofstream file_ku;//di ofstream ada ios::out, ios::trunc, ios::app, file_ku adalah object file yg dibuat dari class offstream
    
    int angka = 2002;
    float desimal = 5.6f;
    char huruf = 'b';
    std::string kata = "hai kamyuuu";

    std::cout << "Membuat file 1 dengan default ofstream\n" << std::endl;
    file_ku.open("1. file_1_default.txt");//ini artinya kita membuat folder file_1.txt
    file_ku << "halo file 1 default" << std::endl;
    file_ku.close();
    
    std::cout << "Membuat file 2 dengan default ofstream\n" << std::endl;
    file_ku.open("2. file_2_default.txt");//ini artinya kita membuat folder file_1.txt
    file_ku << "halo file 2 default" << std::endl;
    file_ku << angka << std::endl;
    file_ku.close();

    std::cout << "Membuat file 1 dengan ios out\n" << std::endl;
    file_ku.open("3. file_1_ios_out.txt", std::ios::out);//ini artinya kita membuat folder file_1.txt
    file_ku << "halo file 1 ios::out" << std::endl;
    file_ku.close();

    std::cout << "Membuat file 2 dengan ios out\n" << std::endl;
    file_ku.open("3. file_2_ios_out.txt", std::ios::out);//ios::out adalah sebagai default yg berfungsi sebagai operasi output
    file_ku << "halo file 2 ios::out" << std::endl;
    file_ku << desimal << std::endl;//disini kita bisa menaruh variable tapi nantinya di file eksternal akan berbentuk string
    file_ku.close();

    std::cout << "Membuat file 1 dengan ios trunc\n" << std::endl;
    file_ku.open("3. file_1_ios_trunc.txt", std::ios::trunc);//ios::trunc adalah sebagai default juga sama dengan ios::out, ios::trunc berfungsi untuk membuat file jika tidak ada dan jika ada maka file akan dihapus
    file_ku << "halo file 1 ios::trunc" << std::endl;
    file_ku.close();

    std::cout << "Membuat file 2 dengan ios trunc\n" << std::endl;
    file_ku.open("4. file_2_ios_trunc.txt", std::ios::trunc);
    file_ku << "halo file 2 ios::trunc" << std::endl;
    file_ku << huruf << std::endl;
    file_ku.close();
    
    std::cout << "Membuat file 1 dengan ios app\n" << std::endl;
    file_ku.open("5. file_1_ios_app.txt", std::ios::app);//std::ios::app berfungsi untuk menuliskan pada akhir baris, app adalah kepanjangan append
    file_ku << "halo file 2 ios::app" << std::endl;
    file_ku.close();
    
    std::cout << "Membuat file 2 dengan ios app\n" << std::endl;
    file_ku.open("6. file_2_ios_app.txt", std::ios::app);
    file_ku << "halo file 2 ios::app" << std::endl;
    file_ku << kata << std::endl;
    file_ku.close();
    
    std::ofstream fileSaya ("3.file_3_out.txt", std::ofstream::out);//std::ios::out dan std::ios::trunc adalah default mending tidak usah diketik
    std::ofstream fileAku ("test2.txt", std::ofstream::trunc);//std::ofstream::out dan std::ofstream::trunc sama dengan yg ios tadi dan itu jg tdk ush diketik
    std::ofstream fileDana ("test3.txt", std::ofstream::app);

    fileSaya << "halo yg disana" << std::endl;
    fileAku << "halo yg disini" << std::endl;
    fileDana << "hehehe\n" << std::endl;

    fileSaya.close();
    fileAku.close();
    fileDana.close();
    
    return 0;
}
