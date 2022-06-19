/*
    https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
    Definisi int main() :
    1.  int main () merupakan function yang berfungsi untuk menjalankan source code yang kita tulis
    2.  Untuk C++ sendiri source code harus di buat dengan function berbeda dengan python yang bisa dijalankan tanpa 
        function
    3.  int main () sendiri merupakan function singkatan dari int main(int argc, char** argv) atau int main(int argc, 
        char const *argv[]) tujuan dibuat singkat agar programer tidak harus menuliskan banyak, dan sebenarnya lebih bagus tidak menulis singkatanya agar mengerti alurnya, dan yang namanya function tidak boleh kosong jadi kita tidak menyingkatnya justru lebih benar
    4.  int main(int argc, char const *argv[]) atau int main(int argc, char** argv) merupakan gerbang pembuka dan return 
        0 merupakan gerbang penutup karena argc atau arguments count sendiri merupakan jumlah argumen yang dijalankan dengan berbentuk tipe data integer dan argv atau arguments vector yang merupakan isi dari arguments yang dijalankan itu atau isi dari argc return 0 sendiri artinya mengembalikan nilai int argc tadi menjadi 0 supaya program berhenti
    5.  Bila program kita error maka return akan berubah menjadi lebih dari 0, angka itu berasal dari int argc yang kita 
        tulis functionnya di int main, dengan begitu program akan berhenti dan akan timbul peringatan error dari sistem, karena program kita tidak bisa selesai, dan semua hal itu berlangsung di compiling karena untuk c++ sendiri merupakan bahasa compiler 
*/
#include <iostream>

int main(int argc, char** argv) //bisa ditulis int main() atau int main(int argc, char const *argv[])
{
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i <argc; ++i) 
    {
        std::cout << argv[i] << std::endl;// ini menunjukkan alur program int main dengan argc sebagai jumlah argumen yang sudah ditulis di dalam argumen vektor atau argv, vektor hampir sama dengan char
    }
    
    return 0;//mengembalikan nilai argc ke nol agar program dapat di eksekusi
}