/*
Latihan 10 Operator assignment, self manipulation, increment&decrement
1.  Operator Assignment adalah operator aritmatika yang bisa di aplikasikan di 
    assignment, penggunaannya sama dengan self manipulation
2.  Increment & Decrement fungsinya sama seperti Operator Assignment dan Self 
    manipulation, perbedaannya increment dan decrement bisa langsung ditampilkan di 
    conlose.
3.  Variable didalam Increment dan Decrement bisa diletakkan di awal yaitu post 
    increment/decrement dan bisa diletakkan di akhir yaitu preincrement, jika variable
    terletak diawal atau post increment maka variable akan ditampilkan dahulu setelah
    itu akan ditambahkan 1, jika pre increment maka kebalikannya
3.  a.  rumus self manipulation adalah:
        variable = variable operator ekspresi;
            a    =     a        +       1;
    b.  rumus operator assignment adalah:
        variable operator= ekspresi;
            b           +=    5;
    c.  rumus Post Increment/Decrement
        variable++/--
               c++;
               c--;
    d.  rumus Pre Increment/Decrement
        ++/--variable
           ++d;
           --d;
*/
#include<iostream>

int main()
{
    int b = 1;
    int a = 2;//assignment
    int c = 4;
    int d = 7;

    std::cout << "a sebelum self maipulation + = " << a << std::endl;
    a = a + 1;//self manipulation atau memanipulasi diri sendiri maksutnya kita 
    //memanipulasi variable a dengan cara menambah variable a dengan 1 sehingga 
    //variable a menjadi ditambah dengan 1
    std::cout << "a sesudah self maipulation + = " << a << std::endl;
    a = a / 3;
    std::cout << "a sesudah self maipulation / = " << a << std::endl;
    a = a * 3;
    std::cout << "a sesudah self maipulation * = " << a << std::endl;
    a = a % 3;
    std::cout << "a sesudah self maipulation % = " << a << std::endl;
    a = a - 3;
    std::cout << "a sesudah self maipulation - = " << a << std::endl << std::endl;

    std::cout << "b sebelum assignment operator + = " << b << std::endl;
    b += 5;//ini adalah assignment operator, sama seperti yg diatas
    std::cout << "b sesudah assignment operator + = " << b << std::endl;
    b /= 5;
    std::cout << "b sesudah assignment operator / = " << b << std::endl;
    b *= 5;
    std::cout << "b sesudah assignment operator * = " << b << std::endl;
    b %= 5;
    std::cout << "b sesudah assignment operator % = " << b << std::endl;
    b -= 5;
    std::cout << "b sesudah assignment operator - = " << b << std::endl << std::endl;

    std::cout << "c sebelum post increment ++ = " << c << std::endl;
    std::cout << "c saat post increment ++ = " << c++ << std::endl;//variabel akan 
    //ditampilkan di console dulu sebelum di increment atau decrement
    std::cout << "c sesudah post increment ++ = " << c << std::endl;
    std::cout << "c sebelum post decrement -- = " << c << std::endl;
    std::cout << "c saat post decrement -- = " << c-- << std::endl;
    std::cout << "c sesudah post decrement -- = " << c << std::endl << std::endl;

    std::cout << "d sebelum pre increment ++ = " << d << std::endl;
    std::cout << "d saat pre increment ++ = " << ++d << std::endl;//variable akan 
    //di increment atau decrement dulu baru ditampilkan di console
    std::cout << "d sesudah pre increment ++ = " << d << std::endl;
    std::cout << "d sebelum pre decrement -- = " << d << std::endl;
    std::cout << "d saat pre decrement -- = " << --d << std::endl;
    std::cout << "d sesudah pre decrement -- = " << d << std::endl << std::endl;
    
    return 0;
}
