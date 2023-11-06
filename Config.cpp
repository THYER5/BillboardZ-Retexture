class CfgPatches
{
	class BillboardZ_retextures
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"BillboardZ"};
	};
};
class CfgMods
{
	class BillboardZ_retex
	{
		dir = "BillboardZ_retextures";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "BillboardZ_retextures";
		credits = "Knaze/Thyers";
		author = "Knaze/Thyers";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class rot_sign_base;
	class rectanglesign_base;
	class squaresign_base;
	class trianglesign_base;
	class trianglewithwarning_base;
	class wallsign_base;
	class bigsign_base;
	class land_LED_Stand;
	class land_LED_Wall;
	class climable_billboard_base_With_light;
	class climable_billboard_base_no_light;
	class Changable_billboard;	
	class land_WallBB_base;
	class land_WallBB;	
	class land_Billboard_Light;
	class land_Billboard_NoLight;
	class land_Roadblock_base;
	
//--------------------------ROTATING_SIGN----------------------------------------------------
	class BZ_Rotating_sign_retex: rot_sign_base
	{
		scope = 1;
		hiddenSelections[]={"faces"};		
		hiddenSelectionsTextures[] = {"BillboardZ-Retexture\Data\Rotating_signs\face_co.paa"};
	};
//--------------------------RETEX SIGNS------------------------------------------------------

	class BZ_Rectangle_sign_retex: rectanglesign_base
	{
		scope = 1;
		hiddenSelections[]={"rectanglesign"};		
		hiddenSelectionsTextures[] = {"BillboardZ-Retexture\Data\Retex_signs\rectanglesign.paa"};
	};
	
	class BZ_Squaresign_sign_retex: squaresign_base
	{
		scope = 1;
		hiddenSelections[]={"squaresign"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Retex_signs\squaresign.paa"};
	};

	class BZ_Trianglesign_sign_retex: trianglesign_base
	{
		scope = 1;
		hiddenSelections[]={"trianglesign"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Retex_signs\trianglesign.paa"};
	};

	class BZ_Trianglesign_warning_sign_retex: trianglewithwarning_base
	{
		scope = 1;
		hiddenSelections[]={"trianglewithwarning"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Retex_signs\trianglewithwarning.paa"};
	};

	class BZ_Wallsign_sign_retex: wallsign_base
	{
		scope = 1;
		hiddenSelections[]={"wallsign"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Retex_signs\wallsign.paa"};
	};

	class BZ_Bigsign_sign_retex: bigsign_base
	{
		scope = 1;
		hiddenSelections[]={"bigsign"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Retex_signs\bigsign.paa"};
	};		

//--------------------------LED_Sign-------------------------------------------------------

	class BZ_LED_Stand_retex: land_LED_Stand
	{
		scope = 1;
		hiddenSelections[]={"POSTERS"};
		hiddenSelectionsMaterials[]={"BillboardZ-retexture\Data\LED_Sign\Wallmounted\POSTER.rvmat"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\LED_Sign\Wallmounted\POSTERS_co.paa"};
	};
	
	class BZ_LED_Wall_retex: land_LED_Wall
	{
		scope = 1;
		hiddenSelections[]={"POSTERS"};
		hiddenSelectionsMaterials[]={"BillboardZ-retexture\Data\LED_Sign\standing\POSTER.rvmat"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\LED_Sign\standing\POSTERS_co.paa"};
	};

//--------------------------Climable billboard---------------------------------------------

	class BZ_Billboard_With_lights_retex: climable_billboard_base_With_light
	{
		scope = 1;
		hiddenSelections[]={"FACE"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\climable_billboard\FACE_co.paa"};
	};

	class BZ_Billboard_no_lights_retex: climable_billboard_base_no_light
	{
		scope = 1;
		hiddenSelections[]={"FACE"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\climable_billboard\FACE_co.paa"};
	};

//--------------------------Changable billboard--------------------------------------------------

	class BZ_Changable_billboard_retex: Changable_billboard
	{
		scope = 1;
		hiddenSelections[]={"face"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Changable_billboard\faces_co.paa"};
	};

//--------------------------BillBoard Wall-------------------------------------------------------

	class BZ_WallBB_retex: land_WallBB
	{
		scope = 1;
		hiddenSelections[]={"poster"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\BillBoard_Wall\poster_co.paa"};
	};

//--------------------------Billboard Light-------------------------------------------------------

	class BZ_Billboard_light_retex: land_Billboard_Light
	{
		scope = 1;
		hiddenSelections[]={"POSTERS"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Billboard_Light\POSTERS_co.paa"};
	};
	
	class BZ_Billboard_NoLight_retex: land_Billboard_NoLight
	{
		scope = 1;
		hiddenSelections[]={"POSTERS"};		
		hiddenSelectionsTextures[] = {"BillboardZ-retexture\Data\Billboard_Light\POSTERS_co.paa"};
	};
	
//--------------------------Road Block-------------------------------------------------------	
	class BZ_Roadblock_retex: land_Roadblock_base
	{
		scope = 1;
		hiddenSelections[]={"POSTERS"};		
		hiddenSelectionsTextures[] = {"BillboardZ-Retexture\Data\Roadblock\Poster_co.paa"};
	};	
};




































