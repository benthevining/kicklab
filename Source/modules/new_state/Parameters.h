#pragma once

namespace New
{
using namespace bav;
using namespace ParameterValueConversionLambdas;


struct Parameters : ParameterList
{
    Parameters() : ParameterList ("NewParameters")
    {
        add (mainBypass);
    }
    
    ToggleParam mainBypass {"Main bypass", "Main bypass", false};
};

}  // namespace New
