#include <fstream>
#include "/usr/local/include/yaml-cpp/include/yaml-cpp/yaml.h"
#include <iostream>
#include </usr/local/include/yaml-cpp/include/yaml-cpp/node/parse.h>
#include <string>
#include <tuple>


using namespace std;
float average_price;
float lowest_price;


// 'yaml-cpp' is used as a .yaml parser 
int main() 
{

    std::cout << "worked" << std::endl;

    try 
    {
        YAML::Node test = YAML::LoadFile("test.yaml");

        // The outer element is an array
        // loop over the company's date and price and print them:
        for(auto dict : test) 
        {
        	auto appl = dict["APPL"];
        	
        	std::cout << appl["price"].as<float>() << '\n';
    	}
    }
    catch(int a)
    {
    	cout << "exception occured!";
    }	
}





// << appl["date"].as<DateTime>() << ",\t"


// float get_highest_price_entire_period(Node) 
// {

// 	for (int i=0; i<=length(Node); i++)
// 	{
// 		highest_price = Node[i];
// 		if (Node[i]["price"] >= Node[i+1]["price"])
// 		{
// 			highest_price = Node[i]["price"];
// 		}
	
// 	}
	
// 	return highest_price;
// }


// float get_lowest_price_entire_period(Node) 
// {

// 	for (int i=0; i<=length(Node); i++)
// 	{
// 		lowest_price = Node[i];
// 		if (Node[i]["price"] >= Node[i+1]["price"])
// 		{
// 			lowest_price = Node[i+1]["price"];
// 		}
	
// 	}
	
// 	return lowest_price;
// }


// float get_average_price_entire_period(Node) 
// {
// 	float sum_price = 0;
	
// 	for (int i=0; i<=length(Node); i++)
// 	{
// 		sum_price = +Node[i];
// 	}
// 	return average_price=(float)sum_price/length(Node);
// }




// // During Last 30 Days
// std::tuple<int, float> get_highest_price_last_30days(Node)
// {
//  	Node["date"].as(Datetime);
 	
//  	for (i=-1; i>-30; i--)
//  	{
//  		if (Node["date"][i] >= Node["date"][i-1])
//  		{
//  			highest_price = Node["price"][i];
//  			index_highest_price = i;
//  		}
//  		else if 
//  		{
//  			highest_price = Node["price"][i-1];
//  			index_highest_price = i-1;
//  		}
//  	}
//  	return {index_highest_price, highest_price};	
// }


// std::tuple<int, float> get_lowest_price_last_30days(Node)
// {
//  	Node["date"].as(Datetime);
 	
//  	for (i=-1; i>-30; i--)
//  	{
//  		if (Node["date"][i] >= Node["date"][i-1])
//  		{
//  			lowest_price = Node["price"][i-1];
//  			index_lowest_price = i-1;
//  		}
//  		else if 
//  		{
//  			lowest_price = Node["price"][i];
//  			index_lowest_price = i;
//  		}
//  	}
//  	return {index_lowest_price, lowest_price};	
// }

// float get_average_price_last_30days(Node)
// {
//  	Node["date"].as(Datetime);
 	
//  	sum = 0;
//  	for (i=-1; i>=-30; i--)
//  	{
//  		sum = +Node["price"][i];
//  	}
//  	return average_price=float(sum/(float)(30.0));	
// }


// float price_difference(Node)
// {
// 	price_difference = get_highest_price_last_30days(Node) - get_lowest_price_last_30days(Node); 
// }


// float rose_most_company(price_difference(Node))
// {

// /*
//   APPL : 0, 
//   GOOG : 1,
//   MSFT : 2.
// */	
// key[0] = "APPL";
// key[1] = "GOOG";
// key[2] = "MSFT";

	


// // Writing arrays and objects in yaml file(output.yaml).
// void write_title_in_yaml_entire_period()
// {
// 	YAML::File("output.yaml") output;
// 	output::Node Node_Title_Entire_Period;
// 	Node_Title_Entire_Period::Value title = string("During Entire Period");
// }

// void write_title_in_yaml_last_30days()
// {
// 	YAML::File("output.yaml") output;
// 	output::Node Node_Title_Last_30Days;
// 	Node_Title_Last_30Days::Value title = string("During Last 30 Days");
// }

// void write_in_yaml_entire_period(Node)
// {
// 	output::Node Node_Name = itos(Node);
// 	Node_Name::array array;
// 	array[0] = string("highest price");
// 	array[1] = string("lowest price");
// 	array[2] = string("average price");
	
// 	array[0]::Value value = float(get_highest_price_entire_period(Node))
// 	array[1]::Value value = float(get_lowest_price_entire_period(Node))
// 	array[2]::Value value = float(get_average_price_entire_period(Node))	
// }

// class Node_fucntions 
// {
//     std::string Node;
	
//     public:
    
//     void write_in_yaml_last_30days(Node)
//     {	
//         output::Node Node_Name = itos(Node);
//         Node_Name::array array;
//         array[0] = string("highest price");
//         array[1] = string("lowest price");
//         array[2] = string("average price");
        
//         array[0]::Value value = float(get_highest_price_last_30days(Node)[1])
//         array[1]::Value value = float(get_lowest_price_last_30days(Node)[1])
//         array[2]::Value value = float(get_average_price_last_30days(Node)[1])	
//     }

//     float difference_formula(Node)
//     {
//         return get_highest_price_last_30days(Node)[1]-get_lowest_price_last_30days(Node)[1];
//     }

//     std::tuple<std::string, float> difference(Node)
//     {
//         if ((get_highest_price_last_30days(Node)[0]-get_lowest_price_last_30days(Node)[0]) > 0)
//         {
//             rose = difference_formula(Node);
//             return {"rose", rose};
//         }
//         else
//         {
//             dropped_difference = difference_formula(Node)*(-1);
//             return {"dropped", dropped};
//         }
//     }
//     while (difference(Node)[0] == "rose")
//     {
//     	rose_most_company = Node;
//     	rose = difference(Node)[1];
//     }  
    
//     while (difference(Node)[0] == "dropped")
//     {
//     	dropped_most_company = Node;
//     	dropped = difference(Node)[1];
//     }
    
    
    
    
// }




// // int main()
// // {
// // 	YAML::Node APPL = YAML::LoadFile("test.yaml")["APPL"]
// // 	YAML::Node GOOG = YAML::LoadFile("test.yaml")["GOOG"]
// // 	YAML::Node MSFT = YAML::LoadFile("test.yaml")["MSFT"]

// 	// During entire period attaining 1.highest, 2.lowest, 3.average price respectly.
// 	write_title_in_yaml_entire_period();
// 	write_in_yaml_entire_period(APPL);
// 	write_in_yaml_entire_period(GOOG);
// 	write_in_yaml_entire_period(MSFT);
	
// 	// During last 30days attaining 1.highest, 2.lowest, 3.average price respectly.
// 	write_title_in_yaml_last_30days();	
// 	write_in_yaml_last_30days(APPL);
// 	write_in_yaml_last_30days(GOOG);
// 	write_in_yaml_last_30days(MSFT);
	
// // }











