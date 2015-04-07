// Fill out your copyright notice in the Description page of Project Settings.

#include "Vitae.h"
#include "MyStatic.h"

FString UMyStatic::GetUsername()
{
	FString val;
	if (FParse::Value(FCommandLine::Get(), TEXT("username"), val)) {
		return val;
	}
	else{
		return "none";
	}

}



