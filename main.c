#include "Vdm.h"
#include "World.h"
#include <stdio.h>
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


	vdm_gc_init();

	//	Changing the seed gives variable memory loss values.
	//	srand(time(NULL));
	srand(0);

	TVP sys = _Z6SystemEV(NULL);
	TVP a;
	TVP b;

		for(int i = 0; i < 2000;  i++)
//	while(true)
	{
		CALL_FUNC(Controller, Controller, g_System_controller, CLASS_Controller__Z12control_loopEV);

		a = CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR_GC(Controller, Controller, TO_CLASS_PTR(g_System_controller, Controller), servoLeft), CLASS_RobotServo__Z8getValueEV);
		b = CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR_GC(Controller, Controller, TO_CLASS_PTR(g_System_controller, Controller), servoRight), CLASS_RobotServo__Z8getValueEV);

		printf("Sensor:  %d   Servo left:  %lf   Servo right:  %lf\n", 0, a->value.doubleVal, b->value.doubleVal);
		vdmFree(a);
		vdmFree(b);

		vdm_gc();

	}

	vdm_gc_shutdown();
	return 0;
}


/*
TVP fn()
{
	TVP a;
	TVP *b;
	a = vdmCloneGC(newIntGC(3, &a), NULL);
	b = &a;
	return vdmCloneGC(newIntGC(toInteger(newIntGC(4, NULL)), NULL), NULL);
}

int main()
{
	TVP a;
	TVP b;
	int i;

	vdm_gc_init();

	for(i = 0; i < 30; i++)
	{
		a = fn();
		add_allocd_mem(a, &a);
		b = fn();
		add_allocd_mem(b, &b);
	}


	vdm_gc();

	vdm_gc_shutdown();

	return 0;
}
 */
