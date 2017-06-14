/****************************************************************************
 *   function_specifier.cpp    Tue Jun  13, 2017 10:57 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/function_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::function_specifier<IteratorType>;

} // namespace parser

} // namespace lia
