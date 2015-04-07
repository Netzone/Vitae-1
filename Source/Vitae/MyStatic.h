// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "MyStatic.generated.h"

/**
 * 
 */
UCLASS()
class VITAE_API UMyStatic : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category="Vitae")
		static FString GetUsername();
	
	
	
};
