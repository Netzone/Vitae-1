// Fill out your copyright notice in the Description page of Project Settings.

#include "Vitae.h"
#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::GetUsername()
{
	FString val;
	FString none = "none";
	if (FParse::Value(FCommandLine::Get(), TEXT("username"), val)) {
		return val;
	}
	else{
		return none;
	}

}
