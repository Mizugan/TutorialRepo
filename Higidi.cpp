#include <iostream>
#include <string>


// This is higidi yow !!! 

/*

Why nyet ?! 

*/


int main()

{


}

// Variables

bool b = true;
char datletter = 'z';
std:string datword = "Hello"; 
int datnum = 5;
float datnumber = 126.73;


// casting is conversation

int c = 150;
short s = c; // s = 150

// 


// Aritmetics yooo !!! 


int x = 5;
int y -= x; // y = -5

int x = 5;
++x; // x = 6 prefix
x++ // x = 7 postfix

// Modulus Operator

C = A & B

// 

// Shorthand aritmeti operations

x += y	X = x + y


/*

Conditions and Statements

*/


x == y; // equals
x != y; // NOT equal to
x > y x < y // bigger smaller
	x <= y x >= y // equal or bigger/smaller

	/*

	OR and XOR

	XOR is the reverse of OR. Where OR gives T XOR gives F and vice versa

	*/

	A || B;    //  A OR B
A XOR B;		// A XOR B
A && B; // A AND B
A!; // A NOT(reverse the boolean value)

// if else loops

int LifePoints = x;
if (LifePoints <= 0)

{
	GameOver = true;
	PlayExplosionSound();
	PlayFX(DeadAlready);
}

else

{

	KeepPlayingTheMusic();

}



// Switch break default loop

switch ()
{

case panda1:
	KeepDaMusic();
	break;

case panda2:
	StopDaMusic();
	break;

case panda3:
	SlowMoDaMusic();
	break;

default:
	AdjustDaMusic();
	break;

}

// for loop

int count;
for (count = 0, count <= 100, ++cunt)

{

	CauseDamageToChar(TargetedCharacter, SpellDamage);

}

// while loop

while (PlayerHealthNotFull = true)

{

	ShowDamageWarning();

}


// do while loop -> Checks the condition at the end before recycling



// *** contine;   jump to next loop cycle


do 

{

	ShowDAmageWarning()

}

while (PlayerHealthNotFull = true);



// Arrays yow ! 


	int RTSMultipleUnitSelection[16];		// declare what type of data will be stored and the size of the array

	RTSMultipleUnitSelection[0];			// Select a specific element of the array. Starts with 0



// Functions

	void KillPlayer(int KillTime);

	{
		KillTime(CurrentTime);
		DeletePlayerModel(this);

	}



 // Reference and Pointers !!! 

	int VehicleCap = 15;
	int& VehicleCapRef = VehicleCap;		// Reference  VehicleCapRef is currently 15. Can't be changed

// Pointers !!

	int* InfantaryCap;							// Declare
	int* InfantaryCap = 0;						// Initialize to NULL
	int* InfantaryCap = &VehicleCapRef;			// Initialize to an adress



// Structures YOW !


	struct SelectionBox
	{

		float x1, y1, z1;
		float x2, y2, z2;
		float x3, y3, z3;
		float x4, y4, z4;

	};

// Aso you can build baic structures and then combine them to make bigger more easily editable sutructures


	struct MouseSelectionPoint
	{

		float x, y, z;

	};


	struct SelectionBox

	{

		MouseSelectionPoint p1, p2, p3, p4;

	};

	SelectionBox.p1.x = 112.43f;		// Get the value


// Classes YOW ! 

	class Fighter

	{

	public:
		void turn();
		void FireCannon();
	
	private:

		int FuelValue;
		int Ammunition;
		int Weight;


	};

//	Implementation YOW !!

	void Fighter::turn()

	{

		RotateObject(x, y, z)->this;


	}

// Constructors

	Fighter::Fighter(FuelValue, Ammunition, Weight)

	{

		FuelValue = 152f;
		Ammunition = 150f;
		Weight = 19;

	}


// Destructor YOW !!


	Wizard::~Wizard()
	{



	}

// Indirec Operator Yow ???



	Fighter* fight0 = new Fighter;
	fight0->FuelValue = 192;


// enum Yow ! 

	enum IceCream

	{

		Choco, Vanilla, Lemon

	};

	IceCream Type1;
	Type1 = Choco;



	/*
	
	static variables wii persist across functions
	
	*/