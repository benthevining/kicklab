#pragma once

#include "KickSynthVoice.h"

namespace Kicklab
{
template < typename SampleType >
class KickSynth : public dsp::SynthBase< SampleType >
{
public:
    KickSynth() = default;

private:
    void prepared (double samplerate, int blocksize) final;
    
    dsp::SynthVoiceBase< SampleType >* createVoice() final;
};

}  // namespace Kicklab
