#include "OrderRecipe.h"
#include <string>
#include <vector>

using namespace std;

//Implementation of Orderrecipe constructor
OrderRecipe::OrderRecipe(const string &name ) : order(name) 
{
	// Constructor initialises the order name along with the quantity.
}

//method implementation to get orer name
const string& OrderRecipe::orderName() const
{
	return order;
}

//method to get Ingredients.
const vector<Ingredient>& OrderRecipe::getIngredients() const
{
	return ingredients;
}

////method implementation to add ingredient to vector.
void OrderRecipe::addOrderIngredients(const Ingredient& ingredient)
{
	ingredients.push_back(ingredient);
}




