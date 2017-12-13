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

// UniRx.Operators.FromEventObservable
struct FromEventObservable_t3673489863;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t2827159665;
// System.Action
struct Action_t441168646;
// UniRx.IObserver`1<System.Int32>
struct IObserver_1_t1649530151;
// UniRx.Operators.RangeObservable
struct RangeObservable_t1514833165;
// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1
struct U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449;
// System.IDisposable
struct IDisposable_t2501142828;
// System.Action`1<System.Action>
struct Action_1_t2443908739;
// UniRx.IScheduler
struct IScheduler_t2155394887;




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
#ifndef FROMEVENT_T3332598352_H
#define FROMEVENT_T3332598352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.FromEventObservable/FromEvent
struct  FromEvent_t3332598352  : public RuntimeObject
{
public:
	// UniRx.Operators.FromEventObservable UniRx.Operators.FromEventObservable/FromEvent::parent
	FromEventObservable_t3673489863 * ___parent_0;
	// UniRx.IObserver`1<UniRx.Unit> UniRx.Operators.FromEventObservable/FromEvent::observer
	RuntimeObject* ___observer_1;
	// System.Action UniRx.Operators.FromEventObservable/FromEvent::handler
	Action_t441168646 * ___handler_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(FromEvent_t3332598352, ___parent_0)); }
	inline FromEventObservable_t3673489863 * get_parent_0() const { return ___parent_0; }
	inline FromEventObservable_t3673489863 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(FromEventObservable_t3673489863 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(FromEvent_t3332598352, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((&___observer_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(FromEvent_t3332598352, ___handler_2)); }
	inline Action_t441168646 * get_handler_2() const { return ___handler_2; }
	inline Action_t441168646 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Action_t441168646 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMEVENT_T3332598352_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T1980738449_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T1980738449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1
struct  U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<System.Int32> UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1::observer
	RuntimeObject* ___observer_0;
	// UniRx.Operators.RangeObservable UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1::$this
	RangeObservable_t1514833165 * ___U24this_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449, ___U24this_1)); }
	inline RangeObservable_t1514833165 * get_U24this_1() const { return ___U24this_1; }
	inline RangeObservable_t1514833165 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RangeObservable_t1514833165 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T1980738449_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T2860134604_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T2860134604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0
struct  U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0::i
	int32_t ___i_0;
	// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1 UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0::<>f__ref$1
	U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_i_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604, ___i_0)); }
	inline int32_t get_i_0() const { return ___i_0; }
	inline int32_t* get_address_of_i_0() { return &___i_0; }
	inline void set_i_0(int32_t value)
	{
		___i_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604, ___U3CU3Ef__refU241_1)); }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T2860134604_H
