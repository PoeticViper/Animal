

#ifndef FARM_HPP
#define FARM_HPP
#include "Animal.hpp"
#include <vector>
#include <memory>
class Farm {
	
		private:
			 std::vector<Animal*>animals;
			 Animal* convertToAnimal(std::istream& input)
			 {
			 	std::istream *temp = &input;
			 	return dynamic_cast<Animal*>(temp);
			 }
		public:
			Animal* getAnimal(int index)
			{
				return animals.at(index);
			}

		~Farm() {
			std::cout << "The farm has burned down! Major oof" << std::endl;	
		}
		
		friend Animal* operator>>(Animal *input,Farm &f)
		{
    		f.animals.push_back(input);
    		return input;
		}
		
		friend Farm *operator*(Farm obj)
	{
		return *obj;
}
};

#endif
