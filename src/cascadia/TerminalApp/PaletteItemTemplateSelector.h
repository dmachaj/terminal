// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "PaletteItemTemplateSelector.g.h"

namespace winrt::TerminalApp::implementation
{
    struct PaletteItemTemplateSelector : PaletteItemTemplateSelectorT<PaletteItemTemplateSelector>
    {
        PaletteItemTemplateSelector() = default;

        Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::DependencyObject const&);
        Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(winrt::Windows::Foundation::IInspectable const&);

        WINRT_PROPERTY(winrt::Microsoft::UI::Xaml::DataTemplate, TabItemTemplate);
        WINRT_PROPERTY(winrt::Microsoft::UI::Xaml::DataTemplate, NestedItemTemplate);
        WINRT_PROPERTY(winrt::Microsoft::UI::Xaml::DataTemplate, GeneralItemTemplate);
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    BASIC_FACTORY(PaletteItemTemplateSelector);
}
