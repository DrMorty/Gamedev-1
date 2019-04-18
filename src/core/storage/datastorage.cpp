#include "datastorage.h"

namespace engine
{
  Datastorage::DataStorage(Window window) : windowInstance(sf::RenderWindow(sf::VideoMode(windowSettings.width, windowSettings.height), windowSettings.name))
  {}
  
  Datastorage::~DataStorage()
  {}
  
  std::map<std::string, GameObject>& DataStorage::getGameObjects()
    {
        return gameObjects;
    }
}
