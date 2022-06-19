/*
Latihan 8 Switch Case :
1.  Cara kerjanya hampir sama seperti if else dan elif yg berbeda adalah switch case 
    akan mengeksekusi program dibawahnya sampai akhir,
2.  Untuk mempermudah kita bisa menggunakan break, break merupakan bagian dari control
    flow, yg fungsinya untuk mengatur alur
*/
#include <iostream>

int main()
{
    int a, b;

    std::cout << "masukkan angka = ";
    std::cin >> a;

    switch ( a <= 3)//statement atau pernyataan untuk menyatakan variable bisa juga 
    //sebagai pengganti if else tapi kurang di sarankan
    {
    case true://case berarti menyatakan kondisi lalu true yg berarti benar, maksutnya 
    //tampilkan hasil benar dari statement boolean diatas lalu eksekusi program yang 
    //di bawahnya
        std::cout << "angka = benar\n";
    
    break;//break atau memutus, artinya memutus jalur dari case true ke false karena 
    //sistem switch case jika diatas case itu benar maka case yg bawah akan di eksekusi
    //semua
    case false://Ketika menulis case harus menyertakan ":" yg artinya sebagai berikut
        std::cout << "angka = salah \n";
    }
    std::cout << "masukkan angka = ";
    std::cin >> b;
    switch (b)//statement
    {
    case 1:
        std::cout << "hasil 1 = " << b << std::endl;
    case 2:
        std::cout << "hasil 2 = " << b << std::endl;
    case 3:
        std::cout << "hasil 3 = " << b << std::endl;
    case 4:
        std::cout << "hasil 4 = " << b << std::endl;
    case 5:
        std::cout << "hasil 5 = " << b << std::endl;
        break;//berguna agar nilai salah tidak di eksekusi
    default:
        std::cout << "default" << std::endl;//default atau tidak ditemukan, ini berguna
        //sebagai nilai salah atau nilai yang tidak ada pada kondisi atau case diatas
    }
    return 0;
}
