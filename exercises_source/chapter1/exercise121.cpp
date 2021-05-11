#include <iostream>
#include <iterator>
#include <ostream>
#include "../../book_source/1/Sales_item.h"

int main(){

  unsigned int book_numbers = 2;
  Sales_item books[book_numbers];
  for(unsigned int i=0; i < book_numbers ; i++){
    std::cin >> books[i];
  }
  std::cout << books[0] + books[1] << std::endl;
  return 0;
}
