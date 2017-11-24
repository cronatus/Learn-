// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Firebasecall.generated.h"

UCLASS()
class LEARN_API UFirebasecall : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	FHttpModule* Http;

	UFUNCTION(Blueprintcallable, Category = "WebServer Call")
		static void MyHttpCall();

	void StartCall();

	static void OnResponseRecieved(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UWebServerCall(const class FObjectInitializer& FObjectInitializer);
	UWebServerCall();
};
