#include "zilot.h"





	void zilot::info()  { std::cout << "zilot\n"; }


zilot::zilot() {
	hp = 150;
	shild = 80;
	armor = 30;
	rezist = 15;
	element_rezist = 20;
	atk = 100;
	krit = 300;
	krit_chen = 50;
	element_dmg = 25;
	element_efekt = 2;
	energi = 100;
	pierc = 10;
	stan = 0;
	THISagent = 1;


	cout << "[zilot created]\n";
}

zilot::~zilot() {
	cout << "[zilot destroyed]\n";
}

int zilot::base_atack1()
{
	int dmg = atk * krit_masa(this);
	cout << "qweqwqwe" << dmg << endl;
	return dmg;
}


int zilot::getenergi() {
	cout << "energi: " << this->energi << endl;
	return this->energi;
}



int zilot::getHP() {
	cout << "HP: " << hp << endl;
	return hp;
}
int zilot::setHP(int hp) {
	this->hp = hp;
	return hp;
}
int zilot::getShild() {
	cout << "shild: " << shild << endl;
	return shild;
}
int zilot::setShild(int shild) {
	this->shild = shild;
	return shild;
}
int zilot::getArmor() {
	cout << "armor: " << armor << endl;
	return armor;
}
int zilot::setArmor(int armor) {
	this->armor = armor;
	return armor;
}
int zilot::getRezist() {
	cout << "rezist: " << rezist << endl;
	return rezist;
}
int zilot::setRezist(int rezist) {
	this->rezist = rezist;
	return rezist;
}
int zilot::getelement_rezist() {
	cout << "element_rezist: " << element_rezist << endl;
	return element_rezist;
}
int zilot::setelement_rezist(int element_rezist) {
	this->element_rezist = element_rezist;
	return element_rezist;
}
int zilot::getatk() {
	cout << "atk: " << rezist << endl;
	return atk;
}
int zilot::setatk(int atk) {
	this->atk = atk;
	return atk;
}
int zilot::getkrit() {
	cout << "krit: " << rezist << endl;
	return krit;
}
int zilot::setkrit(int krit) {
	this->krit = krit;
	return krit;
}
int zilot::getkrit_chen() {
	cout << "krit_chen: " << rezist << endl;
	return krit_chen;
}
int zilot::setkrit_chen(int krit_chen) {
	this->krit_chen = krit_chen;
	return krit_chen;
}
int zilot::getelement_dmg() {
	cout << "element_dmg: " << element_dmg << endl;
	return element_dmg;
}
int zilot::setelement_dmg(int element_dmg) {
	this->element_dmg = element_dmg;
	return element_dmg;
}
int zilot::getelement_efekt() {
	cout << "element_efekt: " << element_efekt << endl;
	return element_efekt;
}
int zilot::setelement_efekt(int element_efekt) {
	this->element_efekt = element_efekt;
	return element_efekt;
}

int zilot::setenergi(int energi) {
	this->energi = energi;
	return energi;
}
int zilot::getpierc() {
	cout << "pierc: " << pierc << endl;
	return pierc;
}
int zilot::setpierc(int pierc) {
	this->pierc = pierc;
	return pierc;
}
int zilot::getstan() {
	cout << "stan: " << stan << endl;
	return stan;
}
int zilot::setstan(int stan) {
	this->stan = stan;
	return stan;
}











int zilot::getTHISagent() {
	return this->THISagent;

};

int zilot::base_atack2() {

	int dmg = atk * krit_masa(this);
		cout<<"qqqqq"<<dmg<<endl;
	return dmg;

}
int zilot::base_atack3() {

	int dmg = (atk * krit_masa(this))+element_dmg;
	cout << "aaaaaaaaaa" << dmg << endl;
	return dmg;

}
int zilot::base_atack4() {
	this->energi += 1;
	int dmg = (atk * krit_masa(this)) + element_dmg * element_efekt;
	cout << "dfgsdgsdfgh" << dmg << endl;
	return dmg;

}
int zilot::base_atack5() {
	this->energi += 1;
	int dmg = (atk * krit_masa(this)) + element_dmg * element_efekt;
	cout << "dfgsdgsdfghaaaaaaaaaaa" << dmg * 1.5 << endl;
	return dmg;

}
int zilot::base_atack6() {
	this->energi += 2;
	int dmg = (atk * krit_masa(this)) + element_dmg * element_efekt;
	cout << "baaaaaaaaaaaaaaaaaaaaah" << dmg * 5 << endl;
	return dmg;


}
int zilot::base_atack7() {

	int dmg = atk * krit;
	return dmg;

}
int zilot::base_atack8() {

	int dmg = atk * krit;
	return dmg;

}
int zilot::base_atack9() {

	int dmg = atk * krit;
	return dmg;

}
int zilot::base_atack10() {

	int dmg = atk * krit;
	return dmg;

}
int zilot::base_atack11() {


	int dmg = atk * krit;
	return dmg;
}
int zilot::base_atack12() {


	int dmg = atk * krit;
	return dmg;
}
int zilot::base_atack13() {


	int dmg = atk * krit;
	return dmg;
}
int zilot::base_atack14() {

	int dmg = atk * krit;
	return dmg;

}
int zilot::base_atack15() {

	int dmg = atk * krit;
	return dmg;

}


int zilot::unique_atack1() {


	int dmg = (atk * krit_masa(this)) + element_dmg * element_efekt;
	cout << "eeeeeeee" << dmg * 1 << endl;
	return dmg;
};


int zilot::unique_charged_atack1() {
	this->energi -= 10;
	int dmg = (atk * krit_masa(this)) + element_dmg * element_efekt;
	cout << "eeeeeeee" << dmg * 10 << endl;
	return dmg;
};





