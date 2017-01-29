/****************************************************************************
 *   test_analyzer.cpp           Sat Jun  28, 2017 12:56 PM                 *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#define BOOST_TEST_MODULE Analyzer tests
#include <boost/test/included/unit_test.hpp>

#include <lia/parser/analyzer.hpp>

BOOST_AUTO_TEST_CASE(first_test)
{
  lia::parser::Analyzer analyzer;
  boost::filesystem::path empty("");

  BOOST_TEST(true == analyzer.parse(empty));
}
