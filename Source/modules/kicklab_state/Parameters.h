#pragma once

#include <lemons_midi/lemons_midi.h>
#include <lemons_plugin/lemons_plugin.h>

namespace Kicklab
{
using namespace lemons;
using namespace ParameterValueConversionLambdas;


struct Parameters : plugin::ParameterList
{
    Parameters() : plugin::ParameterList ("KicklabParameters")
    {
    }
};

}  // namespace Kicklab
