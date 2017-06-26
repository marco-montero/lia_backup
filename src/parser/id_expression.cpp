/****************************************************************************
 *   id_expression.cpp    Mon Jun  26, 2017 05:26 PM                        *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/id_expression_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::id_expression<IteratorType>;

} // namespace parser

} // namespace lia
