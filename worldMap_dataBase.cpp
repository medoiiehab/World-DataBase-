#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//made by mohammed ehab 
/*my github : https://github.com/ME2Ehab */

// //-------------------------------------------------------------------------------------------------------------------//

// //-------------------------------------------------------------------------------------------------------------------//
// void australia(){
//     string country = "australia";
// }

//-------------------------------------------------------------------------------------------------------------------//
int main(){
//setting the dataBase
//-------------------------------------------------------------------------------------------------------------------//
//africa();
string countries[] = {"Algeria","Angola","Benin","Botswana","Burkina Faso","Burundi",
"Cabo Verde","Cameroon","Central African Republic","Chad","Comoros","Democratic Republic of the Congo","Republic of the Congo","Cote d\"Ivoire",
"Djibouti","Egypt","Equatorial Guinea","Eritrea","Ethiopia","Gabon","Gambia","Ghana","Guinea","Guinea Bissau","Kenya","Lesotho","Liberia","Libya",
"Madagascar","Malawi","Mali","Mauritania","Mauritius","Morocco","Mozambique","Namibia","Niger","Nigeria","Rwanda","Sao Tome and Principe","Senegal",
"Seychelles","Sierra Leone","Somalia","South Africa","South Sudan","Sudan","Swaziland","Tanzania","Togo","Tunisia","Uganda","Zambia","Zimbabwe"};
//-------------------------------------------------------------------------------------------------------------------//

// europe(){
string countres1[] = {"Albania","Andorra","Armenia","Austria","Azerbaijan","Belarus","Belgium","Bosnia and Herzegovina","Bulgaria","Croatia","Cyprus"
,"Czech Republic","Denmark","Estonia","Finland","France","Georgia","Germany","Greece","Iceland","Ireland","Italy","Kazakhstan","Kosovo","Latvia"
,"Liechtenstein","Lithuania","Luxembourg","Macedonia","Malta","Moldova","Monaco","Montenegro","Netherlands","Norway","Poland","Portugal","Romania",
"Russia","San Marino","Serbia","Slovakia","Slovenia","Spain","Sweden","Switzerland","Turkey","Ukraine","United Kingdom","Vatican City"};
}
//-------------------------------------------------------------------------------------------------------------------//
//Aisa()
 string countries4[] = {"Armenia","Azerbaijan","Bahrain","Bangladesh","Bhutan","Brunei", "Cambodia","China","Cyprus","Georgia","India","Indonesia",
 "Iran","Iraq","Israel", "Japan","Jordan","Kazakhstan","Kuwait","Kyrgyzstan","Laos","Lebanon","Malaysia","Maldives","Mongolia","Myanmar","Nepal",
 "North Korea","Oman","Pakistan","Palestine","Philippines","Qatar","Russia","Saudi Arabia","Singapore","South Korea","Sri Lanka","Syria","Taiwan",
 "Tajikistan","Thailand","Timor Leste","Turkey","Turkmenistan","United Arab Emirates","Uzbekistan","Vietnam","Yemen"}

//-------------------------------------------------------------------------------------------------------------------//
//north_America()
string countries3[] ={"Antigua and Barbuda","Bahamas","Barbados","Belize","Canada","Costa Rica","Cuba","Dominica","Dominican Republic",
"El Salvador","Grenada","Guatemala","Haiti","Honduras","Jamaica","Mexico","Nicaragua","Panama","Saint Kitts and Nevis","Saint Lucia",
"Saint Vincent and the Grenadines","Trinidad and Tobago","United States of America"};
//-------------------------------------------------------------------------------------------------------------------//
// south_America()
string countries2[] = {"Argentina", "Bolivia","Brazil","Chile","Colombia","Ecuador","Guyana","Paraguay","Peru","Suriname","Uruguay","Venezuela"};
//-------------------------------------------------------------------------------------------------------------------//
//declaring global variables
string continent = "africa";
int count;
cin >> count;
//the algorithm of the database
//-------------------------------------------------------------------------------------------------------------------//
//africa
if (continent == "africa" || continent == "Africa"){
for (int i = 0; i < count; i++)
{
 cout <<  countries[i] << endl; 
}
}
//-------------------------------------------------------------------------------------------------------------------//
//aisa
else if (continent == "aisa" || continent == "Aisa"){
for (int i = 0; i < count; i++)
{
 cout <<  countries4[i] << endl; 
}
}
//-------------------------------------------------------------------------------------------------------------------//
//south america
else if (continent == "south america" || continent == "South America" || continent == "SA"){
for (int i = 0; i < count; i++)
{
 cout <<  countries2[i] << endl; 
}
}
//-------------------------------------------------------------------------------------------------------------------//
//north america
else if (continent == "North America" || continent == "north america" || continent == "NA"){
for (int i = 0; i < count; i++)
{
 cout <<  countries4[i] << endl; 
}
}
//-------------------------------------------------------------------------------------------------------------------//
//europe
else if (continent == "EU" || continent == "europe" || continent == "Europe"){
for (int i = 0; i < count; i++)
{
 cout <<  countries[i] << endl; 
}
}
//-------------------------------------------------------------------------------------------------------------------//
//END
}