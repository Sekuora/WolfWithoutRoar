// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/Widgets/W_ProgressBar.h"

#include "WL_PlayingUI.generated.h"

/**
 * 
 */
UCLASS()
class UWL_PlayingUI : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta = (BindWidget))
	UW_ProgressBar* Widget_Bar;

public:
	UFUNCTION(BlueprintCallable)
	FORCEINLINE UW_ProgressBar* GetWidgetBar() const { return Widget_Bar; }
};
