// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "Profiles_Appearance.g.h"
#include "Utils.h"

namespace winrt::Microsoft::Terminal::Settings::Editor::implementation
{
    struct Profiles_Appearance : public HasScrollViewer<Profiles_Appearance>, Profiles_AppearanceT<Profiles_Appearance>
    {
    public:
        Profiles_Appearance();

        void OnNavigatedTo(const Microsoft::UI::Xaml::Navigation::NavigationEventArgs& e);
        void OnNavigatedFrom(const Microsoft::UI::Xaml::Navigation::NavigationEventArgs& e);

        void CreateUnfocusedAppearance_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void DeleteUnfocusedAppearance_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);

        WINRT_CALLBACK(PropertyChanged, Microsoft::UI::Xaml::Data::PropertyChangedEventHandler);
        WINRT_PROPERTY(Editor::ProfileViewModel, Profile, nullptr);

    private:
        Microsoft::Terminal::Control::TermControl _previewControl;
        Microsoft::UI::Xaml::Data::INotifyPropertyChanged::PropertyChanged_revoker _ViewModelChangedRevoker;
        Microsoft::UI::Xaml::Data::INotifyPropertyChanged::PropertyChanged_revoker _AppearanceViewModelChangedRevoker;
    };
};

namespace winrt::Microsoft::Terminal::Settings::Editor::factory_implementation
{
    BASIC_FACTORY(Profiles_Appearance);
}
