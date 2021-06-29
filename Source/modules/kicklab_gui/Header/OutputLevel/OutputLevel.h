#pragma once

#include "LevelMeter.h"
#include "Thumb.h"

namespace Kicklab
{

class OutputLevel : public juce::Component
{
public:
    OutputLevel (Parameters& paramsToUse);
    
private:
    void paint (juce::Graphics& g) final;
    void resized() final;
    
    Parameters& params;
    
    OutputLevelMeter meter {params};
    OutputLevelThumb thumb {params};
};

}
