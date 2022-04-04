/*
    Latihan 34 Komparasi String atau Perbandingan :
    1.  Untuk komparasi atau perbandingan paling bagus memakai string
    2.  jika kita membandingkan atau mengkomparasi dengan char maka kita hanya bisa membandingkannya dengan string saja
    3.  cin hanya bisa menyimpan 1 kata, kita tidak bisa menuliskan 2 kata yg mana 2 kata itu pasti disertai spasi, 
        karena sistem hanya akan menampilkan 1 kata lalu untuk kata yg ketua masih tersimpan di cin dan ketika kita 
        membuat cin kedua maka kata kedua akan langsung muncul ketika kita memanggil
*/
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    char char_kata1 [4] = {'s','a','p','i'};
    char char_kata2 [4] = {'s','a','p','i'};
    std::string string_kata1 = "sapi";
    std::string input, tebak;
    tebak = "beni";
    bool program = true;
    
    if (char_kata1 == "sapi")//disini untuk char kita tidak bisa membandingkannya langsung harus dengan variable dari string saja
    {
        std::cout << "bisa1" << std::endl;
    }
    if (char_kata1 == char_kata2)//disini jg sama dengan diatas untuk char kita tidak bisa membandingkannya langsung harus dengan variable dari string saja
    {
        std::cout << "bisa2" << std::endl;
    }
    if (char_kata1 == string_kata1)//disini char bisa menjadi pembanding atau dibandingkan hanya dengan variable dari string
    {
        std::cout << "bisa3" << std::endl;
    }
    
    if (string_kata1 == char_kata1)
    {
        std::cout << "bisa4" << std::endl;
    }
    if (string_kata1 ==  "sapi")//string variable ini bisa dibandingkan dengan char atau string tanpa variable
    {
        std::cout << "bisa5" << std::endl;
    }
   
    std::cout << std::endl;
    
    std::cout << "Program Tebak Nama : " << std::endl;
    
    while (program)// disini variable program bernilai true jadi looping akan terus berlanjut, cara menghentikannya adalah menggantikan value variable program dengan false maka looping akan berhenti karena syarat tidak terpenuhi atau sudah terpenuhi
    {
        std::cout << "Tebak nama = ";
        std::cin >> input;//disini kita hanya bisa menyimpan kata saja dalam cin, kita tidak bisa memasukkan kalimat karena dengan kita memasukkan kalimat yg mana ada spasi disana maka sistem akan menyimpan kata kedua setelah spasi untuk cin kedua
        if (input == tebak)
        {
            std::cout << "tebakan anda benar" << std::endl;
            program = false;
        }
        else
        {
            std::cout << "tebakan anda salah" << std::endl;
        }
        std::cout << "Program selesai" << std::endl;
    }


    return 0;
}
