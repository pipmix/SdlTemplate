#pragma once
#include <string>
using namespace std;

struct TILEMAP_PROPERTIES {
	string filename;
	int numColumns;
	int numRows;
	int tileWidth;
	int tileHeight;
};

enum ASSET_IMG {
	AS_IM_CHAR,
	AS_IM_ITEMS,
	AS_IM_DUN01,
	AS_IM_SET,
	AS_IM_COUNT,

};

static const TILEMAP_PROPERTIES ASSET_IMG_PROPERTIES []= {
	{ "char", 8, 8, 16, 16 },
	{ "items",8, 8, 16, 16 },
	{ "dun01",14, 14, 32, 32 },
	{ "set", 7, 7, 16, 16 },
};


struct AnimationStruct {
	int numFrames;
	bool loop;
	int frameLoc[8];
};

// Animation States
enum AS_PLAYER											{	AS_PL_IDLE,				AS_PL_WALKLEFT,				AS_PL_WALKRIGHT,		AS_PL_RUNLEFT,				AS_PL_RUNRIGHT,				AS_PL_FACINGLEFT,	AS_PL_FACINGRIGHT,	AS_PL_JUMPINGLEFT,		AS_PL_JUMPINGRIGHT,		AS_PL_DEATH,					AS_DUCKINGLEFT,				AS_PL_DUCKINGRIGHT,		AS_PL_CLIMBLEFT,		AS_PL_CLIMBRIGHT,		AS_PL_SIZE	};
static const AnimationStruct AS_PL_FRAMES[AS_PL_SIZE] = {	{ 2, true, 0,1 },		{4, true, 19,20,21,18},		{4, true, 3,4,5,2},		{3, true, 27,28,29},		{3, true, 11,12,13},		{1, false, 18},		{1, false, 2},		{3, false, 24,25,26},	{3, false, 8,9,10},		{5, false, 34,35,40,48,56},		{2,false, 50,51},			{2, false, 42,43},		{2, false, 42,43},		{ 2,false, 42,43 },						};

