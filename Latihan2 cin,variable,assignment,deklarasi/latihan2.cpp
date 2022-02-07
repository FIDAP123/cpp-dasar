/*
Latihan 2 cin,variable, assignment, deklarasi
1.  cin adalah console input, maksutnya console akan meminta input dari user
2.  variable biasanya berupa huruf dan untuk C++ variable harus disertai dengan 
    tipe datanya untuk mendeklarasika variable itu dulu, dan variable sebagai tempat 
    penyimpanan data dari data yg kita masukkan
*/
#include<iostream>

using namespace std;

int main()
{
    int angka1; // ini adalah variable, aturan di C++ untuk variable harus disertai
    //deklarasi, deklarasi disini yaitu "int", deklarasi berguna ketika variable belum 
    //dinyatakan hasilnya didalamnya
    int angka2 = 2;//ini assignment artinya menempatkan, atau lebih tepatnya 
    //menempatkat variable output tanpa input dari cosole, berbeda dengan deklarasi 
    //diatas 
    
    cout << "masukkan angka: ";//kita harus menuliskan output ke console agar user 
    //mengerti apa yg harus di lakukan atau diketikkan
    cin >> angka1;//ini artinya masukkan input di console untuk variable angka1
    cout << angka1 << endl;//menampilkan input yg sudah ditulis diatasnya
    cout << angka2 << endl;//menampilkan output dari assignmen variable

    return 0;
}