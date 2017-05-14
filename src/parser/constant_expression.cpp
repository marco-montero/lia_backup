/****************************************************************************
 *   constant_expression.cpp    Sun May  14, 2017 06:01 PM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/constant_expression_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::constant_expression<IteratorType>;

} // namespace parser

} // namespace lia
