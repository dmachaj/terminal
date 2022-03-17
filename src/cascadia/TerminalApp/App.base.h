#pragma once

namespace winrt::TerminalApp::implementation
{
    template<typename D, typename... I>
    struct App_baseWithProvider : public App_base<D, ::winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        using IXamlType = ::winrt::Microsoft::UI::Xaml::Markup::IXamlType;

        IXamlType GetXamlType(::winrt::Microsoft::UI::Xaml::Interop::TypeName const& type)
        {
            return _appProvider.GetXamlType(type);
        }

        IXamlType GetXamlType(::winrt::hstring const& fullName)
        {
            return _appProvider.GetXamlType(fullName);
        }

        ::winrt::com_array<::winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions()
        {
            return _appProvider.GetXmlnsDefinitions();
        }

    private:
        bool _contentLoaded{ false };
        winrt::TerminalApp::XamlMetaDataProvider _appProvider;
    };

    template<typename D, typename... I>
    using AppT2 = App_baseWithProvider<D, I...>;
}
