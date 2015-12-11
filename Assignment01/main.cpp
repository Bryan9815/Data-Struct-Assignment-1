#include "Dweller.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Item.h"
#include "GameObject.h"
#include "Vec2D.h"

void testNames();
void shouldNotCompile();

int main()
{
	testNames();
	shouldNotCompile();

	Dweller d("Dweller", 2);
	Outfit o("Outfit", 2, 1234567);
	cout << d.getSPECIAL() << endl;
	d.assignOutfit(&o);
	cout << d.getSPECIAL() << endl;

	return 0;
}