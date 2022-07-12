/*
    Latihan 33 String & Operasi pada String : 
    1.  kita bisa membuat string dengan menyusun char atau kita bisa langsung memakai library string
    2.  kita bisa mengganti beberapa huruf atau kata didalam satu variable string dengan menggunakan index, karena string 
        merupakan kumpulan dari char
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string input;
    char huruf[5] = {'r','u','m','a','h'};// untuk array char ini kita sulit menambahkan dan ini fix tidak boleh diubah di bawahnya
    std::cout << "menampilkan string dengan char array : "<< std::endl;
    std::cout << huruf << std::endl;
    
    std::cout << std::endl;

    std::cout << "menampilkan string dengan library iostream : "<< std::endl;
    std::string kata_1 = " hallo ";//disini kita menampilkan string dengan library dari iostream
    std::cout << kata_1 << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "menampilkan string dengan library string : "<< std::endl;
    std::string kata_2 (" bayu ");//disini kita memakai library dari string
    std::cout << kata_2 << std::endl;

    std::cout << std::endl;
    
    std::cout << "menampilkan string dengan memasukkan input console atau cin : "<< std::endl;
    std::cout << "silahkan masukkan kata = ";
    std::cin >> input;//disini cin hanya bisa menyimpan kata dan ketika kita memasukkan input dengan 1 kalimat atau disertai spasi maka kata sebelum spasi lah yang akan di simpan
    std::cout << "kata yg anda masukkan adalah = " << input;

    std::cout << std::endl;
    
    std::cout << "menampilkan string dengan mengganti huruf dengan array : "<< std::endl;
    kata_1[1]='e';
    std::cout << "kata yg sudah diganti = " << kata_1 << std::endl;

    std::cout << std::endl;
    
    std::cout << "menampilkan string dengan menyambung variable dengan kalimat atau concatenation : "<< std::endl;
    std::string kata_3 = kata_1 + "boy";
    std::cout << "kata yg sudah disambung = " << kata_3 << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "menampilkan string dengan menggabungkan 2 variable string dan kalimat : "<< std::endl;
    std::string kata_4 = kata_1.append(kata_2 + "jelek");
    std::cout << "kata yg sudah digabung = " << kata_4 << std::endl;

    std::cout << std::endl;
    
    std::string kata_5 = "seksi";
    kata_5 += kata_2 + kata_5 + "ha ha";
    std::cout << "kata yg sudah di self manipulation = " << kata_5 << std::endl;

    return 0;
}
