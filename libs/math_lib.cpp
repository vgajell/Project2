#include "math_lib.hpp"
#include <stdint.h>
#include<bits/stdc++.h>
#include "data_structure_lib.hpp"
LinkedList<int> list2;
using namespace std;

uint32_t MathLib::add(uint32_t a, uint32_t b) {
    list2.push_front(a+b);
    
    return a + b;
}

uint32_t MathLib::multiply(uint32_t a, uint32_t b) {
    return a * b;
}
uint32_t MathLib::printsum(){
    list2.print_list(list2);
    return 0;
}

