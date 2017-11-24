// Fill out your copyright notice in the Description page of Project Settings.

#include "Learn\Learn.h"
#include "Firebasecall.h"

UWebServerCall::UWebServerCall(const class FObjectInitializer& ObjectInitializer) : Super(FObjectInitializer)
{
	Http = &FHttpModule::Get();
}

void UWebServerCall::MyHttpCall() {
	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "Start Call");

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindStatic(&UWebServerCall::OnResponseRecieved);
	Request->SetURL("")
}


