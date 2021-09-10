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
struct CustomStateData : SerializableData
{
private:
    void serialize (TreeReflector& ref) final
    {
    }
};


struct State : plugin::CustomState< Parameters, CustomStateData >
{
    State() : plugin::CustomState< Parameters, CustomStateData > ("Kicklab")
    {
    }
};

}  // namespace Kicklab
