
namespace Kicklab
{
template < typename SampleType >
void KickSynth< SampleType >::prepared (double samplerate, int blocksize)
{
    juce::ignoreUnused (samplerate, blocksize);
}

template < typename SampleType >
dsp::SynthVoiceBase< SampleType >* KickSynth< SampleType >::createVoice()
{
    return new KickSynthVoice< SampleType > (this);
}

template class KickSynth< float >;
template class KickSynth< double >;

}  // namespace Kicklab
