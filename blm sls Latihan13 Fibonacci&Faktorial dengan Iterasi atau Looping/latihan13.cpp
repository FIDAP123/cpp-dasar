/*
Latihan 13 : membuat deret fibonacci dengan mrnggunakan Loop
1.  Deret Fibonacci merupakan deret aritmatika, dan tentu saja kita harus memakai 
    logika untuk bisa menghitung deret selanjutnya
2.  di dama Deret ini terdapat rumus f(n1) = f1(n-1) - f2(n-2) dan rumus setelahnya 
    f(n2) = f(n1) + f1
*/
#include <iostream>

int main()
{
    int fnDW,fn1DW,fn2DW,nDW,iDW;
    int fnW,fn1W,fn2W,nW,iW;
    int fnF,fn1F,fn2F,nF,iF; 
    
    fn1DW = 1;
    fn2DW = 0;
    iDW = 2;

    fn1W = 1;
    fn2W = 0;
    iW = 2;
    
    fn1F = 1;
    fn2F = 0;
    
    std::cout << "masukkan n di Do While = ";
    std::cin >> nDW;
    std::cout << fn1DW << " ";
    
    std::cout << "---------------Fibonacci--------------------\n";
    std::cout << std::endl;

    do
    {
        fnDW = fn1DW + fn2DW;//untuk sebagai update fnDW
        fn2DW = fn1DW;//untuk sebagai update fn2DW
        fn1DW = fnDW;//untuk sebagai update fn1DW

        std::cout << fnDW << " ";
        iDW++;//sebagai baris loopingnya

    } while (iDW <= nDW);

    std::cout << "\n\n";
    std::cout << "masukkan n di While = ";
    std::cin >> nW;
    std::cout << fn1W << " ";
    
    while (iW <= nW)
    {
        fnW = fn1W + fn2W;
        fn2W = fn1W;
        fn1W = fnW;

        std::cout << fnW << " ";
        iW++;
    }
    
    std::cout << "\n\n";
    std::cout << "masukkan n di For = ";
    std::cin >> nF;
    std::cout << fn1F << " ";
    
    for (iF = 2; iF <= nF; iF++)
    {
        fnF = fn1F + fn2F;
        fn2F = fn1F;
        fn1F = fnF;

        std::cout << fnF << " ";
    }
    
    std::cout << "---------------Faktorial--------------------\n";
    std::cout << std::endl;

    int n, hasil, f1, f2;
    std::cout<< "faktorial = ";
    std::cin >> n;
    std::cout<< n << "! = \n";
    for (int i = 1; i <= n; i++)
    {
        f1=1;
        f2 = f1+1;
        hasil = f2*f1;

    }
    std::cout << hasil;

    return 0;
}
