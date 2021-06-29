
namespace Kicklab
{
Processor::Processor()
    : dsp::Processor< State, Engine > (BusesProperties()
                                           .withInput (TRANS ("Input"), juce::AudioChannelSet::stereo(), true)
                                           .withOutput (TRANS ("Output"), juce::AudioChannelSet::stereo(), true))
{
}

BoolParameter& Processor::getMainBypass() const
{
    return *parameters.mainBypass.get();
}

double Processor::getTailLengthSeconds() const
{
    return 0.;
}

bool Processor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
    if (layouts.getMainInputChannelSet().isDisabled() && layouts.getChannelSet (true, 1).isDisabled()) return false;

    return layouts.getMainOutputChannelSet() == juce::AudioChannelSet::stereo();
}

}  // namespace Kicklab
