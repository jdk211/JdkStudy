#pragma once
#include "IExecute.h"

class JPoint 
{
public:
	int x;
	int y;

public:
	JPoint(int pos_x, int pos_y) { x = pos_x; y = pos_y; }

	JPoint operator-(const JPoint& point) const
	{
		JPoint temp(this->x - point.x, this->y - point.y);
		return temp;
	}
};

class JGeometry : public IExecute
{
public:
	JGeometry(){num_points = 0;}
	
	void AddPoint(const JPoint& point) 
	{
		point_array[num_points++] = new JPoint(point.x, point.y);
	}

	double CalcDistance(const JPoint &PointA, const JPoint &PointB);

	void PrintDistance();

	void PrintNumMeets();

	void Execute() override;

private:
	JPoint* point_array[100];
	int num_points;
};

