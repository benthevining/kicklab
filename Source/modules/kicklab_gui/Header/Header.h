#pragma once

#include "LogoButton.h"
#include "PresetBar/PresetBar.h"
#include "OutputLevel/OutputLevel.h"
#include "ScaleChooser.h"


namespace Kicklab
{

class Header : public juce::Component
{
public:
    Header (State& stateToUse);
    
private:
    State& state;
    
    LogoButton logo;
    
    ScaleChooser scale;
    
    PresetBar presets;
    
    OutputLevel outputLevel {state.parameters};
};

}
