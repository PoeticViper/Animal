#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class Animal
{
	
	private:
		char name[25];
		char gender;
		__int8 age;
		char size;
		bool healthy;
		
	public:
		char*  getName()   				 { return name;    }
		char   getGender() 				 { return gender;  }
		int    getAge()    	             { return static_cast<int>(age);      }
		char   getSize()  				 { return size;    }
		bool   isHealthy()				 { return healthy; }
		void   setHealthy(bool dhealthy) { healthy = dhealthy; }
		void   setName(char* dname)      { memcpy(name,dname,strlen(dname)+1);}
		
};

#endif
