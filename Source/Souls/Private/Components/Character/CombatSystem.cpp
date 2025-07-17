#include "Components/Character/CombatSystem.h"

#include "EnhancedInputComponent.h"

UCombatSystem::UCombatSystem(): IA_LockOn(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCombatSystem::BeginPlay()
{
	Super::BeginPlay();

	// IA_LockOn->BindAction(UInputAction::)
}

void UCombatSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
