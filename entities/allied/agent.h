#pragma once

#include "entities.h"



class agent : public Entity {
public:
agent();
    virtual ~agent() =0;



	float krit_masa(agent *agen);


	virtual int getTHISagent() = 0;
	virtual int base_atack1() = 0;
	virtual int base_atack2() = 0;
	virtual int base_atack3() = 0;
	virtual int base_atack4() = 0;
	virtual int base_atack5() = 0;
	virtual int base_atack6() = 0;
	virtual int base_atack7() = 0;
	virtual int base_atack8() = 0;
	virtual int base_atack9() = 0;
	virtual int base_atack10() = 0;
	virtual int base_atack11() = 0;
	virtual int base_atack12() = 0;
	virtual int base_atack13() = 0;
	virtual int base_atack14() = 0;
	virtual int base_atack15() = 0;

	virtual int unique_atack1() = 0;
	virtual int unique_atack2() = 0;
	virtual int unique_atack3() = 0;
	virtual int unique_atack4() = 0;
	virtual int unique_charged_atack1() = 0;
	virtual int unique_charged_atack2() = 0;
	virtual int unique_charged_atack3() = 0;
	virtual int unique_charged_atack4() = 0;

	virtual int ultimate1() = 0;
	virtual int ultimate2() = 0;
	virtual int ultimate3() = 0;

	virtual int fast_asistment1() = 0;
	virtual int fast_asistment2() = 0;


	virtual int avoidance1() = 0;
	virtual int avoidance2() = 0;

	virtual int parry1() = 0;
	virtual int parry2() = 0;

	virtual int block1() = 0;
	virtual int block2() = 0;







};