/****************************************************************************
 *   class_key.cpp    Tue May  23, 2017 11:19 PM                            *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/class_key_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::class_key<IteratorType>;

} // namespace parser

} // namespace lia
