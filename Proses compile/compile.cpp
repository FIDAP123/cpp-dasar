/*
Proses compile : 
1. Preposesing terjadi sebelum compiling terjadi, cara mengetahuinya dengan mengetikkan
di CLI "g++ -E (sumber inputan file dalam ekstensi ".cpp") -o (sumber outputan file 
dengan menuliskan ekstensi ".p"). g++ -E artinya tampilkan preprosesing dengan perintah
atau command g++ lewat compiler yang digunakan (MINGW)
2. Compiling terjadi ketika sesudah proses preposesing terjadi, compiling berfungsi 
untuk mengubah file preposesing dari source code menjadi file obj
3. Obj file terjadi ketika sudah proses compiling, Obj file berupa machine code, cara
menampilkan proses tersebut dengan menuliskan di CLI 
"g++ -c .\*.cpp -o prosescompile.o", -c artinya mengcompile file dalam bentuk mentahan.
Sehabis di compile file tersebut tidak bisa dijalankan karena masih bentuk file obj yg
belum disatukan menjadi file yg bs di eksekusi di windows yaitu .exe, cara melihat file
mentahan tersebut yaitu dengan menuliskan di CLI "objdump -d .\prosescompile.o", 
artinya Disasamble atau bongkar dan perlihatkan file objdump yang ada di file 
prosescompile.o
4. linking  terjadi ketika sesudah pengubahan file ke obj, dikarenakan file obj itu
ada banyak karena satu file obj berisi satu library maka dengan liking file obj bisa
disatukan dan dibentuk sebuah ekstensi file .exe, contoh nya bisa dilihat dibawah
*/
#include<iostream>

using namespace std;

int tambah (int a, int b);
//ini harusnya fungsi tapi karena badannya di pisah jadinya ditambah kan ";" untuk 
//penutup, fungsi sebelumnya ada di tambah jadi untuk liking nanti kita akan sambung
//lewat file objnya dengan cara jadikan 2 file ini menjadi obj lalu menyatukannya 
//dengan menuliskan di CLI "g++ (source file obj yg pertama) (source file obj yg kedua)
//-o (nama file outputnya dalam ekstensi .exe)"

int main()
{
    cout<< tambah(2,8)<< endl;
    
    return 0;
}