#pragma once

#include <kicklab_gui/Header/Header.h>

namespace Kicklab
{

class GUI : public juce::Component
{
public:
    GUI (State& stateToUse);
    
private:
    State& state;
    
    Header header {state};
};

}
