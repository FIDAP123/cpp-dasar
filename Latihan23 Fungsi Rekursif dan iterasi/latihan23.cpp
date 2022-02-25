/*
    Latihan 23 Recursion function atau fungsi pengulangan :
    1.  Recursion Function adalah fungsi yang memanggil dirinya sediri sehigga akan menimbulkan pengulangan
    2.  perbedaan antara fungsi yang memakai iterasi dan fungsi rekursif adalah, untuk iterasi fungsi akan berjalan 
        runtun mulai dari depan, berbeda dengan iterasi fungsi rekursif bisa berjalan dengan menuliskan syarat dahulu di akhir barulah fungsi akan di eksekusi mundur
*/
#include<iostream>

long perkalian_iterasi(int a, int b)
{
    int hasil;
    for (int i = 1; i < b; i++)
    {
        hasil = a + a;
    }
    return hasil;
}

int pangkat_iterasi(int a, int b)
{
    for (int i = 1; i < b; i++)
    {
        a = a*a;
    }
    return a;
}

int perkalian_rekursif(int a, int b)
{
    int hasil;
    if (b<=0)
    {
        hasil=0;
        return hasil;//ini gunanya untuk mengisi nilai dari fungsi yang direkursif atau diulang pada saat syarat if terpenuhi akibatnya fungsi bisa dijalankan
    }
    else
    {
        hasil = a + perkalian_rekursif(a,b-1);
        return hasil;
    }
    
}

int pangkat_rekursif(int a, int b)
{
    if (b==1)
    {
        return a;
    }
    // else if (b>1)
    // {
    //     return a*pangkat_rekursif(a,b-1);//perintah ini bisa dilakukan tapi akan menimbulkan warning karena perintah 
                                            //ini kurang cocok, perintah yang lebih cocok hanya memakai if dan else
    // }
    else
    {
        return a*pangkat_rekursif(a,b-1);
    }
}

void p_iterasi(int a, int b)
{
    std::cout << "---------------Iterasi--------------" << std::endl;
    std::cout << "pangkat iterasi = " << pangkat_iterasi(a,b) << std::endl;
    std::cout << "perkalian iterasi = " << perkalian_iterasi(a,b) << std::endl;
}

void p_rekursif(int a, int b)
{
    std::cout << "---------------Rekursif--------------" << std::endl;
    std::cout << "pangkat rekursif = " << pangkat_rekursif(a,b) << std::endl;
    std::cout << "perkalian rekursif = " << perkalian_rekursif(a,b) << std::endl;
}

int main(int argc, char const *argv[])
{
    int a,b;
    std::cout << "masukkan nilai a= ";
    std::cin >> a;
    std::cout << "\nmasukkan nilai b= ";
    std::cin >> b;


    p_iterasi(a,b);
    p_rekursif(a,b);
    
    return 0;
}