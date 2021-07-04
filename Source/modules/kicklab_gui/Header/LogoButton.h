#pragma once

#include "AboutPopup.h"


namespace Kicklab
{
class LogoButton : public juce::Component
{
public:
    LogoButton();

private:
    void resized() final;
    void createAboutWindow();

    gui::TextButton button {"Imogen", [&]{ createAboutWindow(); }};

    gui::Popup<AboutPopup> aboutWindow;
};

}
