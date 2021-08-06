#include<stdio.h>
#include<GL/glut.h>
#define SPACEBAR 32

//////////////////////////////////////// Declaration of global variables   /////////////////////////
float y=0,ang=0,i=0,k=0,n=0;

float a=900,b=880,c=900,d=900,p,q=0,s;

float g=0,z=0,w=0;   // car  translate indicator

float m=.80,j=.50,o=.15;

////////////////////////////// sea function to display river   ///////////////////////////////
void sea()
	{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.0,0.0);
	glVertex2f(2000.0,0.0);
	glVertex2f(2000.0,1600.0);
	glVertex2f(0.0,1600.0);
	glEnd();

	glPushMatrix();
	glTranslatef(q,0,0);

	glBegin(GL_LINES);
	glColor3f(1.0,1.0,1.0);
	for(p=0;p<21000;p=p+95)
	for(s=0;s<21000;s=s+95)
	glVertex2f(0.0+s,100.0+p);
	glVertex2f(0.0+s,100.0+p);


	glEnd();
	glPopMatrix();
	}

////////////////////////////////////////  Bridge function  ////////////////////////////////////

void bridge()
{
	glBegin(GL_POLYGON);
		glColor3f(0.40,0.40,0.40);
		glVertex2f(0.0,900.0);
		glVertex2f(500.0,900.0);
		glVertex2f(500.0,1400.0);   //bridge top 1
		glVertex2f(0.0,1400.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(100.0,1030.0);
		glVertex2f(200.0,1030.0);
		glVertex2f(200.0,1040.0);   //strip1
		glVertex2f(100.0,1040.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(100.0,1280.0);
		glVertex2f(200.0,1280.0);
		glVertex2f(200.0,1290.0);   //strip1 above 1st
		glVertex2f(100.0,1290.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(300.0,1030.0);
		glVertex2f(400.0,1030.0);
		glVertex2f(400.0,1040.0);   //strip2
		glVertex2f(300.0,1040.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(300.0,1280.0);
		glVertex2f(400.0,1280.0);
		glVertex2f(400.0,1290.0);   //strip2 above 2nd
		glVertex2f(300.0,1290.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(0.0,1370.0);
		glVertex2f(500.0,1370.0);
		glVertex2f(500.0,1375.0);   //yellow strip1
		glVertex2f(0.0,1375.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.65,0.45,0.45);
		glVertex2f(0.0,1150.0);
		glVertex2f(500.0,1150.0);
		glVertex2f(500.0,1180.0);   //divider 1
		glVertex2f(0.0,1180.0);
    	glEnd();


	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(0.0,920.0);
		glVertex2f(500.0,920.0);
		glVertex2f(500.0,930.0);   //yellow strip2
		glVertex2f(0.0,930.0);
    	glEnd();

	//   brige up

	glPushMatrix();

	glBegin(GL_POLYGON);
		glColor3f(0.40,0.40,0.40);
		glVertex2f(500.0,900.0);             //bridge top 2
		//up
		glVertex2f(900.0-k,900.0+n);
		glVertex2f(900.0-k,1400.0+n);
		//up
		glVertex2f(500.0,1400.0);
    	glEnd();


	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(30.0,1550.0);
		glVertex2f(900.0-k,1400.0+n);   //pole thread back
		glVertex2f(50.0,1550.0);
		glVertex2f(900.0-k,1403.0+n);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(500.0,880.0);
		glVertex2f(900.0-k,880.0+n); //base1
		glVertex2f(900.0-k,900.0+n);
		glVertex2f(500.0,900.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.40,0.40,0.40);
		glVertex2f(900.0+k,900.0+n);
		//up
		glVertex2f(1300.0,900.0);    // bridge top3
		glVertex2f(1300.0,1400.0);
		//up
		glVertex2f(900.0+k,1400.0+n);
      	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(900.0+k,880.0+n);
		glVertex2f(1300.0,880.0);	// base 2
		glVertex2f(1300.0,900.0);
		glVertex2f(900.0+k,900.0+n);
	glEnd();
	glPopMatrix();

	glBegin(GL_POLYGON);
		glColor3f(0.40,0.40,0.40);
		glVertex2f(1300.0,900.0);
		glVertex2f(2000.0,900.0);  //bridge top 4
		glVertex2f(2000.0,1400.0);
		glVertex2f(1300.0,1400.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(1300.0,1370.0);
		glVertex2f(2000.0,1370.0);
		glVertex2f(2000.0,1375.0);   //yellow strip3
		glVertex2f(1300.0,1375.0);
     	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.65,0.45,0.45);
		glVertex2f(1300.0,1150.0);
		glVertex2f(2000.0,1150.0);
		glVertex2f(2000.0,1180.0);   //divider
		glVertex2f(1300.0,1180.0);
     	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(1300.0,920.0);
		glVertex2f(2000.0,920.0);
		glVertex2f(2000.0,930.0);   // yellow strip4
		glVertex2f(1300.0,930.0);
   	 glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1400.0,1030.0);
		glVertex2f(1500.0,1030.0);
		glVertex2f(1500.0,1040.0);   //strip3
		glVertex2f(1400.0,1040.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1400.0,1280.0);
		glVertex2f(1500.0,1280.0);
		glVertex2f(1500.0,1290.0);   //strip3 above 3rd
		glVertex2f(1400.0,1290.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1600.0,1030.0);
		glVertex2f(1700.0,1030.0);
		glVertex2f(1700.0,1040.0);   //strip4
		glVertex2f(1600.0,1040.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1600.0,1280.0);
		glVertex2f(1700.0,1280.0);
		glVertex2f(1700.0,1290.0);   //strip4 above 4th
		glVertex2f(1600.0,1290.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1800.0,1030.0);
		glVertex2f(1900.0,1030.0);
		glVertex2f(1900.0,1040.0);   //strip5
		glVertex2f(1800.0,1040.0);
    	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(1800.0,1280.0);
		glVertex2f(1900.0,1280.0);
		glVertex2f(1900.0,1290.0);   //strip5 above 5th
		glVertex2f(1800.0,1290.0);
    	glEnd();

	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1725.0,1550.0);
		glVertex2f(900.0+k,1400.0+n);    //right pole thread
		glVertex2f(1745.0,1550.0);
		glVertex2f(900.0+k,1400.0+n);
		glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.25,0.25,0.25);
		glVertex2f(200.0,800.0);   //6 point polygon 1
		glVertex2f(200.0,700.0);
		glVertex2f(300.0,700.0);
		glVertex2f(300.0,800.0);
		glVertex2f(350.0,880.0);
		glVertex2f(150.0,880.0);
		glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0.0,880.0);
		glVertex2f(500.0,880.0);   //base3
		glVertex2f(500.0,900.0);
		glVertex2f(0.0,900.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);    //base4
		glVertex2f(1300.0,880.0);
		glVertex2f(2000.0,880.0);
		glVertex2f(2000.0,900.0);
		glVertex2f(1300.0,900.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.25,0.25,0.25);
		glVertex2f(1500.0,800.0);
		glVertex2f(1500.0,700.0);
		glVertex2f(1600.0,700.0);  //6 point polygon2
		glVertex2f(1600.0,800.0);
		glVertex2f(1650.0,880.0);
		glVertex2f(1450.0,880.0);
	glEnd();
	}

//////////////////////////////////////////  Boat function  ///////////////////////////////
void boat(){
		glPushMatrix();
		glTranslatef(0,y,0);
		glPushMatrix();
	glBegin(GL_POLYGON);
		glColor3f(.75,.75,.75);
		glVertex2f(900.0,700.0);
		glVertex2f(800.0,620.0);
		glVertex2f(750.0,500.0);
		glVertex2f(750.0,200.0);    	 //ship
		glVertex2f(900.0,50.0);
		glVertex2f(1050.0,200.0);
		glVertex2f(1050.0,500.0);
		glVertex2f(1000.0,620.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);     	// ship back  1
		glVertex2f(750.0,200.0);
		glVertex2f(900.0,0.0);
		glVertex2f(900.0,50.0);
		glVertex2f(751.0,200.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(905,570);
		glVertex2f(905,722);
		glColor3f(0.0,0.0,0.0);		//flag pole
		glVertex2f(910,722);
		glVertex2f(910,570);
		glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(910,640);
		glVertex2f(980,720);
		glColor3f(0.5,0.5,0.5);  		//flag triangle
		glVertex2f(910,720);
		glVertex2f(980,640);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(800,300);
		glVertex2f(800,406);
		glColor3f(0.8,0.4,0.7);		//pillar
		glVertex2f(850,406);
		glVertex2f(850,300);
		glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(901.0,0.0);      	//ship back  2
		glVertex2f(1050.0,200.0);
		glVertex2f(1051.0,200.0);
		glVertex2f(901.0,50.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(0,0,0);
		glVertex2f(900.0,700.0);
		glVertex2f(820.0,600.0);  	//boat grill
		glVertex2f(820.0,600.0);
		glVertex2f(800.0,620.0);
		glVertex2f(820.0,600.0);
		glVertex2f(770.0,500.0);
		glVertex2f(770.0,500.0);
		glVertex2f(750.0,500.0);
		glVertex2f(770.0,500.0);
		glVertex2f(770.0,200.0);
		glVertex2f(770.0,200.0);
		glVertex2f(750.0,200.0);
		glVertex2f(770.0,200.0);
		glVertex2f(900.0,70.0);
		glVertex2f(900.0,70.0);
		glVertex2f(900.0,50.0);
		glVertex2f(900.0,70.0);
		glVertex2f(1030.0,200.0);
		glVertex2f(1030.0,200.0);
		glVertex2f(1050.0,200.0);
		glVertex2f(1030.0,200.0);
		glVertex2f(1030.0,500.0);
		glVertex2f(1030.0,500.0);
		glVertex2f(1050.0,500.0);
		glVertex2f(1030.0,500.0);
		glVertex2f(980.0,620.0);
		glVertex2f(980.0,620.0);
		glVertex2f(1000.0,620.0);
		glVertex2f(980.0,620.0);
		glVertex2f(900.0,700.0);
		glVertex2f(770.0,350.0);
		glVertex2f(750.0,350.0);
		glVertex2f(770.0,450.0);
		glVertex2f(750.0,450.0);
		glVertex2f(770.0,250.0);
		glVertex2f(750.0,250.0);
		glVertex2f(1030.0,250.0);
		glVertex2f(1050.0,250.0);
		glVertex2f(1030.0,350.0);
		glVertex2f(1050.0,350.0);
		glVertex2f(1030.0,450.0);
		glVertex2f(1050.0,450.0);
		glVertex2f(840.0,130.0);
		glVertex2f(820.0,110.0);
		glVertex2f(975.0,110);
		glVertex2f(955.0,125.0);
	glEnd();

		glBegin(GL_POLYGON);
			glColor3f(0.4,0.42,0.5);
			glVertex2f(800.0,200.0); //ship compartment 1
			glVertex2f(1000.0,200.0);
			glVertex2f(1000.0,500.0);
			glVertex2f(800.0,500.0);
	    	glEnd();

		glBegin(GL_POLYGON);
			glColor3f(0.6,0.65,0.7);
			glVertex2f(830.0,250.0); //ship compartment 2
			glVertex2f(970.0,250.0);
			glVertex2f(970.0,450.0);
			glVertex2f(830.0,450.0);
	    	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(840,450);
		glVertex2f(840,500);
		glColor3f(0.3,0.1,0.75);  		//flag triangle 1
		glVertex2f(800,500);
		glVertex2f(840,450);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(838,390);
		glVertex2f(838,500);
		glColor3f(0.35,0.1,0.75);		//pillar 1
		glVertex2f(842,500);
		glVertex2f(842,390);
		glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(962,450);
		glVertex2f(1002,500);
		glColor3f(0.3,0.1,0.75);  		//flag triangle 2
		glVertex2f(962,500);
		glVertex2f(962,450);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(959,390);
		glVertex2f(959,500);
		glColor3f(0.35,0.1,0.75);		//pillar 2
		glVertex2f(962,500);
		glVertex2f(962,390);
		glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(962,300);
		glVertex2f(1002,350);
		glColor3f(0.3,0.1,0.75);  		//flag triangle 3
		glVertex2f(962,350);
		glVertex2f(962,300);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(960,270);
		glVertex2f(960,350);
		glColor3f(0.35,0.1,0.75);		//pillar 3
		glVertex2f(963,350);
		glVertex2f(963,270);
		glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(840,300);
		glVertex2f(840,350);
		glColor3f(0.3,0.1,0.75);  		//flag triangle 4
		glVertex2f(800,350);
		glVertex2f(840,300);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(838,270);
		glVertex2f(838,350);
		glColor3f(0.35,0.1,0.75);		//pillar 4
		glVertex2f(841,350);
		glVertex2f(841,270);
		glEnd();

	 glPopMatrix();
	glPopMatrix();
}

////////////////////////////////////////////    bus/car function   //////////////////////////////////
void bus1(){
glPushMatrix();
glTranslatef(g,0,0);
	glBegin(GL_POLYGON);                  //  car top red
		glColor3f(0.9,0.15,0.15);
		glVertex2f(1800.0,1050.0);
		glVertex2f(1950.0,1050.0);
		glVertex2f(1950.0,1150.0);
		glVertex2f(1800.0,1150.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car top black
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1770.0,1030.0);
		glVertex2f(1800.0,1050.0);
		glVertex2f(1800.0,1150.0);
		glVertex2f(1770.0,1130.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car side black
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1770.0,1030.0);
		glVertex2f(1930.0,1030.0);
		glVertex2f(1950.0,1050.0);
		glVertex2f(1800.0,1050.0);
	glEnd();

	    glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1820.0,1080.0);
		glVertex2f(1920.0,1080.0);
		glVertex2f(1920.0,1080.0);
		glVertex2f(1920.0,1110.0);
		glVertex2f(1920.0,1110.0);             //carrier
		glVertex2f(1820.0,1110.0);
		glVertex2f(1820.0,1110.0);
		glVertex2f(1820.0,1080.0);
		glVertex2f(1840.0,1080.0);
		glVertex2f(1840.0,1110.0);
		glVertex2f(1860.0,1080.0);
		glVertex2f(1860.0,1110.0);
		glVertex2f(1880.0,1080.0);
		glVertex2f(1880.0,1110.0);
		glVertex2f(1900.0,1080.0);
		glVertex2f(1900.0,1110.0);
		glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(1780.0,1035.0);        //head lamp
		glVertex2f(1780.0,1045.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(1780.0,1125.0);        //head lamp
		glVertex2f(1780.0,1135.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(1790.0,1055.0);        //horn grill
		glVertex2f(1790.0,1125.0);
		glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(1800.0,1040.0);        //side window
		glVertex2f(1928.0,1040.0);
		glEnd();

	glPopMatrix();
}
///////////////////////////////////////////////////////2nd car/////////////////////////////////////////////
void bus2(){
glPushMatrix();
glTranslatef(-g,0,0);
	glBegin(GL_POLYGON);                  //  cartop red
		glColor3f(1.0,0.5,0.0);
		glVertex2f(180.0,1250.0);
		glVertex2f(300.0,1250.0);
		glVertex2f(300.0,1340.0);
		glVertex2f(180.0,1340.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car black
		glColor3f(0.0,0.0,0.0);
		glVertex2f(300.0,1250.0);
		glVertex2f(335.0,1230.0);
		glVertex2f(335.0,1330.0);
		glVertex2f(300.0,1350.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car side black
		glColor3f(0.0,0.0,0.0);
		glVertex2f(180.0,1250.0);
		glVertex2f(310.0,1250.0);
		glVertex2f(330.0,1230.0);
		glVertex2f(200.0,1230.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(200.0,1280.0);
		glVertex2f(300.0,1280.0);
		glVertex2f(300.0,1280.0);
		glVertex2f(300.0,1310.0);
		glVertex2f(300.0,1310.0);             //carrier
		glVertex2f(200.0,1310.0);
		glVertex2f(200.0,1310.0);
		glVertex2f(200.0,1280.0);
		glVertex2f(200.0,1280.0);
		glVertex2f(200.0,1310.0);
		glVertex2f(240.0,1280.0);
		glVertex2f(240.0,1310.0);
		glVertex2f(260.0,1280.0);
		glVertex2f(260.0,1310.0);
		glVertex2f(300.0,1280.0);
		glVertex2f(300.0,1310.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.5,0.0);
		glVertex2f(325.0,1245.0);        //head lamp
		glVertex2f(325.0,1255.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.5,0.0);
		glVertex2f(325.0,1325.0);        //head lamp
		glVertex2f(325.0,1335.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.5,0.0);
		glVertex2f(315.0,1255.0);        //horn grill
		glVertex2f(315.0,1325.0);
		glEnd();

	glBegin(GL_LINES);
		glColor3f(1.0,0.5,0.0);
		glVertex2f(200.0,1240.0);        //side window
		glVertex2f(300.0,1240.0);
		glEnd();

	glPopMatrix();
}

////////////////////////////////////////////  bus3  //////////////////////////////////
void bus3(){
glPushMatrix();
glTranslatef(g,0,0);
	glBegin(GL_POLYGON);                  //  car top red
		glColor3f(0.75,0.75,0.95);
		glVertex2f(1500.0,1050.0);
		glVertex2f(1600.0,1050.0);
		glVertex2f(1600.0,1150.0);
		glVertex2f(1500.0,1150.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car top black
		glColor3f(0.0,0.1,0.0);
		glVertex2f(1450.0,1030.0);
		glVertex2f(1500.0,1050.0);
		glVertex2f(1500.0,1150.0);
		glVertex2f(1450.0,1130.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  car side black
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1450.0,1030.0);
		glVertex2f(1590.0,1030.0);
		glVertex2f(1600.0,1050.0);
		glVertex2f(1500.0,1050.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(0.75,0.75,0.95);
		glVertex2f(1470.0,1035.0);        //head lamp
		glVertex2f(1470.0,1045.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(0.75,0.75,0.95);
		glVertex2f(1470.0,1125.0);        //head lamp
		glVertex2f(1470.0,1135.0);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(0.75,0.75,0.95);
		glVertex2f(1480.0,1055.0);        //horn grill
		glVertex2f(1480.0,1125.0);
		glEnd();

	glBegin(GL_LINES);
		glColor3f(0.75,0.75,0.95);
		glVertex2f(1500.0,1040.0);        //side window
		glVertex2f(1590.0,1040.0);
		glEnd();

	glPopMatrix();
}

/////////////////////////////////////////////////// Pole Function  ///////////////////////////////
void poles(){
	glBegin(GL_POLYGON);                 //  left pole behind
		glColor3f(0.0,0.0,0.0);
		glVertex2f(30.0,1400.0);
		glVertex2f(50.0,1400.0);
		glVertex2f(50.0,1550.0);
		glVertex2f(30.0,1550.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  right pole behind
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1725.0,1400.0);
		glVertex2f(1745.0,1400.0);
		glVertex2f(1745.0,1550.0);
		glVertex2f(1725.0,1550.0);
	glEnd();

  	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1750.0,1400.0);
		glVertex2f(900.0+k,900.0+n);    //right pole thread front
		glVertex2f(1770.0,1400.0);
		glVertex2f(900.0+k,880.0+n);
		glEnd();

	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(20.0,1400.0);
		glVertex2f(900.0-k,900.0+n);    //pole thread front
		glVertex2f(0.0,1400.0);
		glVertex2f(900.0-k,880.0+n);
	glEnd();

	glBegin(GL_POLYGON);                  //  left pole front
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0.0,900.0);
		glVertex2f(20.0,900.0);
		glVertex2f(20.0,1400.0);
		glVertex2f(0.0,1400.0);
	glEnd();

	glBegin(GL_POLYGON);                  //  right pole front
		glColor3f(0.0,0.0,0.0);
		glVertex2f(1750.0,900.0);
		glVertex2f(1770.0,900.0);
		glVertex2f(1770.0,1400.0);
		glVertex2f(1750.0,1400.0);
	glEnd();
}

/////////////////////////////// display function  ///////////////////////////

void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   	sea();
   	bridge();
   	boat();
   	bus1();
   	bus2();
  	poles();
	bus3();
	glFlush();
	glutSwapBuffers();
}

/////////////////////////////////   function to animate bridge stripes   //////////////////////////////
void animate(){
	q=q-0.5;
	y=y+0.5;

	i+=0.4;
	if((i>=100) && (i<=430)){
		k=k+0.2;
		n=n+0.2;
	}
	if(i>=1200 && !(k<=0 && n<=0)){
		k=k-0.1;
		n=n-0.1;
	}

	if(k<=0)
		g-=0.5;
		//z-=0.10;
		//w-=.35;

	glutPostRedisplay();
}

void myinit(){
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,2000.0,0.0,1600.0);
}

/////////////////////////////////// Menu function  ///////////////////////

void main_menu(int ch){
	switch(ch){
	case 1:glutIdleFunc(NULL);break;

	case 2:glutIdleFunc(animate);break;

	case 3:exit(0);
	}
}

/////////////////////////////////   K/B function for changing boat color  //////////////////

void keys( unsigned char key, int x, int y ){
    switch( key ){
    	case 'r':m=1.0,j=0.0,o=0.0; glutPostRedisplay();break;

    	case 'g':m=0.0,j=1.0,o=0.0;glutPostRedisplay();break;

	case 'b':m=.80,j=.50,o=0.15;glutPostRedisplay();break;

	case 'w':m=1.0,j=1.0,o=1.0; glutPostRedisplay();break;

	case 'm':m=1.0,j=.0,o=1.0;glutPostRedisplay();break;

	case 'c':m=.0,j=1.0,o=1.0; glutPostRedisplay();break;

	case 'y':m=.75,j=0.75,o=.75;glutPostRedisplay();break;

    };
}

/////////////////////////////////////////     Front screen display      /////////////////////////////

void key(unsigned char key, int x, int y){
	switch(key){
	case ' ':glutDisplayFunc(display);break;
	default:glutPostRedisplay();return;
	}
}

void strokeString(float x, float y, float sx, float sy, char *string, int width){
    char *c;
    glLineWidth(width);
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(sx, sy, 0);
    for (c = string; *c != '\0'; c++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
    glPopMatrix();
}

void first(){
    	glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.15, 0, 0.55);
        strokeString(450, 1400, 0.5, 0.5, "BMS INSTITUTE OF TECHNOLOGY", 5);

    glColor3f(0.0, 0.0, 0.0);
    	strokeString(370, 1270, 0.5, 0.5, "DEPARTMENT OF COMPUTER SCIENCE", 5);
    	strokeString(700, 1150, 0.5, 0.5, "AND ENGINEERING", 5);
        glColor3f(0.5, 0.0, 0.1);
    	strokeString(320, 980, 0.5, 0.5, "COMPUTER GRAPHICS MINI PROJECT ON", 4);

	glColor3f(0.15, 0, 0.55);
    	strokeString(580, 800, 0.8, 0.8, "BASCULE BRIDGE", 6);

	glColor3f(0.5, 0, 0.1);
    	strokeString(950, 630, 0.35, 0.35, "By:", 3);

    	glColor3f(0,0,0);
    	strokeString(720, 550, 0.35, 0.35, "S Satish - 1BY18CS132", 3);
    	strokeString(720, 480, 0.35, 0.35, "S Arshad - 1BY18CS227", 3);
    	strokeString(720, 420, 0.35, 0.35, "Chirag V - 1BY18CS228", 3);

    glColor3f(0.5, 0, 0.1);
        strokeString(1600, 200, 0.2, 0.2, "Press (SPACE + ENTER)", 2);

    	glutSwapBuffers();

}

void initfirst(){
    glClearColor(0.5, 0.4,0.3, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1000, 0, 1000, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutCreateWindow("BASCULE BRIDGE");
	initfirst();
	glutDisplayFunc(first);
	glutKeyboardFunc(key);
	//glutIdleFunc(idle);

	glutCreateMenu(main_menu);
	glutAddMenuEntry("Stop Animation",1);
	glutAddMenuEntry("Start Animation",2);
	glutAddMenuEntry("Quit",3);

	glutAttachMenu(GLUT_RIGHT_BUTTON);

	myinit();
	glClearColor (0.5,0.8,0.55,0);
	glutMainLoop();
        return 0;
}

////////////////////////////////////  The End  :D     ///////////////////////////
