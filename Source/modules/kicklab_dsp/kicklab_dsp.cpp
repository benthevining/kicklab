#include "kicklab_dsp.h"

namespace Kicklab
{
template < typename SampleType >
Engine< SampleType >::Engine (State& stateToUse)
    : state (stateToUse)
{
}

template < typename SampleType >
void Engine< SampleType >::renderBlock (const AudioBuffer& input, AudioBuffer& output, MidiBuffer& midiMessages, bool isBypassed)
{
    juce::ignoreUnused (input, output, midiMessages, isBypassed);
}

template < typename SampleType >
void Engine< SampleType >::prepared (int blocksize, double samplerate)
{
    juce::ignoreUnused (blocksize, samplerate);
}

template < typename SampleType >
void Engine< SampleType >::released()
{
}

template class Engine< float >;
template class Engine< double >;

}  // namespace Kicklab
