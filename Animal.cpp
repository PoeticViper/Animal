#include "Animal.hpp"

class Dog: public Animal
{
	
		public:
		Dog(std::string dname, char dgender, __int8 dage, char dsize, bool dhealthy)
		{
			name    = dname;
			gender  = dgender;
			age     = dage;
			size    = dsize;
			healthy = dhealthy;
		}
		
		void sound()
		{
			std::cout <<"Bark!\n";
		}
};

int main()
{
	Dog abby((std::string)"Abby", 'F', 8, 'L', true);
	
	
	std::cout << abby.getName() << " is a "       << abby.getGender() << std::endl;
 	std::cout << abby.getName() << "'s name is "  << abby.getName()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.getAge()    << std::endl;
	std::cout << abby.getName() << " size is "    << abby.getSize()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.isHealthy() << std::endl;
	abby.sound();
	
}
