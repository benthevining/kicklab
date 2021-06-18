
namespace Kicklab
{
template < typename SampleType >
void KickSynth< SampleType >::prepared (int /*blocksize*/)
{
}

template < typename SampleType >
void KickSynth< SampleType >::samplerateChanged (double /*newSamplerate*/)
{
}

template < typename SampleType >
dsp::SynthVoiceBase< SampleType >* KickSynth< SampleType >::createVoice()
{
    return new KickSynthVoice< SampleType > (this);
}

template class KickSynth< float >;
template class KickSynth< double >;

}  // namespace Kicklab
