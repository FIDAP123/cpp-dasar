/*
Tipe data dan fungsi : 
1.  setiap tipe data di C++ mempunyai batasan penyimpanan berupa byte 1 byte sama 
    dengan 8 bit, dalam satuan bit ini berisi bilangan biner yg berisi 1 dan 0 yg mana 
    jika kita tidak menuliskan sebagai unsigned (tidak bertanda) maka 1 bit ini akan 
    diisi (+-) bukan bilangan biner, disini kita akan menghitung penyimpanan yg bs 
    ditampilkan dari tipe data
2.  satuan penyimpanan adalah byte jadi jika ada tipe data yang kurang dari 1 byte 
    (misal dalam bit) maka yg akan ditampilkan tetap 1 byte
*/
#include <iostream>
#include <limits>


int main()
{
    int angka;//deklarasi untuk variable "angka" dengan tipe datanya ditulis yaitu 
    //integer

    angka = 1;//variable dan datanya, krn ini masuk dalam variable integer maka data 
    //harus berisi bilangan bulat

    std::cout << angka << std::endl;//menampilkan data yang sudah disimpan dalam 
    //variable "angka"
    std::cout << sizeof(angka) << " byte" << std::endl;//sizeof berfungsi untuk 
    //mengetahui seberapa besar sih variable angka ini bisa disimpan data(deklarasi 
    //dari variable angka adalah integer maka sama saja jika kita mengganti 
    //"sizeof(angka)" menjadi "sizeof(int)"). saya menuliskan kalimat " byte" yg 
    //bertipe data string agar sebagai satuan ukurannya.
   
    std::cout << "------------|String|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(std::string) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<std::string>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<std::string>::min() << " byte\n" << std::endl;
  //string tidak bisa di hitung jumlah data maksimal dan minimalnya 
  //std::cout << "maksimal = " << std::numeric_limits<unsigned std::string>::max() << " byte\n";
  //std::cout << "minimal = " << std::numeric_limits<unsigned std::string>::min() << " byte\n" << std::endl;

    std::cout << "------------|char|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(char) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<char>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<char>::min() << " byte\n " << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned char>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned char>::min() << " byte\n" << std::endl;

    std::cout << "------------|bool|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(bool) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<bool>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<bool>::min() << " byte\n " << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned bool>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned bool>::min() << " byte\n" << std::endl;
    
    std::cout << "------------|Float|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(float) << " byte\n";//sama seperti yang 
    //diatas tapi ini tipe datanya berupa float
    std::cout << "maksimal (+) = " << std::numeric_limits<float>::max() << " byte\n"; 
    // mengetahui nilai maksimal dari suatu tipe data dengan menyertakan (+-)
    std::cout << "minimal (-)  = " << std::numeric_limits<float>::min() << " byte\n" << std::endl;
    //sama seperti diatas tapi ini mengetahui nilai minimalnya
    std::cout << "maksimal = " << std::numeric_limits<unsigned float>::max() << " byte\n"; 
    // mengetahui nilai maksimal dari suatu tipe data dengan tidak menyertakan (+-) 
    //jadi semua bit terisi dengan bilangan biner
    std::cout << "minimal = " << std::numeric_limits<unsigned float>::min() << " byte\n" << std::endl;
    //sama seperti diatas tapi ini mengetahui nilai minimalnya
    
    std::cout << "------------|double|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(double) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<double>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<double>::min() << " byte \n" << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned double>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned double>::min() << " byte\n" << std::endl;
    
    std::cout << "------------|short|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(short) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<short>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<short>::min() << " byte\n" << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned short>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned short>::min() << " byte\n" << std::endl;

    std::cout << "------------|integer|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(int) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<int>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<int>::min() << " byte\n" << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned int>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned int>::min() << " byte\n" << std::endl;
    
    std::cout << "------------|long|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(long) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<long>::max() << " byte\n";
    std::cout << "minimal (-)  = " << std::numeric_limits<long>::min() << " byte\n " << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned long>::max() << " byte\n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned long>::min() << " byte\n" << std::endl;

    return 0;
}