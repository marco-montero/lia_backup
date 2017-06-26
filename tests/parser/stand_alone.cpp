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

  std::string code0("asm ( \" test \") ;");

  auto resp = analyzer.parse(code0);

  std::cout << code0 << " --> " << resp << '\n';

  std::string code1("eval(int x, int y);");

  resp = analyzer.parse(code1);

  std::cout << code1 << " --> " << resp << '\n';

  return EXIT_SUCCESS;
}
