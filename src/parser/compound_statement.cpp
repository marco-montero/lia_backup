/****************************************************************************
 *   compound_statement.cpp    Sat Jun  25, 2017 07:49 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/compound_statement_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::compound_statement<IteratorType>;

} // namespace parser

} // namespace lia
