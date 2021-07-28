#pragma once

#include "synth/KickSynth.h"
#include "effects/EffectsManager.h"

namespace Kicklab
{
template < typename SampleType >
class Engine : public dsp::Engine< SampleType >
{
public:
    Engine (State& stateToUse);

private:
    void renderBlock (const AudioBuffer< SampleType >& input, AudioBuffer< SampleType >& output, MidiBuffer& midiMessages, bool isBypassed) final;
    void prepared (int blocksize, double samplerate) final;

    State& state;

    KickSynth< SampleType >      synth {state};
    EffectsManager< SampleType > effects {state};
};

}  // namespace Kicklab
