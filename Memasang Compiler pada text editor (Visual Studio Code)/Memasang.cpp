/*

Instal VSCode dan Mingw dan cara minjalankannya

1. Instal VSCode dan Mingw terlebih dahulu
2. buat 2 folder yaitu folder input (yg berisi ekstensi .cpp atau source code) dan 
   output (yg nantinya berisi ekstensi .exe atau compiled yg akan dibaca machine code)
3. cari g++ di folder bin dari Mingw (jika belum ada instal terlebih dahulu di Mingw)
4. tambahkan sumber file (C:\MinGW\bin) di path komputer (path komputer terletak 
   di pengaturan)
5. lihat versi g++ yg ada di Mingw dengan menekan "Ctrl + Shift + P" lalu cari
   "Edit Configurations (JSON)", lau buka "c_cpp_properties.json".
6. cari "cppStandard: gnu++14,", gnu++14 adalah versi g++ yg kamu gunakan
7. a. Meng-Compile source code C++ dengan MINGW secara manual di CLI
	  1) Buka CLI (klo di Windows CMD atau Command prompt) dengan masuk dulu di folder 
		 project kita atau folder input atau source code yg ber-ekstesi .cpp dengan 
		 mengetikkan nama drivenya, lalu "cd (nama folder)" untuk pindah folder dan 
		 "dir" untuk melihat isi folder sekarang
	  2) jika sudah di dalam folder input buat dulu file yg ber-ekstensi .exe 
	  	 dengan mengetik : 
	     "g++ -std=gnu++14 .\\src\\*.cpp  -o  .\\bin\\Untitled1.exe" (kita menulis 
		 dengan back slash 2 kali atau \\ karena program akan mengenali  peritah 
		 backslash khusus dari aturan string maka dari itu harus menggunakan \\ agar 
		 tidak di eksekusi oleh sistem). Artinya membuka g++.exe dengan standard versi 
		 gnu++14 untuk mengkompile semua file yg ber-ekstensi .cpp di folder src yg 
		 ada di tampilan VSCode atau .\ (.\ artiya VSCode) lalu masukan outputnya 
		 di folder bin\ yg ada di tampilan VSCode yaitu Untitled1.exe (lebih baik namai 
		 file output dengan nama yang sama dengan input contoh file input yg ku buat 
		 Untitled1.cpp maka file outputnya Untitled1.exe)
	  3) ketik di nomer 2 ketika ingin mengcompile hasilnya berupa Untitled1.exe (lebih
	     baik namai file output dengan nama yang sama dengan input contoh file input 
		 yg ku buat Untitled1.cpp maka file outputnya Untitled1.exe)
7. b. Membuat compiler C++ otomatis dengan MINGW di VSCode
      1) Caranya dengan menekan 
		 "Ctrl + Shift + p" lalu cari "Tasks:Configure Task" lalu cari "Others", maka
		 akan muncul file "task.json"
		 (membuat file "task.json" berguna agar compile file menjadi otomatis)
	  2) lalu setelah " "tasks": [ " ketik function :
	  	{
            "label": "Compile C++",
            "type": "shell",
            "command": "g++",
            "args": [
                "-std=gnu++14",
                ".\\src\\*.cpp", 
                "-o",
                ".\\bin\\Untitled1.exe",
            ]
    	},"
		 
		 artinya membuat function yg berjudul atau ber-label Compile C++ yang type atau
		 bertipe shell atau CLI (klo di Windows namanya CMD atau Command Prompt) 
		 dengan memasukkan perintah atau command g++ dengan diikuti argumen atau args 
		 dengan function atau fungsi standard atau std dari gnu++14 atau versi Mingw 
		 saat ini lalu ketik ".\\src\\*.cpp" artinya masukkan folder input dari VSCode 
		 atau ".\" yang ada di folder src atau src\ dengan meng-compile semua file yang 
		 hanya berekstensi ".cpp", kemudia masukan output atau "-o" ke output dari 
		 VSCode atau ".\" yang ada di folder bin dengan menghasilkan output compile 
		 bernama "Untitled1.exe" (lebih baik namai file output dengan nama yang sama 
		 dengan input contoh file input yg ku buat Untitled1.cpp maka file outputnya
		 Untitled1.exe)
	  3) Lalu ketik function di bawahnya lagi dengan tujuan agar memudahkan proses 
	     compile, dengan mengetik :
		 {
            "label": "run",
            "type": "shell",
            "command":".\\bin\\Untitled1.exe",
			"dependsOn":["Compile C++"],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
		 
		 artinya artinya membuat function yg berjudul atau ber-label run yg berarti 
		 function ini berguna agar kita dapat me-running file yg sudah kita compile yg 
		 type atau bertipe shell atau CLI (klo di Windows namanya CMD atau Command 
		 Prompt) dengan memasukkan perintah atau command ".\\bin\\Untitled1.exe" (ini 
		 berasal dari hasil perintah sebelumnya), kemudian menuliskan 
		 "dependsOn":["Compile C++"] artinya bergantung dari compile yg diatas, yg 
		 bertujuan agar proses yg diatas dilaksanakan dulu agar memastikan tidak ada 
		 eror jika tidak maka program dari VSCode akan bingung ingin menjalakan yg 
		 mana sehingga terjadi loading terus menerus, lalu semua perintah itu 
		 dimasukkan ke dalam group atau grup yg ada di perintah yang berasal dari 
		 VSCode yaitu "Tasks:Run Build Task" yg berfungsi agar perintah bisa dijalakan
	  4) Jika sudah maka restart VSCode lalu ke project kita yg siap di compile 
	     kemudian tekan "Ctrl + Shift + P" lalu cari "Tasks:Run Build Task" (jika sudah
		 pernah menekan "Tasks:Run Build Task" maka tekan saja "Ctrl + Shift + B")
*/

#include <iostream>

using namespace std;
int main()
{	
	cout << "halo\n"; 

	return 0;
}