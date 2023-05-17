// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockArena.generated.h"

/**
 *
 */
UCLASS()
class TETRISUSFX01_API ABlockArena : public ABlock
{
	GENERATED_BODY()

public:
	ABlockArena();

	virtual void MostrarInformacion();
	FString TipoBloque;
	static FString getBloque();
};
