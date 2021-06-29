
namespace Kicklab
{

OutputLevel::OutputLevel (Parameters& paramsToUse)
: params (paramsToUse)
{
    gui::addAndMakeVisible (this, thumb, meter);
}

void OutputLevel::paint (juce::Graphics&)
{
    
}

void OutputLevel::resized()
{
    // thumb, meter
}

}
