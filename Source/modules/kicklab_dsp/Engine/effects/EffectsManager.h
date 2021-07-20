#pragma once

namespace Kicklab
{
template < typename SampleType >
class EffectsManager
{
public:
    EffectsManager (State& stateToUse);

    void prepare (double samplerate, int blocksize);

    void process (juce::AudioBuffer< SampleType >& audio);

private:
    State& state;
};

}  // namespace Kicklab
