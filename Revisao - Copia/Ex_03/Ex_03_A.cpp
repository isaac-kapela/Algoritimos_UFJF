    
        #include <iostream>
        # include <iomanip>
        using namespace std;

        float volumeCilindro( float r, float h) {

            if(h>  0 && r > 0 && ( r< 2*h)){
                return 3.24*h*r*r;
            }

            else {
                return -1;
            }
        }