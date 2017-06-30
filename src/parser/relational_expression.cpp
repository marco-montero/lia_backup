/****************************************************************************
 *   relational_expression.cpp    Thu Jun  29, 2017 11:14 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/relational_expression_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::relational_expression<IteratorType>;

} // namespace parser

} // namespace lia
