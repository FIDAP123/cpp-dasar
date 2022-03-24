/*
    Latihan 27 Array :
    1.  Array adalah kumpulan data
    2.  didalam Array terdapat batas yang berguna untuk perhitungann, batas ini biasanya berupa memori
*/

#include<iostream>
#include<limits>

int main(int argc, char const *argv[])
{
    int nilai[3];

    std::cout << "di memori nilai[0] = " << &nilai[0] << " nilainya = " << nilai[0] << std::endl;//&nilai[0] adalah batas awal array
    std::cout << "di memori nilai[1] = " << &nilai[1] << " nilainya = " << nilai[1] << std::endl;
    std::cout << "di memori nilai[2] = " << &nilai[2] << " nilainya = " << nilai[2] << std::endl;
    std::cout << "di memori nilai[3] = " << &nilai[3] << " nilainya = " << nilai[3] << std::endl;//disini terdapat peringatan karena array yg di deklarasikan hanya sampai batas index memori ke 3, yg artinya kita bisa menyimpan value dari index 0 sampai 2, untuk index 3 hanya berupa memori yang merupakan batas akhir array
    std::cout << "di memori nilai[4] = " << &nilai[4] << " nilainya = " << nilai[4] << std::endl;//disini terdapat peringatan yg mungkin akan berbahaya karena index yg kita buat melebihi dari deklarasi index diatas sehingga ketika kita menampilkan ini yang tampil data memori acak yang ada di sebelah array yg sudah kita deklarasikan yaitu dengan index 3
    std::cout << "di memori nilai    = " << &nilai << " nilainya = " << nilai << std::endl;// disini variable nilai hanya mempunyai alamat karena dia hanya berupa batas array yang belum mempunyai index yg berguna sebagai penyimpanan memorinya
    std::cout << std::endl; 
    
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 0;//disini kita bisa memasukkan memori ap saja tergantung tipe data array yg kita tulis sebagai index diatas

    std::cout << "di memori nilai[0] = " << &nilai[0] << " nilainya = " << nilai[0] << std::endl;
    std::cout << "di memori nilai[1] = " << &nilai[1] << " nilainya = " << nilai[1] << std::endl;
    std::cout << "di memori nilai[2] = " << &nilai[2] << " nilainya = " << nilai[2] << std::endl;
    std::cout << std::endl; 
    
    int *ptr = nilai;//disini kita membuat pointer yg berisi memory dari array nilai yang punya tipe data integer
    *(ptr+2)=6;//ini artinya kita akan mengubah tipe data array dengan index yg ke 2 dengan memakai pengalokasian memori dengan pointer lalu diubah ke angka 6

    nilai[1] = 2;//atau disini kita bisa mengubahnya langsung

    std::cout << "di memori nilai[0] = " << &nilai[0] << " nilainya = " << nilai[0] << std::endl;
    std::cout << "di memori nilai[1] = " << &nilai[1] << " nilainya = " << nilai[1] << std::endl;
    std::cout << "di memori nilai[2] = " << &nilai[2] << " nilainya = " << nilai[2] << std::endl;
    std::cout << "di memori nilai[3] = " << &nilai[3] << " nilainya = " << nilai[3] << std::endl;//disini terdapat peringatan karena array yg di deklarasikan hanya sampai batas index memori ke 3, yg artinya kita bisa menyimpan value dari index 0 sampai 2, untuk index 3 hanya berupa memori yang merupakan batas array
    std::cout << "di memori nilai[4] = " << &nilai[4] << " nilainya = " << nilai[4] << std::endl;//disini terdapat peringatan yg mungkin akan berbahaya karena index yg kita buat melebihi dari deklarasi index diatas sehingga ketika kita menampilkan ini yang tampil data memori acak yang ada di sebelah array yg sudah kita deklarasikan yaitu dengan index 3
    std::cout << "di memori nilai    = " << &nilai << " nilainya = " << nilai << std::endl;// disini variable nilai hanya mempunyai alamat karena dia hanya berupa batas array yang belum mempunyai index yg berguna sebagai penyimpanan memorinya

    std::cout << "jumlah ukuran array dari nilai = " << sizeof(nilai) << " byte" << std::endl;
    std::cout << "jumlah ukuran memori dari array nilai = " << sizeof(nilai)/sizeof(int) << " byte" << std::endl;

    return 0;
}
