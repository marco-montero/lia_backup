/****************************************************************************
 *   enum_name.cpp    Sun May  21, 2017 12:52 PM                            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/enum_name_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::enum_name<IteratorType>;

} // namespace parser

} // namespace lia
