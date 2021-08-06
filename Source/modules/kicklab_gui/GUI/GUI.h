#pragma once

#include <kicklab_state/kicklab_state.h>
#include <bv_plugin_gui/bv_plugin_gui.h>

#include <kicklab_gui/Header/Header.h>

#include <bv_spline/bv_spline.h>

namespace Kicklab
{
class GUI : public plugin::GUI
{
public:
    BV_DECLARE_PLUGIN_GUI_CONSTRUCTOR (GUI, State);

private:
    State& state;

    Header header {state};
};

}  // namespace Kicklab
