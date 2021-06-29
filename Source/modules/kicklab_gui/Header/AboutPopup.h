#pragma once

namespace Kicklab
{

class AboutPopup : public gui::PopupComponent
{
    using PopupComponent::PopupComponent;
    
    void resizeTriggered() final;
};

}
