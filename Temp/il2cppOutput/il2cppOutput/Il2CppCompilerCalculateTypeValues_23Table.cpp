#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UniRx.IObserver`1<System.Int64>
struct IObserver_1_t13236742;
// System.IDisposable
struct IDisposable_t440493521;
// UniRx.ISchedulerPeriodic
struct ISchedulerPeriodic_t4247131219;
// UniRx.Operators.TimerObservable/Timer
struct Timer_t2334924175;
// UniRx.Operators.TimerObservable
struct TimerObservable_t2684140702;
// System.Char[]
struct CharU5BU5D_t1406760238;
// System.String[]
struct StringU5BU5D_t1814507245;
// System.Int32[]
struct Int32U5BU5D_t3407772861;
// UniRx.IScheduler
struct IScheduler_t3447851821;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef IMMUTABLERETURNUNITOBSERVABLE_T153283615_H
#define IMMUTABLERETURNUNITOBSERVABLE_T153283615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.ImmutableReturnUnitObservable
struct  ImmutableReturnUnitObservable_t153283615  : public RuntimeObject
{
public:

public:
};

struct ImmutableReturnUnitObservable_t153283615_StaticFields
{
public:
	// UniRx.Operators.ImmutableReturnUnitObservable UniRx.Operators.ImmutableReturnUnitObservable::Instance
	ImmutableReturnUnitObservable_t153283615 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ImmutableReturnUnitObservable_t153283615_StaticFields, ___Instance_0)); }
	inline ImmutableReturnUnitObservable_t153283615 * get_Instance_0() const { return ___Instance_0; }
	inline ImmutableReturnUnitObservable_t153283615 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ImmutableReturnUnitObservable_t153283615 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLERETURNUNITOBSERVABLE_T153283615_H
#ifndef VALUETYPE_T3568285174_H
#define VALUETYPE_T3568285174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3568285174  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3568285174_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3568285174_marshaled_com
{
};
#endif // VALUETYPE_T3568285174_H
#ifndef OPERATOROBSERVERBASE_2_T951295623_H
#define OPERATOROBSERVERBASE_2_T951295623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Int64>
struct  OperatorObserverBase_2_t951295623  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t951295623, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t951295623, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancel_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATOROBSERVERBASE_2_T951295623_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3109381834_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3109381834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey1
struct  U3CSubscribeCoreU3Ec__AnonStorey1_t3109381834  : public RuntimeObject
{
public:
	// UniRx.ISchedulerPeriodic UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey1::periodicScheduler
	RuntimeObject* ___periodicScheduler_0;

public:
	inline static int32_t get_offset_of_periodicScheduler_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey1_t3109381834, ___periodicScheduler_0)); }
	inline RuntimeObject* get_periodicScheduler_0() const { return ___periodicScheduler_0; }
	inline RuntimeObject** get_address_of_periodicScheduler_0() { return &___periodicScheduler_0; }
	inline void set_periodicScheduler_0(RuntimeObject* value)
	{
		___periodicScheduler_0 = value;
		Il2CppCodeGenWriteBarrier((&___periodicScheduler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3109381834_H
#ifndef OPERATOROBSERVABLEBASE_1_T4200611923_H
#define OPERATOROBSERVABLEBASE_1_T4200611923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<System.Int64>
struct  OperatorObservableBase_1_t4200611923  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t4200611923, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATOROBSERVABLEBASE_1_T4200611923_H
#ifndef IMMUTABLERETURNFALSEOBSERVABLE_T1549758139_H
#define IMMUTABLERETURNFALSEOBSERVABLE_T1549758139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.ImmutableReturnFalseObservable
struct  ImmutableReturnFalseObservable_t1549758139  : public RuntimeObject
{
public:

public:
};

struct ImmutableReturnFalseObservable_t1549758139_StaticFields
{
public:
	// UniRx.Operators.ImmutableReturnFalseObservable UniRx.Operators.ImmutableReturnFalseObservable::Instance
	ImmutableReturnFalseObservable_t1549758139 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ImmutableReturnFalseObservable_t1549758139_StaticFields, ___Instance_0)); }
	inline ImmutableReturnFalseObservable_t1549758139 * get_Instance_0() const { return ___Instance_0; }
	inline ImmutableReturnFalseObservable_t1549758139 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ImmutableReturnFalseObservable_t1549758139 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLERETURNFALSEOBSERVABLE_T1549758139_H
#ifndef IMMUTABLERETURNTRUEOBSERVABLE_T2389225304_H
#define IMMUTABLERETURNTRUEOBSERVABLE_T2389225304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.ImmutableReturnTrueObservable
struct  ImmutableReturnTrueObservable_t2389225304  : public RuntimeObject
{
public:

public:
};

struct ImmutableReturnTrueObservable_t2389225304_StaticFields
{
public:
	// UniRx.Operators.ImmutableReturnTrueObservable UniRx.Operators.ImmutableReturnTrueObservable::Instance
	ImmutableReturnTrueObservable_t2389225304 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ImmutableReturnTrueObservable_t2389225304_StaticFields, ___Instance_0)); }
	inline ImmutableReturnTrueObservable_t2389225304 * get_Instance_0() const { return ___Instance_0; }
	inline ImmutableReturnTrueObservable_t2389225304 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ImmutableReturnTrueObservable_t2389225304 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLERETURNTRUEOBSERVABLE_T2389225304_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T1441312158_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T1441312158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0
