// Fill out your copyright notice in the Description page of Project Settings.


#include "PropertyByName.h"


UProperty* UPropertyByName::GetPropertyByName(UObject* Target, FName PropName)
{
	UProperty* Property = nullptr;
	if (Target != nullptr)
	{
		Property = FindField<UProperty>(Target->GetClass(), PropName);
	}
	return Property;
}

FString UPropertyByName::GetPropertyType(UObject * Target, FName PropName)
{
	FString PropertyType = FString();
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);

		if (Property != nullptr)
		{
			PropertyType = Property->GetCPPType();
		}
	}
	return PropertyType;
}

bool UPropertyByName::GetBoolPropertyByName(UObject * Target, FName PropName, bool & outBool)
{
	if (Target != nullptr)
	{
		bool FoundBool;

		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UBoolProperty* BoolProperty = Cast<UBoolProperty>(Property);

		if (BoolProperty != nullptr)
		{
			FoundBool = BoolProperty->GetPropertyValue_InContainer(Target);
			outBool = FoundBool;
			return true;
		}

	}

	return false;
}

bool UPropertyByName::SetBoolPropertyByName(UObject * Target, FName PropName, bool NewValue)
{
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UBoolProperty* BoolProperty = Cast<UBoolProperty>(Property);

		if (BoolProperty != nullptr)
		{
			BoolProperty->SetPropertyValue_InContainer(Target, NewValue);
			return true;
		}
	}
	return false;
}

bool UPropertyByName::GetIntegerPropertyByName(UObject * Target, FName PropName, int & outInteger)
{
	if (Target != nullptr)
	{
		int FoundInteger;

		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UIntProperty* IntegerProperty = Cast<UIntProperty>(Property);

		if (IntegerProperty != nullptr)
		{
			FoundInteger = IntegerProperty->GetPropertyValue_InContainer(Target);
			outInteger = FoundInteger;
			return true;
		}

	}

	return false;
}

bool UPropertyByName::SetIntegerPropertyByName(UObject * Target, FName PropName, int NewValue)
{
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UIntProperty* IntegerProperty = Cast<UIntProperty>(Property);

		if (IntegerProperty != nullptr)
		{
			IntegerProperty->SetPropertyValue_InContainer(Target, NewValue);
			return true;
		}
	}
	return false;
}

bool UPropertyByName::GetFloatPropertyByName(UObject* Target, FName PropName, float &outFloat)
{
	if (Target != nullptr)
	{
		float FoundFloat;
		
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UFloatProperty* FloatProperty = Cast<UFloatProperty>(Property);
		
		if (FloatProperty != nullptr)
		{
			FoundFloat = FloatProperty->GetPropertyValue_InContainer(Target);
			outFloat = FoundFloat;
			return true;
		}

	}
	
	return false;
}

bool UPropertyByName::SetFloatPropertyByName(UObject * Target, FName PropName, float NewValue)
{
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UFloatProperty* FloatProperty = Cast<UFloatProperty>(Property);

		if (FloatProperty != nullptr)
		{
			FloatProperty->SetPropertyValue_InContainer(Target, NewValue);
			return true;
		}
	}
	return false;
}

bool UPropertyByName::GetFStringPropertyByName(UObject * Target, FName PropName, FString & outFString)
{
	if (Target != nullptr)
	{
		FString FoundFString;

		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UStrProperty* FStringProperty = Cast<UStrProperty>(Property);

		if (FStringProperty != nullptr)
		{
			FoundFString = FStringProperty->GetPropertyValue_InContainer(Target);
			outFString = FoundFString;
			return true;
		}

	}

	return false;
}

bool UPropertyByName::SetFStringPropertyByName(UObject * Target, FName PropName, FString NewValue)
{
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UStrProperty* FStringProperty = Cast<UStrProperty>(Property);

		if (FStringProperty != nullptr)
		{
			FStringProperty->SetPropertyValue_InContainer(Target, NewValue);
			return true;
		}
	}
	return false;
}

bool UPropertyByName::GetFNamePropertyByName(UObject * Target, FName PropName, FName & outFString)
{
	if (Target != nullptr)
	{
		FName FoundFName;

		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UNameProperty* FNameProperty = Cast<UNameProperty>(Property);

		if (FNameProperty != nullptr)
		{
			FoundFName = FNameProperty->GetPropertyValue_InContainer(Target);
			outFString = FoundFName;
			return true;
		}

	}

	return false;
}

bool UPropertyByName::SetFNamePropertyByName(UObject * Target, FName PropName, FName NewValue)
{
	if (Target != nullptr)
	{
		UProperty* Property = UPropertyByName::GetPropertyByName(Target, PropName);
		UNameProperty* FNameProperty = Cast<UNameProperty>(Property);

		if (FNameProperty != nullptr)
		{
			FNameProperty->SetPropertyValue_InContainer(Target, NewValue);
			return true;
		}
	}
	return false;
}
