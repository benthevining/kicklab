
cmake_minimum_required (VERSION 3.18) 

project (NewProject VERSION 0.0.1 LANGUAGES CXX)

#set (BV_USE_MTS_ESP TRUE)
#set (BV_USE_ABLETON_LINK TRUE) 

include (CMake/FindShared-code.cmake)

add_subdirectory (Source/modules)

#

set (sourceDir ${CMAKE_CURRENT_LIST_DIR}/Source)

set (sourceFiles
    ${sourceDir}/plugin/PluginProcessor.h
    ${sourceDir}/plugin/PluginProcessor.cpp
    ${sourceDir}/plugin/PluginEditor.h
    ${sourceDir}/plugin/PluginEditor.cpp)

#

juce_add_plugin (${CMAKE_PROJECT_NAME}
    PLUGIN_NAME                     ${CMAKE_PROJECT_NAME}
    PRODUCT_NAME					${CMAKE_PROJECT_NAME}
    VERSION                     	${CMAKE_PROJECT_VERSION}
    BUNDLE_ID                   	com.BenViningMusicSoftware.${CMAKE_PROJECT_NAME}
    PLUGIN_MANUFACTURER_CODE        Benv
    DESCRIPTION                     ""
    IS_SYNTH                        FALSE
    IS_MIDI_EFFECT                  FALSE
    NEEDS_MIDI_INPUT            	TRUE
    NEEDS_MIDI_OUTPUT           	TRUE
    EDITOR_WANTS_KEYBOARD_FOCUS 	FALSE
    DISABLE_AAX_MULTI_MONO          TRUE
    VST_NUM_MIDI_INS                1
    VST_NUM_MIDI_OUTS               1
    VST3_CATEGORIES                 ""
    AU_MAIN_TYPE                    ""
    FORMATS                         AU VST3 Standalone Unity
    MICROPHONE_PERMISSION_ENABLED   TRUE
    MICROPHONE_PERMISSION_TEXT      ""
    PLUGIN_CODE                 	Nwpr  # 4 letters, first is capitalized
    DOCUMENT_BROWSER_ENABLED    	TRUE
    BACKGROUND_AUDIO_ENABLED		FALSE # for iOS
    NEEDS_CURL                  	TRUE
    NEEDS_WEB_BROWSER           	TRUE
    ICON_BIG                    	""  # path to icon file
    COMPANY_NAME                	BenViningMusicSoftware
    COMPANY_WEBSITE             	www.benvining.com
    COMPANY_EMAIL               	ben.the.vining@gmail.com
    COMPANY_COPYRIGHT           	"This software is provided as-is, with no guarantee of completion or fitness for any particular purpose, by Ben Vining, under the terms and conditions of the GNU Public License."
    STATUS_BAR_HIDDEN           	TRUE  # for iOS
    REQUIRES_FULL_SCREEN        	TRUE  # for iOS
    IPAD_SCREEN_ORIENTATIONS    	UIInterfaceOrientationUnknown, UIInterfaceOrientationLandscapeLeft, UIInterfaceOrientationLandscapeRight
    TARGETED_DEVICE_FAMILY      	2     # target iPad only
    DOCUMENT_EXTENSIONS         	xml
    SEND_APPLE_EVENTS_PERMISSION_ENABLED FALSE
    )

configure_default_juce_plugin (${CMAKE_PROJECT_NAME})

target_sources (${CMAKE_PROJECT_NAME} PRIVATE ${sourceFiles})

source_group (TREE ${sourceDir} PREFIX "" FILES ${sourceFiles})

target_include_directories (${CMAKE_PROJECT_NAME} PRIVATE ${sourceDir})

add_binary_data_folder (${CMAKE_PROJECT_NAME} assets)

target_link_libraries (${CMAKE_PROJECT_NAME} PRIVATE new_dsp new_gui new_state)


