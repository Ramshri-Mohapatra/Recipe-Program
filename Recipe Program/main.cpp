#include "OrderRecipe.h"
#include<iostream>
#include<fstream>
#include<algorithm>
#include<map>
#include <sstream>

using namespace std;

//Function to read the ingredients from .txt file and populate the recipe map.
void readIngredients(istream &in, map<string,OrderRecipe> &recipes)
{
	string line;
	
	//read lined from input stream
	while(getline(in, line))
	{
		string recipeName;
		string ingredientName;
		double quantity;
		istringstream line_s(line);

		//extract recipeName,ingredientName, quantity from the line
		if (line_s >> recipeName >> ingredientName >> quantity) {

			OrderRecipe& recipe = recipes[recipeName];
			recipe.addOrderIngredients(Ingredient(ingredientName, quantity));
		}
	}
}

//Function to read the order from .txt file and populate the recipe map.
void readOrders(istream &in, map<string, OrderRecipe> &recipes, map <string, double> &totalQuantities )
{
	string line;

	//read lined from input stream
	while (getline(in, line))
	{
		std::string orderName;
		double orderQuantity;

		istringstream line_s(line);

		if (line_s >> orderName >> orderQuantity) {}

		OrderRecipe& recipe = recipes[orderName];

		// Update quantities based on the current order
		for (const Ingredient& ingredient : recipe.getIngredients())
		{
			// Multiply the ingredient quantity by the order quantity and update totalQuantities
			totalQuantities[ingredient.name()] += ingredient.getQuantity() * orderQuantity;
			
		}
		
	}
		
	}
	
int main()
{
	
	ifstream ingFile("ingredients.txt");
	map<string, OrderRecipe> recipes;

	readIngredients(ingFile, recipes);

	ifstream orderFile("order.txt");
	map<string, double> totalQuantities;

	readOrders(orderFile, recipes, totalQuantities);

	// Print the total quantities of each ingredient
	for (const auto& pair : totalQuantities)
	{
		cout << pair.first << " " << pair.second << "\n";
	}

	return 0;
}

