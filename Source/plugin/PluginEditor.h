
#pragma once

//#include "bv_gui/bv_gui.h"
#include <kicklab_gui/kicklab_gui.h>

#include "PluginProcessor.h"


namespace Kicklab
{
class Editor : public gui::EditorBase
{
public:
    Editor (Processor& p);

    ~Editor() override;

private:
    void paint (juce::Graphics&) final;
    void resizeTriggered() final;

    GUI gui;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Editor)
};

}  // namespace Kicklab
