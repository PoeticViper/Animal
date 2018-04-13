#include "Animal.hpp"
#include "Farm.hpp"
class Dog: public Animal
{
		
		private:
		
		public:
		Dog(char* dname, char dgender, __int8 dage, char dsize, bool dhealthy)
		{
			name    = dname;
			gender  = dgender;
			age     = dage;
			size    = dsize;
			healthy = dhealthy;
			species = "Dog";
		}
		
		void sound()
		{
			std::cout <<"Bark!\n";
		}
		
		const char* isHealthy()
		{
			return Animal::isHealthy();
		}
		
		
		~Dog()
		{
			std::cout << this->name << " has died!" << std::endl;
		}

};

int main()
{
	
	Farm f;
	Dog abby("Abby", 'F', 8, 'L', true);
	abby >> f;
	std::cout << abby;
	std::cout << abby.getName() << " is a "       << abby.getGender() << std::endl;
 	std::cout << abby.getName() << "'s name is "  << abby.getName()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.getAge()    << std::endl;
	std::cout << abby.getName() << " size is "    << abby.getSize()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.isHealthy() << std::endl;
	abby.sound();
	
}
