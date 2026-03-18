// MyActor.cpp

#include "MyActor.h"

AMyActor::AMyActor()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AMyyActor has begun play!"));
	
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("AMyyActor is ticking"));

}

//푸시하기 전에 다시 바꿔서 저장