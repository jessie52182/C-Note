/*
This program computes Buoyant Force in water given sphere radius
Name: Jessie Chao
*/

#include <iostream>
using namespace std;

int main()
{
	double radius, weight, buoyantForce, volume;
	const double WATER_WEIGHT = 62.4;
	const double PI = 3.141592; 
	bool replay = false; 
	
	cout << "This program computes Buoyant Force in water given sphere radius.\n"
         << "Based on the weight of the sphere, it determines whether the sphere floats or sinks."<< endl;
	
    do { 
	    cout << "Enter the weight of sphere." << endl;
	    cin >> weight;
	    cout << "You entered "<< weight << endl;
	    cout << "Enter the radius of sphere." << endl;
	    cin >> radius;
	    cout << "You entered "<< radius << endl;
	
        volume =  (4 * PI * radius * radius * radius)/3;
	    buoyantForce = volume * WATER_WEIGHT;
	    cout << "Buoyant Force = "<<  buoyantForce << endl;
	
	    if (buoyantForce >= weight)
	        cout << "Egads, it floats!" << endl;
	    else
		    cout << "It sunk..." << endl;
	
	    cout << "Recalculate? (1 = yes , 0 = exit)"<< endl;
	    cin >> replay;
	    
    } while(replay); 

    cout << "Press any key to continue . . ."<< endl;
    
	system ("pause");
	return 0;
}
    