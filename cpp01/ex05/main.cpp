#include <iostream>
#include <cctype>
#include "Harl.hpp"

int	main(void)
{
    Harl harl;
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("WEATHER");
    return (0);
}
