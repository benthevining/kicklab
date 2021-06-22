#include "PluginProcessor.h"
#include <kicklab_gui/kicklab_gui.h>

namespace Kicklab
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

BoolParameter& Processor::getMainBypass() const
{
    return *parameters.mainBypass.get();
}

double Processor::getTailLengthSeconds() const
{
    return 0.;
}

bool Processor::canAddBus (bool isInput) const 
{
    return ! isInput;
}

bool Processor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
    return layouts.getMainOutputChannelSet() == juce::AudioChannelSet::stereo();
}

bool Processor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* Processor::createEditor()
{
    return new gui::PluginEditor<GUI>(*this, state);
}


}  // namespace Kicklab

// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new Kicklab::Processor();
}
