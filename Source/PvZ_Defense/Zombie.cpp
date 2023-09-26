#include "Zombie.h"

//AZombie::AZombie()  Esto es la implementación del constructor de la clase AZombie
AZombie::AZombie()
{
	//PrimaryActorTick.bCanEverTick en true. Esto significa que las instancias de AZombie podrán recibir actualizaciones de tick en cada fotograma del juego. need it.
	
	
	
	PrimaryActorTick.bCanEverTick = true;//esta línea habilita el "tick" (actualización) para este Actor

}

//Esta es una función llamada automáticamente cuando el juego comienza o cuando se instancia un nuevo objeto 
void AZombie::BeginPlay()
{
	//Super::BeginPlay() simplemente llama al BeginPlay de la clase base. La llamada a Super::BeginPlay() permite que la implementación de la función BeginPlay en la clase base (la clase de la que se deriva AZombie) se ejecute antes de cualquier otra lógica específica de BeginPlay en la clase AZombie
 	Super::BeginPlay();
}

//Esta línea de código está configurando una propiedad de este actor relacionada con su capacidad para recibir actualizaciones de "tick" en cada fotograma del juego
//El tick es un evento que ocurre en cada fotograma y permite que los actores realicen acciones de actualización en función del tiempo transcurrido. Al establecer bCanEverTick en true, estás diciendo que este actor puede recibir actualizaciones de tick y, por lo tanto, la función Tick definida en la clase se llamará en cada fotograma.
void AZombie::Tick(float DeltaTime)
{
	//(Super::Tick(DeltaTime) llama al Tick de la clase base).
	Super::Tick(DeltaTime);

}

