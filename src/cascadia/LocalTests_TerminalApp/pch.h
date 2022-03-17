/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- precomp.h

Abstract:
- Contains external headers to include in the precompile phase of console build process.
- Avoid including internal project headers. Instead include them only in the classes that need them (helps with test project building).

Author(s):
- Carlos Zamora (cazamor) April 2019
--*/

#pragma once

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
// This includes support libraries from the CRT, STL, WIL, and GSL
#include "LibraryIncludes.h"
// This is inexplicable, but for whatever reason, cppwinrt conflicts with the
//      SDK definition of this function, so the only fix is to undef it.
// from WinBase.h
// Microsoft::UI::Xaml::Media::Animation::IStoryboard::GetCurrentTime
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <wil/cppwinrt.h>
#include <unknwn.h>
#include <hstring.h>

#include <WexTestClass.h>
#include <json.h>
#include "consoletaeftemplates.hpp"
#include "winrtTaefTemplates.hpp"

#include <winrt/Windows.ApplicationModel.Resources.Core.h>
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include <winrt/Windows.system.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/windows.ui.core.h>
#include <winrt/Windows.ui.input.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Data.h>
#include <winrt/Microsoft.UI.Xaml.media.h>
#include <winrt/Microsoft.UI.Xaml.input.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.Documents.h>

#include <Microsoft.UI.Xaml.media.dxinterop.h>

#include <winrt/windows.applicationmodel.core.h>

#include <winrt/Microsoft.Terminal.TerminalConnection.h>
#include <winrt/Microsoft.Terminal.Settings.Model.h>

#include <winrt/Microsoft.UI.Xaml.Controls.h>

#include <regex>
#include <CLI11/CLI11.hpp>

#include <shobjidl_core.h>

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#include "til.h"

// Common includes for most tests:
#include "../../inc/conattrs.hpp"
#include "../../types/inc/utils.hpp"
#include "../../inc/DefaultSettings.h"

#include <cppwinrt_utils.h>
