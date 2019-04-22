#include "datastorage.h"

namespace engine
{
  Datastorage::DataStorage(Window window) : windowInstance(sf::RenderWindow(sf::VideoMode(windowSettings.width, windowSettings.height), windowSettings.name))
  {}
  
  Datastorage::~DataStorage()
  {}
  
  sf::RenderWindow& DataStorage::window()
    {
        return window;
    }
  
  std::map<std::string, GameObject>& DataStorage::getGameObjects()
    {
        return gameObjects;
    }
}
