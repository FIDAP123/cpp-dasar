/*
    Latihan 47 Membaca file eksternal (ifstream) :
    1.  standard library ifstream berguna untuk membaca file dengan menyimpannya di suatu variable, dan jika kita ingin 
        menampilkannya di console maka kita bisa memanggilnya dengan cout
    2.  untuk membaca 1 file utuh maka kita bisa memakai while dan menampilkannya satu persatu sampai semua dari file yg 
        ingin kita baca bisa kita tampilkan di console
*/

#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{
    std::ifstream file_saya;
    std::string output_var, output_while1, output_while2, buffer, buffer_while2,nama;
    bool is_table = false;
    int no;
    
    file_saya.open("latihan47.txt");
    std::cout<< "membaca file dengan menaruhnya di 1 variable dengan 1 kata :" << std::endl;
    file_saya >> output_var;//disni file hanya akan tampil 1 kata saja karena yang disimpan di variable output_var hanya 1 kata saja, jika kita ingin menyimpan 1 baris maka kita harus memakai fungsi std::getline()
    std::cout << output_var << std::endl;//cara menampilkan di console adalah seperti ini yaitu memakai cout
    file_saya >> output_var;
    std::cout<< output_var << std::endl;
    file_saya.close();// disini ketika kita sudah selesai membuka dan membaca file didalamnya maka file tersebut harus ditutup dengan memakai fungsi close(), agar tidak ada tabrakan ketika kita membuka filenya lagi
    
    std::cout << std::endl;

    file_saya.open("latihan47.txt");
    std::cout<< "membaca file dengan menaruhnya di 1 variable dengan 1 baris :" << std::endl;
    std::getline(file_saya,output_var);//disini akan tampil 1 baris karena kita memakai fungsi std::getline()
    std::cout<< output_var << std::endl;//disini juga sama jika kita mau menampilkannya diconsole yaitu dengan memakai cout
    std::getline(file_saya,output_var);
    std::cout<< output_var << std::endl;
    file_saya.close();
    
    std::cout << std::endl;

    file_saya.open("latihan47.txt");
    std::cout<< "membaca file sampai 1 baris tertentu dengan memakai while loop :" << std::endl;
    while (!is_table)// disini kita memakai while tujuannya agar kita bisa membaca file dari awal sampai yg ditentukan dengan mudah memakai looping
    {
        std::getline(file_saya,buffer);
        output_while1.append("\n" + buffer);// disini tujuan fungsi append adalah untuk menggabungkan variable agar file yg kita tampilkan di console dapat terbaca utuh
        if (buffer == "table :")//disini tujuan ada if adalah agar looping bisa berhenti di 1 baris yg kita ingikan
        {
            is_table=true;
        }  
    }
    std::cout << output_while1 << std::endl;//ini berguna agar kita bisa melihat atau membaca file yg sudah kita simpan di satu variable
    file_saya.close();
    
    file_saya.open("latihan47.txt");
    std::cout<< "membaca file dari 1 baris tertentu sampai akhir dengan memakai while loop :" << std::endl;
    while (!file_saya.eof())//fungsi eof adalah end of file atau file akhirnya artinya ulang sampai syarat perulangan terpenuhi syarat disini yaitu bukan akhir dari file berarti looping akan keluar jika sudah menyentuh akhir file
    {
        std::getline(file_saya,buffer_while2);//disini saya hanya mengambil satu line saja untuk disimpan di satu variable secara bergantian karena hanya igin menampilkan beberapa saja sesuai algoritma yg saya taruh dibawah
        if (buffer_while2 >= "table :")
        {
            std::getline(file_saya,buffer_while2);
            std::cout << buffer_while2 << std::endl;
            
            while (!file_saya.eof())
            {
                file_saya >> no;//disiini karena bentuk filenya table kita bisa memakai tipe data lain yg bisa kita simpan di variable sesuai tipe datanya, disini variable no bertipe int yg berarti yg disimpan hanya yg bertipe int
                file_saya >> nama;//berbeda dengan yg diatas disini variable nama bertipe string yg berarti yg disimpan hanya 1 kata saja
                std::cout << no << "\t" << nama << std::endl;//disini kita tinggal menampilkan kedua tipe data yg sudah ada variablenya masing" dan sudah ada isinya tinggal kita atur tampilan yg terlihat diconsole seperti ap
            }
        }
        
       // std::cout << output_while2 << std::endl;
    }
    file_saya.close();
    std::cout << std::endl;
    
    return 0;
}
