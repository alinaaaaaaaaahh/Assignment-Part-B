#include <iostream>
#include <string>
#include <cstdlib>
#include "FloatComplex.h"
using namespace std;
    cout<<"--------- c++ ASSIGNMENT 2 PART B -------- "<<endl;
	cout<<"-------------- ALINA SAEED  -------------- "<<endl;
	cout<<"--------------  241610002 -------------- "<<endl;
int main() {
	 if (argc < 9) {
        cout << "Insufficient arguments provided." << endl;
        cout << "Usage: ./complex  <float_real> <float_imag>" << endl;
        return 1;
    }
cout<<" ------------- TASK1! ------------- "<<endl;
     // Extract the int real and imaginary parts from the command-line arguments 
    int real1 = atof(argv[1]);
    int imaginary1 = atof(argv[2]);
    int real2 = atof(argv[3]);
    int imaginary2 = atof(argv[4]);
     // Create IntComplex objects from the command-line arguments
    IntComplex c1(real1, imaginary1);
    IntComplex c2(real2, imaginary2);

    // Perform operations on the complex numbers
    IntComplex sum = c1 + c2;
    IntComplex difference = c1 - c2;
    IntComplex product = c1 * c2;
    IntComplex quotient = c1 / c2;

    // Print the results
    cout<<"sum: "<<endl;
    sum.display(); //printing addition results
    cout<<"Difference: "<<endl;
    difference.display(); //printing subtraction results
    cout<<"Product: "<<endl;
    product.display(); //printing multiplication results
    cout<<"Quotient: "<<endl;
    quotient.display(); //printing division results
    
cout<<" ------------- TASK2! ------------- "<<endl;
     // Extract the float real and imaginary parts from the command-line arguments 
    float real = atof(argv[5]);
    float imaginary1 = atof(argv[6]);
    float real1 = atof(argv[7]);
    float imaginary2 = atof(argv[8]);

    // Create IntComplex objects from the command-line arguments
    FloatComplex c1(real1, imaginary1);
    FloatComplex c2(real2, imaginary2);

    // Perform operations on the complex numbers
    FloatComplex sum = c1 + c2; //adding
    FloatComplex difference = c1 - c2;//subtracting 
    FloatComplex product = c1 * c2; //multipling
    FloatComplex quotient = c1 / c2; //dividing 

    // Print the results
    cout<<"sum: "<<endl;
    sum.display(); //printing addition
    cout<<"Difference: "<<endl;
    difference.display(); //printing subtraction 
    cout<<"Product: "<<endl;
    product.display(); //printing multiplication 
    cout<<"Quotient: "<<endl;
    quotient.display(); //printing division 

    return 0;
}

 