struct  U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158  : public RuntimeObject
{
public:
	// UniRx.Operators.TimerObservable/Timer UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0::timerObserver
	Timer_t2334924175 * ___timerObserver_0;
	// UniRx.Operators.TimerObservable UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0::$this
	TimerObservable_t2684140702 * ___U24this_1;

public:
	inline static int32_t get_offset_of_timerObserver_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158, ___timerObserver_0)); }
	inline Timer_t2334924175 * get_timerObserver_0() const { return ___timerObserver_0; }
	inline Timer_t2334924175 ** get_address_of_timerObserver_0() { return &___timerObserver_0; }
	inline void set_timerObserver_0(Timer_t2334924175 * value)
	{
		___timerObserver_0 = value;
		Il2CppCodeGenWriteBarrier((&___timerObserver_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158, ___U24this_1)); }
	inline TimerObservable_t2684140702 * get_U24this_1() const { return ___U24this_1; }
	inline TimerObservable_t2684140702 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(TimerObservable_t2684140702 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T1441312158_H
#ifndef TIMER_T2334924175_H
#define TIMER_T2334924175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable/Timer
struct  Timer_t2334924175  : public OperatorObserverBase_2_t951295623
{
public:
	// System.Int64 UniRx.Operators.TimerObservable/Timer::index
	int64_t ___index_2;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Timer_t2334924175, ___index_2)); }
	inline int64_t get_index_2() const { return ___index_2; }
	inline int64_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int64_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T2334924175_H
#ifndef TIMESPAN_T259886122_H
#define TIMESPAN_T259886122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t259886122 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t259886122, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t259886122_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t259886122  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t259886122  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t259886122  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t259886122_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t259886122  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t259886122 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t259886122  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t259886122_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t259886122  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t259886122 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t259886122  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t259886122_StaticFields, ___Zero_2)); }
	inline TimeSpan_t259886122  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t259886122 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t259886122  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T259886122_H
#ifndef ENUM_T3920851312_H
#define ENUM_T3920851312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3920851312  : public ValueType_t3568285174
{
public:

public:
};

struct Enum_t3920851312_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1406760238* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3920851312_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1406760238* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1406760238** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1406760238* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3920851312_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3920851312_marshaled_com
{
};
#endif // ENUM_T3920851312_H
#ifndef DATETIMEKIND_T2860831160_H
#define DATETIMEKIND_T2860831160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2860831160 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2860831160, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2860831160_H
#ifndef NULLABLE_1_T3397823366_H
#define NULLABLE_1_T3397823366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t3397823366 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t259886122  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3397823366, ___value_0)); }
	inline TimeSpan_t259886122  get_value_0() const { return ___value_0; }
	inline TimeSpan_t259886122 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t259886122  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3397823366, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3397823366_H
#ifndef DATETIME_T3129080302_H
#define DATETIME_T3129080302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3129080302 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t259886122  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3129080302, ___ticks_0)); }
	inline TimeSpan_t259886122  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t259886122 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t259886122  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3129080302, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3129080302_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3129080302  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3129080302  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1814507245* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1814507245* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1814507245* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1814507245* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1814507245* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1814507245* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1814507245* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3407772861* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3407772861* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3129080302  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3129080302 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3129080302  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___MinValue_3)); }
	inline DateTime_t3129080302  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3129080302 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3129080302  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1814507245* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1814507245** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1814507245* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1814507245* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1814507245** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1814507245* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1814507245* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1814507245** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1814507245* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1814507245* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1814507245** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1814507245* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1814507245* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1814507245** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1814507245* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1814507245* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1814507245** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1814507245* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1814507245* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1814507245** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1814507245* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3407772861* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3407772861** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3407772861* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3407772861* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3407772861** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3407772861* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3129080302_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3129080302_H
#ifndef DATETIMEOFFSET_T2232734415_H
#define DATETIMEOFFSET_T2232734415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t2232734415 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3129080302  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t259886122  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2232734415, ___dt_2)); }
	inline DateTime_t3129080302  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3129080302 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3129080302  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2232734415, ___utc_offset_3)); }
	inline TimeSpan_t259886122  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t259886122 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t259886122  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t2232734415_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t2232734415  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t2232734415  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2232734415_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t2232734415  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t2232734415 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t2232734415  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2232734415_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t2232734415  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t2232734415 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t2232734415  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T2232734415_H
