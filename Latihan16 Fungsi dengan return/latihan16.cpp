/*
    Latihan 16 Fugsi dengan return :
    1.  membuat fungsi return yang hampir sama seperti fungsi int main (), 
        fungsi return atau fungsi kembalian adalah fungsi yang akan mengembalikan fungsi itu sendiri sehingga fungsi dapat tampil di konsol dengan perantara variable lain.
    2.  Void di dalam fungsi void itu merupakan deklarasi.
    4.  function dengan return harus ada deklarasi sebagai penentu variable awal.
    5.  penulisan pada fungsi return di fungsi main harus menyertakan cout 
        agar dapat tampil di console.
    6.  untuk fungsi sendiri atau didalam matematika f(x) 
        kita bisa memakai variable x yang sama dalam jika kita mengganti variable f dalam f(x)
*/

#include<iostream>

int kuadrat (int x)
{
    int y ;
    y=x*x;
    return y;
}

int tambah (int a, int b)
{
    int c;
    c = a + b;
    std::cout << "nilai tambah = " << c << std::endl;
    return c;
}


int main(int argc, char const *argv[])
{
    int hasil, input1, input2;
    
    std::cout << "masukkan nilai kuadrat1 = ";
    std::cin >> input1;
    hasil = kuadrat(input1);
    std::cout << "hasil fungsi kuadrat(x) dalam var hasil = " << hasil << std::endl;

    std::cout << "masukkan nilai kuadrat2 = ";
    std::cin >> input2;
    std::cout << "hasil fungsi kuadrat(x) tanpa var hasil = " << kuadrat(input2) << std::endl;
    
    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cout << "masukkan nilai tambah huruf 2 = ";
    std::cin >> input2;
    //hasil = tambah(input1,input2);//untuk inisialisasi variable disini jika kita menuliskan seperti ini dan variable fungsi yang sudah kita simpan dalam hal ini yaitu pada variable hasil maka fungsi akan di tampilkan 2 kali, yang pertama ditampilkan menurut perintah yang ada di dalamnya yaitu std::cout << "nilai tambah = " << c << std::endl; , setelah itu yang kedua akan ditampilkan angkanya saja yaitu hasil dari penjumlahan variable ini yaitu 9, karena variable ini bertipe integer maka hasilnya ada angkanya, dan peulisan kita sepertinya kuran benar,
    tambah(input1,input2);// karena penulisan inisialisasi diatas gagal maka kita tidak bisa menuliskan cout lagi, karena kita sudah memakai cout pada fungsi returnnya,

    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cout << "masukkan nilai tambah huruf 2 = ";
    std::cin >> input2;
    tambah(input1,input2);

    return 0;
}
