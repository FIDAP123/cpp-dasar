/*
    Latihan 22 Overloading pada function, atau menimpa fungsi :
    1.  Overloading artinya menimpa maksutnya kita membuat nama fungsi yang sama hanya saja argumen harus berbeda, 
        misalkan jika fungsi pertama berargumen 3 maka kita bisa membuat fungsi yang sama dan argumen yang sama tapi 
        argumen tersebut harus kurang dari fungsi pertama tadi yaitu kurang dari 3
*/

#include<iostream>

int volume_kotak(double p, double l, double t)//ini merupakan basic function
//disini input yg kita masukkan di int main() akan diproses kesini dan sesuai tipe data yang kita masukkan diatas maka kita bisa memasukkan input tipe data double
{
    return p*l*t;//lalu input tersebut akan di kalikan sesuai perintah disini, dan ketika fungsi ini dikembalikan agar tahu hasilnya maka tipe datanya akan berubah atau ditimpa atau overloading, sehingga hasilnya bukann berupa bilangan desimal
}

int volume_kotak(double s)//ini adalah overloading function karena nama fungsinya sama
{
    return s*s*s;
}

int main(int argc, char const *argv[])
{
    std::cout << "volume kotak = " << volume_kotak(2,4,5) << std::endl;//disini ketika menuliskan fungsinya maka kita bisa memilih untuk mengisi satu argumen saja sesuai fungsi di atas atau menuliskan 3 argumen sesuai fungsi diatas
    std::cout << "volume kotak = " << volume_kotak(2.4,3.7,4.8) << std::endl;
    std::cout << "volume kotak = " << volume_kotak(6) << std::endl;
    std::cout << "volume kotak = " << volume_kotak(2.2) << std::endl;

    return 0;
}
