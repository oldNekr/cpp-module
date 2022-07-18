#include "Zombie.hpp"

Zombie::Zombie(std::string const &name) : _name(name) {

}

Zombie::~Zombie() {
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
