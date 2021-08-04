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
struct State : plugin::State< Parameters >
{
    State() : plugin::State< Parameters > ("Kicklab")
    {
    }
};

}  // namespace Kicklab
