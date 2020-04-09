#include <iostream>
#include "Avatar.h"

int
main
(void)
{
  Avatar firstAvatar {"Liz", 7777};
  std::cout << "location of " << firstAvatar.getName() << " is " << firstAvatar.getGPS() << std::endl;

  Island firstIsland {"Taiwan", 7777};
  std::cout << "the number of resident on Island " << firstIsland.getName() << " is " 
	    << firstIsland.getResidentCount() << std::endl;

  firstIsland.addResident(&firstAvatar);
  std::cout << "the number of resident on Island " << firstIsland.getName() << " is " 
	    << firstIsland.getResidentCount() << std::endl;

  Avatar *avtr = firstIsland.getResidentByIndex(0);
  if (avtr != (Avatar *) NULL)
    std::cout << "the first resident of Island " << firstIsland.getName() << " is " 
	      << avtr->getName() << std::endl;

  return 0;
}
