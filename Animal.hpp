
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class Animal
{
		protected:
		char* name;
		char gender;
		__int8 age;
		char size;
		bool healthy;
		char* species;
	public:
		
		
		char*  getName()   	     { return name;    }
		char   getGender() 				 { return gender;  }
		int    getAge()    	             { return static_cast<int>(age);      }
		char   getSize()  				 { return size;    }
		const char*   isHealthy()		 { return healthy ? "Healthy" : "Unhealthy"; }
		char* getSpecies()               { return species;	}
		void   setHealthy(bool ahealthy) { healthy = ahealthy; }
		virtual void sound() = 0;

		friend std::ostream& operator<<(std::ostream& os, Animal& dt)  
{  
		os << "Species: " << dt.getSpecies()   << std::endl;
		os << "Name: "    << dt.getName()   << std::endl;
		os << "Gender: "  << dt.getGender() << std::endl;
		os << "Age: "     << dt.getAge()    << std::endl;
		os << "Size: "    << dt.getSize()   << std::endl;
		os << "Health: "  << dt.isHealthy() << std::endl;
		return os;
	}
		friend std::istream& operator>>(std::istream& is, Animal& dt)
		{
			std::cout << " Enter the name of the animal: ";
			std::cin >> dt.name;
			std::cout <<"\nEnter the age of the animal: ";
			std::cin >> dt.age;
			std::cout <<"\nEnter the gender of the animal: ";
			std::cin >> dt.gender;
			std::cout << "\nEnter the size of the animal: ";
			std::cin >> dt.size;
			dt.healthy = true;
			return is;
		}
			
		~Animal()
		{
			std::cout << name << " has died!" << std::endl;
		}

};

#endif
