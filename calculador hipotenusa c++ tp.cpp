/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

 using namespace std;
 
int main()
{
    double cat1, cat2, total, hip;
    
    cout<<"insira cateto 1: ";
    cin>>(cat1);
    cout<<"insira cateto 2: ";
    cin>>(cat2);
    
    total = cat1 * cat1 + cat2 * cat2 ;
    
    hip = sqrt(total);
    
    cout<<"hipotenusa = "<< hip ;
    
    

    return 0;
}
