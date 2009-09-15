/*********************************************************
*
*  Multi Theft Auto v1.0 - Module
*  
*  Module:       ml_irc
*  Url:          http://development.mtasa.com/index.php?title=Modules/SebasIRC
*  Project page: http://multitheftauto-modules.googlecode.com/
*  Developers:   Sebas <sebasdevelopment@gmx.com>
*
*********************************************************/

#include "CFunctions.h"
#include "include/ILuaModuleManager.h"

#define MODULE_NAME			"IRC connection module"
#define	MODULE_AUTHOR		"Sebas <sebasdevelopment@gmx.com>"
#define MODULE_VERSION		1.01f

extern "C"
{
    #include "include/lua.h"
    #include "include/lualib.h"
    #include "include/lauxlib.h"
}

#ifdef WIN32
	#define MTAEXPORT extern "C" __declspec(dllexport)
#else
	#define MTAEXPORT extern "C"
#endif

#include <list>
#include <vector>
// Obviously i can't get us this so other includes will most likely be needed later on

using namespace std;

#ifndef __COMMON_H
#define __COMMON_H

// used in the function argument vector
#define MAX_ARGUMENTS 10
struct FunctionArguments
{
	lua_State* luaVM;
	unsigned char nArguments;
	unsigned char Type[10];
	void*	Arguments[10];
};

namespace FunctionArgumentType
{
	enum
	{
		TYPE_NUMBER = 1,
		TYPE_STRING = 2,
		TYPE_LIGHTUSERDATA = 3,
		TYPE_BOOLEAN = 4,
		TYPE_NIL = 5,
		TYPE_TABLE = 6
	};
}
#endif