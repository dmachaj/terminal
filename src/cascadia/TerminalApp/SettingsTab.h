/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- SettingsTab.h

Abstract:
- The SettingsTab is a tab whose content is a Settings UI control. They can
  coexist in a TabView with all other types of tabs, like the TerminalTab.
  There should only be at most one SettingsTab open at any given time.

Author(s):
- Leon Liang - October 2020

--*/

#pragma once
#include "TabBase.h"
#include "SettingsTab.g.h"

namespace winrt::TerminalApp::implementation
{
    struct SettingsTab : SettingsTabT<SettingsTab, TabBase>
    {
    public:
        SettingsTab(winrt::Microsoft::Terminal::Settings::Editor::MainPage settingsUI);

        void UpdateSettings(Microsoft::Terminal::Settings::Model::CascadiaSettings settings);
        void Focus(winrt::Microsoft::UI::Xaml::FocusState focusState) override;

        std::vector<Microsoft::Terminal::Settings::Model::ActionAndArgs> BuildStartupActions() const override;

    private:
        void _MakeTabViewItem() override;
        winrt::fire_and_forget _CreateIcon();
    };
}
