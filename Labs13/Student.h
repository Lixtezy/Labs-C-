#pragma once;
#include "includes.h"

class student : public Person
{
public:
	void setData()
	{
		Person::setData();
		int count = 5;
		unsigned int grade;
		cout << "¬ведите баллы: " << endl;
		for (int i = 0; i < count; i++) {
			cin >> grade;
			scores.push_back(grade);
		}
	}

	void getData()
	{
		Person::getData();
		cout << "—редний балл: " << this->get_average_score() << endl;
	}

	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

private:
	std::vector<int> scores;
};