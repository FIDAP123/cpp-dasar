/*
    Latihan 22 Overloading pada function, atau menimpa fungsi :
    1.  Overloading artinya menimpa maksutnya kita membuat nama fungsi yang sama hanya saja argumen harus berbeda, 
        misalkan jika fungsi pertama berargumen 3 maka kita bisa membuat fungsi yang sama dan argumen yang sama tapi 
        argumen tersebut harus kurang dari fungsi pertama tadi yaitu kurang dari 3
*/

#include<iostream>

int volume_kotak(double p, double l, double t)//ini merupakan basic function
{
    return p*l*t;
}

int volume_kotak(double s)//ini adalah overloading function karena nama fungsinya sama
{
    return s*s*s;
}

int main(int argc, char const *argv[])
{
    std::cout << "volume kotak = " << volume_kotak(2,4,5) << std::endl;//disini ketika menuliskan fungsinya maka kita bisa memilih untuk mengisi satu argumen saja sesuai fungsi di atas atau menuliskan 3 argumen sesuai fungsi diatas
    std::cout << "volume kotak = " << volume_kotak(6) << std::endl;

    return 0;
}
