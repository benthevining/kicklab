#pragma once

#if 0

BEGIN_JUCE_MODULE_DECLARATION

ID:                kicklab_gui
vendor:            Ben Vining
version:           0.0.1
name:              kicklab_gui
description:       GUI for Kicklab
dependencies:      bv_plugin_gui kicklab_state

END_JUCE_MODULE_DECLARATION

#endif

#include <bv_plugin_gui/bv_plugin_gui.h>
#include <kicklab_state/kicklab_state.h>

namespace Kicklab
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

}  // namespace Kicklab
