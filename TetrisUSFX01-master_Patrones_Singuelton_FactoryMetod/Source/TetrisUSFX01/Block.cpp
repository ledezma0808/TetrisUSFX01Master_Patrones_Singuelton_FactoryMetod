// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

// Sets default values
ABlock::ABlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = BlockMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));    //StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'

	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		//BlockMesh->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci�n para cambiar el tama�o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FString TipoBloque;

FString ABlock::getBloque()
{
	int num = FMath::RandRange(0, 6);
	if (num == 0) {
		 TipoBloque = "ARENA";
	}
	if (num == 1)
	{
		 TipoBloque = "COLORIDO";
	}
	if (num == 2)
	{
		 TipoBloque = "GRASS";
	}
	if (num == 3)
	{
		 TipoBloque = "MADERA";
	}
	if (num == 4)
	{
		 TipoBloque = "METAL";
	}
	if (num == 5)
	{
		 TipoBloque = "PIEDRA";
	}
	if (num == 6) {
		TipoBloque = "MARFIL";
	}
	return TipoBloque;
}