#ifndef OPERATOROBSERVABLEBASE_1_T692779169_H
#define OPERATOROBSERVABLEBASE_1_T692779169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct  OperatorObservableBase_1_t692779169  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t692779169, ___isRequiredSubscribeOnCurrentThread_0)); }
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
#endif // OPERATOROBSERVABLEBASE_1_T692779169_H
#ifndef OPERATOROBSERVABLEBASE_1_T3810116951_H
#define OPERATOROBSERVABLEBASE_1_T3810116951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<System.Int32>
struct  OperatorObservableBase_1_t3810116951  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t3810116951, ___isRequiredSubscribeOnCurrentThread_0)); }
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
#endif // OPERATOROBSERVABLEBASE_1_T3810116951_H
#ifndef OPERATOROBSERVERBASE_2_T719158366_H
#define OPERATOROBSERVERBASE_2_T719158366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObserverBase`2<System.Int32,System.Int32>
struct  OperatorObserverBase_2_t719158366  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t719158366, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t719158366, ___cancel_1)); }
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
#endif // OPERATOROBSERVERBASE_2_T719158366_H
#ifndef FROMEVENTOBSERVABLE_T3673489863_H
#define FROMEVENTOBSERVABLE_T3673489863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.FromEventObservable
struct  FromEventObservable_t3673489863  : public OperatorObservableBase_1_t692779169
{
public:
	// System.Action`1<System.Action> UniRx.Operators.FromEventObservable::addHandler
	Action_1_t2443908739 * ___addHandler_1;
	// System.Action`1<System.Action> UniRx.Operators.FromEventObservable::removeHandler
	Action_1_t2443908739 * ___removeHandler_2;

public:
	inline static int32_t get_offset_of_addHandler_1() { return static_cast<int32_t>(offsetof(FromEventObservable_t3673489863, ___addHandler_1)); }
	inline Action_1_t2443908739 * get_addHandler_1() const { return ___addHandler_1; }
	inline Action_1_t2443908739 ** get_address_of_addHandler_1() { return &___addHandler_1; }
	inline void set_addHandler_1(Action_1_t2443908739 * value)
	{
		___addHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___addHandler_1), value);
	}

	inline static int32_t get_offset_of_removeHandler_2() { return static_cast<int32_t>(offsetof(FromEventObservable_t3673489863, ___removeHandler_2)); }
	inline Action_1_t2443908739 * get_removeHandler_2() const { return ___removeHandler_2; }
	inline Action_1_t2443908739 ** get_address_of_removeHandler_2() { return &___removeHandler_2; }
	inline void set_removeHandler_2(Action_1_t2443908739 * value)
	{
		___removeHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___removeHandler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMEVENTOBSERVABLE_T3673489863_H
#ifndef RANGEOBSERVABLE_T1514833165_H
#define RANGEOBSERVABLE_T1514833165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable
struct  RangeObservable_t1514833165  : public OperatorObservableBase_1_t3810116951
{
public:
	// System.Int32 UniRx.Operators.RangeObservable::start
	int32_t ___start_1;
	// System.Int32 UniRx.Operators.RangeObservable::count
	int32_t ___count_2;
	// UniRx.IScheduler UniRx.Operators.RangeObservable::scheduler
	RuntimeObject* ___scheduler_3;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(RangeObservable_t1514833165, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RangeObservable_t1514833165, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_scheduler_3() { return static_cast<int32_t>(offsetof(RangeObservable_t1514833165, ___scheduler_3)); }
	inline RuntimeObject* get_scheduler_3() const { return ___scheduler_3; }
	inline RuntimeObject** get_address_of_scheduler_3() { return &___scheduler_3; }
	inline void set_scheduler_3(RuntimeObject* value)
	{
		___scheduler_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEOBSERVABLE_T1514833165_H
#ifndef RANGE_T1516742780_H
#define RANGE_T1516742780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/Range
struct  Range_t1516742780  : public OperatorObserverBase_2_t719158366
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T1516742780_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2202[13] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2204[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2206[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2207[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2208[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2209[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2210[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2211[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2212[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2217[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2218[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2219[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2220[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2221[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2222[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2223[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2224[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2225[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2226[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2227[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2228[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2229[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2230[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2231[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2233[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2234[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2235[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2236[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2237[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2238[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2239[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2240[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2241[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2242[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2243[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2244[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2245[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2246[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2247[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (FromEventObservable_t3673489863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2248[2] = 
{
	FromEventObservable_t3673489863::get_offset_of_addHandler_1(),
	FromEventObservable_t3673489863::get_offset_of_removeHandler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (FromEvent_t3332598352), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2249[3] = 
{
	FromEvent_t3332598352::get_offset_of_parent_0(),
	FromEvent_t3332598352::get_offset_of_observer_1(),
	FromEvent_t3332598352::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2250[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2251[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2252[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2253[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2254[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2255[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2257[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2258[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2259[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2260[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2261[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2262[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2263[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2265[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2266[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2268[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2269[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2270[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2271[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2272[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2273[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2274[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2275[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2277[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2279[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2280[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2282[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2283[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (RangeObservable_t1514833165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[3] = 
{
	RangeObservable_t1514833165::get_offset_of_start_1(),
	RangeObservable_t1514833165::get_offset_of_count_2(),
	RangeObservable_t1514833165::get_offset_of_scheduler_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (Range_t1516742780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449::get_offset_of_observer_0(),
	U3CSubscribeCoreU3Ec__AnonStorey1_t1980738449::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2287[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604::get_offset_of_i_0(),
	U3CSubscribeCoreU3Ec__AnonStorey0_t2860134604::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2288[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2291[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2294[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2295[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2296[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2297[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2299[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
