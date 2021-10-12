
namespace Kicklab
{
OutputLevelMeter::OutputLevelMeter (Parameters& paramsToUse)
    : params (paramsToUse)
{
    juce::ignoreUnused (params);
}

void OutputLevelMeter::paint (juce::Graphics&)
{
}

void OutputLevelMeter::resized()
{
}


OutputLevelMeter::Bar::Bar (plugin::GainMeterParameter& meter)
    : level (meter)
{
    juce::ignoreUnused (level);
}

void OutputLevelMeter::Bar::paint (juce::Graphics&)
{
}

void OutputLevelMeter::Bar::resized()
{
}

}  // namespace Kicklab
