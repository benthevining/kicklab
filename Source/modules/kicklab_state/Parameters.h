#pragma once

#include <bv_midi/bv_midi.h>
#include <bv_plugin/bv_plugin.h>
#include <bv_networking/bv_networking.h>

namespace Kicklab
{
using namespace bav;
using namespace ParameterValueConversionLambdas;


struct Parameters : plugin::ParameterList
{
    Parameters() : plugin::ParameterList ("KicklabParameters")
    {
    }
};

}  // namespace Kicklab
