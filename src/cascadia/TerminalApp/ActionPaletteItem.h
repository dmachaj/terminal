// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "PaletteItem.h"
#include "ActionPaletteItem.g.h"

namespace winrt::TerminalApp::implementation
{
    struct ActionPaletteItem : ActionPaletteItemT<ActionPaletteItem, PaletteItem>
    {
        ActionPaletteItem() = default;
        ActionPaletteItem(Microsoft::Terminal::Settings::Model::Command const& command);

        WINRT_PROPERTY(Microsoft::Terminal::Settings::Model::Command, Command, nullptr);

    private:
        Microsoft::UI::Xaml::Data::INotifyPropertyChanged::PropertyChanged_revoker _commandChangedRevoker;
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    BASIC_FACTORY(ActionPaletteItem);
}
