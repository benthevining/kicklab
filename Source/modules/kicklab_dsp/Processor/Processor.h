#pragma once

#include <kicklab_dsp/Engine/Engine.h>


namespace Kicklab
{
class Processor : public dsp::Processor< State, Engine >
{
public:
    Processor();

private:
    bool canAddBus (bool isInput) const final { return isInput; }
    bool isBusesLayoutSupported (const BusesLayout& layouts) const final;

    double         getTailLengthSeconds() const final;
    BoolParameter& getMainBypass() const final;

    bool acceptsMidi() const final { return true; }
    bool producesMidi() const final { return true; }
    bool supportsMPE() const final { return false; }
    bool isMidiEffect() const final { return false; }

    const String getName() const final { return "Kicklab"; }

    Parameters& parameters {state.parameters};
};

}  // namespace Kicklab
