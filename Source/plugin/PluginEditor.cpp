
#include "PluginEditor.h"

namespace New
{
Editor::Editor (Processor& p)
    : EditorBase (p), gui (p.getState())
{
    this->setBufferedToImage (true);
}


Editor::~Editor()
{
}

void Editor::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}


void Editor::resizeTriggered()
{
    gui.setBounds (getLocalBounds());
}

}  // namespace New
