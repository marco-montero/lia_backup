/****************************************************************************
 *   function_definition.cpp    Sat Mar  11, 2017 11:38 AM                  *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/function_definition_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::function_definition<IteratorType>;

} // namespace parser

} // namespace lia
