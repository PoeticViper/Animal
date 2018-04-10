#include "Animal.hpp"
#include <vector>
#ifndef FARM_HPP
#define FARM_HPP

class Farm {
	
		private:
			 std::vector<Animal*>animals;
			
		public:
			Animal* getAnimal(int index)
			{
				return animals.at(index);
			}
		friend std::istream&  operator>>(std::istream& input, Farm& farm)
		{
			std::istream* temp = input;
			farm.animals.push_back(dynamic_cast<Animal*>(temp));
			return input;
		}
};

#endif
