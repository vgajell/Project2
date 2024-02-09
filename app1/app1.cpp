#include <iostream>
#include "../libs/math_lib.hpp"
#include "../libs/data_structure_lib.hpp"
LinkedList<int> list;
int main() {

MathLib math;


  // Add some data to the linked list


// Compute the sum and add to the linked list using the MathLib
 int sum = math.add(2,4);
 int sum2 = math.add(2,9);
 int sum3 = math.add(100,67);
 std::cout << " Sum result are : ";
 int  x = math.printsum(); // printsum method is used for print all sum result ;

  int m = math.multiply(2,8);
// Print the result
  std::cout << " multiply result is: " << m<< std::endl;

  //now lets create a linked list
  list.push_front(6);
  list.push_front(7);
  list.push_front(8);
  list.push_front(9);
  std::cout << " The linked list that we created in app1:";
  list.print_list(list);
  return 0;


}