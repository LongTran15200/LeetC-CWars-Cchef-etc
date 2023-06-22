#include <string>
#include <cstddef>

std::string toAlternatingCase(const std::string& str) {
    std::string result = str;

    for (size_t i = 0; i < result.length(); i++) {
        if (std::islower(result[i]))
            result[i] = std::toupper(result[i]);
        else if (std::isupper(result[i]))
            result[i] = std::tolower(result[i]);
    }

    return result;
}


/*
Adapted from the tests originally written by a code warrior donaldsebleung 
Describe(basic)
{
  It(ShouldPassAllTheTestsProvided)
  {
    
       Assert::That(to_alternating_case("hello world"), Equals("HELLO WORLD") );
       Assert::That(to_alternating_case("HELLO WORLD"), Equals("hello world") );
       Assert::That(to_alternating_case("hello WORLD"), Equals("HELLO world") );
       Assert::That(to_alternating_case("HeLLo WoRLD"), Equals("hEllO wOrld") );
       Assert::That(to_alternating_case("12345"), Equals("12345") );
       Assert::That(to_alternating_case("1a2b3c4d5e"), Equals("1A2B3C4D5E") );
       Assert::That(to_alternating_case("String.prototype.toAlternatingCase"), Equals("sTRING.PROTOTYPE.TOaLTERNATINGcASE") );
       Assert::That(to_alternating_case(to_alternating_case("Hello World")), Equals("Hello World"));
		   Assert::That(to_alternating_case("altERnaTIng cAsE"), Equals("ALTerNAtiNG CaSe") );
		   Assert::That(to_alternating_case("ALTerNAtiNG CaSe"), Equals("altERnaTIng cAsE") );
		   Assert::That(to_alternating_case("altERnaTIng cAsE <=> ALTerNAtiNG CaSe"), Equals("ALTerNAtiNG CaSe <=> altERnaTIng cAsE") );
		   Assert::That(to_alternating_case("ALTerNAtiNG CaSe <=> altERnaTIng cAsE"), Equals("altERnaTIng cAsE <=> ALTerNAtiNG CaSe") );
  }

};
*/
