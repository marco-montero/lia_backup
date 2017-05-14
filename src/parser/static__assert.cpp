/****************************************************************************
 *   static__assert.cpp    Sun May  14, 2017 04:49 PM                       *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/static__assert_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::static__assert<IteratorType>;

} // namespace parser

} // namespace lia
