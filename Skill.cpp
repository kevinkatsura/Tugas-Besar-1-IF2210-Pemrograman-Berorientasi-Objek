#include "Skill.hpp"
#include <iostream>

using namespace std;

Skill::Skill(){
    namaSkill = "noName";
    skillElements = new string[MaxSkillElements];
    for (int i = 0; i<MaxSkillElements; i++){
    	skillElements[i] = "noElement";
	}
    basePower = 1;
    masteryLevel = 1;
}

Skill::Skill(string nama, int BP, int ML){
    namaSkill = nama;
    basePower = BP;
    masteryLevel = ML;
    
    skillElements = new string[MaxSkillElements];
    for (int i = 0; i<MaxSkillElements; i++){
    	skillElements[i] = "noElement";
	}
}

Skill& Skill::operator=(const Skill& s){
	namaSkill = s.namaSkill;
	basePower = s.basePower;
	masteryLevel = s.masteryLevel;
	for (int i=0; i<MaxSkillElements; i++){
		skillElements[i] = s.skillElements[i];
	}
	return *this;
}

Skill::~Skill(){
	delete[] skillElements;
}

string Skill::getNamaSkill(){
	return namaSkill;
} 

int Skill::getBasePower(){
	return basePower;
}

int Skill::getMasteryLevel(){
	return masteryLevel;
}

string& Skill::getSkillElements(){
	return *skillElements;
}


void Skill::setNamaSkill(string nama){
	namaSkill = nama;
}

void Skill::addSkillElements(string element){ //asumsi element skill yang ada di file eksternal tidak lebih dari 5.
	int i = 0;
	while (skillElements[i] != "noElement"){
		i++;
	}
	skillElements[i] = element;
}

void Skill::setBasePower(int BP){
	basePower = BP;
}

void Skill::addMasteryLevel(int a){
	masteryLevel += a;
}

