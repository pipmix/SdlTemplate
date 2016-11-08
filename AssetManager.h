#pragma once
#include <string>
#include <map>
#include <vector>
#include <SDL.h>

class AssetManager {
public:
	AssetManager();
	~AssetManager();

	static void Create();

	//bool LoadImage(std::string fn);
	bool LoadModel(std::string fn);
	bool LoadAudioFile(std::string fn);
	bool LoadPixelShader(std::string fn);
	bool LoadVertexShader(std::string fn);
	bool LoadLevelData(std::string fn);

	static SDL_Surface* GetImage(std::string fn);
	static bool LoadImage(std::string Filename);
	static AssetManager* GetAssetManager();
private:

	static std::map<std::string, SDL_Surface*> textures;

};