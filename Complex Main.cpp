#include <iostream>
using namespace std;
#include "Complex.h"


    int main()
    {
        Complex x( 2, 4 );
        Complex y( 25, 4 );

        if( not(x != y) )
            cout << "true";
        else
            cout << "false";



        return 0;
    }
