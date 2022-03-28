// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "winrt/Microsoft.UI.Xaml.Controls.h"

#include "HighlightedTextControl.g.h"

namespace winrt::TerminalApp::implementation
{
    struct HighlightedTextControl : HighlightedTextControlT<HighlightedTextControl>
    {
        HighlightedTextControl();

        static Microsoft::UI::Xaml::DependencyProperty TextProperty();

        winrt::TerminalApp::HighlightedText Text();
        void Text(winrt::TerminalApp::HighlightedText const& value);

        Microsoft::UI::Xaml::Controls::TextBlock TextView();

    private:
        static Microsoft::UI::Xaml::DependencyProperty _textProperty;
        static void _onTextChanged(Microsoft::UI::Xaml::DependencyObject const& o, Microsoft::UI::Xaml::DependencyPropertyChangedEventArgs const& e);
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    BASIC_FACTORY(HighlightedTextControl);
}
