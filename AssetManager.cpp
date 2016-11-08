#include "AssetManager.h"
//
AssetManager::AssetManager()
{
}

AssetManager::~AssetManager()
{
}

void AssetManager::Create()
{

	Cleanup();

	SDL_Renderer* Renderer = App::GetInstance()->GetRenderer();
	if (!Renderer) return false;

	std::vector<std::string> Files = FileManager::GetFilesInFolder("Textures"); // Relative to CWD

	for (auto Filename : Files) {
		std::string Ext = FileManager::GetFilenameExt(Filename);
		std::string ID = FileManager::GetFilenameWithoutExt(Filename);

		// Skip all non-png files
		if (Ext != "png") continue;

		//Log("Add Texture : ID = %s : Filename = %s : Ext = %s", ID.c_str(), Filename.c_str(), Ext.c_str());
		AddTexture(Renderer, ID, Filename);
	}

	return true;
}

bool AssetManager::LoadModel(std::string fn)
{
	return false;
}

bool AssetManager::LoadAudioFile(std::string fn)
{
	return false;
}

bool AssetManager::LoadPixelShader(std::string fn)
{
	return false;
}

bool AssetManager::LoadVertexShader(std::string fn)
{
	return false;
}

bool AssetManager::LoadLevelData(std::string fn)
{
	return false;
}

SDL_Surface * AssetManager::GetImage(std::string fn)
{
	return nullptr;
}

bool AssetManager::LoadImage(std::string Filename)
{
}

AssetManager * AssetManager::GetAssetManager()
{
	return nullptr;
}
