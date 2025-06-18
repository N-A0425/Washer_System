#ifndef MODESELECT_H  
#define MODESELECT_H  

#include <vector>  
#include <string>  

#include "WashingTub.h" 
#include "ModeStrategy.h"  
#include "Wash.h"  
#include "Rinse.h"  
#include "Spin.h"  
#include "Display.h" 

class ModeSelect {  
private:  
	Wash wash;  
	Rinse rinse;  
	Spin spin;  
	std::vector<std::string> modes;  
	std::unique_ptr<ModeStrategy> strategy;  
	int currentModeIndex;  
	int currentWeight;
	Display display; // �f�B�X�v���C�I�u�W�F�N�g

public:  
	ModeSelect();  
	void select(); // ���[�h��I������
	std::unique_ptr<ModeStrategy> getStrategy();
	std::string getCurrentMode() const;  

};  

#endif // MODESELECT_H