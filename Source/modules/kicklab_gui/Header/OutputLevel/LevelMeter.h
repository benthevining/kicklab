
#pragma once

namespace Kicklab
{
class OutputLevelMeter : public juce::Component
{
public:
    OutputLevelMeter (Parameters& paramsToUse);

private:
    struct Bar : juce::Component
    {
        Bar (plugin::GainMeterParameter& meter);

    private:
        void paint (juce::Graphics& g) final;
        void resized() final;

        plugin::GainMeterParameter& level;
    };

    void paint (juce::Graphics& g) final;
    void resized() final;

    Parameters& params;

    //Bar left {*params.outputLevelL.get()};
    //Bar right {*params.outputLevelR.get()};
};

}  // namespace Kicklab
