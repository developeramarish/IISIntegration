// Copyright (c) .NET Foundation. All rights reserved.
// Licensed under the MIT License. See License.txt in the project root for license information.

#pragma once

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <atlbase.h>
#include <pdh.h>
#include <vector>
#include <Shlobj.h>
#include <httpserv.h>
#include <winhttp.h>
#include <httptrace.h>
#include <cstdlib>
#include <wchar.h>
#include <io.h>
#include <stdio.h>
#include <experimental/filesystem>
#include <fstream>

#include <hashfn.h>
#include <hashtable.h>
#include "stringa.h"
#include "stringu.h"
#include "dbgutil.h"
#include "ahutil.h"
#include "multisz.h"
#include "multisza.h"
#include "base64.h"
#include <listentry.h>
#include <datetime.h>
#include <reftrace.h>
#include <acache.h>
#include <time.h>

#include "stringu.h"
#include "stringa.h"
#include "multisz.h"
#include "dbgutil.h"
#include "hashfn.h"

#include "requesthandler_config.h"
#include "hostfxr_utility.h"
#include "environmentvariablehash.h"
#include "iapplication.h"
#include "utility.h"
#include "debugutil.h"
#include "requesthandler.h"
#include "resources.h"
#include "aspnetcore_msg.h"
#include "Helpers.h"

#undef assert // Macro redefinition in IISLib.
#include "gtest\gtest.h"

// Externals defined in inprocess
BOOL       g_fProcessDetach;
HANDLE     g_hEventLog;
DWORD g_dwAspNetCoreDebugFlags;
PCSTR g_szDebugLabel;
DWORD g_dwDebugFlags;

