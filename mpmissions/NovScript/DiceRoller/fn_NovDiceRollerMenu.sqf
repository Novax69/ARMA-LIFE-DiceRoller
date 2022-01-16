#include "..\..\script_macros.hpp"
/*
    File: fn_NovDiceRollerMenu.sqf
    Author: Novax
   	github : https://github.com/Novax69 <== Find my other scripts for arma here
    Date : 16/11/2021
    Description:
	DiceRoller Play
*/

disableSerialization;
private["_multiplier","_mode","_answerArray","_hasWon","_yourDice1","_yourDice2","_yourTotal","_dealerDice1","_dealerDice2","_dealerTotal","_ammount"];

_multiplier = NOV_PARAMS(getNumber,"nov_diceRollerMultiplier");
_mode = _this select 0;

if(!dialog) then {
	if(!(createDialog "NOV_DiceRoller")) exitWith {};
};

if(_mode isEqualTo 1) then {
	_answerArray = _this select 1;
	_hasWon = _answerArray select 0;
	_yourDice1 = _answerArray select 1;
	_yourDice2 = _answerArray select 2;
	_dealerDice1 = _answerArray select 3;
	_dealerDice2 = _answerArray select 4;
	_yourTotal = _answerArray select 5;
	_dealerTotal = _answerArray select 6;
	_ammount = _answerArray select 7;
	CONTROL(690300,690312) ctrlSetStructuredText parseText format ["%1",_yourDice1];	
	CONTROL(690300,690311) ctrlSetStructuredText parseText format ["%1",_yourDice2];	
	CONTROL(690300,690313) ctrlSetStructuredText parseText format ["%1",_yourTotal];	
	CONTROL(690300,690314) ctrlSetStructuredText parseText format ["%1",_dealerDice1];	
	CONTROL(690300,690315) ctrlSetStructuredText parseText format ["%1",_dealerDice2];
	CONTROL(690300,690316) ctrlSetStructuredText parseText format ["%1",_dealerTotal];
	
	if(_hasWon isEqualTo 1) then {
		CONTROL(690300,690318) ctrlSetStructuredText parseText format[localize "STR_NOV_Dice_Win", (_ammount) call life_fnc_numberText];
	} else {
		CONTROL(690300,690318) ctrlSetStructuredText parseText format[localize "STR_NOV_Dice_Lost", (_ammount) call life_fnc_numberText];
	};
};

CONTROL(690300,690310) ctrlSetStructuredText parseText format[localize "STR_NOV_DiceRules",(_multiplier) call life_fnc_numberText];