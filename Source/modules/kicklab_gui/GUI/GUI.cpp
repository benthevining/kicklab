
namespace Kicklab
{
BV_IMPLEMENT_PLUGIN_GUI_CONSTRUCTOR (GUI, State)
{
    setInterceptsMouseClicks (false, true);

    gui::addAndMakeVisible (this, header);
}

}  // namespace Kicklab
