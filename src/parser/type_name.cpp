/****************************************************************************
 *   type_name.cpp    Thu May  18, 2017 10:04 PM                            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/type_name_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::type_name<IteratorType>;

} // namespace parser

} // namespace lia
