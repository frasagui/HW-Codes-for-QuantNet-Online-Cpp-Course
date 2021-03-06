//Circle.h
#ifndef SSTREAM
#define SSTREAM
#include <sstream>
#endif
#ifndef LINE_H
#define LINE_H
#include "Line.h"
#endif
using namespace std;
#ifndef CLASS_CIRCLE
#define CLASS_CIRCLE
namespace Cluster
{
	namespace CAD
	{
		class Circle: public Shape
		{
		private:
			Point centre;
			Line radius;
		public:
			//constructors and destructor
			Circle();//default constructor
			Circle(Point& p1, Line& l1);//constructor with parameters
			Circle(const Circle& O);//copy constructor
			~Circle();//destructor

			//Selectors
			Point CentrePoint() const;
			Line Radius() const;

			//Modifiers
			void CentrePoint(Point& p);
			void Radius(Line& l);

			//Geometric Property Functions
			double Diameter();
			double Circumference();
			double Area();

			//Description
			std::string ToString() const;

			//Operator
			Circle& operator = (const Circle& O);

			//friends
			friend ostream& operator << (ostream& os, const Circle& O);

			//Operations
			virtual void Draw() const;
		};
	}
}
#endif