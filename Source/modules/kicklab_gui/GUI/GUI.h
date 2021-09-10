#pragma once

#include <kicklab_state/kicklab_state.h>
#include <bv_plugin_gui/bv_plugin_gui.h>

#include <kicklab_gui/Header/Header.h>

#include <bv_spline/bv_spline.h>

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
