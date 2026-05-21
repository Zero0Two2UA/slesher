#include "entities.h"











Entity::Entity() :
	hp(0), shild(0), armor(0), rezist(0), element_rezist(0),
	atk(0), krit(0), krit_chen(0), element_dmg(0), element_efekt(0),
	energi(0), pierc(0), stan(0), size(0),THISagent(0){};



Entity::Entity() 
{

	cout << "[Entity created]\n";
}
Entity::~Entity() {
	cout << "[Entity destroyed]\n";
}

int Entity::getHP() {
	cout << "HP: " << hp << endl;
	return hp;
}
int Entity::setHP(int hp) {
	this->hp = hp;
	return hp;
}
int Entity::getShild() {
	cout << "shild: " << shild << endl;
	return shild;
}
int Entity::setShild(int shild) {
	this->shild = shild;
	return shild;
}
int Entity::getArmor() {
	cout << "armor: " << armor << endl;
	return armor;
}
int Entity::setArmor(int armor) {
	this->armor = armor;
	return armor;
}
int Entity::getRezist() {
	cout << "rezist: " << rezist << endl;
	return rezist;
}
int Entity::setRezist(int rezist) {
	this->rezist = rezist;
	return rezist;
}
int Entity::getelement_rezist() {
	cout << "element_rezist: " << element_rezist << endl;
	return element_rezist;
}
int Entity::setelement_rezist(int element_rezist) {
	this->element_rezist = element_rezist;
	return element_rezist;
}
int Entity::getatk() {
	cout << "atk: " << rezist << endl;
	return atk;
}
int Entity::setatk(int atk) {
	this->atk = atk;
	return atk;
}
int Entity::getkrit() {
	cout << "krit: " << rezist << endl;
	return krit;
}
int Entity::setkrit(int krit) {
	this->krit = krit;
	return krit;
}
int Entity::getkrit_chen() {
	cout << "krit_chen: " << rezist << endl;
	return krit_chen;
}
int Entity::setkrit_chen(int krit_chen) {
	this->krit_chen = krit_chen;
	return krit_chen;
}
int Entity::getelement_dmg() {
	cout << "element_dmg: " << element_dmg << endl;
	return element_dmg;
}
int Entity::setelement_dmg(int element_dmg) {
	this->element_dmg = element_dmg;
	return element_dmg;
}
int Entity::getelement_efekt() {
	cout << "element_efekt: " << element_efekt << endl;
	return element_efekt;
}
int Entity::setelement_efekt(int element_efekt) {
	this->element_efekt = element_efekt;
	return element_efekt;
}

int Entity::setenergi(int energi) {
	this->energi = energi;
	return energi;
}
int Entity::getpierc() {
	cout << "pierc: " << pierc << endl;
	return pierc;
}
int Entity::setpierc(int pierc) {
	this->pierc = pierc;
	return pierc;
}
int Entity::getstan() {
	cout << "stan: " << stan << endl;
	return stan;
}
int Entity::setstan(int stan) {
	this->stan = stan;
	return stan;
}
int Entity::getstat() {
	getHP();
	getShild();
	getArmor();
	getRezist();
	getelement_rezist();
	getatk();
	getkrit();
	getkrit_chen();
	getelement_dmg();
	getelement_efekt();
	getenergi();
	getpierc();
	getstan();
	return 0;
};










