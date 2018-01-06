/**
	\file
	\brief
	
	Вызов:
		\code
		
		\endcode
		
	\author SavaLione
*/
#ifndef COCKROACHRACING_H
#define COCKROACHRACING_H

#include <string>

namespace constants {
	std::string bug = "<@><";
	std::string line_primary = "------------------------------------------------------------------------------------------|";
	std::string line_secondary = "----------------------------------------------------------------------------------------|#|";
	std::string line_left_guard = "[";
	std::string line_right_guard = "]";
	std::string line_right_guard_end = "|#|";
}

namespace menu {
    /** Отступ между пунктами меню. */
    const std::string indentation = "       ";
	
    /** Левая скобка и отступ слева. */
    const std::string frame_left = "       <";
	
    /** Правая скобка и отступ справа. */
    const std::string frame_right = ">       ";
	
	/** Backspace key. */
	const size_t backspace = 8;
	
	/** Enter key. */
	const size_t enter = 13;
	
	/** ESC key. */
	const size_t esc = 27;
	
	/** Space key. */
	const size_t space = 32;
	
	/** Arrow up key. */
	const size_t arrow_up = 72;
	
	/** Arrow left key. */
	const size_t arrow_left = 75;
	
	/** Arrow right key. */
	const size_t arrow_right = 77;
	
	/** Arrow down key. */
	const size_t arrow_down = 80;
	
	/** Special key. */
	const size_t special = 224;
}

namespace authors {
	std::string darlakon =  "  _____             _       _               \n |  __ \\           | |     | |              \n | |  | | __ _ _ __| | __ _| | _____  _ __  \n | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ \n | |__| | (_| | |  | | (_| |   < (_) | | | |\n |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|";
	std::string savalione = "   _____                  _      _                  \n  / ____|                | |    (_)                 \n | (___   __ ___   ____ _| |     _  ___  _ __   ___ \n  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\\n  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/\n |_____/ \\__,_| \_/ \\__,_|______|_|\\___/|_| |_|\\___|";
	std::string bandit = "  ____                  _ _ _   \n |  _ \\                | (_) |   | |_) | __ _ _ __   __| |_| |_ \n |  _ < / _` | '_ \\ / _` | | __|\n | |_) | (_| | | | | (_| | | |_ \n |____/ \\__,_|_| |_|\\__,_|_|\\__|";
	std::string lama = "  _                           \n | |                          \n | |     __ _ _ __ ___   __ _ \n | |    / _` | '_ ` _ \\ / _` |\n | |___| (_| | | | | | | (_| |\n |______\\__,_|_| |_| |_|\\__,_|";
}

namespace winlist {
	
}

#endif // COCKROACHRACING_H