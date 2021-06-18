
namespace Kicklab
{
template < typename SampleType >
void KickSynthVoice< SampleType >::renderPlease (AudioBuffer& output, float desiredFrequency, double currentSamplerate)
{
    juce::ignoreUnused (output, desiredFrequency, currentSamplerate);
}

template < typename SampleType >
void KickSynthVoice< SampleType >::prepared (int /*blocksize*/)
{
}

template < typename SampleType >
void KickSynthVoice< SampleType >::released()
{
}

template < typename SampleType >
void KickSynthVoice< SampleType >::noteCleared()
{
}

template class KickSynthVoice< float >;
template class KickSynthVoice< double >;

}  // namespace Kicklab
