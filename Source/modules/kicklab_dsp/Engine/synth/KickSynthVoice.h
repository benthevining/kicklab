
#pragma once

#include <bv_synth/bv_synth.h>

namespace Kicklab
{
template < typename SampleType >
class KickSynthVoice : public dsp::SynthVoiceBase< SampleType >
{
public:
    KickSynthVoice (State& stateToUse, dsp::SynthBase< SampleType >* synth);

private:
    void renderPlease (AudioBuffer< SampleType >& output, float desiredFrequency, double currentSamplerate) final;

    State& state;
};

}  // namespace Kicklab
