// MyActor.cpp

#include "MyActor.h"

AMyActor::AMyActor()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//팀원의 열일