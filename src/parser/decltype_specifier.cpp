/****************************************************************************
 *   decltype_specifier.cpp    Thu May  18, 2017 10:05 PM                   *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/decltype_specifier_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::decltype_specifier<IteratorType>;

} // namespace parser

} // namespace lia
