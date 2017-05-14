/****************************************************************************
 *   nested_name_specifier.cpp    Sun May  14, 2017 12:34 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/nested_name_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::nested_name_specifier<IteratorType>;

} // namespace parser

} // namespace lia
