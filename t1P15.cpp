/*  Practical 15
    Que 1 : WAP to read and write from and to a file from if and ofstream
    03/01/2021
    Task  : 
*/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
	string data ;	
	ofstream file ;
	file.open("myfile.txt");
	file<<"Practical 15 \n";
	file.close() ;
	
	ifstream file1 ;
	file1.open("myfile.txt");
	getline(file1,data);
	cout<<data <<endl ;
	file1.close() ;	
  
    return 0;
}
