/*  Practical 15
    Que 15.3 : IO Manipulators
    Task     : Use Manipulators
    
*/ 

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<"\n" ;
	int n ;
	//dec hex Manipulators
	cout<<"Using dec and hex Manipulators  "<<"\n" ;
	cout<<"Enter a Integer : ";
	cin>>n ;
	cout<<"dec  : "<<dec<<n <<"\n" ;
	cout<<"hex  : "<<hex<<n <<"\n" ;
	//skipws and no skipws Manipulators
	char a , b , c ;
	cout<<"\nUsing Skipws "<<"\n" ;
	istringstream s("   123") ;
	s>>skipws>>a>>b>>c ;
    cout<<a<<b<<c <<endl ;
    
	cout<<"\nUsing Noskipws "<<"\n" ;
	istringstream p("  123") ;
	p>>noskipws>>a>>b>>c ;
    cout<<a<<b<<c <<"\n" ;
    
    //Use of endl , ends , flush
    cout<<"\nUsing Endl, ends , flush  "<<"\n" ;
    cout<<"ABCD, ";
    cout<<"EFGH "<<endl ;
    cout<<"IJK "<<ends ;
    cout<<"LMN "<<flush ;
    cout<<"\n" ;
    //setw and setprecision
    cout<<"\nUsing setprecision , setw  "<<"\n" ;
    double f = 3.14159 ;
    cout<<setprecision(5) <<f <<endl ;
    cout<<setw(8)<<f <<endl ;
    return 0;
}
