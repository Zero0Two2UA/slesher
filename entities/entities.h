#pragma once
//цей клас для статів базових і тд

#include <iostream>
#include <string>

using namespace std;




class Entity{
public:
	virtual void info() = 0;




	Entity();
	virtual ~Entity() = 0;
	virtual int getHP() = 0;
	virtual int setHP(int hp) = 0;
	virtual int getShild() = 0;
	virtual int setShild(int shild) = 0;
	virtual int getArmor() = 0;
	virtual int setArmor(int armor) = 0;
	virtual int getRezist() = 0;
	virtual int setRezist(int rezist) = 0;
	virtual int getelement_rezist() = 0;
	virtual int setelement_rezist(int element_rezist) = 0;
	virtual int getatk() = 0;
	virtual int setatk(int atk) = 0;
	virtual int getkrit() = 0;
	virtual int setkrit(int krit) = 0;
	virtual int getkrit_chen() = 0;
	virtual int setkrit_chen(int krit_chen) = 0;
	virtual int getelement_dmg() = 0;
	virtual int setelement_dmg(int element_dmg) = 0;
	virtual int getelement_efekt() = 0;
	virtual int setelement_efekt(int element_efekt ) = 0;
	virtual int getenergi()=0;
	virtual int setenergi(int energi) = 0;
	virtual int getpierc() = 0;
	virtual int setpierc(int pierc) = 0;
	virtual int getstan() = 0;
	virtual int setstan(int stan) = 0;
	int getstat() ;

protected:

        int size;

        int THISagent;

        int hp;
        int shild;
        int armor;
        int rezist;
        int element_rezist;
        int atk;
        int krit;
        int krit_chen;
        int element_dmg;
        int element_efekt;
        int energi;
        int pierc;
        int stan;


  
    





};






