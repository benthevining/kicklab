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
    void                               prepared (int blocksize) final;
    void                               samplerateChanged (double newSamplerate) final;
    dsp::SynthVoiceBase< SampleType >* createVoice() final;
};

}  // namespace Kicklab
