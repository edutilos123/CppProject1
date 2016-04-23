#include "Simple_class.hpp"
#include <iostream>
using  std::cout ; 
using std::endl ; 
//Simple_class::

Simple_class::Simple_class() {
    this-> num = 0; 
}

Simple_class::Simple_class(int _num): 
 num(_num) {

}

Simple_class::~Simple_class() {
    cout << "Simple_class instance was destroyed." << endl ; 
}

void Simple_class::set(int num) {
    this-> num = num ; 
}

int Simple_class::get() {
    return num ; 
}

//-> Simple_class 