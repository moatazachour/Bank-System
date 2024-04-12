#include <iostream>
#include "clsLoginScreen.h"
#include "Global.h"

int main()

{
	while (true)
	{
		if (!clsLoginScreen::ShowLoginScreen())
		{
			break;
		}
	}

    return 0;
}

