/*
    Latihan 39 Nesting Struct atau Struct didalam struct :
    1.  nesting struct atau struct didalam struct adalah variable yg berisi sekumpulan data sama seperti struct cara 
        pemanggilannya namun untuk nesting struct harus diberi tanda titik lagi agar bisa memanggilnya
    2.  kita tidak bisa memanggil nesting struct walaupun sudah kita panggil struct nya namun itu masih berupa struct 
        sehingga kita harus memanggil-nya dengan seperti memanggil struct sebelum
*/

#include<iostream>

struct publisher
{
    std::string nama;
    int tahun_berdiri;
};


struct game
{
    std::string judul;
    publisher publish_1;
    publisher publish_2;
    std::string genre;
    int harga;
};


int main(int argc, char const *argv[])
{
    publisher publish_1, publish_2, publish_3;
    game game_1, game_2;

    //buat publish_1
    publish_1.nama = "rockstar";
    publish_1.tahun_berdiri = 1970;
    
    //buat publish_2
    publish_2.nama = "ea";
    publish_2.tahun_berdiri = 1960;

    //buat publish_3
    publish_3.nama = "Popcap";
    publish_3.tahun_berdiri = 2007;
    
    //buat game_1
    game_1.judul = "gta_sa";
    game_1.publish_1 = publish_1;//untuk publisher disini karena dia masih berupa struct
    game_1.genre = "RPG";
    game_1.harga = 150000;

    //buat game_2
    game_2.judul = "pvz 2";
    game_2.publish_1 = publish_2;
    game_2.publish_2 = publish_3;
    game_2.genre = "Santai";
    game_2.harga = 500000;

    std::cout << "  Game 1 " << std::endl;
    std::cout << std::endl;
    std::cout << "- judul game = " << game_1.judul << std::endl;
    //std::cout << game_1.publish_1 << std::endl;// disini akan error karena variable game_1.publish_1 masih berupa struct dan didalamnya masih ada variable yg belum di keluarkan, jadi kita harus mengeluarkan variable itu dengan menambah titik(.) dan menulis nama-nya
    std::cout << "- nama publisher game = " << game_1.publish_1.nama << std::endl;
    std::cout << "- tahun berdiri publisher game = " << game_1.publish_1.tahun_berdiri << std::endl;
    std::cout << "- nama publisher game = " << game_1.publish_2.nama << std::endl;//disini ketika kita memanggil variable game_1.publish_2.nama maka tidak akan muncul valuenya karena variable tersebut belum dibuat valuenya
    std::cout << "- genre game = " << game_1.genre << std::endl;
    std::cout << "- harga game = " << game_1.harga << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "  Game 2 " << std::endl;
    std::cout << std::endl;
    std::cout << "- judul game = " << game_2.judul << std::endl;
    std::cout << "- nama publisher 1 game = " << game_2.publish_1.nama << std::endl;
    std::cout << "- tahun berdiri = " << game_2.publish_1.tahun_berdiri << std::endl;
    std::cout << "- nama publisher 2 game = " << game_2.publish_2.nama << std::endl;
    std::cout << "- tahun berdiri = " << game_2.publish_2.tahun_berdiri << std::endl;
    std::cout << "- genre game = " << game_2.genre << std::endl;
    std::cout << "- harga game = " << game_2.harga << std::endl;
    
    return 0;
}
