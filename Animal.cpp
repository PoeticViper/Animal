
class Dog
{
		public:
		Dog(char* dname, char dgender, __int8 dage, char dsize, bool dhealthy)
		{
			memcpy(name,dname, strlen(dname)+1);
			gender  = dgender;
			age     = dage;
			size    = dsize;
			healthy = dhealthy;
		}
};

int main()
{
	Dog abby("Abby", 'F', 8, 'L', 1);
	
	
	std::cout << abby.getName() << " is a "       << abby.getGender() << std::endl;
 	std::cout << abby.getName() << "'s name is "  << abby.getName()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.getAge()    << std::endl;
	std::cout << abby.getName() << " size is "    << abby.getSize()   << std::endl;
	std::cout << abby.getName() << " is "         << abby.isHealthy() << std::endl;
	
}
