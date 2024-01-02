#include "Ingredient.h"
#include <string>
#include <vector>

using namespace std;

//Implementation of the Ingredient class.
Ingredient::Ingredient(const string& name, double quantity) : ingredientName(name), ingredientQuantity(quantity) 
{
	//Constructor initializes the nameand quantity of the ingredient.
}

//Getter method to get the name of the ingredient.
const string&  Ingredient :: name() const
{
	return ingredientName;
}

//Getter method to get the quantity of the ingredient.
double Ingredient :: getQuantity() const 
{
	return ingredientQuantity;
}