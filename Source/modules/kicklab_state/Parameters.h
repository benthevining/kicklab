#pragma once

namespace Kicklab
{
using namespace bav;
using namespace ParameterValueConversionLambdas;


struct Parameters : ParameterList
{
    Parameters() : ParameterList ("KicklabParameters")
    {
        add (mainBypass);
    }

    ToggleParam mainBypass {"Main bypass", "Main bypass", false};
};

}  // namespace Kicklab
