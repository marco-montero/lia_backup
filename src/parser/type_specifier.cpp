/****************************************************************************
 *   type_specifier.cpp    Wed May  17, 2017 09:46 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/type_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::type_specifier<IteratorType>;

} // namespace parser

} // namespace lia
