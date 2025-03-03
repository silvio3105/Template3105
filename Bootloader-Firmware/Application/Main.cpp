/**
 * @file Main.cpp
 * @author silvio3105 (www.github.com/silvio3105)
 * @brief Main source file.
 * 
 * @copyright Copyright (c) 2025, silvio3105
 * 
 */

/*
	Copyright (c) 2025, silvio3105 (www.github.com/silvio3105)

	Access and use of this Project and its contents are granted free of charge to any Person.
	The Person is allowed to copy, modify and use The Project and its contents only for non-commercial use.
	Commercial use of this Project and its contents is prohibited.
	Modifying this License and/or sublicensing is prohibited.

	THE PROJECT AND ITS CONTENT ARE PROVIDED "AS IS" WITH ALL FAULTS AND WITHOUT EXPRESSED OR IMPLIED WARRANTY.
	THE AUTHOR KEEPS ALL RIGHTS TO CHANGE OR REMOVE THE CONTENTS OF THIS PROJECT WITHOUT PREVIOUS NOTICE.
	THE AUTHOR IS NOT RESPONSIBLE FOR DAMAGE OF ANY KIND OR LIABILITY CAUSED BY USING THE CONTENTS OF THIS PROJECT.

	This License shall be included in all functional textual files.
*/

// ----- INCLUDE FILES
#include			"Main.hpp"

#ifdef RTOS
#include			"cmsis_os2.h"
#endif // RTOS

#include			<stdint.h>
#include 			<stdio.h>
#include			<string.h>


// ----- DEFINES


// ----- MACRO FUNCTIONS


// ----- ENUMS


// ----- TYPEDEFS


// ----- STRUCTS


// ----- CLASSES	


// ----- VARIABLES


// ----- STATIC FUNCTION DECLARATIONS


// ----- FUNCTION DEFINITIONS
int main(void)
{
	DEBUG_PRINT("Verbose print\n");
	DEBUG_PRINTF("Verbose printf\n");

	DEBUG_PRINT_INFO("Info print\n", 11);
	DEBUG_PRINTF_INFO("Info printf\n");
	
	DEBUG_PRINT_ERROR("Error print\n");
	DEBUG_PRINTF_ERROR("Error printf\n");	

	while (1)
	{
		DEBUG_PRINT("Loop\n");
		for (uint32_t i = 0; i < 0xFFFFFE; i++)
		{
			(void)i;
		}
	}
}


// ----- STATIC FUNCTION DEFINITIONS



// END WITH NEW LINE
