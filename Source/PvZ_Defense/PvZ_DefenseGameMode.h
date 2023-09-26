//La clase AGameModeBase se utiliza para definir y controlar las reglas y la lógica general de un nivel o mapa en el juego. 
//Esto incluye configurar reglas, gestionar la creación de personajes, controlar el inicio y el
//final del juego, configurar el HUD, gestionar eventos de juego, implementar lógica personalizada y más. Es una parte esencial para personalizar y definir la experiencia de juego en Unreal Engine.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PvZ_DefenseGameMode.generated.h"

UCLASS(MinimalAPI)
class APvZ_DefenseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APvZ_DefenseGameMode();

	TMap<FName, APlant*> MapPlantas; 
	int32 NumberPlantas = 15;
	
public:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};



