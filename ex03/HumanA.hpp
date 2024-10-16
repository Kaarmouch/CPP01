#include "Weapon.hpp"


class HumanA
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		~HumanA();
		HumanA(std::string name, Weapon&);
		void attack();
};

