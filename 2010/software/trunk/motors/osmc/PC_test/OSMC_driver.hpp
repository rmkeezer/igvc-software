#include "ArduinoInterface.h"
#include "ArduinoCmds.hpp"

class OSMC_driver
{

	public:
	OSMC_driver();

	reply_dtick_t getEncoderData();
	current_reply_t getCurrentData();

	private:
	ArduinoInterface ai;
};
