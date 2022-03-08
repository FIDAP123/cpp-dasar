/*
    Latihan 24 Membuat fungsi rekursif faktorial dan fibonacci
*/
#include<iostream>

int faktorial(int a);
void p_faktorial(int a);

int fibonacci (int a);
void p_fibonacci(int a);

int main(int argc, char const *argv[])
{
    int a;

    std::cout << "masukkan nilai faktorial = ";
    std::cin >> a;
    std::cout << "\n";

    p_faktorial(a);
    p_fibonacci(a);
    
    return 0;
}

int faktorial(int a)
{
    if (a==1)
    {
        std::cout << a << "= " ;
        return a;
    }
    else
    {
        std::cout << a << "*";
        return a * faktorial(a-1);
        
    }
}

void p_faktorial(int a)
{
    std::cout << a << "!= " << faktorial(a) << std::endl;
}

int fibonacci (int a)
{
    int b,c,d;
    
    b=0;
    c=1;
    if (a==1)
    {
        std::cout << d << "," ;
        return d;
    }
    else
    {  
        d= b+c;
        std::cout << d << ",";
        d= b + c + fibonacci(a-1);
        b= d;
        c = b + c;
        return d;
    }
    
}
void p_fibonacci(int a)
{
    std::cout << "fibonacci "<< a << " = " << "0,1,"<< fibonacci(a) << std::endl;
}