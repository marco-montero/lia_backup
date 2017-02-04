/****************************************************************************
 *   translation_unit.cpp     Thu Jan  03, 2017 00:02 AM                    *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/translation_unit_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::translation_unit<IteratorType>;

} // namespace parser

} // namespace lia
