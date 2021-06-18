#pragma once

#if 0

BEGIN_JUCE_MODULE_DECLARATION

ID:                new_state
vendor:            Ben Vining
version:           0.0.1
name:              new_state
description:       State for my new project
dependencies:      bv_midi bv_plugin bv_networking

END_JUCE_MODULE_DECLARATION

#endif

#include <bv_midi/bv_midi.h>
#include <bv_plugin/bv_plugin.h>
#include <bv_networking/bv_networking.h>

#include "Parameters.h"

namespace New
{
struct State : StateBase
{
    State() : StateBase ("NewState")
    {
        add (parameters);
    }

    Parameters parameters;
};


struct PresetManager : PresetManagerBase
{
    PresetManager (State& state) : PresetManagerBase (state.parameters)
    {
    }

    std::string getCompanyName() final { return "Ben Vining Music Software"; }
    std::string getProductName() final { return "NewProject"; }
    std::string getPresetFileExtension() final { return ".xml"; }
};


}  // namespace New
