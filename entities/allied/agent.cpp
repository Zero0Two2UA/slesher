#include "agent.h"



agent::agent() 
{
	cout << "[agent created]\n";
}
agent::~agent() {
	cout << "[agent destroyed]\n";
}



	float agent::krit_masa(agent *agen) {
		&agen->krit;
		float a = krit / 100.0;
		&agen->krit_chen;
		float b = krit_chen / 100.0;
		float  c = a * b;
		return ++c;



	};











