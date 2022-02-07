/*
	Latihan 6 Logika Boolean :
	1. untuk mendapatkan NAND, NXOR dan NOR. Maka harus kita beri kurung terlebih
	   dahulu karena kurung artinya mendahulukan program yg akan dieksekusi
	2. Nilai inputan untuk Not harus 1 dan hasilnya 1, jika inputan 2 maka hasilnya 2
    3.  and akan bernilai true atau 1 bila input kedua"nya true atau 1
    4.  or akan bernilai false atau 0 bila input kedua"nya false atau 0
	5.  xor akan bernilai benar jika input berbeda yaitu true dan false atau 1 
        dan 0, sebaliknya xor akan bernilai salah jika inputnya sama yaitu true dengan true lalu false dengan false atau 1 dengan 1 atau o dengan 0
    6. and bisa ditulis &&, or bisa ditulis ||, not bisa ditulis !
*/

#include <iostream>
 
int main()
{
  bool a,b;
  a = true;
  b = false;
  bool hasil;
 
  hasil = !a;
  std::cout << "Hasil dari not " << a << " : " << hasil << std::endl;
 
  hasil = !b;
  std::cout << "Hasil dari not " << b << " : " << hasil << std::endl;
  
  hasil = a&b;
  std::cout << "Hasil dari " << a << " AND " << b << " : " << hasil << std::endl;
 
  hasil = b&a;
  std::cout << "Hasil dari " << b << " AND " << a << " : " << hasil << std::endl;
  
  hasil = a&a;
  std::cout << "Hasil dari " << a << " AND " << a << " : " << hasil << std::endl;
 
  hasil = b&b;
  std::cout << "Hasil dari " << b << " AND " << b << " : " << hasil << std::endl;
  
  hasil = !(a&b);
  std::cout << "Hasil dari " << a << " NAND " << b << " : " << hasil << std::endl; //kurung berguna agar program yg didalam kurung di eksekusi dahulu, karena kita mau meng-and kan dulu baru setelah itu di not
 
  hasil = !(b&a);
  std::cout << "Hasil dari " << b << " NAND " << a << " : " << hasil << std::endl;
  
  hasil = !(a&a);
  std::cout << "Hasil dari " << a << " NAND " << a << " : " << hasil << std::endl;
 
  hasil = !(b&b);
  std::cout << "Hasil dari " << b << " NAND " << b << " : " << hasil << std::endl;

  hasil = a|b;
  std::cout << "Hasil dari " << a << " OR " << b << " : " << hasil << std::endl;
  
  hasil = b|a;
  std::cout << "Hasil dari " << b << " OR " << a << " : " << hasil << std::endl;
 
  hasil = a|a;
  std::cout << "Hasil dari " << a << " OR " << a << " : " << hasil << std::endl;
  
  hasil = b|b;
  std::cout << "Hasil dari " << b << " OR " << b << " : " << hasil << std::endl;
  
  hasil = !(a|b);
  std::cout << "Hasil dari " << a << " NOR " << b << " : " << hasil << std::endl;
  
  hasil = !(b|a);
  std::cout << "Hasil dari " << b << " NOR " << a << " : " << hasil << std::endl;
 
  hasil = !(a|a);
  std::cout << "Hasil dari " << a << " NOR " << a << " : " << hasil << std::endl;
  
  hasil = !(b|b);
  std::cout << "Hasil dari " << b << " NOR " << b << " : " << hasil << std::endl;

  hasil = a^b;
  std::cout << "hasil dari " << a << " XOR " << b << " : " << hasil << std::endl;
 
  hasil = b^a;
  std::cout << "hasil dari " << b << " XOR " << a << " : " << hasil << std::endl;
  
  hasil = a^a;
  std::cout << "hasil dari " << a << " XOR " << a << " : " << hasil << std::endl;
  
  hasil = b^b;
  std::cout << "hasil dari " << b << " XOR " << b << " : " << hasil << std::endl;
  
  hasil = !(a^b);
  std::cout << "hasil dari " << a << " NXOR " << b << " : " << hasil << std::endl;
 
  hasil = !(b^a);
  std::cout << "hasil dari " << b << " NXOR " << a << " : " << hasil << std::endl;
  
  hasil = !(a^a);
  std::cout << "hasil dari " << a << " NXOR " << a << " : " << hasil << std::endl;
  
  hasil = !(b^b);
  std::cout << "hasil dari " << b << " NXOR " << b << " : " << hasil << std::endl;
  
  return 0;
}