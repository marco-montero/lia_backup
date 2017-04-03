/****************************************************************************
 *   explicit_specialization.cpp    Mon Apr  03, 2017 08:08 PM              *
 *                                                                          *
 *   Copyright (C) 2017-2020, Marco Montero.                                *
 *                                                                          *
 *   <marco.montero.m@gmail.com>                                            *
 *                                                                          *
 ****************************************************************************/

#include "lia/parser/explicit_specialization_def.hpp"

namespace lia {

namespace parser {

typedef std::string::const_iterator IteratorType;
template struct client::explicit_specialization<IteratorType>;

} // namespace parser

} // namespace lia
