/**
	\author SavaLione
*/
#ifndef COCKROACHRACING_H
#define COCKROACHRACING_H

#include <string>

namespace cockroachracing {
	const std::string bug = "<@><";
	const std::string line_primary = "------------------------------------------------------------------------------------------|";
	const std::string line_secondary = "----------------------------------------------------------------------------------------|#|";
	const std::string line_left_guard = "[";
	const std::string line_right_guard = "]";
	const std::string line_right_guard_end = "|#|";
	
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
	
	const std::string darlakon =  "  _____             _       _               \n |  __ \\           | |     | |              \n | |  | | __ _ _ __| | __ _| | _____  _ __  \n | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ \n | |__| | (_| | |  | | (_| |   < (_) | | | |\n |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|";
	const std::string savalione = "   _____                  _      _                  \n  / ____|                | |    (_)                 \n | (___   __ ___   ____ _| |     _  ___  _ __   ___ \n  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\\n  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/\n |_____/ \\__,_| \\_/ \\__,_|______|_|\\___/|_| |_|\\___|";
	const std::string bandit = "  ____                  _ _ _   \n |  _ \\                | (_) |  \n | |_) | __ _ _ __   __| |_| |_ \n |  _ < / _` | '_ \\ / _` | | __|\n | |_) | (_| | | | | (_| | | |_ \n |____/ \\__,_|_| |_|\\__,_|_|\\__|";
	const std::string lama = "  _                           \n | |                          \n | |     __ _ _ __ ___   __ _ \n | |    / _` | '_ ` _ \\ / _` |\n | |___| (_| | | | | | | (_| |\n |______\\__,_|_| |_| |_|\\__,_|";
	const std::string buglogo = "\n\n\n                                                `                                          \n                                                `                                          \n                                                 `       `                                 \n                                                 `    ``                                   \n                                              ` `.- ``                                     \n                                             -+hh+s/                                       \n                                         .:oyyosyyy:                                       \n                                    ``.:oyyys++ss/` ``                                     \n                                    .-/yhyssssss/                                          \n                                  `:./hdhyysso-.-                                          \n                                `.` .ydhyo/--/-`.                                          \n                               `   `-/o:. .-.` .                                           \n                                        `-.    `                                           \n                                       .`                                                  \n                                       `                                                   ";
	const std::string buglogoup = "*******************************************************************************************\n*************************************|Cockroach_Racing|************************************";
	const std::string buglogodown = "********************|Use <- and -> for navigation and Enter to choose.|********************\n*******************************************************************************************";
	const std::string menuhelp = "\tCockroach_Racing is a race-like game, where you place your bet on 1 of 6\n\t cockroaches, and if you get it right - you'll earn 100 credits, if not \n\t- lose 50 credits. When starting new game, you have 100 credits. GL HF.\n";
	
	const std::string win1 = "  __  __          _______ _   _  _____ \n /_ | \\ \\        / /_   _| \\ | |/ ____|\n  | |  \\ \\  /\\  / /  | | |  \\| | (___  \n  | |   \\ \\/  \\/ /   | | | . ` |\\___ \\ \n  | |    \\  /\\  /   _| |_| |\\  |____) |\n  |_|     \\/  \\/   |_____|_| \\_|_____/ ";
	const std::string win2 = "  ___   __          _______ _   _  _____ \n |__ \\  \\ \\        / /_   _| \\ | |/ ____|\n    ) |  \\ \\  /\\  / /  | | |  \\| | (___  \n   / /    \\ \\/  \\/ /   | | | . ` |\\___ \\ \n  / /_     \\  /\\  /   _| |_| |\\  |____) |\n |____|     \\/  \\/   |_____|_| \\_|_____/ ";
	const std::string win3 = "  ____   __          _______ _   _  _____ \n |___ \\  \\ \\        / /_   _| \\ | |/ ____|\n   __) |  \\ \\  /\\  / /  | | |  \\| | (___  \n  |__ <    \\ \\/  \\/ /   | | | . ` |\\___ \\ \n  ___) |    \\  /\\  /   _| |_| |\\  |____) |\n |____/      \\/  \\/   |_____|_| \\_|_____/ ";
	const std::string win4 = "  _  _    __          _______ _   _  _____ \n | || |   \\ \\        / /_   _| \\ | |/ ____|\n | || |_   \\ \\  /\\  / /  | | |  \\| | (___  \n |__   _|   \\ \\/  \\/ /   | | | . ` |\\___ \\ \n    | |      \\  /\\  /   _| |_| |\\  |____) |\n    |_|       \\/  \\/   |_____|_| \\_|_____/ ";
	const std::string win5 = "  _____  __          _______ _   _  _____ \n | ____| \\ \\        / /_   _| \\ | |/ ____|\n | |__    \\ \\  /\\  / /  | | |  \\| | (___  \n |___ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ \n  ___) |    \\  /\\  /   _| |_| |\\  |____) |\n |____/      \\/  \\/   |_____|_| \\_|_____/ ";
	const std::string win6 = "    __   __          _______ _   _  _____ \n   / /   \\ \\        / /_   _| \\ | |/ ____|\n  / /_    \\ \\  /\\  / /  | | |  \\| | (___  \n | '_ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ \n | (_) |    \\  /\\  /   _| |_| |\\  |____) |\n  \\___/      \\/  \\/   |_____|_| \\_|_____/ ";
	
