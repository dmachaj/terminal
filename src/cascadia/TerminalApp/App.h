// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "App.g.h"
#include "App.base.h"

//#include <winrt/Microsoft.UI.Xaml.Hosting.h>

namespace winrt::TerminalApp::implementation
{
    struct App : AppT2<App>
    {
    public:
        App();
        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);

        TerminalApp::AppLogic Logic();

    private:
        //bool _isUwp = false;
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
        winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager m_windowsXamlManager{ nullptr };
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    struct App : AppT<App, implementation::App>
    {
    };
}
