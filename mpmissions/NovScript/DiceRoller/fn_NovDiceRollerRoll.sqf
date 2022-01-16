#include "..\..\script_macros.hpp"
/*
    File: fn_NovDiceRollerRoll.sqf
    Author: Novax
   	github : https://github.com/Novax69 <== Find my other scripts for arma here
    Date : 16/11/2021
    Description:
	DiceRoller
*/

private["_breakCondition","_maxBet","_useMaxBet","_victory","_arrayToGive","_mise","_multiplier","_yourDice1","_yourDice2","_yourTotal","_dealerDice1","_dealerDice2","_dealerTotal","_ammount"];

_arrayToGive = [];

_mise = parseNumber(ctrlText 690320);
_multiplier = NOV_PARAMS(getNumber,"nov_diceRollerMultiplier");

_useMaxBet = NOV_PARAMS(getNumber,"nov_diceRollerUseMaxBet");
if(_useMaxBet isEqualTo 1) then {
	_maxBet = NOV_PARAMS(getNumber,"nov_diceRollerMaxBet");
	if(_mise > _maxBet) then { _breakCondition = true } else { _breakCondition = false };
};
if(_breakCondition) exitWith {hint format [localize "STR_NOV_HoT_MaxBetReached",(_maxBet) call life_fnc_numberText]};

_yourDice1 = round((random(5))+1);
_yourDice2 = round((random(5))+1);
_yourTotal = _yourDice1 + _yourDice2;
_dealerDice1 = round((random(3))+3);
_dealerDice2 = round((random(3))+3);
_dealerTotal = _dealerDice1 + _dealerDice2;

if(_yourTotal > _dealerTotal) then {
	//Victoire
	_victory = 1;
	_ammount = round(_mise * _multiplier);
	CASH = CASH + _ammount;

} else {
	// Perdu
	_victory = 2;
	_ammount = _mise;
	CASH = CASH - _ammount;

};

_arrayToGive set[0,_victory];
_arrayToGive set[1,_yourDice1];
_arrayToGive set[2,_yourDice2];
_arrayToGive set[3,_dealerDice1];
_arrayToGive set[4,_dealerDice2];
_arrayToGive set[5,_yourTotal];
_arrayToGive set[6,_dealerTotal];
_arrayToGive set[7,_ammount];


[1,_arrayToGive] call nov_fnc_NovDiceRollerMenu;