#include "Vdm.h"
#include "World.h"
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
	Controller_const_init();
	HardwareInterface_const_init();
	RobotSensor_const_init();
	RobotServo_const_init();
	System_const_init();
	World_const_init();
	Port_const_init();
	IntPort_const_init();
	BoolPort_const_init();
	RealPort_const_init();
	StringPort_const_init();

	Controller_static_init();
	HardwareInterface_static_init();
	RobotSensor_static_init();
	RobotServo_static_init();
	System_static_init();
	World_static_init();
	Port_static_init();
	IntPort_static_init();
	BoolPort_static_init();
	RealPort_static_init();
	StringPort_static_init();

	srand(time(NULL));

	TVP sys = _Z6SystemEV(NULL);
	TVP a;
	TVP b;

	for(int i = 0; i < 200;  i++)
	{
		CALL_FUNC(Controller, Controller, g_System_controller, CLASS_Controller__Z12control_loopEV);

		a = CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, TO_CLASS_PTR(g_System_controller, Controller), servoLeft), CLASS_RobotServo__Z8getValueEV);
		b = CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, TO_CLASS_PTR(g_System_controller, Controller), servoRight), CLASS_RobotServo__Z8getValueEV);

		printf("Servo left:  %3d     Servo right:  %3d\n", (int)(a->value.doubleVal), (int)(b->value.doubleVal));
		vdmFree(a);
		vdmFree(b);
		sleep(1);
	}


	return 0;
}
