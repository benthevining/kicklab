#pragma once

/*-------------------------------------------------------------------------------------

BEGIN_JUCE_MODULE_DECLARATION

ID:                kicklab_state
vendor:            Ben Vining
version:           0.0.1
name:              kicklab_state
description:       State for Kicklab
dependencies:      lemons_midi lemons_plugin

END_JUCE_MODULE_DECLARATION

-------------------------------------------------------------------------------------*/


#include "Parameters.h"

namespace Kicklab
{
struct CustomStateData : SerializableData
{
private:
    void serialize (TreeReflector& ref) final
    {
        juce::ignoreUnused (ref);
    }
};


struct State : plugin::CustomState< Parameters, CustomStateData >
{
    State() : plugin::CustomState< Parameters, CustomStateData > ("Kicklab")
    {
    }
};

}  // namespace Kicklab
