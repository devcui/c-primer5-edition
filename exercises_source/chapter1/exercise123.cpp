/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-11 10:53:26
 * @LastEditTime: 2021-05-11 10:55:39
 * @LastEditors: cuihaonan
 * @Description: Basic description
 * @FilePath: /C-PRIMER-5-EDITiON/exercises_source/chapter1/exercise123.cpp
 * @LICENSE: NONE
 */
#include <iostream>
#include <iterator>
#include <ostream>
#include "../../book_source/1/Sales_item.h"

int main()
{

  unsigned int book_numbers = 0;
  std::cout << "input book numbers" << std::endl;
  std::cin >> book_numbers;

  Sales_item books[book_numbers];

  for (unsigned int i = 0; i < book_numbers; i++)
  {
    std::cin >> books[i];
  }

  Sales_item book_total;

  for (unsigned int i = 0; i < book_numbers; i++)
  {
    // check the same isbn
    if(i>0){
      if(books[i].isbn() == books[i-1].isbn()){
        book_total += books[i];
      }else{
        std::cerr << " error isbn of" << books[i].isbn() << std::endl;
      }
    }
  }
  std::cout << book_total << std::endl;
  return 0;
}
