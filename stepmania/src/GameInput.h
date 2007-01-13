/* GameInput - An input event specific to an InputScheme defined by a logical controller and button. */

#ifndef GAME_INPUT_H
#define GAME_INPUT_H

#include "EnumHelper.h"

class InputScheme;

enum GameController
{
	GAME_CONTROLLER_1 = 0,	// left controller
	GAME_CONTROLLER_2,	// right controller
	NUM_GameController,	// leave this at the end
	GameController_Invalid,
};
#define FOREACH_GameController( gc ) FOREACH_ENUM( GameController, gc )

enum GameButton
{
	GAME_BUTTON_MENULEFT,
	GAME_BUTTON_MENURIGHT,
	GAME_BUTTON_MENUUP,
	GAME_BUTTON_MENUDOWN,
	GAME_BUTTON_START,
	GAME_BUTTON_SELECT,
	GAME_BUTTON_BACK,
	GAME_BUTTON_COIN,
	GAME_BUTTON_OPERATOR,
	GAME_BUTTON_CUSTOM_01,
	GAME_BUTTON_CUSTOM_02,
	GAME_BUTTON_CUSTOM_03,
	GAME_BUTTON_CUSTOM_04,
	GAME_BUTTON_CUSTOM_05,
	GAME_BUTTON_CUSTOM_06,
	GAME_BUTTON_CUSTOM_07,
	GAME_BUTTON_CUSTOM_08,
	GAME_BUTTON_CUSTOM_09,
	GAME_BUTTON_CUSTOM_10,
	GAME_BUTTON_CUSTOM_11,
	GAME_BUTTON_CUSTOM_12,
	GAME_BUTTON_CUSTOM_13,
	GAME_BUTTON_CUSTOM_14,
	GAME_BUTTON_CUSTOM_15,
	GAME_BUTTON_CUSTOM_16,
	GAME_BUTTON_CUSTOM_17,
	GAME_BUTTON_CUSTOM_18,
	GAME_BUTTON_CUSTOM_19,

	NUM_GameButton,
	GameButton_Invalid
};

RString GameButtonToString( const InputScheme* pInputs, GameButton i );
RString GameButtonToLocalizedString( const InputScheme* pInputs, GameButton i );
GameButton StringToGameButton( const InputScheme* pInputs, const RString& s );

#define FOREACH_GameButton( gb ) FOREACH_ENUM( GameButton, gb )

#define GAME_BUTTON_NEXT		GAME_BUTTON_CUSTOM_01

#define DANCE_BUTTON_LEFT		GAME_BUTTON_CUSTOM_01
#define DANCE_BUTTON_RIGHT		GAME_BUTTON_CUSTOM_02
#define DANCE_BUTTON_UP			GAME_BUTTON_CUSTOM_03
#define DANCE_BUTTON_DOWN		GAME_BUTTON_CUSTOM_04
#define DANCE_BUTTON_UPLEFT		GAME_BUTTON_CUSTOM_05
#define DANCE_BUTTON_UPRIGHT		GAME_BUTTON_CUSTOM_06
#define NUM_DANCE_BUTTONS		GAME_BUTTON_CUSTOM_07

#define PUMP_BUTTON_UPLEFT		GAME_BUTTON_CUSTOM_01
#define PUMP_BUTTON_UPRIGHT		GAME_BUTTON_CUSTOM_02
#define PUMP_BUTTON_CENTER		GAME_BUTTON_CUSTOM_03
#define PUMP_BUTTON_DOWNLEFT		GAME_BUTTON_CUSTOM_04
#define PUMP_BUTTON_DOWNRIGHT		GAME_BUTTON_CUSTOM_05
#define NUM_PUMP_BUTTONS		GAME_BUTTON_CUSTOM_06

