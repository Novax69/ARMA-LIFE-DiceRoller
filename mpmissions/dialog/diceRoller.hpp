/*
    File: diceRoller.hpp
    Author: Novax
   	github : https://github.com/Novax69 <== Find my other scripts for arma here
    Date : 16/11/2021
    Description: 
	diceRoller GUI Menu
*/
class NOV_DiceRoller {
    idd = 690300;
    name= "NOV_DiceRoller";
    movingEnable = 0;
    enableSimulation = 1;

	class controlsBackground {

		class TitleHeader: Life_RscText
		{
			idc = 690301;
			text = "Jeu de dés"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.314531 * safezoneW;
			h = 0.033 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class Background: Life_RscText
		{
			idc = 690302;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.3262 * safezoneH + safezoneY;
			w = 0.314531 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class YourDiceHeader: Life_RscText
		{
			idc = 690303;
			text = "Vos dés"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class DealerDicesHeader: Life_RscText
		{
			idc = 690304;
			text = "Dealer"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class RulesHeader: Life_RscText
		{
			idc = 690305;
			text = "Règles"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class MiseHeader: Life_RscText
		{
			idc = 690319;
			text = "Votre Mise"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class ResultHeader: Life_RscText
		{
			idc = 690306;
			text = "Résultat"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.6122 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		// class YourDiceTotalText: BaseRscSingleText
		// {
		// 	idc = 690307;
		// 	text = "Total :"; //--- ToDo: Localize;
		// 	x = 0.371094 * safezoneW + safezoneX;
		// 	y = 0.5484 * safezoneH + safezoneY;
		// 	w = 0.04125 * safezoneW;
		// 	h = 0.055 * safezoneH;
		// };
		// class DealerDiceTotal: BaseRscSingleText
		// {
		// 	idc = 690308;
		// 	text = "Total :"; //--- ToDo: Localize;
		// 	x = 0.538156 * safezoneW + safezoneX;
		// 	y = 0.5484 * safezoneH + safezoneY;
		// 	w = 0.04125 * safezoneW;
		// 	h = 0.055 * safezoneH;
		// };
	};

	class controls {
		class closeButton: Life_RscButton
		{
			idc = 690309;
			text = "Fermer"; //--- ToDo: Localize;
            onButtonClick = "closeDialog 0;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.7134 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class RuleStructuredText: Life_RscStructuredText
		{
			idc = 690310;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class YourDice2: Life_RscStructuredText
		{
			idc = 690311;
			text = "X"; //--- ToDo: Localize;
			x = 0.448437 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class YourDice1: Life_RscStructuredText
		{
			idc = 690312;
			text = "X"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class YourDiceResult: Life_RscStructuredText
		{
			idc = 690313;
			text = "X"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class DealerDice1: Life_RscStructuredText
		{
			idc = 690314;
			text = "X"; //--- ToDo: Localize;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class DealerDice2: Life_RscStructuredText
		{
			idc = 690315;
			text = "X"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class DealerDiceResult: Life_RscStructuredText
		{
			idc = 690316;
			text = "X"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonRollDice: Life_RscButton
		{
			idc = 690317;
			text = "Jeter les dés !"; //--- ToDo: Localize;
			onButtonClick = "execVM 'NovScript\DiceRoller\fn_NovDiceRollerRoll.sqf'";
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.6122 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class ResultText: Life_RscStructuredText
		{
			idc = 690318;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class MiseInput: Life_RscEdit
		{
			idc = 690320;
			text = "1"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};


};