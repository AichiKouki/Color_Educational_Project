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
struct FromEventObservable_t3280618178;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t2306732943;
// System.Action
struct Action_t1197992549;
// UniRx.IObserver`1<System.Int32>
struct IObserver_1_t3623468282;
// UniRx.Operators.RangeObservable
struct RangeObservable_t207119723;
// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1
struct U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167;
// System.IDisposable
struct IDisposable_t440493521;
// System.Action`1<System.Action>
struct Action_1_t392616195;
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
#ifndef FROMEVENT_T742544409_H
#define FROMEVENT_T742544409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.FromEventObservable/FromEvent
struct  FromEvent_t742544409  : public RuntimeObject
{
public:
	// UniRx.Operators.FromEventObservable UniRx.Operators.FromEventObservable/FromEvent::parent
	FromEventObservable_t3280618178 * ___parent_0;
	// UniRx.IObserver`1<UniRx.Unit> UniRx.Operators.FromEventObservable/FromEvent::observer
	RuntimeObject* ___observer_1;
	// System.Action UniRx.Operators.FromEventObservable/FromEvent::handler
	Action_t1197992549 * ___handler_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(FromEvent_t742544409, ___parent_0)); }
	inline FromEventObservable_t3280618178 * get_parent_0() const { return ___parent_0; }
	inline FromEventObservable_t3280618178 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(FromEventObservable_t3280618178 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(FromEvent_t742544409, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((&___observer_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(FromEvent_t742544409, ___handler_2)); }
	inline Action_t1197992549 * get_handler_2() const { return ___handler_2; }
	inline Action_t1197992549 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Action_t1197992549 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMEVENT_T742544409_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3895860167_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3895860167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1
struct  U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<System.Int32> UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1::observer
	RuntimeObject* ___observer_0;
	// UniRx.Operators.RangeObservable UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1::$this
	RangeObservable_t207119723 * ___U24this_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167, ___U24this_1)); }
	inline RangeObservable_t207119723 * get_U24this_1() const { return ___U24this_1; }
	inline RangeObservable_t207119723 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RangeObservable_t207119723 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY1_T3895860167_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T473650542_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T473650542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0
struct  U3CSubscribeCoreU3Ec__AnonStorey0_t473650542  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0::i
	int32_t ___i_0;
	// UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey1 UniRx.Operators.RangeObservable/<SubscribeCore>c__AnonStorey0::<>f__ref$1
	U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_i_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t473650542, ___i_0)); }
	inline int32_t get_i_0() const { return ___i_0; }
	inline int32_t* get_address_of_i_0() { return &___i_0; }
	inline void set_i_0(int32_t value)
	{
		___i_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey0_t473650542, ___U3CU3Ef__refU241_1)); }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY0_T473650542_H
