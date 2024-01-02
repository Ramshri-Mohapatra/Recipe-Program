#ifndef ORDERRECIPE_H
#define ORDERRECIPE_H

#include <string>
#include <vector>
#include "Ingredient.h"

class OrderRecipe
{
public:
	//Default constructor
	OrderRecipe() = default;

	//parameterised constructor
	OrderRecipe(const std::string& name);

	const std::string& orderName() const;

	const std::vector<Ingredient> &getIngredients() const;

	//method to add Ingredients to the vector storing the ingredients data
	void addOrderIngredients(const Ingredient& ingredient);

private:
	std::vector<Ingredient> ingredients; //Vector to store ingredients.
	std::string order; // name of the order.
};

#endif 

