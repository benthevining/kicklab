
namespace Kicklab
{

GUI::GUI (State& stateToUse)
: GUIInitializer (*getTopLevelComponent()),
state (stateToUse)
{
    setInterceptsMouseClicks (false, true);
    
    gui::addAndMakeVisible (this, header);
}

}