	const std::string logo1 = "           ,  .'''''.  ...    ''''',  .'\n            ','     ,.MMMM;.;'      '.\n             ;;    ;MMMMMMMMM;     ;;'\n            :'M:  ;MMMMMMMMMMM;.  :M':\n            : M:  MMMMMMMMMMMMM:  :M  .\n           .' M:  MMMMMMMMMMMMM:  :M. ;\n";
	const std::string logo2 = "           ; :M\'  :MMMMMMMMMMMM\'  \'M: :\n           : :M: .;\"MMMMMMMMM\":;. ,M: :\n           :  ::,MMM;.M\":::M.;MMM ::\' :\n         ,.;    ;MMMMMM;:MMMMMMMM:    :,.\n         MMM.;.,MMMMMMMM;MMMMMMMM;.,;.MMM\n         M\':\'\'\':MMMMMMMMM;MMMMMMMM: \"\': M\n";
	const std::string logo3 = "         M.:   ;MMMMMMMMMMMMMMMMMM;   : M\n         :::   MMMMMMMMMMM;MMMMMMMM   ::M\n      ,\'   :   MMMMMMMMMMMM:MMMMMMM   :   \'.\n     \'     :  \'MMMMMMMMMMMMM:MMMMMM   ;     \'\n     ,.....;.. MMMMMMMMMMMMM:MMMMMM ..:....;.\n     ,.....;.. MMMMMMMMMMMMM:MMMMMM ..:....;.\n";
	const std::string logo4 = "     :MMMMMMMM MMMMMMMMMMMMM:MMMMMM MMMMMMMM:\n     :MM\"\"\":\"\" MMMMMMMMMMMMM:MMMMMM \"\": \"\'MM:\n      MM:   :  MMMMMMMMMMMMM:MMMMMM  ,\'  :MM\n      \'MM   :  :MMMMMMMMMMMM:MMMMM:  :   ;M:\n       :M;  :  \'MMMMMMMMMMMMMMMMMM\'  :  ;MM\n       :MM. :   :MMMMMMMMMM;MMMMM:   :  MM:\n";
	const std::string logo5 = "        :M: :    MMMMMMMMM\'MMMMMM\'   : :MM\'\n        \'MM :    \"MMMMMMM:;MMMMM\"   ,\' ;M\"\n         ;\'  :     \"MMMMMMMM;.\"     :  \"\".\n       ,;    :      :MMMMMMM:;.     :    \'.\n      :\'     :    ,MM\'\'\"\"\"\"\'\':M:    :     \';\n";
	const std::string logo6 = "	  ;\'      :    ;M\'         MM.   :       ;.\n   ,\'        :    \"            \"\'   :        \'.\n   \'        :\'                       \'        \'\'\n .          :                        \'          \'\n\'          ;                          ;          \'\n          ;                            \'";
	
	const std::string logonew = "   _____           _                         _     _____            _\n  / ____|         | |                       | |   |  __ \\          (_)\n | |     ___   ___| | ___ __ ___   __ _  ___| |__ | |__) |__ _  ___ _ _ __   __ _\n | |    / _ \\ / __| |/ / '__/ _ \\ / _` |/ __| '_ \\|  _  // _` |/ __| | '_ \\ / _` |\n | |___| (_) | (__|   <| | | (_) | (_| | (__| | | | | \\ \\ (_| | (__| | | | | (_| |\n  \\_____\\___/ \\___|_|\\_\\_|  \\___/ \\__,_|\\___|_| |_|_|  \\_\\__,_|\\___|_|_| |_|\\__, |\n                                                                             __/ |\n                                                                            |___/";
	
	const std::string logonew1 = "   _____           _                         _     _____            _";
	const std::string logonew2 = "  / ____|         | |                       | |   |  __ \\          (_)";
	const std::string logonew3 = " | |     ___   ___| | ___ __ ___   __ _  ___| |__ | |__) |__ _  ___ _ _ __   __ _";
	const std::string logonew4 = " | |    / _ \\ / __| |/ / '__/ _ \\ / _` |/ __| '_ \\|  _  // _` |/ __| | '_ \\ / _` |";
	const std::string logonew5 = " | |___| (_) | (__|   <| | | (_) | (_| | (__| | | | | \\ \\ (_| | (__| | | | | (_| |";
	const std::string logonew6 = "  \\_____\\___/ \\___|_|\\_\\_|  \\___/ \\__,_|\\___|_| |_|_|  \\_\\__,_|\\___|_|_| |_|\\__, |";
	const std::string logonew7 = "                                                                             __/ |";
	const std::string logonew8 = "                                                                            |___/";
}

#endif // COCKROACHRACING_H
