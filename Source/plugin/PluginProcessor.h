
#pragma once

//#include "bv_plugin/bv_plugin.h"
//#include "bv_dsp/bv_dsp.h"

#include <kicklab_dsp/kicklab_dsp.h>

namespace Kicklab
{
class Processor : public dsp::ProcessorBase
{
public:
    Processor();
    ~Processor() override;

    State& getState() { return state; }

private:
    bool canAddBus (bool isInput) const final { return isInput; }
    bool isBusesLayoutSupported (const BusesLayout& layouts) const final;

    double         getTailLengthSeconds() const final;
    BoolParameter& getMainBypass() const final;

    bool acceptsMidi() const final { return true; }
    bool producesMidi() const final { return true; }
    bool supportsMPE() const final { return false; }
    bool isMidiEffect() const final { return false; }

    bool                        hasEditor() const final;
    juce::AudioProcessorEditor* createEditor() final;

    const String      getName() const final { return "NewProject"; }
    juce::StringArray getAlternateDisplayNames() const final { return {"New"}; }

    /*=========================================================================================*/

    State       state;
    Parameters& parameters {state.parameters};

    Engine< float >  floatEngine {state};
    Engine< double > doubleEngine {state};

    /*=========================================================================================*/

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Processor)
};

}  // namespace Kicklab
