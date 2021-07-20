#pragma once

#if 0

BEGIN_JUCE_MODULE_DECLARATION

ID:                kicklab_state
vendor:            Ben Vining
version:           0.0.1
name:              kicklab_state
description:       State for Kicklab
dependencies:      bv_midi bv_plugin

END_JUCE_MODULE_DECLARATION

#endif


#include "Parameters.h"

namespace Kicklab
{
struct State : plugin::State
{
    State() : plugin::State (parameters, "Kicklab")
    {
    }

    Parameters parameters;
};


struct PresetManager : plugin::PresetManagerBase
{
    using PresetManagerBase::PresetManagerBase;

    std::string getCompanyName() final { return "Ben Vining Music Software"; }
    std::string getProductName() final { return "Kicklab"; }
    std::string getPresetFileExtension() final { return ".xml"; }
};


}  // namespace Kicklab
