/*
    latihan20 scope variable(global,local,block) :
    1. a.   variable global adalah variable yang bisa kita panggil dengan perantara fungsi lain, atau dengan menuliskan 
            :: lalu nama variablenya.
       b.   variable global tidak bisa ditimpa variable lain
    2.  variable local adalah variable yang bisa dipanggil di dalam fungsi tersebut jika di luar fungsi main juga bisa 
        dengan menuliskan fungsinya 
    3.  block adalah pembatas {} yang ada di dalam fungsi biasanya dengan perintah for,while,do,if,elseif
*/
#include<iostream>

int x = 50;

int ambil_global()
{
    return x;// ini akan mengambil variable x yang ada di scope global sehingga ketika kita memanggil fungsi ini yang terpanggil adalah variable globalnya
}

int x_local()
{
    int x = 30;
    return x; // disini kita membuat variable baru yang scopenya local di fungsi x_local, dan ketika kita memanggil fugsi ini dari fungsi yang lain maka yang tampil nilai variable dari fungsi ini
}

int main(int argc, char const *argv[])
{
    std::cout << "1. variable scope global = " << x << std::endl;// disini variable global akan tampil karena kita belum menginput variable lokal
    int x = 40;
    std::cout << "2. variable scope local dari fungsi main = " << x << std::endl;//disini variable global x tidak akan tampil karena kita sudah memasukkan variable lokal yang sama yaitu x tetapi nilainya berbeda
    std::cout << "3. variable scope global dari fungsi ambil global = " << ambil_global() << std::endl;//disini kita akan menampilkan dari fungsi ambil global yang di dalam fungsi tersebut terdapat variable x global yang ditaruh didalam fungsi tersebut
    std::cout << "4. variable scope global = " << ::x << std::endl;//::x artinya kita akan mengambil variable x yg paling awal yaitu variable x global
    std::cout << "5. variable scope local dari fungsi x_local = " << x_local() << std::endl;//disini kita akan memanggil fungsi yang didalam fungsi ini terdapat variable lokal sendiri x_local dengan variable x
    std::cout << "6. variable scope local dari fungsi main = " << x << std::endl;//disini masih sama jika kita memanggil x maka yang tampil variable x dari local fungsi ini
    {// ini adalah block yang biasa juga disertai for, if, while,do, tujuannya ketika kita menginput variable yang sama maka variable local yang dipanggil di fungsi ini tidak akan bisa
        std::cout << "7. variable scope local dari fungsi main = " << x << std::endl;//disini masih tetap sama yang tampil variable lokal dari fungsi ini walapun sudah ada block tetapi kita belum menuliskan variable didalam block ini
        int x = 20;
        std::cout << "8. variable scope local block dari fungsi main = " << x << std::endl;// disini akan tampil variable x dari block fungsi ini dan kita tidak bisa memanggil variable lokal dari fungsi ini karena terkena block
        std::cout << "9. variable scope global = " << ::x << std::endl;//nah disini kita masih bisa mengakses variable global tetapi kita tidak bisa mengakses variable lokal dari fungsi ini karena terkena variable block dari fungsi ini jadi yang tampil variable blocknya saja
    }
    std::cout << "10. variable scope local dari fungsi main = " << x << std::endl;//disini variable x yang ada di dalam block tidak akan terpanggil karena kita memanggilnya diluar block tersebut sehingga yang terpanggil adalah variable lokalnya
    std::cout << "11. variable scope global = " << ::x << std::endl;//disini variable global masih bisa dipanggil karina scopenya global berbeda dengan variable local yang diatas ketika terkena block
    std::cout << "12. variable scope local dari fungsi main = " << x << std::endl;
    return 0;
}
