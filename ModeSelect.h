#ifndef MODESELECT_H
#define MODESELECT_H

#include <vector>
#include <string>

#define LimChar 7
#define FullChar 2

class ModeSelect {
private:
	std::vector<std::string> modes;
	int blanks = 0;
	int currentModeIndex;

public:
	ModeSelect();
	void select(); // ���[�h��I������
	std::string getCurrentMode() const;

};

#endif // MODESELECT_H