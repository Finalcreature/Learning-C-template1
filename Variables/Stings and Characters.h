#pragma once

#include "Stings_and_Characters.g.h"

namespace winrt::Variables::implementation
{
    struct Stings_and_Characters : Stings_and_CharactersT<Stings_and_Characters>
    {
        Stings_and_Characters();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::Variables::factory_implementation
{
    struct Stings_and_Characters : Stings_and_CharactersT<Stings_and_Characters, implementation::Stings_and_Characters>
    {
    };
}
