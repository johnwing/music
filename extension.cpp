#include "pxt.h"
#include "MicroBit.h"
MicroBit uBit;
using namespace pxt;
namespace midi {
    //%
    int frequencyToKey(int frequency) {
        return max(0, min(127, round(log(frequency/440.0)/log(2) * 12 + 69)));
    }
    
    //%
    int police()
    {
    	return 123;
    }

}
