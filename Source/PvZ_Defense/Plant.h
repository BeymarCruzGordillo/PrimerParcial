#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plant.generated.h"



UCLASS()
class PVZ_DEFENSE_API APlant : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* PlantMeshComponent;

	
public:	
	// Sets default values for this actor's properties
	APlant();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
