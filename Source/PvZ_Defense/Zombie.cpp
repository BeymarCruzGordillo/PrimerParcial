#include "Zombie.h"

//AZombie::AZombie()  Esto es la implementaci�n del constructor de la clase AZombie
AZombie::AZombie()
{
	//PrimaryActorTick.bCanEverTick en true. Esto significa que las instancias de AZombie podr�n recibir actualizaciones de tick en cada fotograma del juego. need it.
	
	
	
	PrimaryActorTick.bCanEverTick = true;//esta l�nea habilita el "tick" (actualizaci�n) para este Actor

}

//Esta es una funci�n llamada autom�ticamente cuando el juego comienza o cuando se instancia un nuevo objeto 
void AZombie::BeginPlay()
{
	//Super::BeginPlay() simplemente llama al BeginPlay de la clase base. La llamada a Super::BeginPlay() permite que la implementaci�n de la funci�n BeginPlay en la clase base (la clase de la que se deriva AZombie) se ejecute antes de cualquier otra l�gica espec�fica de BeginPlay en la clase AZombie
 	Super::BeginPlay();
}

//Esta l�nea de c�digo est� configurando una propiedad de este actor relacionada con su capacidad para recibir actualizaciones de "tick" en cada fotograma del juego
//El tick es un evento que ocurre en cada fotograma y permite que los actores realicen acciones de actualizaci�n en funci�n del tiempo transcurrido. Al establecer bCanEverTick en true, est�s diciendo que este actor puede recibir actualizaciones de tick y, por lo tanto, la funci�n Tick definida en la clase se llamar� en cada fotograma.
void AZombie::Tick(float DeltaTime)
{
	//(Super::Tick(DeltaTime) llama al Tick de la clase base).
	Super::Tick(DeltaTime);

}

