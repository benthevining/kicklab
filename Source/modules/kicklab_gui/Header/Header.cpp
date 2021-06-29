
namespace Kicklab
{

Header::Header (State& stateToUse)
: state (stateToUse)
{
    gui::addAndMakeVisible (this, logo, scale, outputLevel);
}

}
