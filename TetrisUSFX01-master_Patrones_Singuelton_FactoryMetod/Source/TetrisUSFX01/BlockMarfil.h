// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlockPiedra.h"
#include "BlockMarfil.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockMarfil : public ABlockPiedra
{
	GENERATED_BODY()
public:
	ABlockMarfil();

	virtual void MostrarInformacion();

};
