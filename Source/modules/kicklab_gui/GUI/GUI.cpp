
namespace Kicklab
{
GUI::GUI (plugin::PluginState< State >& pluginState)
    : plugin::GUI< State > (pluginState)
{
    setInterceptsMouseClicks (false, true);

    gui::addAndMakeVisible (this, header);
}

}  // namespace Kicklab
