/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

#ifndef _MAL_SCOPE_H_
#define _MAL_SCOPE_H_

#include "mal.h"
/* #define MAL_SCOPE_DEBUG  */

#define MAXSCOPE 256

typedef struct SCOPEDEF {
	struct SCOPEDEF   *link; /* module with same index value */
	str	    name;			/* index in namespace */
	Symbol *space; 			/* type dispatcher table */
	int isAtomModule; 		/* atom module definition ? */
	void *dll;				/* dlopen handle */
	str help;   			/* short description of module functionality*/
} *Module, ModuleRecord;

mal_export Module   newModule(Module scope, str nme);
mal_export Module   fixModule(Module scope, str nme);
mal_export void     freeModule(Module cur);
mal_export void     insertSymbol(Module scope, Symbol prg);
mal_export void     deleteSymbol(Module scope, Symbol prg);
mal_export Module   findModule(Module scope, str name);
mal_export Symbol   findSymbol(Module nspace, str mod, str fcn);
mal_export int 		isModuleDefined(Module scope, str name);
mal_export Symbol   findSymbolInModule(Module v, str fcn);
mal_export void     mal_module_reset(void);
mal_export void     getModuleList(Module** out, int* length);
mal_export void     freeModuleList(Module* list);
#define getSymbolIndex(N)  (int)(*(N))

#endif /* _MAL_SCOPE_H_ */
