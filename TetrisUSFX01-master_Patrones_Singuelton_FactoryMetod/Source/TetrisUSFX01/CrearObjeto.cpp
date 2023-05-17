// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearObjeto.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACrearObjeto::ACrearObjeto()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SIngleton

	   //Search for existing Instances of this class
	TArray<AActor*> Instances;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(),
		ACrearObjeto::StaticClass(), Instances);
	if (Instances.Num() > 1)
	{
		//If exist at least one of them, set the instance with the first found one
		Instance = Cast<ACrearObjeto>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("YA EXISTE EL OBJETO"), *Instance->GetName()));
		//Then Destroy this Actor
		Destroy();
	}
	else {
		//Creamos Objeto a mostrar porque no hay ningun objeto
		CrearObjetoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrearObjetoMesh"));
		RootComponent = CrearObjetoMesh;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/Cone.Cone'"));

		if (BlockMeshAsset.Succeeded())
		{
			CrearObjetoMesh->SetStaticMesh(BlockMeshAsset.Object);
			CrearObjetoMesh->SetRelativeLocation(FVector(0.0f, -70.0f, 80.0f));

			CrearObjetoMesh->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

			//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
			//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
			//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
		}
	}

}

// Called when the game starts or when spawned
void ACrearObjeto::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACrearObjeto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

