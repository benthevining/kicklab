#pragma once

#include "LogoButton.h"
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

    // plugin::PresetBar presets {state, "Kicklab", ".kicklabpreset"};

    OutputLevel outputLevel {state.parameters};
};

}  // namespace Kicklab
