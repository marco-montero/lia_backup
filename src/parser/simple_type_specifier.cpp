/****************************************************************************
 *   simple_type_specifier.cpp    Thu May  18, 2017 09:02 PM                *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/simple_type_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::simple_type_specifier<IteratorType>;

} // namespace parser

} // namespace lia
