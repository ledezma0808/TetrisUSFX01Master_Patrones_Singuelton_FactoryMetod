// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockGrass.generated.h"

/**
 *
 */
UCLASS()
class TETRISUSFX01_API ABlockGrass : public ABlock
{
	GENERATED_BODY()

public:
	ABlockGrass();

	virtual void MostrarInformacion();
};
