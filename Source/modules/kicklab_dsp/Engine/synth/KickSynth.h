#pragma once

#include "KickSynthVoice.h"

namespace Kicklab
{
template < typename SampleType >
class KickSynth : public dsp::SynthBase< SampleType >
{
public:
    KickSynth (State& stateToUse);

private:
    dsp::SynthVoiceBase< SampleType >* createVoice() final;

    State& state;
};

}  // namespace Kicklab
