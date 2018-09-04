/**
 * This program is an exercise using the partition algorithm,
 * lambda functios and other features for a c++ newbie
 *
 * Author: Carlos Cardoso Dias
 * Date: 09/03/2018 
 *       MM/DD/YYYY
 */
#include <iostream>
#include <vector>
#include <algorithm>

void
print_element(int element)
{
  std::cout << " " << element << " ";
}

int
main(int argc, char *argv[])
{
  std::vector<int> vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  std::cout << "Vector elements" << std::endl;
  // print all elements
  std::for_each(vector.begin(), vector.end(), print_element);

  // partition between even and odd numbers
  std::vector<int>::iterator odd_numbers = std::stable_partition(vector.begin(), vector.end(), [](int x) { return (x % 2) == 0; });

  std::cout << std::endl << "Even numbers" << std::endl;
  // print even numbers
  std::for_each(vector.begin(), odd_numbers, print_element);

  std::cout << std::endl << "Odd numbers" << std::endl;
  // print odd numbers
  std::for_each(odd_numbers, vector.end(), print_element);

  return 0;
}
