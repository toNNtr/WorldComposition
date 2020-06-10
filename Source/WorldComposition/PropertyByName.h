// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PropertyByName.generated.h"

/**
 * 
 */
UCLASS()
class WORLDCOMPOSITION_API UPropertyByName : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName")
		static UProperty* GetPropertyByName(UObject* Target, FName PropName);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName")
		static FString GetPropertyType(UObject* Target, FName PropName);

	//BOOL
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName|Bool")
		static bool GetBoolPropertyByName(UObject* Target, FName PropName, bool &outBool);

	UFUNCTION(BlueprintCallable, Category = "PropertyByName|Bool")
		static bool SetBoolPropertyByName(UObject* Target, FName PropName, bool NewValue);

	
	//INTEGER
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName|Integer")
		static bool GetIntegerPropertyByName(UObject* Target, FName PropName, int &outInteger);

	UFUNCTION(BlueprintCallable, Category = "PropertyByName|Integer")
		static bool SetIntegerPropertyByName(UObject* Target, FName PropName, int NewValue);


	//FLOAT
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName|Float")
		static bool GetFloatPropertyByName(UObject* Target, FName PropName, float &outFloat);

	UFUNCTION(BlueprintCallable, Category = "PropertyByName|Float")
		static bool SetFloatPropertyByName(UObject* Target, FName PropName, float NewValue);


	//FSTRING
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName|FString")
		static bool GetFStringPropertyByName(UObject* Target, FName PropName, FString &outFString);

	UFUNCTION(BlueprintCallable, Category = "PropertyByName|FString")
		static bool SetFStringPropertyByName(UObject* Target, FName PropName, FString NewValue);

	//FNAME
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PropertyByName|FName")
		static bool GetFNamePropertyByName(UObject* Target, FName PropName, FName &outFString);

	UFUNCTION(BlueprintCallable, Category = "PropertyByName|FName")
		static bool SetFNamePropertyByName(UObject* Target, FName PropName, FName NewValue);
	
};
