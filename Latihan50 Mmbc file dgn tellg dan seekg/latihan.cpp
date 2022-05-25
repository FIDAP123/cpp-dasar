/*
  Latihan 50 Membaca file dengan tellg dan seekg :
  1.  tellg dan seekg merupakan function yg hanya dapat digunakan di input file stream atau ifstream
  2.  tellg bernilai 0 jika kita tidak menggerakkan kursor dengan perintah seekg
*/
#include <iostream>     
#include <fstream>      // std::ifstream

int main () 
{
  std::fstream infile ("test.txt", std::ios::in | std::ios::binary);

  // get length of file:
  std::cout << "tellg 1 =" << infile.tellg() << std::endl;//disini tellg akan bernilai 0 karena kursor berada di index 0 atau index awal
  infile.seekg (0, infile.end);
  std::cout << "tellg 2 =" << infile.tellg() << std::endl;//disini tellg akan bernilai sesuai jumlah kata yg ada di dalam file karena kursor sudah berpindah dengan menggunakan perintah seekg
  int length = infile.tellg();
  infile.seekg (0, infile.beg);

  // allocate memory:
  char * buffer = new char [length];//disini memakai pointer agar meghemat pemakaian memori dibanding memakai variable
  char buffer1[length];//disini memakai pointer agar meghemat pemakaian memori dibanding memakai variable

  std::cout << std::endl;

  // read data as a block:
  infile.read (buffer1,length);//perintah read adalah perintah pengganti variable, tujuannya agar pemakaian memori lebih ringan


  std::cout << std::endl;
    
  // print content:
  std::cout << "infilei file : \n" << std::endl;
  std::cout.write (buffer1,length) << std::endl;
    
  //delete buffer
  delete[] buffer;

  infile.close();
  return 0;
}