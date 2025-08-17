
#include "wowww.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
void main()
{
	wowww zundel("zundel", "kloitzpenmacher", 18, "100 shearim");
	wowww zelda;

	zelda.moveHome("street");
	zundel.wedding("103 shearim");
	zelda.wedding( "103 shearim","kloitzpenmacher");
	printf("%d", zelda == zundel);

}