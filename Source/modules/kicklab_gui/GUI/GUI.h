#pragma once

#include <kicklab_state/kicklab_state.h>
#include <lemons_plugin_gui/lemons_plugin_gui.h>

#include <kicklab_gui/Header/Header.h>

#include <lemons_spline/lemons_spline.h>

namespace Kicklab
{
class GUI : public plugin::GUI< State >
{
public:
    GUI (plugin::PluginState< State >& pluginState);

private:
    Header header {state};
};

}  // namespace Kicklab
