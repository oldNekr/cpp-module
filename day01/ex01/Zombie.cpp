#include "Zombie.hpp"

Zombie::Zombie() : _name(std::string()) {

}
Zombie::~Zombie() {
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::givingNames(std::string const &name) {
	this->_name = name;
}