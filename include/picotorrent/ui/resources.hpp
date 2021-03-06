#pragma once

#define IDC_STATIC -1
#define TEXTFILE 256

// Keyboard accelerators
#define IDR_PICO_ACCELERATORS 8000
#define IDA_SELECT_ALL 8001
#define IDA_REMOVE_TORRENTS 8002
#define IDA_REMOVE_TORRENTS_DATA 8003

// Application
#define IDR_MAINMENU 101
#define IDI_APPICON  201

// Dialogs
#define IDD_PREFERENCES 301
#define IDD_ABOUT 302
#define IDD_ADD_TORRENT 303
#define IDD_DETAILS_OVERVIEW 310
#define IDD_DETAILS_FILES 311
#define IDD_DETAILS_PEERS 312
#define IDD_DETAILS_TRACKERS 313
#define IDD_PREFERENCES_DOWNLOADS 314
#define IDD_PREFERENCES_CONNECTION 315
#define IDD_PREFERENCES_ADVANCED 316
#define IDD_PREFERENCES_GENERAL 317

// Menus
#define ID_FILE_ADDTORRENT 9001
#define ID_FILE_EXIT 9002
#define ID_VIEW_PREFERENCES 9101
#define ID_HELP_ABOUT 9201
#define ID_HELP_CHECK_FOR_UPDATE 9203

// Add torrent dialog
#define ID_TORRENT_TEXT 101
#define ID_TORRENT 102
#define ID_SIZE_TEXT 103
#define ID_SIZE 104
#define ID_STORAGE_GROUP 105
#define ID_SAVE_PATH_TEXT 106
#define ID_SAVE_PATH 107
#define ID_BROWSE 108
#define ID_FILES 109

// General preferences dialog
#define ID_UI_GROUP 101
#define ID_LANGUAGE_TEXT 102
#define ID_LANGUAGE 103

// Download preferences dialog
#define ID_TRANSFERS_GROUP 102
#define ID_DEFSAVEPATH_TEXT 103
#define ID_PREFS_DEFSAVEPATH 9101
#define ID_PREFS_PROMPTFORSAVEPATH 9103
#define ID_PREFS_DEFSAVEPATH_BROWSE 9104

// Connection preferences dialog
#define ID_LISTEN_INTERFACE_GROUP 101
#define ID_ADDRESS_TEXT 102
#define ID_IPADDRESS 103
#define ID_PORT_TEXT 104
#define ID_LISTENPORT 105
#define ID_PROXY_GROUP 106
#define ID_TYPE_TEXT 107
#define ID_PROXY_TYPE 108
#define ID_HOST_TEXT 109
#define ID_PROXY_HOST 110
#define ID_PROXY_PORT_TEXT 111
#define ID_PROXY_PORT 112
#define ID_PROXY_USERNAME_TEXT 113
#define ID_PROXY_USERNAME 114
#define ID_PROXY_PASSWORD_TEXT 115
#define ID_PROXY_PASSWORD 116
#define ID_PROXY_FORCE 117
#define ID_PROXY_HOSTNAMES 118
#define ID_PROXY_PEERS 119
#define ID_PROXY_TRACKERS 120

// Advanced preferences dialog
#define ID_EXPERIMENTAL_GROUP 101
#define ID_USE_PICO_ID 102

// Overview details dialog
#define ID_LIMITS_GROUP 101
#define ID_DL_LIMIT_TEXT 102
#define ID_DL_LIMIT 103
#define ID_DL_LIMIT_HELP 104
#define ID_UL_LIMIT_TEXT 105
#define ID_UL_LIMIT 106
#define ID_UL_LIMIT_HELP 107
#define ID_MAX_CONNECTIONS_TEXT 108
#define ID_MAX_CONNECTIONS 109
#define ID_MAX_CONNECTIONS_HELP 110
#define ID_MAX_UPLOADS_TEXT 111
#define ID_MAX_UPLOADS 112
#define ID_MAX_UPLOADS_HELP 113
#define ID_SEQUENTIAL_DOWNLOAD 114

#define ID_DETAILS_FILES_LIST 1100
#define ID_DETAILS_PEERS_LIST 1101
#define ID_DETAILS_TRACKERS_LIST 1102

// Torrent context menu
#define IDR_TORRENT_CONTEXT_MENU 4100
#define TORRENT_CONTEXT_MENU_PAUSE 4101
#define TORRENT_CONTEXT_MENU_RESUME 4102
#define TORRENT_CONTEXT_MENU_RESUME_FORCE 4103
#define TORRENT_CONTEXT_MENU_MOVE 4104
#define TORRENT_CONTEXT_MENU_REMOVE 4105
#define TORRENT_CONTEXT_MENU_REMOVE_DATA 4106
#define TORRENT_CONTEXT_MENU_COPY_SHA 4107
#define TORRENT_CONTEXT_MENU_COPY_MAGNET 4108
#define TORRENT_CONTEXT_MENU_OPEN_IN_EXPLORER 4109
#define TORRENT_CONTEXT_MENU_DETAILS 4110

// Torrent file context menu
#define IDR_TORRENT_FILE_MENU 4400
#define TORRENT_FILE_PRIO_SKIP 4401
#define TORRENT_FILE_PRIO_NORMAL 4402
#define TORRENT_FILE_PRIO_HIGH 4403
#define TORRENT_FILE_PRIO_MAX 4404

// NotifyIcon context menu
#define IDR_NOTIFYICON_CONTEXT_MENU 4200
#define ID_NOTIFYICON_ADD 4201
#define ID_NOTIFYICON_EXIT 4202

// About dialog
#define ID_PICO_LOGO 101
#define ID_PICOTORRENT_V_FORMAT 102
#define ID_BUILD_INFO_FORMAT 103
#define ID_PICOTORRENT_DESCRIPTION 104
#define ID_GITHUB_LINK 105

// Keyboard shortcuts
#define IDHOT_SELECT_ALL 1001
