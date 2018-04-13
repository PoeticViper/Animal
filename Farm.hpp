

#ifndef FARM_HPP
#define FARM_HPP
#include "Animal.hpp"
#include <vector>
#include <memory>
class Farm {
	
		private:
			 std::vector<Animal*>animals;
			 
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
		friend Animal* operator>>(Animal* animal, Farm& farm)
		{
			farm.animals.push_back(animal);
			return animal;
		}

		~Farm() {
			std::cout << "The farm has burned down! Major oof" << std::endl;	
		}
};

#endif
