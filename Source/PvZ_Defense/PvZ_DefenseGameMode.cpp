
#include "PvZ_DefenseGameMode.h"
#include "PvZ_DefensePawn.h
#include "Plant.h"



void APvZ_DefenseGameMode::BeginPlay()
{
    Super::BeginPlay();

    FTransform SpawnLocation;
    SpawnLocation.SetLocation(FVector(-1500.0f, 1200.0f, 200.0f));
    float initialPositionX = -1500.0f;
    float initialPositionY = 1200.0f;


    for (int32 i = 0; i < NumberPlantas; ++i)
    {
        APlant* NewPlant = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

        if (NewPlant)
        {
            NewPlant->SetSpawnAfter(FMath::RandRange(1, 10));
            NewPlant->SetCanMove(false);
            ArrayPlant.Add(NewPlant);
            MapPlantas.Add(i, NewPlant);
        }
    }




    // Muestra un mensaje de depuración en pantalla de color rojo durante 10 segundos
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("La defenza a Comenzadon.\n Los zombies estan en camino"));

    FTransform SpawnLocation;// Se crea una instancia de la estructura FTransform para representar la ubicación de spawn.
    // Genera una instancia de la clase AZombie en la ubicación predeterminada
    GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);

}

void APvZ_DefenseGameMode::Tick(float DeltaTime)
{

    Super::Tick(DeltaTime);

    APlant* APvZ_DefenseGameMode::SpawnPlant(FVector _spawnPosition)
    {
        FTransform SpawnLocation;
        SpawnLocation.SetLocation(_spawnPosition);
        return GetWorld()->SpawnActor<Plant>(APlant::StaticClass(), SpawnLocation);
    }
}


