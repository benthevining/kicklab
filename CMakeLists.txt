cmake_minimum_required (VERSION 3.21 FATAL_ERROR) 

project (Kicklab VERSION 0.0.1 LANGUAGES CXX)

add_subdirectory (GetLemons)

include (LemonsAppModules)
include (BVBrandFlags)

set (sourceDir "${CMAKE_CURRENT_LIST_DIR}/Source")

lemons_add_juce_modules ("${sourceDir}/modules")

juce_add_plugin (${PROJECT_NAME}
    ${BV_DEFAULT_BRAND_FLAGS}
    PLUGIN_NAME                     ${PROJECT_NAME}
    PRODUCT_NAME					${PROJECT_NAME}
    VERSION                     	${PROJECT_VERSION}
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
    FORMATS                         ${LEMONS_PLUGIN_FORMATS}
    MICROPHONE_PERMISSION_ENABLED   FALSE
    PLUGIN_CODE                 	Kclb  
    DOCUMENT_BROWSER_ENABLED    	TRUE
    BACKGROUND_AUDIO_ENABLED		FALSE # for iOS
    NEEDS_CURL                  	TRUE
    NEEDS_WEB_BROWSER           	TRUE
    ICON_BIG                    	""  # path to icon file
    STATUS_BAR_HIDDEN           	TRUE  # for iOS
    REQUIRES_FULL_SCREEN        	TRUE  # for iOS
    IPAD_SCREEN_ORIENTATIONS    	UIInterfaceOrientationUnknown, UIInterfaceOrientationLandscapeLeft, UIInterfaceOrientationLandscapeRight
    TARGETED_DEVICE_FAMILY      	2     # target iPad only
    DOCUMENT_EXTENSIONS         	xml
    SEND_APPLE_EVENTS_PERMISSION_ENABLED FALSE
    )

lemons_configure_juce_plugin (TARGET ${PROJECT_NAME} BROWSER ASSET_FOLDER assets)

target_sources (${PROJECT_NAME} PRIVATE "${sourceDir}/Main.cpp")

target_include_directories (${PROJECT_NAME} PRIVATE ${sourceDir})

target_link_libraries (${PROJECT_NAME} PRIVATE kicklab_dsp kicklab_gui)

