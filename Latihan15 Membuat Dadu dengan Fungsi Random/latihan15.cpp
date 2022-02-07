/*
    Latihan 15 Membuat Dadu dengan Fungsi random :
    1.  untuk fungsi random sendiri ada pada library dengan header cstdlib
    2.  fungsi rand() atau generate random number merupakan fungsi yang dibuat 
        dengan Mengembalikan bilangan integral pseudo-random, atau dengan algoritma tertentu yg bs diprediksi jika kita mengamati dengan seksama
    3.  fungsi rand lebih baik diberi tambahan srand() dan menambahkan fungsi 
        dalam library time() yg ada di header libary time.h
    4.  fungsi srand() berfugsi untuk mengubah nilai awal random angkanya, 
        sedangkan fungsi time() berfungsi sebagai pengukur waktu eksekusi dari program ini
    5.  fungsi srand() dan time() berfungsi untuk megacak angka yang muncul 
        dengan algoritma yang bertujuan untuk memulai angka dari waktu eksekusi program yang direkam oleh time() dan diatur sebagai angka awal oleh srand() 
*/

#include<iostream>
#include<cstdlib>
#include<time.h>

int main()
{
    char dadu1, dadu2;

    for (int i = 0; i < 10; i++)
    {
        std::cout << rand() << std::endl;//tanpa srand
    }
  
    while (true)
    {
        std::cout << "lempar dadu1 ? (y/n)";
        std::cin >> dadu1;
        if (dadu1=='y')
        {
        std::cout << rand()%6 << std::endl;
        }
        else if (dadu1=='n')
        {
            break;
        }
        else
        {
            std::cout << "error salah\n";
        }
        
    }
    

    for (int i = 0; i < 10; i++)
    {
        srand(time(0));//dengan srand
        std::cout << rand() << std::endl;
    }
  
    while (true)
    {
        std::cout << "lempar dadu1 ? (y/n)";
        std::cin >> dadu1;
        srand(time(0));
        if (dadu1=='y')
        {
            std::cout << 1+(rand()%6) << std::endl;
        }
        else if (dadu1=='n')
        {
            std::cout << "selesai\n"; 
            break;
        }
        else
        {
            std::cout << "error salah\n";
        }
        
    }
    
    return 0;
}