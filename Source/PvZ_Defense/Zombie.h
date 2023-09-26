// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_DEFENSE_API AZombie : public AActor
{
	GENERATED_BODY()

	
public:	
	//Este es el constructor de la clase "AZombie" y se utiliza para inicializar las propiedades del actor.	
	AZombie();

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* PlantMeshComponent;

protected:
	// Esta función se llama cuando el actor se inicia en el juego.
	virtual void BeginPlay() override;

public:	
	//  Esta función se llama en cada fotograma del juego y se utiliza para actualizar el comportamiento del actor en función del tiempo transcurrido.
	virtual void Tick(float DeltaTime) override;

};
