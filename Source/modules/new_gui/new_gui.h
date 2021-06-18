#pragma once

#if 0

BEGIN_JUCE_MODULE_DECLARATION

ID:                new_gui
vendor:            Ben Vining
version:           0.0.1
name:              new_gui
description:       GUI for my new project
dependencies:      bv_gui new_state

END_JUCE_MODULE_DECLARATION

#endif

#include <bv_gui/bv_gui.h>
#include <new_state/new_state.h>

namespace New
{
class GUI : public juce::Component,
            public gui::GUIInitializer
{
public:
    GUI (State& stateToUse);

    virtual ~GUI() override;

private:
    void paint (juce::Graphics& g) final;
    void resized() final;

    bool keyPressed (const juce::KeyPress& key) final;
    void modifierKeysChanged (const juce::ModifierKeys& modifiers) final;
    void focusLost (FocusChangeType cause) final;

    juce::TooltipWindow tooltipWindow {this, 700};

    State&      state;
    Parameters& parameters {state.parameters};

    PluginUndo undoManager {parameters};

    PresetManager presetManager {state};

    // gui::DarkModeSentinel darkModeSentinel {internals.guiDarkMode, *this};

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GUI)
};

}  // namespace New
