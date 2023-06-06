/*
 * dio.h
 *
 * Created: 6/5/2023 12:03:26 PM
 *  Author: Sarah
 */ 


#ifndef DIO_H_
#define DIO_H_


#include "../registers.h"
#include "../../LIB/bitmath.h"

// all internal driver typedefs
// all driver macros
#define PORT_A			'A'
#define PORT_B			'B'
#define PORT_C			'C'
#define PORT_D			'D'

#define INPUT			0
#define OUTPUT			1

#define LOW				0
#define HIGH			1

// all driver function prototypes
typedef enum dioError{
	DIO_OK,
	WRONG_PORT_NUMBER,
	WRONG_PIN_NUMBER,
	WRONG_VALUE,
	WRONG_DIRECTION
}EN_dioError_t;

EN_dioError_t DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);	// Initialize dio direction
EN_dioError_t DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value);		// Write data to dio
EN_dioError_t DIO_toggle(uint8_t portNumber, uint8_t pinNumber);						// Toggle dio
EN_dioError_t DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value);		// Read dio




#endif /* DIO_H_ */