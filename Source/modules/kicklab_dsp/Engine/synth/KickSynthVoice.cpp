
namespace Kicklab
{
template < typename SampleType >
KickSynthVoice< SampleType >::KickSynthVoice (State& stateToUse, dsp::SynthBase< SampleType >* synth)
    : dsp::SynthVoiceBase< SampleType > (synth), state (stateToUse)
{
}

template < typename SampleType >
void KickSynthVoice< SampleType >::renderPlease (AudioBuffer< SampleType >& output, float desiredFrequency, double currentSamplerate)
{
    juce::ignoreUnused (output, desiredFrequency, currentSamplerate);
}

template class KickSynthVoice< float >;
template class KickSynthVoice< double >;

}  // namespace Kicklab
