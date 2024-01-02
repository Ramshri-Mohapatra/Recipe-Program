#ifndef INGREDIENT_H
#define INGREDIENT_H

#include<string>

class Ingredient 
{
public:
	//Constructor for initializing an Ingredient with a name and quantity.
	Ingredient(const std::string &name, double e);

	//Getter method to get the name of the ingredient.
	const std::string& name() const;

	//Getter method to get the quantity of the ingredient.
	double getQuantity() const;

private:
	std::string ingredientName; //Ingredient name
	double ingredientQuantity; //Ingredient quantity
};

#endif 

