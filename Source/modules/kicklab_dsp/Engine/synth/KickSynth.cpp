
namespace Kicklab
{
template < typename SampleType >
KickSynth< SampleType >::KickSynth (State& stateToUse)
    : dsp::LambdaSynth< SampleType > ([this]
                                      { return new KickSynthVoice< SampleType > (state, this); }),
      state (stateToUse)
{
}

template class KickSynth< float >;
template class KickSynth< double >;

}  // namespace Kicklab
