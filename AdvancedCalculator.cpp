#include<iostream>
#include<cmath>
 #include <iomanip>// for maths formula
//to calculate long long factorial
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;
long long factorial( int n) {
    if(n < 0)
    return -1; //invalid
    long long result = 1;
    for(int i = 1; i<=n; ++i)
    result *= i;
    return result;
}
void showMenu( ){
    cout<<"\n ============ADVANCED CALCULATOR\n";
    cout<<"1. Addition ( + )\n" ;
    cout<<" 2. Subtraction ( - )\n";
    cout<<" 3. Multiplication( * )\n";
    cout<<" 4. Division ( / )\n";
    cout<<" 5. Power ( x^y )\n";
    cout<<" 6. Square Root ( √x)\n";
    cout<<" 7. Modulus (%)\n";
    cout<<" 8. Sine(sin x)\n";
    cout<<" 9. Cosine(cos x)\n";
    cout<<" 10. Tangent(tan x)\n";
    cout<<" 11. Logarithm base 10 (log x )\n";
    cout<<" 12. Natural log (ln x )\n";
    cout<<"13. Factorial (x!)\n";
    cout<<"14. Exit\n";
    cout<<"Select choice(1-14): ";

//cout << fixed << setprecision(4);
}
int main ( ) {
    int choice ;
    int a, b;
    double num1 , num2;
    cout << fixed << setprecision(4);
    do{
        showMenu( );
        cin>>choice;
        switch(choice){


               case 1:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<num1+num2<<endl;
            break;


               case 2:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<num1-num2<<endl;
            break;


               case 3:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            cout<<"Result = "<<num1*num2<<endl;
            break;


            case 4:
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
            if(num2!=0)
            cout<<"Result = "<<num1/num2<<endl;
            else
            cout<<"Error: Division by zero !"<<endl;
            break;


               case 5:
            cout<<"Enter base and exponents: ";
            cin>>num1>>num2;
            cout<<"Result = "<<pow(num1,num2)<<endl;
            break;


            case 6 :
            cout<<"Enter numbers: ";
            cin>>num1;
            if(num1>=0)
            cout<<"Result = "<<sqrt(num1)<<endl;
            else
            cout<<"Error : Negative number!"<<endl;
            break;


            case 7:
            cout<<"Enter two integers: ";
            cin>>a>>b;
            if(b!=0)
            cout<<"Result ="<<a % b<<endl;
            else
            cout<<"Error: Division by zero"<<endl;
            break;


            case 8:
            cout<<"Enter angle in degrees: ";
            cin>>num1;
            cout<<"Result = "<<sin(num1* M_PI/180)<<endl;
            break;


            case 9:
            cout<<"Enter angle in degrees : ";
            cin>>num1;
            cout<<"Result = "<<cos(num1 * M_PI/180)<<endl;
            break;


            case 10:
            cout<<"Enter angle in degrees : ";
            cin>>num1;
            cout<<"Result = "<<tan(num1 * M_PI/180)<<endl;
            break;


            case 11:
            cout<<"Enter positive number :";
            cin>>num1;
            if(num1>0)
            cout<<"Result ="<<log10(num1)<<endl;
            else 
            cout<<"Error: log undefined!"<<endl;
            break;


            case 12 :
            cout<<"Enter positive number : ";
            cin>>num1;
            if(num1>0)
            cout<<"Result = "<<log(num1)<<endl;
            else
            cout<<"Error : log undefined !"<<endl;
            break;


            case 13:
            cout<<"Enter integer: ";
            cin>>a;
            if(a>=0)
            cout<<"Result = "<<factorial(a)<<endl;
            else
            cout<<"Error: Factorial not defined for negative! "<<endl;
            break;


            case 14:
            cout<<"Exiting calculator. THANK YOU!"<<endl;
            break;
            default:
            cout<<"Invalid choice . PLEASE SELECT  FROM 1 TO 14 .\n";

        }
    }
    while(choice != 14);
    cin.ignore();  // Clear the input buffer
cout << "\nPress Enter to exit...";
cin.get();     // Wait for user to press Enter
return 0;
}
   //  system("pause");
  // cin.ignore();  // Clear input buffer
// cin.get();     // Wait for Enter key
//     return 0;
// }

