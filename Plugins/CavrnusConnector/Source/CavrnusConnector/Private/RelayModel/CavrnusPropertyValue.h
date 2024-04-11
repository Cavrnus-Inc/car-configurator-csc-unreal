#pragma once

#include <MathUtil.h>

namespace Cavrnus
{
	struct FPropertyValue
	{
		public:
			enum class PropertyType : uint8
			{
				String = 0,
				Bool = 1,
				Float = 2,
				Color = 3,
				Vector = 4,
				Transform = 5,

				Invalid = 100,
			};

			PropertyType PropType;
			int Priority;

			//Will have one of the following
			FString StringValue;
			bool BoolValue;
			float FloatValue;
			FLinearColor ColorValue;
			FVector4 VectorValue;
			FTransform TransformValue;

			bool operator==(const FPropertyValue& other) const
			{
				if (PropType != other.PropType)
					return false;
				if (Priority != other.Priority)
					return false;

				if (PropType == PropertyType::String)
					return StringValue == other.StringValue;
				if (PropType == PropertyType::Bool)
					return BoolValue == other.BoolValue;
				if (PropType == PropertyType::Float)
					return FloatValue == other.FloatValue;
				if (PropType == PropertyType::Color)
					return ColorValue == other.ColorValue;
				if (PropType == PropertyType::Vector)
					return VectorValue == other.VectorValue;
				if (PropType == PropertyType::Transform)
				{
					return TransformValue.GetLocation().Equals(other.TransformValue.GetLocation(), TMathUtilConstants<double>::Epsilon) &&
						TransformValue.GetRotation().AngularDistance(other.TransformValue.GetRotation()) < TMathUtilConstants<double>::Epsilon &&
						TransformValue.GetScale3D().Equals(other.TransformValue.GetScale3D(), TMathUtilConstants<double>::Epsilon);
				}

				return false;
			}

			FPropertyValue() : PropType(PropertyType::Invalid), Priority(0) {}

			//IMPORTANT: Can't use constructors because C++ confuses the types (strings read as bools)
			static FPropertyValue StringPropValue(const FString& StringValue, int Priority = 0) 
			{
				FPropertyValue val;
				val.PropType = PropertyType::String;
				val.Priority = Priority;
				val.StringValue = StringValue;

				return val;
			}
			static FPropertyValue BoolPropValue(const bool BoolValue, int Priority = 0)
			{
				FPropertyValue val;
				val.PropType = PropertyType::Bool;
				val.Priority = Priority;
				val.BoolValue = BoolValue;

				return val;
			}
			static FPropertyValue FloatPropValue(const float FloatValue, int Priority = 0)
			{
				FPropertyValue val;
				val.PropType = PropertyType::Float;
				val.Priority = Priority;
				val.FloatValue = FloatValue;

				return val;
			}
			static FPropertyValue ColorPropValue(const FLinearColor& ColorValue, int Priority = 0)
			{
				FPropertyValue val;
				val.PropType = PropertyType::Color;
				val.Priority = Priority;
				val.ColorValue = ColorValue;

				return val;
			}
			static FPropertyValue VectorPropValue(const FVector4& VectorValue, int Priority = 0)
			{
				FPropertyValue val;
				val.PropType = PropertyType::Vector;
				val.Priority = Priority;
				val.VectorValue = VectorValue;

				return val;
			}
			static FPropertyValue TransformPropValue(const FTransform& TransformValue, int Priority = 0)
			{
				FPropertyValue val;
				val.PropType = PropertyType::Transform;
				val.Priority = Priority;
				val.TransformValue = TransformValue;

				return val;
			}
	};

}