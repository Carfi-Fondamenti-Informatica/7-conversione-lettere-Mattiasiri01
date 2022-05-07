#include "lib.h"

bool caratteri(int a){
    if(((65<=a) && (a<=90)) || ((97<=a) && (a<=122))){
        return true;
    }
    else{
        return false;
    }
}
