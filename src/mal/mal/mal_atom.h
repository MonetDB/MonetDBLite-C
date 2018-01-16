/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#ifndef _MAL_ATOM_H
#define _MAL_ATOM_H

/* #define MAL_ATOM_DEBUG  */

mal_export int malAtomSize(int size, int align, char *name);
mal_export int malAtomProperty(MalBlkPtr mb, InstrPtr pci);
mal_export int malAtomDefinition(stream *out, str name, int tpe);

#endif /*  _MAL_ATOM_H*/
