#include <kicklab_dsp/kicklab_dsp.h>
#include <kicklab_gui/kicklab_gui.h>


juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    using namespace Kicklab;

    return new plugin::ProcessorWithEditor< Processor, GUI > (1060, 640);
}
