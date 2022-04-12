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
    std::cout << "maksimal (+) = " << std::numeric_limits<std::string>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<std::string>::min() << " \n" << std::endl;
  //string tidak bisa di hitung jumlah data maksimal dan minimalnya 
  //std::cout << "maksimal = " << std::numeric_limits<unsigned std::string>::max() << " \n";
  //std::cout << "minimal = " << std::numeric_limits<unsigned std::string>::min() << " \n" << std::endl;

    std::cout << "------------|char|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(char) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<char>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<char>::min() << " \n " << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned char>::max() << " \n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned char>::min() << " \n" << std::endl;

    std::cout << "------------|bool|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(bool) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<bool>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<bool>::min() << " \n " << std::endl;
    //std::cout << "maksimal = " << std::numeric_limits<unsigned bool>::max() << " \n"; 
    //std::cout << "minimal = " << std::numeric_limits<unsigned bool>::min() << " \n" << std::endl;
    
    std::cout << "------------|Float|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(float) << " byte\n";//sama seperti yang 
    //diatas tapi ini tipe datanya berupa float
    std::cout << "maksimal (+) = " << std::numeric_limits<float>::max() << " \n"; 
    // mengetahui nilai maksimal dari suatu tipe data dengan menyertakan (+-)
    std::cout << "minimal (-)  = " << std::numeric_limits<float>::min() << " \n" << std::endl;
    //sama seperti diatas tapi ini mengetahui nilai minimalnya
    //std::cout << "maksimal = " << std::numeric_limits<unsigned float>::max() << " \n"; 
    // mengetahui nilai maksimal dari suatu tipe data dengan tidak menyertakan (+-) 
    //jadi semua bit terisi dengan bilangan biner
    //std::cout << "minimal = " << std::numeric_limits<unsigned float>::min() << " \n" << std::endl;
    //sama seperti diatas tapi ini mengetahui nilai minimalnya
    
    std::cout << "------------|double|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(double) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<double>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<double>::min() << "  \n" << std::endl;
    //std::cout << "maksimal = " << std::numeric_limits<unsigned double>::max() << " \n"; 
    //std::cout << "minimal = " << std::numeric_limits<unsigned double>::min() << " \n" << std::endl;
    
    std::cout << "------------|short|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(short) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<short>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<short>::min() << " \n" << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned short>::max() << " \n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned short>::min() << " \n" << std::endl;

    std::cout << "------------|integer|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(int) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<int>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<int>::min() << " \n" << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned int>::max() << " \n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned int>::min() << " \n" << std::endl;
    
    std::cout << "------------|long|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(long) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<long>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<long>::min() << " \n " << std::endl;
    std::cout << "maksimal = " << std::numeric_limits<unsigned long>::max() << " \n"; 
    std::cout << "minimal = " << std::numeric_limits<unsigned long>::min() << " \n" << std::endl;

    std::cout << "------------|size_t|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(size_t) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<size_t>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<size_t>::min() << " \n " << std::endl;
    // std::cout << "maksimal = " << std::numeric_limits<unsigned size_t>::max() << " \n"; 
    // std::cout << "minimal = " << std::numeric_limits<unsigned size_t>::min() << " \n" << std::endl;
    
    std::cout << "------------|ssize_t|-----------\n";
    std::cout << "Jumlah data   = " << sizeof(ssize_t) << " byte\n"; 
    std::cout << "maksimal (+) = " << std::numeric_limits<ssize_t>::max() << " \n";
    std::cout << "minimal (-)  = " << std::numeric_limits<ssize_t>::min() << " \n " << std::endl;
    // std::cout << "maksimal = " << std::numeric_limits<unsigned ssize_t>::max() << " \n"; 
    // std::cout << "minimal = " << std::numeric_limits<unsigned ssize_t>::min() << " \n" << std::endl;
    
    return 0;
}