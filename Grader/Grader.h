#pragma once

class Grade {
private:
	float wquizzes = 10.0;
	float wmidterm = 0.25;
	float wfinal = 0.5;
public:
	float setQuiz1(int score)
	{
		float q1Weight = score * wquizzes;
		return q1Weight;
	}
	float setQuiz2(int score)
	{
		float q2Weight = score * wquizzes;
		return q2Weight;
	}
	float setMidterm(int score)
	{
		float midtermWeight = score * wmidterm;
		return midtermWeight;
	}
	float setFinal(int score)
	{
		float finalWeight = score * wfinal;
		return finalWeight;
	}
	float setQuizAvg(int score1, int score2)
	{
		float q1 = setQuiz1(score1);
		float q2 = setQuiz2(score2);
		float quizAverage = (q1 + q2) / 2;
		return quizAverage;
	}
	float getAvg(int qscore1, int qscore2, int mscore, int fscore)
		//float quizzes, float midterm, float finalexam)
	{
		float quizWeight = setQuizAvg(qscore1, qscore2);
		float midtermWeight = setMidterm(mscore);
		float finalWeight = setFinal(fscore);
		float average = quizWeight + midtermWeight + finalWeight;
		return average;
	}
	char getGrade(float average)
	{
		char grade;
		if (average < 60)
		{
			grade = 'F';
		}
		else if (average < 70 && average >= 60)
		{
			grade = 'D';
		}
		else if (average < 80 && average >= 70)
		{
			grade = 'C';
		}
		else if (average < 90 && average >= 80)
		{
			grade = 'B';
		}
		else if (average >= 90)
		{
			grade = 'A';
		}
		else
		{
			grade = 'E';
		}
		return grade;
	}
};