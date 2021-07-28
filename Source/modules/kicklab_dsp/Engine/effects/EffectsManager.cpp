
namespace Kicklab
{
template < typename SampleType >
EffectsManager< SampleType >::EffectsManager (State& stateToUse)
    : state (stateToUse)
{
}

template < typename SampleType >
void EffectsManager< SampleType >::prepare (double samplerate, int blocksize)
{
    juce::ignoreUnused (samplerate, blocksize);
}

template < typename SampleType >
void EffectsManager< SampleType >::process (AudioBuffer< SampleType >&)
{
}

template class EffectsManager< float >;
template class EffectsManager< double >;

}  // namespace Kicklab
