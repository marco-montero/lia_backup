/****************************************************************************
 *   stand_alone.cpp             Mon Feb  27, 2017 10:48 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include <cstdlib>
#include <iostream>

#include <lia/parser/analyzer.hpp>

int main()
{
  lia::parser::Analyzer analyzer;

  std::string code("int function(int x);");

  auto resp = analyzer.parse(code);

  std::cout << "Ouput value: " << resp << '\n';

  return EXIT_SUCCESS;
}
