
#pragma once

#include "bv_gui/bv_gui.h"
#include <new_gui/new_gui.h>

#include "PluginProcessor.h"


namespace New
{
class Editor : public bav::gui::EditorBase
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

}  // namespace New
