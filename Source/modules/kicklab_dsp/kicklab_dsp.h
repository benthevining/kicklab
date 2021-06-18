#pragma once

#if 0

BEGIN_JUCE_MODULE_DECLARATION

ID:                kicklab_dsp
vendor:            Ben Vining
version:           0.0.1
name:              kicklab_dsp
description:       DSP for Kicklab
dependencies:      bv_dsp kicklab_state

END_JUCE_MODULE_DECLARATION

#endif

#include <bv_dsp/bv_dsp.h>
#include <kicklab_state/kicklab_state.h>

#include "synth/KickSynth.h"


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
    void released() final;

    State&      state;
    Parameters& parameters {state.parameters};

    KickSynth< SampleType > synth;
};

}  // namespace Kicklab
