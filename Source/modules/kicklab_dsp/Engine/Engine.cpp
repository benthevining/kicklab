
namespace Kicklab
{
template < typename SampleType >
Engine< SampleType >::Engine (State& stateToUse)
    : state (stateToUse)
{
}

template < typename SampleType >
void Engine< SampleType >::renderBlock (const AudioBuffer&, AudioBuffer& output, MidiBuffer& midiMessages, bool)
{
    synth.renderVoices (midiMessages, output);
    effects.process (output);
}

template < typename SampleType >
void Engine< SampleType >::prepared (int blocksize, double samplerate)
{
    if (! synth.isInitialized())
        synth.initialize (12, samplerate, blocksize);
    
    synth.prepare (samplerate, blocksize);
    effects.prepare (samplerate, blocksize);
}

template class Engine< float >;
template class Engine< double >;

}  // namespace Kicklab
