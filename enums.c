#include <stdio.h> 

enum boxes
	{
		box1 = '\t',
		box2 = '\b',
		box3
	};

main()
{
	

	enum boxes box_a = box1; 
	enum boxes box_b = box2; 
	enum boxes box_c = box3; 

	printf("%d\n", box_a); 
	printf("%d\n", box_b); 
	printf("%d\n", box_c); 

	return 0; 
}
