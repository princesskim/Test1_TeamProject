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


//팀원들의 변경사항과 상관없이 난 나의 분량을 했다.