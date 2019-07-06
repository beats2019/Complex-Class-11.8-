#include "Complex.h"
#include <iostream>
using namespace std;

    Complex::Complex( double realPart, double imaginaryPart )
        : real( realPart ), imaginary( imaginaryPart )
    {

    }

    Complex Complex::operator+( const Complex &operand2 ) const
    {
        return Complex( real + operand2.real , imaginary + operand2.imaginary );
    }

    Complex Complex::operator-( const Complex &operand2 ) const
    {
        return Complex( real - operand2.real , imaginary - operand2.imaginary );
    }

    ostream & operator <<( ostream &output, const Complex &a )
    {
        output << '(' << a.real << ", " << a.imaginary << ')';
        return output;
    }

    Complex Complex::operator *( const Complex &value2 ) const
    {
        return Complex( real * value2.real , imaginary * value2.imaginary );
    }

    bool Complex::operator ==( const Complex &a ) const
    {
        if( ( this->real == a.real ) and ( this->imaginary == a.imaginary ) )
            return true;
        else
            return false;
    }

     bool Complex::operator !=( const Complex &a ) const
    {
        if( ( this->real != a.real ) or ( this->imaginary != a.imaginary ) )
            return true;
        else
            return false;
    }










