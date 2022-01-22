//# include <iostream>
//
//using namespace std;
//
/*********************Simple volume calculations****************/

/*Function prototype*/
//
//double calc_volume_cylinder(double Radius, double Height);
//double calc_area_circle(double Radius);
//void area_circle();
//void volume_cylinder();
//
//
//const double pi{ 3.14159 };
//
//
/*Function defenition*/
//
//double calc_area_circle(double Radius) {
//	return pi * Radius * Radius;
//}
//
//double calc_volume_cylinder(double Radius, double Height) {
//	const double pi{ 3.14159 }; 
//	return pi * Radius * Radius * Height;
//	return calc_area_circle(Radius) * Height;
//}
//
//void area_circle() {
//	double Radius{};
//	cout << "\nEnter the radius of circle: ";
//	cin >> Radius;
//
//	cout << "The area of a circle with radiu " << Radius << " is "
//		<< calc_area_circle(Radius) << endl;
//}
//
//void volume_cylinder() {
//	double Radius{};
//	double Height{};
//	cout << "\nEnter the radius of the cylinder: ";
//	cin >> Radius;
//	cout << "\nEnter the height of the cylinder: ";
//	cin >> Height;
//
//	cout << "The volume of a cylinder with radius " << Radius << " and height " << Height << " is " << calc_volume_cylinder(Radius, Height) << endl;
//}
//
//int main() {
//	area_circle();
//	volume_cylinder();
//	cout << endl;
//	return 0;
//}