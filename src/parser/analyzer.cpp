/****************************************************************************
 *   analyzer.cpp           Sat Jun  28, 2017 12:30 PM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/analyzer.hpp"
#include "lia/parser/skipper.hpp"
#include "lia/parser/translation_unit.hpp"

namespace lia {

namespace parser {

Analyzer::Analyzer()
{}

bool Analyzer::parse(boost::filesystem::path const &file)
{


  return true;
}

bool Analyzer::parse(std::string const &text)
{
  if (text.empty()) {
    return true;
  }

  typedef std::string::const_iterator IteratorType;
  IteratorType iter = text.begin();
  IteratorType end = text.end();

  client::translation_unit<IteratorType> translation_unit;
  client::skipper<IteratorType> skipper;

  bool success = phrase_parse(iter, end, translation_unit, skipper);

  return success;
}

} // namespace parser

} // namespace lia
