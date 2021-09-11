#pragma once

#include "KickSynthVoice.h"

namespace Kicklab
{
template < typename SampleType >
class KickSynth : public dsp::LambdaSynth< SampleType >
{
public:
    KickSynth (State& stateToUse);

private:
    State& state;
};

}  // namespace Kicklab
