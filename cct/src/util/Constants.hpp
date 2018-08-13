/**
 * Created by universal on 21.07.2018.
 * This file is part of input-overlay which is licensed
 * under the MOZILLA PUBLIC LICENSE 2.0 - mozilla.org/en-US/MPL/2.0/
 * github.com/univrsal/input-overlay
 */
#pragma once

/* Resources */
#define PATH_ROBOTO_FONT			"res/roboto-regular.ttf"
#define PATH_UNICODE_FONT			"res/antique-maru.ttf"
#define PATH_TRANSLATIONS			"res/lang"

#define ERROR_NO_TRANSLATION			"Error: No translation was found. Make sure that at least en_US.ini is in ./res/lang/"

#define LABEL_BUILD				"io-cct build "
#define ELEMENT_UNNAMED				"Unnamed"
#define LABEL_X_AXIS				"X in pixels"
#define LABEL_Y_AXIS				"Y in pixels"
#define LABEL_SCALE				"Scale: %ix"

/* Translation constants*/
#define LANG_ID					"language"

/* SDL errors */
#define SDL_INIT_FAILED				"Initialization of SDL failed! Error: %s\n"
#define SDL_CREATE_WINDOW_FAILED		"Creating SDL Window failed! Error: %s\n"
#define SDL_LOAD_WINDOW_ICON_FAILED		"Loading window icon failed! Error: %s\n"
#define SDL_CREATE_RENDERER_FAILED		"Creating SDL Renderer failed! Error: %s\n"
#define SDL_TTF_INIT_FAILED			"Initializing SDL_ttf failed! Error: %s\n"
#define SDL_FONT_LOADING_FAILED			"Couldn't load fonts!\n"
#define SDL_IMAGE_TO_SURFACE			"ERROR: Couldn't create surface %s! SDL_Error: %s\n"
#define SDL_SURFACE_TO_TEXTURE_FAILED		"ERROR: Couldn't load image %s! SDL_Error: %s\n"
#define SDL_TEXT_TO_TEXTURE			"Error while creating texture from surface in text rendering! ERROR: %s\n"
#define SDL_TEXT_TO_SURFACE			"Error while creating surface from font in text rendering! ERROR: %s\n"

/* Notifications */
#define LANG_MSG_SAVE_ERROR			"msg_save_error"
#define LANG_MSG_LOAD_ERROR			"msg_load_error"
#define LANG_MSG_SAVE_SUCCESS			"msg_save_success"
#define LANG_MSG_LOAD_SUCCESS			"msg_load_success"
#define LANG_MSG_CONFIG_EMPTY			"msg_config_empty"
#define LANG_MSG_CONFIG_CORRUPT			"msg_config_corrupt"
#define LANG_MSG_VALUE_TYPE_INVALID		"msg_value_invalid_type"
#define LANG_MSG_NOTHING_TO_SAVE		"msg_nothing_to_save"

/* Dialog titles*/
#define LANG_DIALOG_NEW_ELEMENT			"dialog_new_element"
#define LANG_DIALOG_SETUP			"dialog_setup"
#define LANG_DIALOG_HELP			"dialog_help"
#define LANG_DIALOG_ELEMENT_SETTINGS		"dialog_element_settings"

/* Errors */
#define LANG_ERROR_ID_NOT_UNIQUE		"error_id_not_unique"
#define LANG_ERROR_KEYCODE_INVALID		"error_keycode_invalid"
#define LANG_ERROR_SELECTION_EMTPY		"error_selection_empty"
#define LANG_ERROR_INVALID_TEXTURE_PATH		"error_invalid_texture_path"
#define LANG_ERROR_INVALID_CONFIG_PATH		"error_invalid_config_path"

/* Setup dialog */
#define LANG_LABEL_INFO				"label_info"
#define LANG_LABEL_TEXTURE_PATH			"label_texture_path"
#define LANG_LABEL_CONFIG_PATH			"label_config_path"
#define LANG_LABEL_DEFAULT_WIDTH		"label_default_width"
#define LANG_LABEL_DEFAULT_HEIGHT		"label_default_height"

/* Reusable elements */
#define LANG_BUTTON_OK				"button_ok"
#define LANG_BUTTON_EXIT			"button_exit"
#define LANG_BUTTON_CANCEL			"button_cancel"

#define LANG_LABEL_WIDTH			"label_width"
#define LANG_LABEL_HEIGHT			"label_height"
#define LANG_LABEL_X				"label_x"
#define LANG_LABEL_Y				"label_y"
#define LANG_LABEL_U				"label_u"
#define LANG_LABEL_V				"label_v"

/* New Element Dialog */
#define LANG_LABEL_TEXTURE_SELECTION		"label_texture_selection"
#define LANG_LABEL_KEY_CODE			"label_keycode"
#define LANG_LABEL_ELEMENT_ID			"label_element_id"
#define LANG_CHECKBOX_RECORD_KEYBIND		"checkbox_record_keybind"

/* Selected element settings */
#define LANG_BUTTON_ADD_ELEMENT			"button_add_element"
#define LANG_BUTTON_DELETE_ELEMENT		"button_delete_element"
#define LANG_BUTTON_MODIFY_ELEMENT		"button_modify_element"
#define LANG_BUTTON_SAVE_CONFIG			"button_save_config"
#define LANG_BUTTON_HELP			"button_help"

/* Help and about dialog*/
#define LANG_LABEL_HELP_AND_ABOUT		"label_help_about"
