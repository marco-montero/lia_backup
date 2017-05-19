/****************************************************************************
 *   typename_specifier.cpp    Thu May  18, 2017 09:04 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/typename_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::typename_specifier<IteratorType>;

} // namespace parser

} // namespace lia
