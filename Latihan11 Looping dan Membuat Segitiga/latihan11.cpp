/*
Latihan 11 Looping:
1.  Looping adalah suatu kondisi dimana angka akan terus berputar sampai syarat  
    dari looping ini sudah terpenuhi
2.  di C++ looping ad 3, while loop, do while loop dan for loop
3.  Untuk For di dalam For konsep nya jika kita ingin menampilkan string dengan
    menyerupai segitiga siku" kita bisa menggunakan konsep for didalam for, for kedua akan reset ketika loop pertama sudah dijalankan lalu angka loop pertama akan ditambah 1 kemudian akan masuk loop 2 dan cout akan ditampilkan 2 kali karena angka sudah reset maka di console akan terlihat seperti segitiga siku"
4.  Untuk membuat segitiga lebih baik pakai logika yang terdapat dalam rumus 
    matematika atau fisika, rumus bisa di cari di google.
*/

#include <iostream>
int a,b,c,n;

int main()
{
    
    std::cout << "While Loop mulai" << std::endl;
    a=1;//didalam while loop deklarasi atau variable data yg ingin kita masukkan harus 
    //ditaruh diluar jalurnya
    while (a<=5)
    {
        std::cout << a++ << std::endl;
    }
    std::cout << "selesai While Loop" << std::endl << std::endl;


    std::cout << "Do While Loop mulai" << std::endl;
    b=2;
    do//disini juga sama seperti while loop yg berbeda kita menuliskan aksinya dulu 
    //baru kondisinya atau syaratnya
    {
        std::cout << b++ << std::endl;
    } 
    while (b<=5);
    std::cout << "selesai Do While Loop" << std::endl << std::endl;

    
    std::cout << "For Loop mulai" << std::endl;
    for (c = 3; c <= 5; ++c)//di for loop kita harus menuliskan 3 argumen yaitu terdiri 
    //dari assignment, kodisi atau syarat, dan aksinya
    {
        std::cout << c << std::endl;//disini kita hanya menuliskan output agar di 
        // tampilkan di console 
    }
    std::cout << "selesai For Loop" << std::endl << std::endl;



    /*----------------------Looping dalam Looping-------------------------------*/
    std::cout << "Looping dalam Looping" << std::endl;
    std::cout << std::endl;

    std::cout << "---SEGITIGA SIKU-SIKU dengan spasi---" << std::endl;
    std::cout << std::endl;
    std::cout << "masukkan nilai pola segitiga siku\" 1= ";
    std::cin >> n;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//looping pertama berfungsi sebagai baris
    {
        for (int pola_siku1 = 1; pola_siku1 <= 1+(pola_segitiga-1)*1 ; pola_siku1++)//for yang kedua berguna utuk penambahan segitiga, dan sekaligus penambahan rumus
        {
            std::cout << "* ";//untuk menampilkan ke layar
        }
        std::cout << std::endl;//untuk sebagai akhir line atau eenternya
    }
    
    std::cout << "masukkan nilai pola segitiga siku\" 2= ";
    std::cin >> n;
    int rumus_baris=0+(n-1)*2;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)
    {
        for (int pola_siku2 = 1; pola_siku2 <= rumus_baris; pola_siku2++)
        {
            std::cout << " " ;
        }
        for (int pola_siku2 = 1; pola_siku2 <= 1+(pola_segitiga-1)*1 ; pola_siku2++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
        rumus_baris-=2;
    }
    std::cout << "=====" << n << std::endl;
    
    std::cout << "masukkan nilai pola segitiga siku\" 3= ";
    std::cin >> n;

    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_siku3 = 1; pola_siku3 <= 0+(pola_segitiga-1)*2 ; pola_siku3++)
        {
            std::cout << " ";
        }
        for (int pola_siku3 = n; pola_siku3 >= 1+(pola_segitiga-1)*1 ; pola_siku3--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
       
    std::cout << "masukkan nilai pola segitiga siku\" 4= ";
    std::cin >> n;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
       
        for (int pola_siku4 = n; pola_siku4 >= 1+(pola_segitiga-1)*1 ; pola_siku4--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "---------SEGITIGA SEMBARANG-------" << std::endl;
    std::cout << std::endl;
    std::cout << "masukkan nilai pola segitiga sembarang\" 1= ";
    std::cin >> n;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sembarang1 = 1; pola_sembarang1 <= 0+(pola_segitiga-1)*1 ; pola_sembarang1++)
        {
            std::cout << " ";
        }
        for (int pola_sembarang1 = 1; pola_sembarang1 <= 1+(pola_segitiga-1)*1 ; pola_sembarang1++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    std::cout << "masukkan nilai pola segitiga sebarang\" 2= ";
    std::cin >> n;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sembarang2 = n; pola_sembarang2 >= 1+(pola_segitiga-1)*1 ; pola_sembarang2--)
        {
            std::cout << " ";
        }
        for (int pola_sembarang2 = n; pola_sembarang2 >= pola_segitiga ; pola_sembarang2--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    std::cout << "------SEGITIGA SAMA KAKI--------" << std::endl;
    std::cout << std::endl;
    std::cout << "masukkan nilai pola segitiga sama kaki 1= ";
    std::cin >> n;
    rumus_baris= 0+(n-1)*2;//tidak menulis int lagi karena sudah di deklarasikan sebelumnya
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki1 = 1; pola_sama_kaki1 <= rumus_baris;pola_sama_kaki1++)
        {
            std::cout << " ";
        }
        for (int pola_sama_kaki1 = 1; pola_sama_kaki1 <= pola_segitiga ; pola_sama_kaki1++)
        {
            std::cout << "* ";
        }
        for (int pola_sama_kaki1 = 2; pola_sama_kaki1 <= pola_segitiga ; pola_sama_kaki1++)
        {
            std::cout << "* ";
        }
        rumus_baris -=2;
        std::cout << std::endl;
    }
    
    std::cout << "masukkan nilai pola segitiga sama kaki 2= ";
    std::cin >> n;
    for (int pola_segitiga = 1; pola_segitiga <= n ; pola_segitiga++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki2 = 1; pola_sama_kaki2 <= 0+(pola_segitiga-1)*2; pola_sama_kaki2++)
        {
            std::cout << " ";
        }
        for (int pola_sama_kaki2 = n; pola_sama_kaki2 >= pola_segitiga ; pola_sama_kaki2--)
        {
            std::cout << "* ";
        }
        for (int pola_sama_kaki2 = n-1; pola_sama_kaki2 >= pola_segitiga ; pola_sama_kaki2--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
   
    std::cout << "masukkan nilai pola segitiga sama kaki 3= ";
    std::cin >> n;
    for (int pola_segitiga1 = 1; pola_segitiga1 <= n ; pola_segitiga1++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki2 = 1; pola_sama_kaki2 <= pola_segitiga1 ; pola_sama_kaki2++)
        {
            std::cout << "* ";//untuk menampilkan ke layar
        }
        std::cout << std::endl;
    }
    for (int pola_segitiga2 = 1; pola_segitiga2 <= n ; pola_segitiga2++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki2 = n-1; pola_sama_kaki2 >= pola_segitiga2 ; pola_sama_kaki2--)
        {
            std::cout << "* ";//untuk menampilkan ke layar
        }
        std::cout << std::endl;
    }
    
    std::cout << "masukkan nilai pola segitiga sama kaki 4= ";
    std::cin >> n;
    rumus_baris = 1+(n-1)*2;
    int rumus_segitiga = 0+(n-1)*2;
    int rumus_baris2 = rumus_baris-n;
    for (int pola_segitiga1 = 1; pola_segitiga1 <= n ; pola_segitiga1++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki2 = 1; pola_sama_kaki2 <= rumus_segitiga ; pola_sama_kaki2++)
        {
            std::cout << " ";//untuk menampilkan ke layar
        }
        
        for (int pola_sama_kaki2 = 1; pola_sama_kaki2 <= 1+(pola_segitiga1-1)*1 ; pola_sama_kaki2++)
        {
            std::cout << "* ";//untuk menampilkan ke layar
        }
        rumus_segitiga-=2;
        std::cout << std::endl;
    }
    for (int pola_segitiga2 = 1; pola_segitiga2 <= rumus_baris2 ; pola_segitiga2++)//untuk looping dalam looping kita harus memakai 
    //2 variable untuk menampilkan huruf yang mau kita tampilkan
    {
        for (int pola_sama_kaki2 = 1; pola_sama_kaki2 <= 2+(pola_segitiga2-1)*2 ; pola_sama_kaki2++)
        {
            std::cout << " ";//untuk menampilkan ke layar
        }
        for (int pola_sama_kaki2 = rumus_baris2 ;pola_sama_kaki2 >= pola_segitiga2 ; pola_sama_kaki2--)
        {
            std::cout << "* ";//untuk menampilkan ke layar
        }
        std::cout << std::endl;
    }
    return 0;
}
