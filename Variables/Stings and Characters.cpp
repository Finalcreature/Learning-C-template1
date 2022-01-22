#include "pch.h"
#include "Stings_and_Characters.h"
#if __has_include("Stings_and_Characters.g.cpp")
#include "Stings_and_Characters.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Variables::implementation
{
    Stings_and_Characters::Stings_and_Characters()
    {
        InitializeComponent();
    }

    int32_t Stings_and_Characters::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Stings_and_Characters::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Stings_and_Characters::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