#ifndef OPERATOROBSERVABLEBASE_1_T2199140828_H
#define OPERATOROBSERVABLEBASE_1_T2199140828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct  OperatorObservableBase_1_t2199140828  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t2199140828, ___isRequiredSubscribeOnCurrentThread_0)); }
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
#endif // OPERATOROBSERVABLEBASE_1_T2199140828_H
#ifndef OPERATOROBSERVABLEBASE_1_T3515876167_H
#define OPERATOROBSERVABLEBASE_1_T3515876167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<System.Int32>
struct  OperatorObservableBase_1_t3515876167  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t3515876167, ___isRequiredSubscribeOnCurrentThread_0)); }
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
#endif // OPERATOROBSERVABLEBASE_1_T3515876167_H
#ifndef OPERATOROBSERVERBASE_2_T1902481463_H
#define OPERATOROBSERVERBASE_2_T1902481463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObserverBase`2<System.Int32,System.Int32>
struct  OperatorObserverBase_2_t1902481463  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t1902481463, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t1902481463, ___cancel_1)); }
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
#endif // OPERATOROBSERVERBASE_2_T1902481463_H
#ifndef FROMEVENTOBSERVABLE_T3280618178_H
#define FROMEVENTOBSERVABLE_T3280618178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.FromEventObservable
struct  FromEventObservable_t3280618178  : public OperatorObservableBase_1_t2199140828
{
public:
	// System.Action`1<System.Action> UniRx.Operators.FromEventObservable::addHandler
	Action_1_t392616195 * ___addHandler_1;
	// System.Action`1<System.Action> UniRx.Operators.FromEventObservable::removeHandler
	Action_1_t392616195 * ___removeHandler_2;

public:
	inline static int32_t get_offset_of_addHandler_1() { return static_cast<int32_t>(offsetof(FromEventObservable_t3280618178, ___addHandler_1)); }
	inline Action_1_t392616195 * get_addHandler_1() const { return ___addHandler_1; }
	inline Action_1_t392616195 ** get_address_of_addHandler_1() { return &___addHandler_1; }
	inline void set_addHandler_1(Action_1_t392616195 * value)
	{
		___addHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___addHandler_1), value);
	}

	inline static int32_t get_offset_of_removeHandler_2() { return static_cast<int32_t>(offsetof(FromEventObservable_t3280618178, ___removeHandler_2)); }
	inline Action_1_t392616195 * get_removeHandler_2() const { return ___removeHandler_2; }
	inline Action_1_t392616195 ** get_address_of_removeHandler_2() { return &___removeHandler_2; }
	inline void set_removeHandler_2(Action_1_t392616195 * value)
	{
		___removeHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___removeHandler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMEVENTOBSERVABLE_T3280618178_H
#ifndef RANGEOBSERVABLE_T207119723_H
#define RANGEOBSERVABLE_T207119723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable
struct  RangeObservable_t207119723  : public OperatorObservableBase_1_t3515876167
{
public:
	// System.Int32 UniRx.Operators.RangeObservable::start
	int32_t ___start_1;
	// System.Int32 UniRx.Operators.RangeObservable::count
	int32_t ___count_2;
	// UniRx.IScheduler UniRx.Operators.RangeObservable::scheduler
	RuntimeObject* ___scheduler_3;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(RangeObservable_t207119723, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RangeObservable_t207119723, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_scheduler_3() { return static_cast<int32_t>(offsetof(RangeObservable_t207119723, ___scheduler_3)); }
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
#endif // RANGEOBSERVABLE_T207119723_H
#ifndef RANGE_T3212585829_H
#define RANGE_T3212585829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.RangeObservable/Range
struct  Range_t3212585829  : public OperatorObserverBase_2_t1902481463
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T3212585829_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2200[9] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2202[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2207[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2209[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2210[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2211[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[13] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2217[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2218[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2219[1] = 
{
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
extern const int32_t g_FieldOffsetTable2223[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2224[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2225[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2226[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2227[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2228[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2229[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2230[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2231[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2232[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2233[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2234[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2235[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2236[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2237[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2238[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2239[2] = 
{
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
extern const int32_t g_FieldOffsetTable2242[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2243[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2245[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2246[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2247[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2248[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2249[2] = 
{
	0,
	0,
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
extern const int32_t g_FieldOffsetTable2252[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2253[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2254[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2255[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2256[3] = 
{
	0,
	0,
	0,
};
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (FromEventObservable_t3280618178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2260[2] = 
{
	FromEventObservable_t3280618178::get_offset_of_addHandler_1(),
	FromEventObservable_t3280618178::get_offset_of_removeHandler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (FromEvent_t742544409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2261[3] = 
{
	FromEvent_t742544409::get_offset_of_parent_0(),
	FromEvent_t742544409::get_offset_of_observer_1(),
	FromEvent_t742544409::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2262[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2263[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2265[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2266[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2267[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2269[3] = 
{
	0,
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
extern const int32_t g_FieldOffsetTable2271[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2272[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2273[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2274[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2275[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2276[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2277[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2280[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2282[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2283[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2285[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2287[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2291[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2292[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2294[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2295[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (RangeObservable_t207119723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2296[3] = 
{
	RangeObservable_t207119723::get_offset_of_start_1(),
	RangeObservable_t207119723::get_offset_of_count_2(),
	RangeObservable_t207119723::get_offset_of_scheduler_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (Range_t3212585829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2298[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167::get_offset_of_observer_0(),
	U3CSubscribeCoreU3Ec__AnonStorey1_t3895860167::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey0_t473650542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2299[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey0_t473650542::get_offset_of_i_0(),
	U3CSubscribeCoreU3Ec__AnonStorey0_t473650542::get_offset_of_U3CU3Ef__refU241_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
