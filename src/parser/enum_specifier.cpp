/****************************************************************************
 *   enum_specifier.cpp    Wed May  17, 2017 11:12 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/enum_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::enum_specifier<IteratorType>;

} // namespace parser

} // namespace lia
