
#pragma once

#include <bv_synth/bv_synth.h>

namespace Kicklab
{
template < typename SampleType >
class KickSynthVoice : public dsp::SynthVoiceBase< SampleType >
{
public:
    using AudioBuffer = juce::AudioBuffer< SampleType >;

    KickSynthVoice (State& stateToUse, dsp::SynthBase< SampleType >* synth);

private:
    void renderPlease (AudioBuffer& output, float desiredFrequency, double currentSamplerate) final;

    State& state;
};

}  // namespace Kicklab
