
namespace Kicklab
{
template < typename SampleType >
Engine< SampleType >::Engine (State& stateToUse)
    : state (stateToUse)
{
}

template < typename SampleType >
void Engine< SampleType >::renderBlock (const AudioBuffer&, AudioBuffer& output, MidiBuffer& midiMessages, bool isBypassed)
{
    synth.renderVoices (midiMessages, output);
}

template < typename SampleType >
void Engine< SampleType >::prepared (int blocksize, double samplerate)
{
    synth.prepare (samplerate, blocksize);
}

template class Engine< float >;
template class Engine< double >;

}  // namespace Kicklab