#define EZ2_BUTTON_FOOTUPLEFT		GAME_BUTTON_CUSTOM_01
#define EZ2_BUTTON_FOOTUPRIGHT		GAME_BUTTON_CUSTOM_02
#define EZ2_BUTTON_FOOTDOWN		GAME_BUTTON_CUSTOM_03
#define EZ2_BUTTON_HANDUPLEFT		GAME_BUTTON_CUSTOM_04
#define EZ2_BUTTON_HANDUPRIGHT		GAME_BUTTON_CUSTOM_05
#define EZ2_BUTTON_HANDLRLEFT		GAME_BUTTON_CUSTOM_06
#define EZ2_BUTTON_HANDLRRIGHT		GAME_BUTTON_CUSTOM_07
#define NUM_EZ2_BUTTONS			GAME_BUTTON_CUSTOM_08

#define PARA_BUTTON_LEFT		GAME_BUTTON_CUSTOM_01
#define PARA_BUTTON_UPLEFT		GAME_BUTTON_CUSTOM_02
#define PARA_BUTTON_UP			GAME_BUTTON_CUSTOM_03
#define PARA_BUTTON_UPRIGHT		GAME_BUTTON_CUSTOM_04
#define PARA_BUTTON_RIGHT		GAME_BUTTON_CUSTOM_05
#define NUM_PARA_BUTTONS		GAME_BUTTON_CUSTOM_06

#define DS3DDX_BUTTON_HANDLEFT		GAME_BUTTON_CUSTOM_01
#define DS3DDX_BUTTON_FOOTDOWNLEFT	GAME_BUTTON_CUSTOM_02
#define DS3DDX_BUTTON_FOOTUPLEFT	GAME_BUTTON_CUSTOM_03
#define DS3DDX_BUTTON_HANDUP		GAME_BUTTON_CUSTOM_04
#define DS3DDX_BUTTON_HANDDOWN		GAME_BUTTON_CUSTOM_05
#define DS3DDX_BUTTON_FOOTUPRIGHT	GAME_BUTTON_CUSTOM_06
#define DS3DDX_BUTTON_FOOTDOWNRIGHT	GAME_BUTTON_CUSTOM_07
#define DS3DDX_BUTTON_HANDRIGHT		GAME_BUTTON_CUSTOM_08
#define NUM_DS3DDX_BUTTONS		GAME_BUTTON_CUSTOM_09

#define BEAT_BUTTON_KEY1		GAME_BUTTON_CUSTOM_01
#define BEAT_BUTTON_KEY2		GAME_BUTTON_CUSTOM_02
#define BEAT_BUTTON_KEY3		GAME_BUTTON_CUSTOM_03
#define BEAT_BUTTON_KEY4		GAME_BUTTON_CUSTOM_04
#define BEAT_BUTTON_KEY5		GAME_BUTTON_CUSTOM_05
#define BEAT_BUTTON_KEY6		GAME_BUTTON_CUSTOM_06
#define BEAT_BUTTON_KEY7		GAME_BUTTON_CUSTOM_07
#define BEAT_BUTTON_SCRATCHUP		GAME_BUTTON_CUSTOM_08
#define BEAT_BUTTON_SCRATCHDOWN		GAME_BUTTON_CUSTOM_09
#define NUM_BEAT_BUTTONS		GAME_BUTTON_CUSTOM_10

#define MANIAX_BUTTON_HANDUPLEFT	GAME_BUTTON_CUSTOM_01
#define MANIAX_BUTTON_HANDUPRIGHT	GAME_BUTTON_CUSTOM_02
#define MANIAX_BUTTON_HANDLRLEFT	GAME_BUTTON_CUSTOM_03
#define MANIAX_BUTTON_HANDLRRIGHT	GAME_BUTTON_CUSTOM_04
#define NUM_MANIAX_BUTTONS		GAME_BUTTON_CUSTOM_05

#define TECHNO_BUTTON_LEFT		GAME_BUTTON_CUSTOM_01
#define TECHNO_BUTTON_RIGHT		GAME_BUTTON_CUSTOM_02
#define TECHNO_BUTTON_UP		GAME_BUTTON_CUSTOM_03
#define TECHNO_BUTTON_DOWN		GAME_BUTTON_CUSTOM_04
#define TECHNO_BUTTON_UPLEFT		GAME_BUTTON_CUSTOM_05
#define TECHNO_BUTTON_UPRIGHT		GAME_BUTTON_CUSTOM_06
#define TECHNO_BUTTON_CENTER		GAME_BUTTON_CUSTOM_07
#define TECHNO_BUTTON_DOWNLEFT		GAME_BUTTON_CUSTOM_08
#define TECHNO_BUTTON_DOWNRIGHT		GAME_BUTTON_CUSTOM_09
#define NUM_TECHNO_BUTTONS		GAME_BUTTON_CUSTOM_10

