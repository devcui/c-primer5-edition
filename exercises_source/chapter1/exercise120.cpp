#include <iostream>
#include <iterator>
#include <ostream>
#include "../../book_source/1/Sales_item.h"

int main(){

  unsigned int book_numbers = 0;
  std::cout << "input book numbers" << std::endl;
  std::cin >> book_numbers;

  Sales_item books[book_numbers];

  for(unsigned int i=0; i < book_numbers ; i++){
    std::cin >> books[i];
  }

  for(unsigned int i=0; i < book_numbers ; i++){
    std::cout << books[i] << std::endl;
  }

  return 0;
}
