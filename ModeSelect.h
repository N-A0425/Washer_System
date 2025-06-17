#ifndef MODESELECT_H  
#define MODESELECT_H  

#include <vector>  
#include <string>  

#include "WashingTub.h" 
#include "ModeStrategy.h"  
#include "Wash.h"  
#include "Rinse.h"  
#include "Spin.h"  

#define LimChar 7  
#define FullChar 2  

class ModeSelect {  
private:  
	Wash wash;  
	Rinse rinse;  
	Spin spin;  
	std::vector<std::string> modes;  
	std::unique_ptr<ModeStrategy> strategy;  
	int blanks = 0;  
	int currentModeIndex;  
	int currentWeight;

public:  
	ModeSelect();  
	void select(); // ÉÇÅ[ÉhÇëIëÇ∑ÇÈ  
	std::string getCurrentMode() const;  

};  

#endif // MODESELECT_H