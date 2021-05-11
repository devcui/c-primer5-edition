#include <iostream>
#include <iterator>
#include <ostream>
#include "../../book_source/1/Sales_item.h"

int main(){
  Sales_item total;
  if(std::cin >> total){
    Sales_item trans;
    while(std::cin >> trans){
      if(total.isbn() == trans.isbn()){
        total += trans;
      }else{
        std::cout << total << std::endl;
        total = trans;
      }
    }
  }else{
    std::cerr<< "NO DATA!" << std::endl;
    return -1;
  }
  return 0;
}
