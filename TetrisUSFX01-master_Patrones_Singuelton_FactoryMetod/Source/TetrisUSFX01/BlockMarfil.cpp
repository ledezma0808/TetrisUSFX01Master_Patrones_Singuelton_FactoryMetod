// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockMarfil.h"


ABlockMarfil::ABlockMarfil()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockMarfil"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));     //StaticMesh'/Game/Mesh/block.block'

	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		BlockMesh->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

		UMaterialInterface* materialBlock = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Rock_Slate.M_Rock_Slate'"));
		BlockMesh->SetMaterial(0, materialBlock);
		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci�n para cambiar el tama�o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para el Block"));
	}

}


void ABlockMarfil::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un bloque: BlockMarfil"));
}