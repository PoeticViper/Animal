

#ifndef FARM_HPP
#define FARM_HPP
#include "Animal.hpp"
#include <vector>
#include <memory>
class Farm {
	
		private:
			 std::vector<Animal*>animals;
			 Farm* _farm = this;
			 Animal* convertToAnimal(std::istream*& input)
			 {
			 	std::istream *temp = *&input;
			 	return dynamic_cast<Animal*>(temp);
			 }
			
		public:
			Animal* getAnimal(int index)
			{
				return animals.at(index);
			}
		friend Farm* operator>>(Farm* farm ,  Animal* animal)
		{
			farm.animals.push_back(animal);
			return farm;
		}

		~Farm() {
			std::cout << "The farm has burned down! Major oof" << std::endl;	
		}
		
		friend Farm *operator*(Farm obj)
	{
		return _farm;
}
};

#endif
