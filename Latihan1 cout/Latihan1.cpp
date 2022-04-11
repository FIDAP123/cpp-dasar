/*
Latihan 1 C++ : Pegertian awal
1.  C++ merupakan bahasa Compiler atau Compiled Language, yaitu bahasa pemrogrman yg 
    membutuhkan compiler untuk menerjemahkan bahasa pemrograman atau source code
    (kode sumber) ke bahasa mesin, sehingga bahasa ini lebih cepat di proses mesin 
    dibanding bahasa interpreter atau iterpreted language
*/

#include <iostream> //#include adalah kita akan meng-include atau memasukkan file atau 
//standard library dari C++ yaitu iostream

using namespace std; //using namespace adalah untuk mempermudah kita agar kita tidak 
//usah menuliskan namespace di dalam standard library yg sudah kita input contoh std 
//yg klo kita tulis std::

int main()//ini merupakan suatu fungsi, main() berarti menyuruh sistem untuk 
//menjalankan fungsi ini, bisa diartikan int main() merupakan pintu masuk dari fugsi 
//ini

{//suatu fungsi atau function pasti memiliki bodynya biasanya di tulis {}

cout<< "ban" << endl;//terletak di body, cout adalah Console OUT artinya menampilkan 
//program, << ini berarti lanjutan dari cout yang berarti kita ingin menampilkan 
//sesuatu contoh cout<<"halo" ini berarti kita ingin menampilkan string halo ke 
//console lalu pasti dilanjutkan dengan <<endl ini artinya akhiri baris ini lalu buat 
//baris baru dibawahnya, endl adalah end line.

cout<< "bin\n";//kegunaannya sama dengan yang diatas tapi artinya newline atau memulai
//baris baru, dan \n terikat pada aturan string.

cin.get();//kegunannya adalah agar program tidak mengalami flasshing di windows, 
//flashing yaitu penutupan program otomatis ketika memasuki cmd di windows. jika sudah 
//mengetikkan ini maka Program akan tertutup jika kita menekan "Enter" di keyboard

return 0;//ini adalah gerbang penutup dari fungsi int main(), karena fungsi main ini adalah fungsi
//yg harus memakai return, dan nilai yg kita return kan yaitu 0 sesuai dengan tipe data dari fungsi 
//main ini yaitu int

}//penutup sebuah fungsi