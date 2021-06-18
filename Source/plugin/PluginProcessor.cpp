#include "PluginProcessor.h"
#include "PluginEditor.h"

namespace New
{
Processor::Processor()
    : ProcessorBase (state.parameters,
                     floatEngine, doubleEngine,
                     BusesProperties()
                         .withInput (TRANS ("Input"), juce::AudioChannelSet::stereo(), true)
                         .withInput (TRANS ("Sidechain"), juce::AudioChannelSet::mono(), false)
                         .withOutput (TRANS ("Output"), juce::AudioChannelSet::stereo(), true))
{
    state.addTo (this);
}

Processor::~Processor()
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

bool Processor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* Processor::createEditor()
{
    return new Editor (*this);
}


}  // namespace New

// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new New::Processor();
}
