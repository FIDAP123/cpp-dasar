/*
  Latihan 50 Copy dan edit file txt dengan perintah tellg & seekg untuk mengatur input file, tellp & seekp untuk output file :
  1.  Cara copy file adalah dengan membaca file terlebih dahulu atau menyimpannya di dalam variable lalu kemudian menulis 
      di file lainnya yang bertipe ofstream
  2.  Cara membaca file adalah dengan menuliskan variable file kemudian ditambah ".read()". Di dalam ".read()" ada variable char sebagai penyimpan dengan ukurannya dari variable angka yang didapat dari menghitung jumlah huruf termasuk spasi didalam file, dengan cara mengarahkan kursor dengan function ".seekg()". Di dalamnya ada di posisi awal yaitu 0 lalu koma "," variable file ".end" atau sampai akhir dari file, yg bertujuan agar file fibaca sampai akhir. Kemudian disimpanlah kedalam variable angka tadi.
*/
#include <fstream>      // std::ifstream, std::ofstream
#include<iostream>

int main () {
  std::ifstream infile ("test.txt",std::ifstream::binary);
  std::ifstream inputfile ("test1.txt",std::ifstream::binary);
  std::ofstream outfile ("new.txt",std::ofstream::binary);
  std::ofstream outputfile ("new1.txt",std::ofstream::binary);

  // get size of file
  infile.seekg (0,infile.end);
  long size = infile.tellg();
  std::cout << "size =" << size << std::endl; 
  infile.seekg (0);
  
  // allocate memory for file content
  char* buffer1 = new char[size];

  // read content of infile
  infile.read (buffer1,size);

  // write to outfile
  std::cout << "buffer 1 :\n";
  
  outfile.write (buffer1,size);

  std::cout << std::endl;
  std::cout << "buffer1 console :\n" << buffer1 << std::endl;
 
  outfile.close();
  infile.close();
  
  // release dynamically-allocated memory
  delete[] buffer1;

  std::cout << std::endl;

  inputfile.seekg (0,inputfile.end);
  long size1 = inputfile.tellg();
  std::cout << "size1 = " << size1 << std::endl; 
  inputfile.seekg (0);

  char buffer2[size1];
  
  // read content of inputfile
  inputfile.read (buffer2,size1);

  // write to outputfile
  std::cout << "buffer 2 :\n";
  outputfile.write (buffer2,size1);
  std::cout << "tellp = " << outputfile.tellp() << std::endl;
   
  std::cout << std::endl;
  std::cout << "buffer2 console :\n" << buffer2 << std::endl;

  outputfile.close();
  inputfile.close();
  return 0;
}
