/****************************************************************************
 *   enum_key.cpp    Sun May  14, 2017 06:53 PM                             *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/enum_key_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::enum_key<IteratorType>;

} // namespace parser

} // namespace lia
