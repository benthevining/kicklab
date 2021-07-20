
namespace Kicklab
{
GUI::GUI (State& stateToUse)
    : state (stateToUse)
{
    setInterceptsMouseClicks (false, true);

    gui::addAndMakeVisible (this, header);
}

}  // namespace Kicklab
