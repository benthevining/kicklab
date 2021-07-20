#pragma once

#include "synth/KickSynth.h"
#include "effects/EffectsManager.h"

namespace Kicklab
{
template < typename SampleType >
class Engine : public dsp::Engine< SampleType >
{
public:
    using AudioBuffer = juce::AudioBuffer< SampleType >;
    using MidiBuffer  = juce::MidiBuffer;

    Engine (State& stateToUse);

private:
    void renderBlock (const AudioBuffer& input, AudioBuffer& output, MidiBuffer& midiMessages, bool isBypassed) final;
    void prepared (int blocksize, double samplerate) final;

    State& state;

    KickSynth< SampleType >      synth {state};
    EffectsManager< SampleType > effects {state};
};

}  // namespace Kicklab
