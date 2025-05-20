// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_ProgressBar.generated.h"

class UProgressBar;

/**
 *
 */
UCLASS()
class UW_ProgressBar : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* WWR_Bar;

public:

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UProgressBar* GetProgressBar() { return WWR_Bar; }

};
