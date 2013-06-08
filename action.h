#ifndef _ACTION_H_
#define _ACTION_H_

enum action_id {
ACTION_NULL = 0,
// Movement
ACTION_PAUSE,
ACTION_MOVE_N,
ACTION_MOVE_NE,
ACTION_MOVE_E,
ACTION_MOVE_SE,
ACTION_MOVE_S,
ACTION_MOVE_SW,
ACTION_MOVE_W,
ACTION_MOVE_NW,
ACTION_MOVE_DOWN,
ACTION_MOVE_UP,
// Shift view
ACTION_CENTER,
ACTION_SHIFT_N,
ACTION_SHIFT_NE,
ACTION_SHIFT_E,
ACTION_SHIFT_SE,
ACTION_SHIFT_S,
ACTION_SHIFT_SW,
ACTION_SHIFT_W,
ACTION_SHIFT_NW,
// Environment Interaction
ACTION_OPEN,
ACTION_CLOSE,
ACTION_SMASH,
ACTION_EXAMINE,
ACTION_PICKUP,
ACTION_BUTCHER,
ACTION_CHAT,
ACTION_LOOK,
ACTION_PEEK,
ACTION_LIST_ITEMS,
// Inventory Interaction (including quasi-inventories like bionics)
ACTION_INVENTORY,
ACTION_ADVANCEDINV,
ACTION_COMPARE,
ACTION_ORGANIZE,
ACTION_USE,
ACTION_USE_WIELDED,
ACTION_WEAR,
ACTION_TAKE_OFF,
ACTION_EAT,
ACTION_READ,
ACTION_WIELD,
ACTION_PICK_STYLE,
ACTION_RELOAD,
ACTION_UNLOAD,
ACTION_THROW,
ACTION_FIRE,
ACTION_FIRE_BURST,
ACTION_SELECT_FIRE_MODE,
ACTION_DROP,
ACTION_DIR_DROP,
ACTION_BIONICS,
ACTION_SORT_ARMOR,
// Long-term / special actions
ACTION_WAIT,
ACTION_CRAFT,
ACTION_RECRAFT,
ACTION_LONGCRAFT,
ACTION_CONSTRUCT,
ACTION_DISASSEMBLE,
ACTION_SLEEP,
ACTION_CONTROL_VEHICLE,
ACTION_TOGGLE_SAFEMODE,
ACTION_TOGGLE_AUTOSAFE,
ACTION_IGNORE_ENEMY,
ACTION_SAVE,
ACTION_QUIT,
// Info Screens
ACTION_PL_INFO,
ACTION_MAP,
ACTION_MISSIONS,
ACTION_KILLS,
ACTION_FACTIONS,
ACTION_MORALE,
ACTION_MESSAGES,
ACTION_HELP,
// Debug Functions
ACTION_DEBUG,
ACTION_DISPLAY_SCENT,
ACTION_TOGGLE_DEBUGMON,
NUM_ACTIONS
};

action_id look_up_action(std::string ident);
std::string action_ident(action_id);
std::string action_name(action_id);

#endif
