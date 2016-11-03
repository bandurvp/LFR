#include "Vdm.h"
#include "World.h"
#include <stdio.h>
#include <time.h>


#define gc_map_size 2000000

struct ref_map
{
	TVP *ref_from;
	TVP ref_to;
};

struct ref_map gc_map[gc_map_size];

void create_garbage()
{
	TVP a;

	for(int i = 0; i < gc_map_size; i++)
	{
		a = newInt(i);
		gc_map[i] = (struct ref_map){&a, a};
	}
}

int main()
{

	create_garbage();

	for(int i = 0; i < gc_map_size; i++)
	{
		if(*(gc_map[i].ref_from) != gc_map[i].ref_to)
		{
			vdmFree(gc_map[i].ref_to);
		}
	}

	return 0;
}

/*
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

		printf("Sensor:  %d   Servo left:  %lf   Servo right:  %lf\n", 0, a->value.doubleVal, b->value.doubleVal);
		vdmFree(a);
		vdmFree(b);
	}


	return 0;
}
 */
