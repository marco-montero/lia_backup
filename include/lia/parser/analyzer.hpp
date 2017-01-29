/****************************************************************************
 *   analyzer.hpp           Sat Jun  28, 2017 11:00 AM                      *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#ifndef LIA_PARSER_ANALYZER_HPP
#define LIA_PARSER_ANALYZER_HPP

#include <vector>

#include <boost/filesystem.hpp>

namespace lia {

namespace parser {

class Analyzer
{
public:
  Analyzer();

  bool parse(boost::filesystem::path const &file);
  bool parse(std::vector<char *> const &text);

private:
}; // class Analyzer

} // namespace parsing

} // namespace lia

#endif // LIA_PARSER_ANALYZER_HPP