#ifndef NULLABLE_1_T1075704363_H
#define NULLABLE_1_T1075704363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTimeOffset>
struct  Nullable_1_t1075704363 
{
public:
	// T System.Nullable`1::value
	DateTimeOffset_t2232734415  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1075704363, ___value_0)); }
	inline DateTimeOffset_t2232734415  get_value_0() const { return ___value_0; }
	inline DateTimeOffset_t2232734415 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTimeOffset_t2232734415  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1075704363, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1075704363_H
#ifndef TIMEROBSERVABLE_T2684140702_H
#define TIMEROBSERVABLE_T2684140702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable
struct  TimerObservable_t2684140702  : public OperatorObservableBase_1_t4200611923
{
public:
	// System.Nullable`1<System.DateTimeOffset> UniRx.Operators.TimerObservable::dueTimeA
	Nullable_1_t1075704363  ___dueTimeA_1;
	// System.Nullable`1<System.TimeSpan> UniRx.Operators.TimerObservable::dueTimeB
	Nullable_1_t3397823366  ___dueTimeB_2;
	// System.Nullable`1<System.TimeSpan> UniRx.Operators.TimerObservable::period
	Nullable_1_t3397823366  ___period_3;
	// UniRx.IScheduler UniRx.Operators.TimerObservable::scheduler
	RuntimeObject* ___scheduler_4;

public:
	inline static int32_t get_offset_of_dueTimeA_1() { return static_cast<int32_t>(offsetof(TimerObservable_t2684140702, ___dueTimeA_1)); }
	inline Nullable_1_t1075704363  get_dueTimeA_1() const { return ___dueTimeA_1; }
	inline Nullable_1_t1075704363 * get_address_of_dueTimeA_1() { return &___dueTimeA_1; }
	inline void set_dueTimeA_1(Nullable_1_t1075704363  value)
	{
		___dueTimeA_1 = value;
	}

	inline static int32_t get_offset_of_dueTimeB_2() { return static_cast<int32_t>(offsetof(TimerObservable_t2684140702, ___dueTimeB_2)); }
	inline Nullable_1_t3397823366  get_dueTimeB_2() const { return ___dueTimeB_2; }
	inline Nullable_1_t3397823366 * get_address_of_dueTimeB_2() { return &___dueTimeB_2; }
	inline void set_dueTimeB_2(Nullable_1_t3397823366  value)
	{
		___dueTimeB_2 = value;
	}

	inline static int32_t get_offset_of_period_3() { return static_cast<int32_t>(offsetof(TimerObservable_t2684140702, ___period_3)); }
	inline Nullable_1_t3397823366  get_period_3() const { return ___period_3; }
	inline Nullable_1_t3397823366 * get_address_of_period_3() { return &___period_3; }
	inline void set_period_3(Nullable_1_t3397823366  value)
	{
		___period_3 = value;
	}

	inline static int32_t get_offset_of_scheduler_4() { return static_cast<int32_t>(offsetof(TimerObservable_t2684140702, ___scheduler_4)); }
	inline RuntimeObject* get_scheduler_4() const { return ___scheduler_4; }
	inline RuntimeObject** get_address_of_scheduler_4() { return &___scheduler_4; }
	inline void set_scheduler_4(RuntimeObject* value)
	{
		___scheduler_4 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEROBSERVABLE_T2684140702_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (ImmutableReturnUnitObservable_t153283615), -1, sizeof(ImmutableReturnUnitObservable_t153283615_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2313[1] = 
{
	ImmutableReturnUnitObservable_t153283615_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (ImmutableReturnTrueObservable_t2389225304), -1, sizeof(ImmutableReturnTrueObservable_t2389225304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2314[1] = 
{
	ImmutableReturnTrueObservable_t2389225304_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (ImmutableReturnFalseObservable_t1549758139), -1, sizeof(ImmutableReturnFalseObservable_t1549758139_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2315[1] = 
{
	ImmutableReturnFalseObservable_t1549758139_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2326[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2327[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2329[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2330[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2333[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2334[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2335[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2339[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2343[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2344[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2345[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2346[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2348[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2349[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2350[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2351[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2352[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2353[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2354[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2356[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2357[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2359[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2360[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2361[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2362[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2363[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2365[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2366[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2367[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2368[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2369[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2370[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2371[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2372[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2373[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2374[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2375[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2376[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2377[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2378[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2379[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2380[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2382[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2383[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2384[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2385[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2386[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2387[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2389[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2390[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2392[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2393[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2394[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2395[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (TimerObservable_t2684140702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2396[4] = 
{
	TimerObservable_t2684140702::get_offset_of_dueTimeA_1(),
	TimerObservable_t2684140702::get_offset_of_dueTimeB_2(),
	TimerObservable_t2684140702::get_offset_of_period_3(),
	TimerObservable_t2684140702::get_offset_of_scheduler_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (Timer_t2334924175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[1] = 
{
	Timer_t2334924175::get_offset_of_index_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2398[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158::get_offset_of_timerObserver_0(),
	U3CSubscribeCoreU3Ec__AnonStorey0_t1441312158::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey1_t3109381834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2399[1] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey1_t3109381834::get_offset_of_periodicScheduler_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
