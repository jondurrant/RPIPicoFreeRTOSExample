/*
 * BlinkAgent.cpp
 * Active agent to run as task and blink and LED on the given GPIO pad
 *
 *  Created on: 15 Aug 2022
 *      Author: jondurrant
 */

#include "BlinkAgent.h"

#include "stdio.h"




/***
 * Constructor
 * @param gp - GPIO Pad number for LED
 */
BlinkAgent::BlinkAgent(uint8_t gp, uint delay) {
	xLedPad = gp;
	xDelay = delay;
}

/***
 * Destructor
 */
BlinkAgent::~BlinkAgent() {
	stop();
}


 /***
  * Main Run Task for agent
  */
 void BlinkAgent::run(){

	gpio_init(xLedPad);

	gpio_set_dir(xLedPad, GPIO_OUT);

	while (true) { // Loop forever
		gpio_put(xLedPad, 1);
		vTaskDelay(xDelay);
		gpio_put(xLedPad, 0);
		vTaskDelay(xDelay);
	}

 }

/***
 * Get the static depth required in words
 * @return - words
 */
configSTACK_DEPTH_TYPE BlinkAgent::getMaxStackSize(){
	return 150;
}
