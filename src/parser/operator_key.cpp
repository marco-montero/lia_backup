/****************************************************************************
 *   operator_key.cpp    Tue Jun  20, 2017 11:46 PM                         *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/operator_key_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::operator_key<IteratorType>;

} // namespace parser

} // namespace lia
