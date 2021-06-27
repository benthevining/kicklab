
namespace Kicklab
{
template < typename SampleType >
void KickSynthVoice< SampleType >::renderPlease (AudioBuffer& output, float desiredFrequency, double currentSamplerate)
{
    juce::ignoreUnused (output, desiredFrequency, currentSamplerate);
}

template class KickSynthVoice< float >;
template class KickSynthVoice< double >;

}  // namespace Kicklab
