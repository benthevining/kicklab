#include "kicklab_dsp.h"

#include "synth/KickSynth.cpp"
#include "synth/KickSynthVoice.cpp"

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
    juce::ignoreUnused (input);

    if (! isBypassed)
        synth.renderVoices (midiMessages, output);
    else
        synth.bypassedBlock (output.getNumSamples(), midiMessages);

    midiMessages.clear();
}

template < typename SampleType >
void Engine< SampleType >::prepared (int blocksize, double samplerate)
{
    if (! synth.isInitialized())
        synth.initialize (12, samplerate, blocksize);

    synth.prepare (blocksize);
    synth.setCurrentPlaybackSampleRate (samplerate);
}

template < typename SampleType >
void Engine< SampleType >::released()
{
    synth.releaseResources();
}

template class Engine< float >;
template class Engine< double >;

}  // namespace Kicklab
