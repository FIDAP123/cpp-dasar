/*
    Latihan 44 Bitwise Operator :
    1.  b
*/

#include<iostream>
#include<bitset>

void print_binary( short var, std::string nama)
{
    std::cout << nama << " = " << std::bitset<8>(var) << std::endl;
}

int main(int argc, char const *argv[])
{
    unsigned short input_1, input_2, hasil;

    std::cout << "Silahkan masukkan input_1 = ";
    std::cin >> input_1;
    std::cout << "Silahkan masukkan input_2 = ";
    std::cin >> input_2;
    
    std::cout << "~ bitwise not : " << std::endl;
    print_binary(input_1,"input_1");
    hasil = ~input_1;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;
    
    print_binary(input_2,"input_2");
    hasil = ~input_2;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "& bitwise and : " << std::endl;
    print_binary(input_1,"input_1");
    print_binary(input_2,"input_2");
    hasil = input_1 & input_2;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "| bitwise or : " << std::endl;
    print_binary(input_1,"input_1");
    print_binary(input_2,"input_2");
    hasil = input_1 | input_2;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "^ bitwise xor : " << std::endl;
    print_binary(input_1,"input_1");
    print_binary(input_2,"input_2");
    hasil = input_1 ^ input_2;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "<< bitwise shift left 2 : " << std::endl;
    print_binary(input_1,"input_1");
    hasil = input_1 << 2;
    print_binary(hasil,"hasil  ");

    std::cout << "<< bitwise shift left 4 : " << std::endl;
    print_binary(input_2,"input_2");
    hasil = input_1 << 4;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << ">> bitwise shift right 1 : " << std::endl;
    print_binary(input_1,"input_1");
    hasil = input_1 >> 1;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;

    std::cout << ">> bitwise shift right 3 : " << std::endl;
    print_binary(input_2,"input_2");
    hasil = input_1 >> 3;
    print_binary(hasil,"hasil  ");
    std::cout << std::endl;

    return 0;
}
