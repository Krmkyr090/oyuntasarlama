/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter{
    public:
        string adi;
        int can;
        void kosma(){
         cout<< adi <<" koşuyor"<< endl; 
    }
    
};

int main()
{   
    Karakter karakter1;
    //strcpy(karakter1.adi,"mini pekka");
    karakter1.adi = "mini pekka";
    karakter1.can = 4200;
    
    Karakter karakter2;
    //strcpy(karakter2.adi,"iksir golemi");
    karakter2.adi = "iksir golemi";
    karakter2.can = 8200;
    
    
    cout<<"karakter 1: "<<karakter1.adi<<endl;
    cout<<"karakter 2: "<<karakter2.adi<<endl;
    
    karakter1.kosma();
    karakter2.kosma();
    return 0;
}