#define POPN_BUTTON_LEFT_WHITE		GAME_BUTTON_CUSTOM_01
#define POPN_BUTTON_LEFT_YELLOW		GAME_BUTTON_CUSTOM_02
#define POPN_BUTTON_LEFT_GREEN		GAME_BUTTON_CUSTOM_03
#define POPN_BUTTON_LEFT_BLUE		GAME_BUTTON_CUSTOM_04
#define POPN_BUTTON_RED			GAME_BUTTON_CUSTOM_05
#define POPN_BUTTON_RIGHT_BLUE		GAME_BUTTON_CUSTOM_06
#define POPN_BUTTON_RIGHT_GREEN		GAME_BUTTON_CUSTOM_07
#define POPN_BUTTON_RIGHT_YELLOW	GAME_BUTTON_CUSTOM_08
#define POPN_BUTTON_RIGHT_WHITE		GAME_BUTTON_CUSTOM_09
#define NUM_POPN_BUTTONS		GAME_BUTTON_CUSTOM_10

#define LIGHTS_BUTTON_MARQUEE_UP_LEFT	GAME_BUTTON_CUSTOM_01
#define LIGHTS_BUTTON_MARQUEE_UP_RIGHT	GAME_BUTTON_CUSTOM_02
#define LIGHTS_BUTTON_MARQUEE_LR_LEFT	GAME_BUTTON_CUSTOM_03
#define LIGHTS_BUTTON_MARQUEE_LR_RIGHT	GAME_BUTTON_CUSTOM_04
#define LIGHTS_BUTTON_BUTTONS_LEFT	GAME_BUTTON_CUSTOM_05
#define LIGHTS_BUTTON_BUTTONS_RIGHT	GAME_BUTTON_CUSTOM_06
#define LIGHTS_BUTTON_BASS_LEFT		GAME_BUTTON_CUSTOM_07
#define LIGHTS_BUTTON_BASS_RIGHT	GAME_BUTTON_CUSTOM_08
#define NUM_LIGHTS_BUTTONS		GAME_BUTTON_CUSTOM_09

typedef GameButton MenuButton;
#define MENU_BUTTON_LEFT GAME_BUTTON_MENULEFT
#define MENU_BUTTON_RIGHT GAME_BUTTON_MENURIGHT
#define MENU_BUTTON_UP GAME_BUTTON_MENUUP
#define MENU_BUTTON_DOWN GAME_BUTTON_MENUDOWN
#define MENU_BUTTON_START GAME_BUTTON_START
#define MENU_BUTTON_SELECT GAME_BUTTON_SELECT
#define MENU_BUTTON_BACK GAME_BUTTON_BACK
#define MENU_BUTTON_COIN GAME_BUTTON_COIN
#define MENU_BUTTON_OPERATOR GAME_BUTTON_OPERATOR
#define MenuButton_Invalid GameButton_Invalid

struct GameInput
{
	GameInput(): controller(GameController_Invalid), button(GameButton_Invalid) { }

	GameInput( GameController c, GameButton b ): controller(c), button(b) { }

	GameController	controller;
	GameButton	button;

	bool operator==( const GameInput &other ) const { return controller == other.controller && button == other.button; };
	bool operator<( const GameInput &other ) const
	{
		if( controller < other.controller )
			return true;
		else if( controller > other.controller )
			return false;
		return button < other.button;
	}

	inline bool IsValid() const { return controller != GameController_Invalid && button != GameButton_Invalid; };
	inline void MakeInvalid() { controller = GameController_Invalid; button = GameButton_Invalid; };

	RString ToString( const InputScheme* pInputs ) const;
	bool FromString( const InputScheme* pInputs, const RString &s );
};

#endif

/*
 * (c) 2001-2004 Chris Danford
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
