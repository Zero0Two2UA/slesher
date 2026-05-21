#pragma once
#include "Agent.h";






class zilot : public agent {
public:
	zilot();
	~zilot();


	int getTHISagent() override;
	int getenergi() override;



	 int getHP() override;
	 int setHP(int hp) override;
	  int getShild() override;
	 int setShild(int shild)override;
	  	int getArmor() override;
	 int setArmor(int armor)override;
	 int getRezist() override;
	 int setRezist(int rezist) override;
	 int getelement_rezist()override;
	int setelement_rezist(int element_rezist) override;
	 int getatk() override;
	 int setatk(int atk) override;
	 int getkrit() override;
	 int setkrit(int krit)override;
	  int getkrit_chen() override;
	 int setkrit_chen(int krit_chen) override;
	  	int getelement_dmg() override;
	   int setelement_dmg(int element_dmg) override;
	  int getelement_efekt() override;
	  int setelement_efekt(int element_efekt) override;
	  int setenergi(int energi) override;
	 int getpierc() override;
	 int setpierc(int pierc) override;
	  int getstan() override;
	  int setstan(int stan) override;

      
	void info() override;
	int base_atack1() override;
	int base_atack2() override;
	int base_atack3() override;
	int base_atack4() override;
	int base_atack5() override;
	int base_atack6() override;
	int base_atack7() override;
	int base_atack8() override;
	int base_atack9() override;
	int base_atack10() override;
	int base_atack11() override;
	int base_atack12() override;
	int base_atack13() override;
	int base_atack14() override;
	int base_atack15() override;


	int unique_atack1() override;
	int unique_atack2() override { return 0; };
	int unique_atack3() override { return 0; };
	int unique_atack4() override { return 0; };
	int unique_charged_atack1() override;
	int unique_charged_atack2() override { return 0; };
	int unique_charged_atack3() override { return 0; };
	int unique_charged_atack4() override { return 0; };

	int ultimate1() override { return 0; };
	int ultimate2() override { return 0; };
	int ultimate3() override { return 0; };

	int fast_asistment1() override { return 0; };
	int fast_asistment2() override { return 0; };

	int avoidance1() override { return 0; };
	int avoidance2() override { return 0; };

	int parry1() override { return 0; };
	int parry2() override { return 0; };

	int block1() override { return 0; };
	int block2() override { return 0; };
	

};







