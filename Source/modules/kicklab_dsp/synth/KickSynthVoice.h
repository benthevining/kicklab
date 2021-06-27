
#pragma once

namespace Kicklab
{
template < typename SampleType >
class KickSynthVoice : public dsp::SynthVoiceBase< SampleType >
{
public:
    using AudioBuffer = juce::AudioBuffer< SampleType >;
    
    using dsp::SynthVoiceBase< SampleType >::SynthVoiceBase;

private:
    void renderPlease (AudioBuffer& output, float desiredFrequency, double currentSamplerate) final;
};

}  // namespace Kicklab
