// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "pch.h"
#include "App.h"
#include "App.g.cpp"
#include "TerminalPage.h"

using namespace winrt;
using namespace winrt::Windows::ApplicationModel::Activation;
using namespace winrt::Windows::Foundation;
using namespace winrt::Microsoft::UI::Xaml;
using namespace winrt::Microsoft::UI::Xaml::Controls;
using namespace winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::TerminalApp::implementation
{
    App::App()
    {
        // This is the same trick that Initialize() is about to use to figure out whether we're coming
        // from a UWP context or from a Win32 context
        // See https://github.com/windows-toolkit/Microsoft.Toolkit.Win32/blob/52611c57d89554f357f281d0c79036426a7d9257/Microsoft.Toolkit.Win32.UI.XamlApplication/XamlApplication.cpp#L42
        //const auto dispatcherQueue = ::winrt::Windows::System::DispatcherQueue::GetForCurrentThread();
        //if (dispatcherQueue)
        //{
        //    _isUwp = true;
        //}

        m_windowsXamlManager = winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread();
        //m_windowsXamlManager = winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread();
        //InitializeComponent();

        // Disable XAML's automatic backplating of text when in High Contrast
        // mode: we want full control of and responsibility for the foreground
        // and background colors that we draw in XAML.
        HighContrastAdjustment(::winrt::Microsoft::UI::Xaml::ApplicationHighContrastAdjustment::None);

        //Windows::Foundation::Uri resourceLocator{ L"ms-appx:///WindowsTerminalDev/Files/App.xaml" };
        //Microsoft::UI::Xaml::Application::LoadComponent(*this, resourceLocator, Microsoft::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Nested);
    }

    AppLogic App::Logic()
    {
        static AppLogic logic;
        return logic;
    }

    /// <summary>
    /// Invoked when the application is launched normally by the end user.  Other entry points
    /// will be used such as when the application is launched to open a specific file.
    /// </summary>
    /// <param name="e">Details about the launch request and process.</param>
    void App::OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const& /*e*/)
    {
        // Temporary to try and make stowed exception debuggable
        //DebugSettings().FailFastOnErrors(true);

        //window = winrt::make<TerminalPage>();
        //window.Activate();
        //window = Logic().GetRoot().as<winrt::Microsoft::UI::Xaml::Window>();
        // 
        //// if this is a UWP... it means its our problem to hook up the content to the window here.
        //if (_isUwp)
        //{
        //    auto content = Window::Current().Content();
        //    if (content == nullptr)
        //    {
        //        auto logic = Logic();
        //        logic.RunAsUwp(); // Must set UWP status first, settings might change based on it.
        //        logic.LoadSettings();
        //        logic.Create();

        //        auto page = logic.GetRoot().as<TerminalPage>();

        //        Window::Current().Content(page);
        //        Window::Current().Activate();
        //    }
        //}
    }
}
