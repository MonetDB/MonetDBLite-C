/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#ifndef NOP_LOGGER_H
#define NOP_LOGGER_H

#include "sql_storage.h"

/* this function is (currently) only used in msabaoth and sql;
 * msabaoth is part of monetdb5 and we want this function to be
 * exported so that the call in sql can be satisfied by the version
 * that is included in monetdb5 */

#ifdef WIN32
#if !defined(LIBMSABAOTH) && !defined(LIBMUUID)
#define loggerexport extern __declspec(dllimport)
#else
#define loggerexport extern __declspec(dllexport)
#endif
#else
#define loggerexport extern
#endif

loggerexport void nop_logger_init( logger_functions *lf );

#endif /*NOP_LOGGER_H */
