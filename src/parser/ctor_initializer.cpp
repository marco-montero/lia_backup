/****************************************************************************
 *   ctor_initializer.cpp    Sat Jun  24, 2017 06:25 PM                     *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/ctor_initializer_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::ctor_initializer<IteratorType>;

} // namespace parser

} // namespace lia
