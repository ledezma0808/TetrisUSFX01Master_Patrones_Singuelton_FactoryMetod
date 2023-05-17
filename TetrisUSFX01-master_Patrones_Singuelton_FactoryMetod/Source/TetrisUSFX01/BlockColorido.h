// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockColorido.generated.h"

/**
 *
 */
UCLASS()
class TETRISUSFX01_API ABlockColorido : public ABlock
{
	GENERATED_BODY()

public:
	ABlockColorido();

	virtual void MostrarInformacion();
};
