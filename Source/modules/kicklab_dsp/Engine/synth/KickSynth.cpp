
namespace Kicklab
{
template < typename SampleType >
KickSynth< SampleType >::KickSynth (State& stateToUse)
    : state (stateToUse)
{
}

template < typename SampleType >
dsp::SynthVoiceBase< SampleType >* KickSynth< SampleType >::createVoice()
{
    return new KickSynthVoice< SampleType > (state, this);
}

template class KickSynth< float >;
template class KickSynth< double >;

}  // namespace Kicklab
