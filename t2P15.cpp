/*  Practical 15
    Que 15.2 : WAP to read and write from and to a file from fstream
    Task  : Read, write and append using fstream
*/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
	char ch ;	
	fstream file ;
	// Writing a File 
	file.open("task.txt",ios::out);
	file<<"This is task 2 of Practical 15 \n"; // writng to file
	file.close() ;
	
  	// Appending a File
	fstream file2 ;
	file2.open("task.txt",ios::app);
	file2<<"This is Appended text in File \n" ; // appending to file
	file2.close() ;
	
	// Reading a File
	fstream file1 ;
	file1.open("task.txt",ios::in);
	if(!file1) // if not open
		cout<<"File NOT Present  "<<endl ;
	else
	{
		while(!file1.eof())
		{
			file1>>noskipws>>ch ;
			cout<<ch ;	
		}
	}	
	file1.close() ;	
    return 0;
}
