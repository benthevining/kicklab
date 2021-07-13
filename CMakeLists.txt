
cmake_minimum_required (VERSION 3.18) 

project (Kicklab VERSION 0.0.1 LANGUAGES CXX)

#set (BV_USE_MTS_ESP TRUE)
#set (BV_USE_ABLETON_LINK TRUE) 

include (scripts/get_shared_code.cmake)

#

set (sourceDir ${CMAKE_CURRENT_LIST_DIR}/Source)

bv_add_modules (${sourceDir}/modules)

#

set (bv_default_formats Standalone VST3 AU Unity)
bv_detect_plugin_formats (formats)

juce_add_plugin (Kicklab
    PLUGIN_NAME                     Kicklab
    PRODUCT_NAME					Kicklab
    VERSION                     	${CMAKE_PROJECT_VERSION}
    BUNDLE_ID                   	com.BenViningMusicSoftware.Kicklab
    PLUGIN_MANUFACTURER_CODE        Benv
    DESCRIPTION                     "Kick synthesizer"
    IS_SYNTH                        TRUE
    IS_MIDI_EFFECT                  FALSE
    NEEDS_MIDI_INPUT            	TRUE
    NEEDS_MIDI_OUTPUT           	FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS 	FALSE
    DISABLE_AAX_MULTI_MONO          TRUE
    VST_NUM_MIDI_INS                1
    VST_NUM_MIDI_OUTS               0
    VST3_CATEGORIES                 ""
    AU_MAIN_TYPE                    ""
    FORMATS                         ${formats}
    MICROPHONE_PERMISSION_ENABLED   FALSE
    PLUGIN_CODE                 	Kclb  
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

configure_default_juce_plugin (Kicklab)

target_sources (Kicklab PRIVATE ${sourceDir}/plugin/Main.cpp)

target_include_directories (Kicklab PRIVATE ${sourceDir})

add_binary_data_folder (Kicklab assets)

target_link_libraries (Kicklab PRIVATE kicklab_dsp kicklab_gui)


