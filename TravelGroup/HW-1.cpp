// HW-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Passenger.h"
#include "Ticket.h"
#include "Luggage.h"
#include "TravelGroup.h"
#include <iostream>
#include <iomanip>

int main()
{
	Ticket ticket2("varna", "burgas", 10, car),ticket("sofia","varna", 20, car),ticket3;
	Luggage luggage1(10,3,25), luggage2(10,4, 10), luggage3(5,2,100);
	Passenger passenger("ivan",ticket,luggage1), passenger2("pesho",ticket2,luggage2), passenger3("gosho",ticket2,luggage3);
	TravelGroup travelgroup;
	travelgroup.setNumOfPassengers(3);
	Passenger * group;
	group = new Passenger[3];
	group[0] = passenger;
	group[1] = passenger2;
	group[2] = passenger3;
	travelgroup.setArrOfPassengers(group,3);
	

	travelgroup.sortByWeightOfLuggage();
	travelgroup.getArrOfPassengers();
	std::cout << std::boolalpha<< group[1].isTheFirstStopSame(group[2]) << std::endl;
	std::cout << std::boolalpha << group[1].areTravellingToSamePlace(group[2]) << std::endl;

	travelgroup.PeopleWhoTravelFromSameStop("varna");
	std::cout << std::endl;
	travelgroup.PeopleWhoTravelToSameDestination("varna");
	std::cout << std::endl;
	std::cout << "Recursive array" << std::endl;
	passenger.getName();
	travelgroup.recursiveArray(travelgroup.getNumOfPassengers(), group);
	system("pause");
    return 0;
}

