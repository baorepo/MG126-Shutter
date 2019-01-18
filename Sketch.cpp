/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */

/* 
 *
 * 2019 Copyright (c) Seeed Technology Inc.  All right reserved.
 * Author:Baozhu zuo (zuobaozhu@gmail.com)
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "MG126_Ble.h"
//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio


#define CS_PIN 7
#define IRQ_PIN 6
MG126_Ble_Class MG126_Ble(CS_PIN,IRQ_PIN);
//Ble Shutter example
void setup() {
	
  // put your setup code here, to run once:
	Serial1.begin(9600);
	while (!Serial1);
	Serial1.println("\n");
	Serial1.println("configure Ble  ...");
	MG126_Ble.ble_init();
	
	Serial1.println("Ble run ...");
	//MG126_Ble.io_init();
	
	// Serial1.print("Mac: ");
	
	// Serial1.println((char*)MG126_Ble.get_ble_mac_addr());
}

void loop() {
	
  // put your main code here, to run repeatedly:
  //delay(1);
  if(digitalRead(IRQ_PIN) == 0)
	ble_run(0);
}