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

// System.Action`1<System.Action>
struct Action_1_t2443908739;
// UniRx.IScheduler
struct IScheduler_t2155394887;
// UniRx.CompositeDisposable
struct CompositeDisposable_t1252303580;
// System.Action
struct Action_t441168646;
// System.IDisposable
struct IDisposable_t2501142828;
// UniRx.Scheduler/<Schedule>c__AnonStorey0
struct U3CScheduleU3Ec__AnonStorey0_t1254498525;
// System.Action`1<System.Object>
struct Action_1_t1643347914;
// System.Action`1<System.Action`1<System.TimeSpan>>
struct Action_1_t1123232245;
// UniRx.BooleanDisposable
struct BooleanDisposable_t267319562;
// System.Collections.Generic.HashSet`1<System.Threading.Timer>
struct HashSet_1_t200926843;
// System.Threading.Timer
struct Timer_t648166966;
// UniRx.InternalUtil.AsyncLock
struct AsyncLock_t984821197;
// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t4273953033;
// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t3289265577;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2991140046;
// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__t3829091394;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t2827159665;
// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_t1227537643;
// UniRx.IObservable`1<UniRx.Unit>[]
struct IObservable_1U5BU5D_t963421650;
// System.Collections.Generic.IEnumerable`1<UniRx.IObservable`1<UniRx.Unit>>
struct IEnumerable_1_t3271860796;
// System.Collections.Generic.IList`1<UniRx.IObservable`1<UniRx.Unit>>
struct IList_1_t3942584411;
// UniRx.ICancelable
struct ICancelable_t231639692;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t154365629;




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
#ifndef VALUETYPE_T1511057308_H
#define VALUETYPE_T1511057308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1511057308  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1511057308_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1511057308_marshaled_com
{
};
#endif // VALUETYPE_T1511057308_H
#ifndef U3CSCHEDULEU3EC__ANONSTOREY0_T1254498525_H
#define U3CSCHEDULEU3EC__ANONSTOREY0_T1254498525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/<Schedule>c__AnonStorey0
struct  U3CScheduleU3Ec__AnonStorey0_t1254498525  : public RuntimeObject
{
public:
	// System.Action`1<System.Action> UniRx.Scheduler/<Schedule>c__AnonStorey0::action
	Action_1_t2443908739 * ___action_0;
	// UniRx.IScheduler UniRx.Scheduler/<Schedule>c__AnonStorey0::scheduler
	RuntimeObject* ___scheduler_1;
	// System.Object UniRx.Scheduler/<Schedule>c__AnonStorey0::gate
	RuntimeObject * ___gate_2;
	// UniRx.CompositeDisposable UniRx.Scheduler/<Schedule>c__AnonStorey0::group
	CompositeDisposable_t1252303580 * ___group_3;
	// System.Action UniRx.Scheduler/<Schedule>c__AnonStorey0::recursiveAction
	Action_t441168646 * ___recursiveAction_4;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t1254498525, ___action_0)); }
	inline Action_1_t2443908739 * get_action_0() const { return ___action_0; }
	inline Action_1_t2443908739 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_t2443908739 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}

	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t1254498525, ___scheduler_1)); }
	inline RuntimeObject* get_scheduler_1() const { return ___scheduler_1; }
	inline RuntimeObject** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(RuntimeObject* value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}

	inline static int32_t get_offset_of_gate_2() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t1254498525, ___gate_2)); }
	inline RuntimeObject * get_gate_2() const { return ___gate_2; }
	inline RuntimeObject ** get_address_of_gate_2() { return &___gate_2; }
	inline void set_gate_2(RuntimeObject * value)
	{
		___gate_2 = value;
		Il2CppCodeGenWriteBarrier((&___gate_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t1254498525, ___group_3)); }
	inline CompositeDisposable_t1252303580 * get_group_3() const { return ___group_3; }
	inline CompositeDisposable_t1252303580 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(CompositeDisposable_t1252303580 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_recursiveAction_4() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t1254498525, ___recursiveAction_4)); }
	inline Action_t441168646 * get_recursiveAction_4() const { return ___recursiveAction_4; }
	inline Action_t441168646 ** get_address_of_recursiveAction_4() { return &___recursiveAction_4; }
	inline void set_recursiveAction_4(Action_t441168646 * value)
	{
		___recursiveAction_4 = value;
		Il2CppCodeGenWriteBarrier((&___recursiveAction_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSCHEDULEU3EC__ANONSTOREY0_T1254498525_H
#ifndef U3CSCHEDULEU3EC__ANONSTOREY1_T505632036_H
#define U3CSCHEDULEU3EC__ANONSTOREY1_T505632036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/<Schedule>c__AnonStorey0/<Schedule>c__AnonStorey1
struct  U3CScheduleU3Ec__AnonStorey1_t505632036  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Scheduler/<Schedule>c__AnonStorey0/<Schedule>c__AnonStorey1::isAdded
	bool ___isAdded_0;
	// System.IDisposable UniRx.Scheduler/<Schedule>c__AnonStorey0/<Schedule>c__AnonStorey1::d
	RuntimeObject* ___d_1;
	// System.Boolean UniRx.Scheduler/<Schedule>c__AnonStorey0/<Schedule>c__AnonStorey1::isDone
	bool ___isDone_2;
	// UniRx.Scheduler/<Schedule>c__AnonStorey0 UniRx.Scheduler/<Schedule>c__AnonStorey0/<Schedule>c__AnonStorey1::<>f__ref$0
	U3CScheduleU3Ec__AnonStorey0_t1254498525 * ___U3CU3Ef__refU240_3;

public:
	inline static int32_t get_offset_of_isAdded_0() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey1_t505632036, ___isAdded_0)); }
	inline bool get_isAdded_0() const { return ___isAdded_0; }
	inline bool* get_address_of_isAdded_0() { return &___isAdded_0; }
	inline void set_isAdded_0(bool value)
	{
		___isAdded_0 = value;
	}

	inline static int32_t get_offset_of_d_1() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey1_t505632036, ___d_1)); }
	inline RuntimeObject* get_d_1() const { return ___d_1; }
	inline RuntimeObject** get_address_of_d_1() { return &___d_1; }
	inline void set_d_1(RuntimeObject* value)
	{
		___d_1 = value;
		Il2CppCodeGenWriteBarrier((&___d_1), value);
	}

	inline static int32_t get_offset_of_isDone_2() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey1_t505632036, ___isDone_2)); }
	inline bool get_isDone_2() const { return ___isDone_2; }
	inline bool* get_address_of_isDone_2() { return &___isDone_2; }
	inline void set_isDone_2(bool value)
	{
		___isDone_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_3() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey1_t505632036, ___U3CU3Ef__refU240_3)); }
	inline U3CScheduleU3Ec__AnonStorey0_t1254498525 * get_U3CU3Ef__refU240_3() const { return ___U3CU3Ef__refU240_3; }
	inline U3CScheduleU3Ec__AnonStorey0_t1254498525 ** get_address_of_U3CU3Ef__refU240_3() { return &___U3CU3Ef__refU240_3; }
	inline void set_U3CU3Ef__refU240_3(U3CScheduleU3Ec__AnonStorey0_t1254498525 * value)
	{
		___U3CU3Ef__refU240_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSCHEDULEU3EC__ANONSTOREY1_T505632036_H
#ifndef IGNORETIMESCALEMAINTHREADSCHEDULER_T1272605091_H
#define IGNORETIMESCALEMAINTHREADSCHEDULER_T1272605091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct  IgnoreTimeScaleMainThreadScheduler_t1272605091  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_t1643347914 * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(IgnoreTimeScaleMainThreadScheduler_t1272605091, ___scheduleAction_0)); }
	inline Action_1_t1643347914 * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_t1643347914 ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_t1643347914 * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduleAction_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IGNORETIMESCALEMAINTHREADSCHEDULER_T1272605091_H
#ifndef U3CSCHEDULEU3EC__ANONSTOREY2_T4077930708_H
#define U3CSCHEDULEU3EC__ANONSTOREY2_T4077930708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/<Schedule>c__AnonStorey2
struct  U3CScheduleU3Ec__AnonStorey2_t4077930708  : public RuntimeObject
{
public:
	// System.Action`1<System.Action`1<System.TimeSpan>> UniRx.Scheduler/<Schedule>c__AnonStorey2::action
	Action_1_t1123232245 * ___action_0;
	// UniRx.IScheduler UniRx.Scheduler/<Schedule>c__AnonStorey2::scheduler
	RuntimeObject* ___scheduler_1;
	// System.Object UniRx.Scheduler/<Schedule>c__AnonStorey2::gate
	RuntimeObject * ___gate_2;
	// UniRx.CompositeDisposable UniRx.Scheduler/<Schedule>c__AnonStorey2::group
	CompositeDisposable_t1252303580 * ___group_3;
	// System.Action UniRx.Scheduler/<Schedule>c__AnonStorey2::recursiveAction
	Action_t441168646 * ___recursiveAction_4;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey2_t4077930708, ___action_0)); }
	inline Action_1_t1123232245 * get_action_0() const { return ___action_0; }
	inline Action_1_t1123232245 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_t1123232245 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}

	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey2_t4077930708, ___scheduler_1)); }
	inline RuntimeObject* get_scheduler_1() const { return ___scheduler_1; }
	inline RuntimeObject** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(RuntimeObject* value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}

	inline static int32_t get_offset_of_gate_2() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey2_t4077930708, ___gate_2)); }
	inline RuntimeObject * get_gate_2() const { return ___gate_2; }
	inline RuntimeObject ** get_address_of_gate_2() { return &___gate_2; }
	inline void set_gate_2(RuntimeObject * value)
	{
		___gate_2 = value;
		Il2CppCodeGenWriteBarrier((&___gate_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey2_t4077930708, ___group_3)); }
	inline CompositeDisposable_t1252303580 * get_group_3() const { return ___group_3; }
	inline CompositeDisposable_t1252303580 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(CompositeDisposable_t1252303580 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_recursiveAction_4() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey2_t4077930708, ___recursiveAction_4)); }
	inline Action_t441168646 * get_recursiveAction_4() const { return ___recursiveAction_4; }
	inline Action_t441168646 ** get_address_of_recursiveAction_4() { return &___recursiveAction_4; }
	inline void set_recursiveAction_4(Action_t441168646 * value)
	{
		___recursiveAction_4 = value;
		Il2CppCodeGenWriteBarrier((&___recursiveAction_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSCHEDULEU3EC__ANONSTOREY2_T4077930708_H
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
#ifndef MAINTHREADSCHEDULER_T2444614495_H
#define MAINTHREADSCHEDULER_T2444614495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler
struct  MainThreadScheduler_t2444614495  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_t1643347914 * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(MainThreadScheduler_t2444614495, ___scheduleAction_0)); }
	inline Action_1_t1643347914 * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_t1643347914 ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_t1643347914 * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduleAction_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINTHREADSCHEDULER_T2444614495_H
#ifndef U3CSCHEDULEU3EC__ANONSTOREY0_T576072825_H
#define U3CSCHEDULEU3EC__ANONSTOREY0_T576072825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0
struct  U3CScheduleU3Ec__AnonStorey0_t576072825  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0::d
	BooleanDisposable_t267319562 * ___d_0;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0::action
	Action_t441168646 * ___action_1;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t576072825, ___d_0)); }
	inline BooleanDisposable_t267319562 * get_d_0() const { return ___d_0; }
	inline BooleanDisposable_t267319562 ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(BooleanDisposable_t267319562 * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((&___d_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t576072825, ___action_1)); }
	inline Action_t441168646 * get_action_1() const { return ___action_1; }
	inline Action_t441168646 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t441168646 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((&___action_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSCHEDULEU3EC__ANONSTOREY0_T576072825_H
#ifndef PERIODICTIMER_T3462313448_H
#define PERIODICTIMER_T3462313448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer
struct  PeriodicTimer_t3462313448  : public RuntimeObject
{
public:
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_action
	Action_t441168646 * ____action_1;
	// System.Threading.Timer UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_timer
	Timer_t648166966 * ____timer_2;
	// UniRx.InternalUtil.AsyncLock UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_gate
	AsyncLock_t984821197 * ____gate_3;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(PeriodicTimer_t3462313448, ____action_1)); }
	inline Action_t441168646 * get__action_1() const { return ____action_1; }
	inline Action_t441168646 ** get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(Action_t441168646 * value)
	{
		____action_1 = value;
		Il2CppCodeGenWriteBarrier((&____action_1), value);
	}

	inline static int32_t get_offset_of__timer_2() { return static_cast<int32_t>(offsetof(PeriodicTimer_t3462313448, ____timer_2)); }
	inline Timer_t648166966 * get__timer_2() const { return ____timer_2; }
	inline Timer_t648166966 ** get_address_of__timer_2() { return &____timer_2; }
	inline void set__timer_2(Timer_t648166966 * value)
	{
		____timer_2 = value;
		Il2CppCodeGenWriteBarrier((&____timer_2), value);
	}

	inline static int32_t get_offset_of__gate_3() { return static_cast<int32_t>(offsetof(PeriodicTimer_t3462313448, ____gate_3)); }
	inline AsyncLock_t984821197 * get__gate_3() const { return ____gate_3; }
	inline AsyncLock_t984821197 ** get_address_of__gate_3() { return &____gate_3; }
	inline void set__gate_3(AsyncLock_t984821197 * value)
	{
		____gate_3 = value;
		Il2CppCodeGenWriteBarrier((&____gate_3), value);
	}
};

struct PeriodicTimer_t3462313448_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Threading.Timer> UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::s_timers
	HashSet_1_t200926843 * ___s_timers_0;

public:
	inline static int32_t get_offset_of_s_timers_0() { return static_cast<int32_t>(offsetof(PeriodicTimer_t3462313448_StaticFields, ___s_timers_0)); }
	inline HashSet_1_t200926843 * get_s_timers_0() const { return ___s_timers_0; }
	inline HashSet_1_t200926843 ** get_address_of_s_timers_0() { return &___s_timers_0; }
	inline void set_s_timers_0(HashSet_1_t200926843 * value)
	{
		___s_timers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_timers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERIODICTIMER_T3462313448_H
#ifndef TIMER_T2127525808_H
#define TIMER_T2127525808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/Timer
struct  Timer_t2127525808  : public RuntimeObject
{
public:
	// UniRx.SingleAssignmentDisposable UniRx.Scheduler/ThreadPoolScheduler/Timer::_disposable
	SingleAssignmentDisposable_t4273953033 * ____disposable_1;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/Timer::_action
	Action_t441168646 * ____action_2;
	// System.Threading.Timer UniRx.Scheduler/ThreadPoolScheduler/Timer::_timer
	Timer_t648166966 * ____timer_3;
	// System.Boolean UniRx.Scheduler/ThreadPoolScheduler/Timer::_hasAdded
	bool ____hasAdded_4;
	// System.Boolean UniRx.Scheduler/ThreadPoolScheduler/Timer::_hasRemoved
	bool ____hasRemoved_5;

public:
	inline static int32_t get_offset_of__disposable_1() { return static_cast<int32_t>(offsetof(Timer_t2127525808, ____disposable_1)); }
	inline SingleAssignmentDisposable_t4273953033 * get__disposable_1() const { return ____disposable_1; }
	inline SingleAssignmentDisposable_t4273953033 ** get_address_of__disposable_1() { return &____disposable_1; }
	inline void set__disposable_1(SingleAssignmentDisposable_t4273953033 * value)
	{
		____disposable_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable_1), value);
	}

	inline static int32_t get_offset_of__action_2() { return static_cast<int32_t>(offsetof(Timer_t2127525808, ____action_2)); }
	inline Action_t441168646 * get__action_2() const { return ____action_2; }
	inline Action_t441168646 ** get_address_of__action_2() { return &____action_2; }
	inline void set__action_2(Action_t441168646 * value)
	{
		____action_2 = value;
		Il2CppCodeGenWriteBarrier((&____action_2), value);
	}

	inline static int32_t get_offset_of__timer_3() { return static_cast<int32_t>(offsetof(Timer_t2127525808, ____timer_3)); }
	inline Timer_t648166966 * get__timer_3() const { return ____timer_3; }
	inline Timer_t648166966 ** get_address_of__timer_3() { return &____timer_3; }
	inline void set__timer_3(Timer_t648166966 * value)
	{
		____timer_3 = value;
		Il2CppCodeGenWriteBarrier((&____timer_3), value);
	}

	inline static int32_t get_offset_of__hasAdded_4() { return static_cast<int32_t>(offsetof(Timer_t2127525808, ____hasAdded_4)); }
	inline bool get__hasAdded_4() const { return ____hasAdded_4; }
	inline bool* get_address_of__hasAdded_4() { return &____hasAdded_4; }
	inline void set__hasAdded_4(bool value)
	{
		____hasAdded_4 = value;
	}

	inline static int32_t get_offset_of__hasRemoved_5() { return static_cast<int32_t>(offsetof(Timer_t2127525808, ____hasRemoved_5)); }
	inline bool get__hasRemoved_5() const { return ____hasRemoved_5; }
	inline bool* get_address_of__hasRemoved_5() { return &____hasRemoved_5; }
	inline void set__hasRemoved_5(bool value)
	{
		____hasRemoved_5 = value;
	}
};

struct Timer_t2127525808_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Threading.Timer> UniRx.Scheduler/ThreadPoolScheduler/Timer::s_timers
	HashSet_1_t200926843 * ___s_timers_0;

public:
	inline static int32_t get_offset_of_s_timers_0() { return static_cast<int32_t>(offsetof(Timer_t2127525808_StaticFields, ___s_timers_0)); }
	inline HashSet_1_t200926843 * get_s_timers_0() const { return ___s_timers_0; }
	inline HashSet_1_t200926843 ** get_address_of_s_timers_0() { return &___s_timers_0; }
	inline void set_s_timers_0(HashSet_1_t200926843 * value)
	{
		___s_timers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_timers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T2127525808_H
#ifndef THREADPOOLSCHEDULER_T3867691986_H
#define THREADPOOLSCHEDULER_T3867691986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler
struct  ThreadPoolScheduler_t3867691986  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOLSCHEDULER_T3867691986_H
#ifndef DEFAULTSCHEDULERS_T1705898695_H
#define DEFAULTSCHEDULERS_T1705898695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/DefaultSchedulers
struct  DefaultSchedulers_t1705898695  : public RuntimeObject
{
public:

public:
};

struct DefaultSchedulers_t1705898695_StaticFields
{
public:
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::constantTime
	RuntimeObject* ___constantTime_0;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::tailRecursion
	RuntimeObject* ___tailRecursion_1;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::iteration
	RuntimeObject* ___iteration_2;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::timeBasedOperations
	RuntimeObject* ___timeBasedOperations_3;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::asyncConversions
	RuntimeObject* ___asyncConversions_4;

public:
	inline static int32_t get_offset_of_constantTime_0() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t1705898695_StaticFields, ___constantTime_0)); }
	inline RuntimeObject* get_constantTime_0() const { return ___constantTime_0; }
	inline RuntimeObject** get_address_of_constantTime_0() { return &___constantTime_0; }
	inline void set_constantTime_0(RuntimeObject* value)
	{
		___constantTime_0 = value;
		Il2CppCodeGenWriteBarrier((&___constantTime_0), value);
	}

	inline static int32_t get_offset_of_tailRecursion_1() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t1705898695_StaticFields, ___tailRecursion_1)); }
	inline RuntimeObject* get_tailRecursion_1() const { return ___tailRecursion_1; }
	inline RuntimeObject** get_address_of_tailRecursion_1() { return &___tailRecursion_1; }
	inline void set_tailRecursion_1(RuntimeObject* value)
	{
		___tailRecursion_1 = value;
		Il2CppCodeGenWriteBarrier((&___tailRecursion_1), value);
	}

	inline static int32_t get_offset_of_iteration_2() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t1705898695_StaticFields, ___iteration_2)); }
	inline RuntimeObject* get_iteration_2() const { return ___iteration_2; }
	inline RuntimeObject** get_address_of_iteration_2() { return &___iteration_2; }
	inline void set_iteration_2(RuntimeObject* value)
	{
		___iteration_2 = value;
		Il2CppCodeGenWriteBarrier((&___iteration_2), value);
	}

	inline static int32_t get_offset_of_timeBasedOperations_3() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t1705898695_StaticFields, ___timeBasedOperations_3)); }
	inline RuntimeObject* get_timeBasedOperations_3() const { return ___timeBasedOperations_3; }
	inline RuntimeObject** get_address_of_timeBasedOperations_3() { return &___timeBasedOperations_3; }
	inline void set_timeBasedOperations_3(RuntimeObject* value)
	{
		___timeBasedOperations_3 = value;
		Il2CppCodeGenWriteBarrier((&___timeBasedOperations_3), value);
	}

	inline static int32_t get_offset_of_asyncConversions_4() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t1705898695_StaticFields, ___asyncConversions_4)); }
	inline RuntimeObject* get_asyncConversions_4() const { return ___asyncConversions_4; }
	inline RuntimeObject** get_address_of_asyncConversions_4() { return &___asyncConversions_4; }
	inline void set_asyncConversions_4(RuntimeObject* value)
	{
		___asyncConversions_4 = value;
		Il2CppCodeGenWriteBarrier((&___asyncConversions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTSCHEDULERS_T1705898695_H
#ifndef IMMEDIATESCHEDULER_T3427942977_H
#define IMMEDIATESCHEDULER_T3427942977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ImmediateScheduler
struct  ImmediateScheduler_t3427942977  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMEDIATESCHEDULER_T3427942977_H
#ifndef TRAMPOLINE_T2643259292_H
#define TRAMPOLINE_T2643259292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/CurrentThreadScheduler/Trampoline
struct  Trampoline_t2643259292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAMPOLINE_T2643259292_H
#ifndef CURRENTTHREADSCHEDULER_T2149373257_H
#define CURRENTTHREADSCHEDULER_T2149373257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/CurrentThreadScheduler
struct  CurrentThreadScheduler_t2149373257  : public RuntimeObject
{
public:

public:
};

struct CurrentThreadScheduler_t2149373257_ThreadStaticFields
{
public:
	// UniRx.InternalUtil.SchedulerQueue UniRx.Scheduler/CurrentThreadScheduler::s_threadLocalQueue
	SchedulerQueue_t3289265577 * ___s_threadLocalQueue_0;
	// System.Diagnostics.Stopwatch UniRx.Scheduler/CurrentThreadScheduler::s_clock
	Stopwatch_t2991140046 * ___s_clock_1;

public:
	inline static int32_t get_offset_of_s_threadLocalQueue_0() { return static_cast<int32_t>(offsetof(CurrentThreadScheduler_t2149373257_ThreadStaticFields, ___s_threadLocalQueue_0)); }
	inline SchedulerQueue_t3289265577 * get_s_threadLocalQueue_0() const { return ___s_threadLocalQueue_0; }
	inline SchedulerQueue_t3289265577 ** get_address_of_s_threadLocalQueue_0() { return &___s_threadLocalQueue_0; }
	inline void set_s_threadLocalQueue_0(SchedulerQueue_t3289265577 * value)
	{
		___s_threadLocalQueue_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_threadLocalQueue_0), value);
	}

	inline static int32_t get_offset_of_s_clock_1() { return static_cast<int32_t>(offsetof(CurrentThreadScheduler_t2149373257_ThreadStaticFields, ___s_clock_1)); }
	inline Stopwatch_t2991140046 * get_s_clock_1() const { return ___s_clock_1; }
	inline Stopwatch_t2991140046 ** get_address_of_s_clock_1() { return &___s_clock_1; }
	inline void set_s_clock_1(Stopwatch_t2991140046 * value)
	{
		___s_clock_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_clock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTTHREADSCHEDULER_T2149373257_H
#ifndef SCHEDULER_T2541839005_H
#define SCHEDULER_T2541839005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler
struct  Scheduler_t2541839005  : public RuntimeObject
{
public:

public:
};

struct Scheduler_t2541839005_StaticFields
{
public:
	// UniRx.IScheduler UniRx.Scheduler::CurrentThread
	RuntimeObject* ___CurrentThread_0;
	// UniRx.IScheduler UniRx.Scheduler::Immediate
	RuntimeObject* ___Immediate_1;
	// UniRx.IScheduler UniRx.Scheduler::ThreadPool
	RuntimeObject* ___ThreadPool_2;
	// UniRx.IScheduler UniRx.Scheduler::mainThread
	RuntimeObject* ___mainThread_3;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadIgnoreTimeScale
	RuntimeObject* ___mainThreadIgnoreTimeScale_4;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadFixedUpdate
	RuntimeObject* ___mainThreadFixedUpdate_5;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadEndOfFrame
	RuntimeObject* ___mainThreadEndOfFrame_6;

public:
	inline static int32_t get_offset_of_CurrentThread_0() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___CurrentThread_0)); }
	inline RuntimeObject* get_CurrentThread_0() const { return ___CurrentThread_0; }
	inline RuntimeObject** get_address_of_CurrentThread_0() { return &___CurrentThread_0; }
	inline void set_CurrentThread_0(RuntimeObject* value)
	{
		___CurrentThread_0 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentThread_0), value);
	}

	inline static int32_t get_offset_of_Immediate_1() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___Immediate_1)); }
	inline RuntimeObject* get_Immediate_1() const { return ___Immediate_1; }
	inline RuntimeObject** get_address_of_Immediate_1() { return &___Immediate_1; }
	inline void set_Immediate_1(RuntimeObject* value)
	{
		___Immediate_1 = value;
		Il2CppCodeGenWriteBarrier((&___Immediate_1), value);
	}

	inline static int32_t get_offset_of_ThreadPool_2() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___ThreadPool_2)); }
	inline RuntimeObject* get_ThreadPool_2() const { return ___ThreadPool_2; }
	inline RuntimeObject** get_address_of_ThreadPool_2() { return &___ThreadPool_2; }
	inline void set_ThreadPool_2(RuntimeObject* value)
	{
		___ThreadPool_2 = value;
		Il2CppCodeGenWriteBarrier((&___ThreadPool_2), value);
	}

	inline static int32_t get_offset_of_mainThread_3() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___mainThread_3)); }
	inline RuntimeObject* get_mainThread_3() const { return ___mainThread_3; }
	inline RuntimeObject** get_address_of_mainThread_3() { return &___mainThread_3; }
	inline void set_mainThread_3(RuntimeObject* value)
	{
		___mainThread_3 = value;
		Il2CppCodeGenWriteBarrier((&___mainThread_3), value);
	}

	inline static int32_t get_offset_of_mainThreadIgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___mainThreadIgnoreTimeScale_4)); }
	inline RuntimeObject* get_mainThreadIgnoreTimeScale_4() const { return ___mainThreadIgnoreTimeScale_4; }
	inline RuntimeObject** get_address_of_mainThreadIgnoreTimeScale_4() { return &___mainThreadIgnoreTimeScale_4; }
	inline void set_mainThreadIgnoreTimeScale_4(RuntimeObject* value)
	{
		___mainThreadIgnoreTimeScale_4 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadIgnoreTimeScale_4), value);
	}

	inline static int32_t get_offset_of_mainThreadFixedUpdate_5() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___mainThreadFixedUpdate_5)); }
	inline RuntimeObject* get_mainThreadFixedUpdate_5() const { return ___mainThreadFixedUpdate_5; }
	inline RuntimeObject** get_address_of_mainThreadFixedUpdate_5() { return &___mainThreadFixedUpdate_5; }
	inline void set_mainThreadFixedUpdate_5(RuntimeObject* value)
	{
		___mainThreadFixedUpdate_5 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadFixedUpdate_5), value);
	}

	inline static int32_t get_offset_of_mainThreadEndOfFrame_6() { return static_cast<int32_t>(offsetof(Scheduler_t2541839005_StaticFields, ___mainThreadEndOfFrame_6)); }
	inline RuntimeObject* get_mainThreadEndOfFrame_6() const { return ___mainThreadEndOfFrame_6; }
	inline RuntimeObject** get_address_of_mainThreadEndOfFrame_6() { return &___mainThreadEndOfFrame_6; }
	inline void set_mainThreadEndOfFrame_6(RuntimeObject* value)
	{
		___mainThreadEndOfFrame_6 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadEndOfFrame_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T2541839005_H
#ifndef WHENALLCOLLECTIONOBSERVER_T1267395676_H
#define WHENALLCOLLECTIONOBSERVER_T1267395676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct  WhenAllCollectionObserver_t1267395676  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll_ UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::parent
	WhenAll__t3829091394 * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t1267395676, ___parent_0)); }
	inline WhenAll__t3829091394 * get_parent_0() const { return ___parent_0; }
	inline WhenAll__t3829091394 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll__t3829091394 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t1267395676, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLCOLLECTIONOBSERVER_T1267395676_H
#ifndef OPERATOROBSERVERBASE_2_T3453903862_H
#define OPERATOROBSERVERBASE_2_T3453903862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct  OperatorObserverBase_2_t3453903862  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3453903862, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3453903862, ___cancel_1)); }
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
#endif // OPERATOROBSERVERBASE_2_T3453903862_H
#ifndef WHENALLCOLLECTIONOBSERVER_T612094288_H
#define WHENALLCOLLECTIONOBSERVER_T612094288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct  WhenAllCollectionObserver_t612094288  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::parent
	WhenAll_t1227537643 * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t612094288, ___parent_0)); }
	inline WhenAll_t1227537643 * get_parent_0() const { return ___parent_0; }
	inline WhenAll_t1227537643 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll_t1227537643 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t612094288, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLCOLLECTIONOBSERVER_T612094288_H
#ifndef FIXEDUPDATEMAINTHREADSCHEDULER_T3953044135_H
#define FIXEDUPDATEMAINTHREADSCHEDULER_T3953044135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct  FixedUpdateMainThreadScheduler_t3953044135  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDUPDATEMAINTHREADSCHEDULER_T3953044135_H
#ifndef ENDOFFRAMEMAINTHREADSCHEDULER_T2642320223_H
#define ENDOFFRAMEMAINTHREADSCHEDULER_T2642320223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct  EndOfFrameMainThreadScheduler_t2642320223  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDOFFRAMEMAINTHREADSCHEDULER_T2642320223_H
#ifndef WHENALLOBSERVABLE_T2510559944_H
#define WHENALLOBSERVABLE_T2510559944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable
struct  WhenAllObservable_t2510559944  : public OperatorObservableBase_1_t692779169
{
public:
	// UniRx.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable::sources
	IObservable_1U5BU5D_t963421650* ___sources_1;
	// System.Collections.Generic.IEnumerable`1<UniRx.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable::sourcesEnumerable
	RuntimeObject* ___sourcesEnumerable_2;

public:
	inline static int32_t get_offset_of_sources_1() { return static_cast<int32_t>(offsetof(WhenAllObservable_t2510559944, ___sources_1)); }
	inline IObservable_1U5BU5D_t963421650* get_sources_1() const { return ___sources_1; }
	inline IObservable_1U5BU5D_t963421650** get_address_of_sources_1() { return &___sources_1; }
	inline void set_sources_1(IObservable_1U5BU5D_t963421650* value)
	{
		___sources_1 = value;
		Il2CppCodeGenWriteBarrier((&___sources_1), value);
	}

	inline static int32_t get_offset_of_sourcesEnumerable_2() { return static_cast<int32_t>(offsetof(WhenAllObservable_t2510559944, ___sourcesEnumerable_2)); }
	inline RuntimeObject* get_sourcesEnumerable_2() const { return ___sourcesEnumerable_2; }
	inline RuntimeObject** get_address_of_sourcesEnumerable_2() { return &___sourcesEnumerable_2; }
	inline void set_sourcesEnumerable_2(RuntimeObject* value)
	{
		___sourcesEnumerable_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourcesEnumerable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLOBSERVABLE_T2510559944_H
#ifndef TIMESPAN_T1412719355_H
#define TIMESPAN_T1412719355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1412719355 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1412719355, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1412719355_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1412719355  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1412719355  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1412719355  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1412719355_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1412719355  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1412719355 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1412719355  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1412719355_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1412719355  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1412719355 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1412719355  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1412719355_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1412719355  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1412719355 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1412719355  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1412719355_H
#ifndef WHENALL__T3829091394_H
#define WHENALL__T3829091394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll_
struct  WhenAll__t3829091394  : public OperatorObserverBase_2_t3453903862
{
public:
	// System.Collections.Generic.IList`1<UniRx.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable/WhenAll_::sources
	RuntimeObject* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll_::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll__t3829091394, ___sources_2)); }
	inline RuntimeObject* get_sources_2() const { return ___sources_2; }
	inline RuntimeObject** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(RuntimeObject* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((&___sources_2), value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll__t3829091394, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((&___gate_3), value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll__t3829091394, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll__t3829091394, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALL__T3829091394_H
#ifndef WHENALL_T1227537643_H
#define WHENALL_T1227537643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll
struct  WhenAll_t1227537643  : public OperatorObserverBase_2_t3453903862
{
public:
	// UniRx.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable/WhenAll::sources
	IObservable_1U5BU5D_t963421650* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll_t1227537643, ___sources_2)); }
	inline IObservable_1U5BU5D_t963421650* get_sources_2() const { return ___sources_2; }
	inline IObservable_1U5BU5D_t963421650** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(IObservable_1U5BU5D_t963421650* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((&___sources_2), value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll_t1227537643, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((&___gate_3), value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll_t1227537643, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll_t1227537643, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALL_T1227537643_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR1_T2694533925_H
#define U3CDELAYACTIONU3EC__ITERATOR1_T2694533925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1
struct  U3CDelayActionU3Ec__Iterator1_t2694533925  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::dueTime
	TimeSpan_t1412719355  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::<startTime>__1
	float ___U3CstartTimeU3E__1_3;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::<elapsed>__2
	float ___U3CelapsedU3E__2_5;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___dueTime_0)); }
	inline TimeSpan_t1412719355  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t1412719355 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t1412719355  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U3CstartTimeU3E__1_3)); }
	inline float get_U3CstartTimeU3E__1_3() const { return ___U3CstartTimeU3E__1_3; }
	inline float* get_address_of_U3CstartTimeU3E__1_3() { return &___U3CstartTimeU3E__1_3; }
	inline void set_U3CstartTimeU3E__1_3(float value)
	{
		___U3CstartTimeU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__2_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U3CelapsedU3E__2_5)); }
	inline float get_U3CelapsedU3E__2_5() const { return ___U3CelapsedU3E__2_5; }
	inline float* get_address_of_U3CelapsedU3E__2_5() { return &___U3CelapsedU3E__2_5; }
	inline void set_U3CelapsedU3E__2_5(float value)
	{
		___U3CelapsedU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t2694533925, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYACTIONU3EC__ITERATOR1_T2694533925_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR1_T1415181800_H
#define U3CDELAYACTIONU3EC__ITERATOR1_T1415181800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1
struct  U3CDelayActionU3Ec__Iterator1_t1415181800  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::dueTime
	TimeSpan_t1412719355  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::<elapsed>__1
	float ___U3CelapsedU3E__1_3;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___dueTime_0)); }
	inline TimeSpan_t1412719355  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t1412719355 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t1412719355  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___U3CelapsedU3E__1_3)); }
	inline float get_U3CelapsedU3E__1_3() const { return ___U3CelapsedU3E__1_3; }
	inline float* get_address_of_U3CelapsedU3E__1_3() { return &___U3CelapsedU3E__1_3; }
	inline void set_U3CelapsedU3E__1_3(float value)
	{
		___U3CelapsedU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator1_t1415181800, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYACTIONU3EC__ITERATOR1_T1415181800_H
#ifndef U3CPERIODICACTIONU3EC__ITERATOR2_T2311274174_H
#define U3CPERIODICACTIONU3EC__ITERATOR2_T2311274174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2
struct  U3CPeriodicActionU3Ec__Iterator2_t2311274174  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::period
	TimeSpan_t1412719355  ___period_0;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::<elapsed>__1
	float ___U3CelapsedU3E__1_3;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>c__Iterator2::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_period_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___period_0)); }
	inline TimeSpan_t1412719355  get_period_0() const { return ___period_0; }
	inline TimeSpan_t1412719355 * get_address_of_period_0() { return &___period_0; }
	inline void set_period_0(TimeSpan_t1412719355  value)
	{
		___period_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___U3CelapsedU3E__1_3)); }
	inline float get_U3CelapsedU3E__1_3() const { return ___U3CelapsedU3E__1_3; }
	inline float* get_address_of_U3CelapsedU3E__1_3() { return &___U3CelapsedU3E__1_3; }
	inline void set_U3CelapsedU3E__1_3(float value)
	{
		___U3CelapsedU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t2311274174, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPERIODICACTIONU3EC__ITERATOR2_T2311274174_H
#ifndef U3CPERIODICACTIONU3EC__ITERATOR1_T610688303_H
#define U3CPERIODICACTIONU3EC__ITERATOR1_T610688303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1
struct  U3CPeriodicActionU3Ec__Iterator1_t610688303  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::period
	TimeSpan_t1412719355  ___period_0;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::<elapsed>__1
	float ___U3CelapsedU3E__1_3;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_period_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___period_0)); }
	inline TimeSpan_t1412719355  get_period_0() const { return ___period_0; }
	inline TimeSpan_t1412719355 * get_address_of_period_0() { return &___period_0; }
	inline void set_period_0(TimeSpan_t1412719355  value)
	{
		___period_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___U3CelapsedU3E__1_3)); }
	inline float get_U3CelapsedU3E__1_3() const { return ___U3CelapsedU3E__1_3; }
	inline float* get_address_of_U3CelapsedU3E__1_3() { return &___U3CelapsedU3E__1_3; }
	inline void set_U3CelapsedU3E__1_3(float value)
	{
		___U3CelapsedU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t610688303, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPERIODICACTIONU3EC__ITERATOR1_T610688303_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR0_T2248105899_H
#define U3CDELAYACTIONU3EC__ITERATOR0_T2248105899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0
struct  U3CDelayActionU3Ec__Iterator0_t2248105899  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::dueTime
	TimeSpan_t1412719355  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::<elapsed>__1
	float ___U3CelapsedU3E__1_3;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___dueTime_0)); }
	inline TimeSpan_t1412719355  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t1412719355 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t1412719355  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___U3CelapsedU3E__1_3)); }
	inline float get_U3CelapsedU3E__1_3() const { return ___U3CelapsedU3E__1_3; }
	inline float* get_address_of_U3CelapsedU3E__1_3() { return &___U3CelapsedU3E__1_3; }
	inline void set_U3CelapsedU3E__1_3(float value)
	{
		___U3CelapsedU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2248105899, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYACTIONU3EC__ITERATOR0_T2248105899_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR0_T2087251210_H
#define U3CDELAYACTIONU3EC__ITERATOR0_T2087251210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0
struct  U3CDelayActionU3Ec__Iterator0_t2087251210  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::dueTime
	TimeSpan_t1412719355  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::action
	Action_t441168646 * ___action_2;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___dueTime_0)); }
	inline TimeSpan_t1412719355  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t1412719355 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t1412719355  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t2087251210, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYACTIONU3EC__ITERATOR0_T2087251210_H
#ifndef U3CPERIODICACTIONU3EC__ITERATOR2_T3892302305_H
#define U3CPERIODICACTIONU3EC__ITERATOR2_T3892302305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2
struct  U3CPeriodicActionU3Ec__Iterator2_t3892302305  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::period
	TimeSpan_t1412719355  ___period_0;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::<startTime>__1
	float ___U3CstartTimeU3E__1_3;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::<ft>__2
	float ___U3CftU3E__2_5;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::<elapsed>__2
	float ___U3CelapsedU3E__2_6;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::$disposing
	bool ___U24disposing_8;
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>c__Iterator2::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_period_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___period_0)); }
	inline TimeSpan_t1412719355  get_period_0() const { return ___period_0; }
	inline TimeSpan_t1412719355 * get_address_of_period_0() { return &___period_0; }
	inline void set_period_0(TimeSpan_t1412719355  value)
	{
		___period_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U3CstartTimeU3E__1_3)); }
	inline float get_U3CstartTimeU3E__1_3() const { return ___U3CstartTimeU3E__1_3; }
	inline float* get_address_of_U3CstartTimeU3E__1_3() { return &___U3CstartTimeU3E__1_3; }
	inline void set_U3CstartTimeU3E__1_3(float value)
	{
		___U3CstartTimeU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CftU3E__2_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U3CftU3E__2_5)); }
	inline float get_U3CftU3E__2_5() const { return ___U3CftU3E__2_5; }
	inline float* get_address_of_U3CftU3E__2_5() { return &___U3CftU3E__2_5; }
	inline void set_U3CftU3E__2_5(float value)
	{
		___U3CftU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__2_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U3CelapsedU3E__2_6)); }
	inline float get_U3CelapsedU3E__2_6() const { return ___U3CelapsedU3E__2_6; }
	inline float* get_address_of_U3CelapsedU3E__2_6() { return &___U3CelapsedU3E__2_6; }
	inline void set_U3CelapsedU3E__2_6(float value)
	{
		___U3CelapsedU3E__2_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator2_t3892302305, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPERIODICACTIONU3EC__ITERATOR2_T3892302305_H
#ifndef U3CPERIODICACTIONU3EC__ITERATOR1_T7372583_H
#define U3CPERIODICACTIONU3EC__ITERATOR1_T7372583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1
struct  U3CPeriodicActionU3Ec__Iterator1_t7372583  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::period
	TimeSpan_t1412719355  ___period_0;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::action
	Action_t441168646 * ___action_2;
	// System.Single UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::<seconds>__1
	float ___U3CsecondsU3E__1_3;
	// UnityEngine.WaitForSeconds UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::<yieldInstruction>__1
	WaitForSeconds_t154365629 * ___U3CyieldInstructionU3E__1_4;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_period_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___period_0)); }
	inline TimeSpan_t1412719355  get_period_0() const { return ___period_0; }
	inline TimeSpan_t1412719355 * get_address_of_period_0() { return &___period_0; }
	inline void set_period_0(TimeSpan_t1412719355  value)
	{
		___period_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___action_2)); }
	inline Action_t441168646 * get_action_2() const { return ___action_2; }
	inline Action_t441168646 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t441168646 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CsecondsU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___U3CsecondsU3E__1_3)); }
	inline float get_U3CsecondsU3E__1_3() const { return ___U3CsecondsU3E__1_3; }
	inline float* get_address_of_U3CsecondsU3E__1_3() { return &___U3CsecondsU3E__1_3; }
	inline void set_U3CsecondsU3E__1_3(float value)
	{
		___U3CsecondsU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CyieldInstructionU3E__1_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___U3CyieldInstructionU3E__1_4)); }
	inline WaitForSeconds_t154365629 * get_U3CyieldInstructionU3E__1_4() const { return ___U3CyieldInstructionU3E__1_4; }
	inline WaitForSeconds_t154365629 ** get_address_of_U3CyieldInstructionU3E__1_4() { return &___U3CyieldInstructionU3E__1_4; }
	inline void set_U3CyieldInstructionU3E__1_4(WaitForSeconds_t154365629 * value)
	{
		___U3CyieldInstructionU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CyieldInstructionU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t7372583, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPERIODICACTIONU3EC__ITERATOR1_T7372583_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2400[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2401[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2403[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2404[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (WhenAllObservable_t2510559944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2405[2] = 
{
	WhenAllObservable_t2510559944::get_offset_of_sources_1(),
	WhenAllObservable_t2510559944::get_offset_of_sourcesEnumerable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (WhenAll_t1227537643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2406[4] = 
{
	WhenAll_t1227537643::get_offset_of_sources_2(),
	WhenAll_t1227537643::get_offset_of_gate_3(),
	WhenAll_t1227537643::get_offset_of_completedCount_4(),
	WhenAll_t1227537643::get_offset_of_length_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (WhenAllCollectionObserver_t612094288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2407[2] = 
{
	WhenAllCollectionObserver_t612094288::get_offset_of_parent_0(),
	WhenAllCollectionObserver_t612094288::get_offset_of_isCompleted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (WhenAll__t3829091394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2408[4] = 
{
	WhenAll__t3829091394::get_offset_of_sources_2(),
	WhenAll__t3829091394::get_offset_of_gate_3(),
	WhenAll__t3829091394::get_offset_of_completedCount_4(),
	WhenAll__t3829091394::get_offset_of_length_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (WhenAllCollectionObserver_t1267395676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2409[2] = 
{
	WhenAllCollectionObserver_t1267395676::get_offset_of_parent_0(),
	WhenAllCollectionObserver_t1267395676::get_offset_of_isCompleted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2410[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2411[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2412[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2413[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2414 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2414[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2415 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2415[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2416 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2416[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2417 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2417[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2418 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2418[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2419 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2419[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2420 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2421 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2422 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2423 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2424 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2425 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2425[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2426 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2426[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2427 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2427[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2428 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2428[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2429 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2429[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2430 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2430[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2431 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2431[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2432 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2432[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2433 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2433[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2434 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2434[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2435 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2435[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2436 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2436[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2437 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2437[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2438 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2438[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2439 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2439[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2440 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2440[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2441 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2441[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2443 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2443[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2444 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2444[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2445 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2446 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2447 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2448 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2449 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2450 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2450[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2451 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2451[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2452 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2452[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2453 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2453[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2454 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2454[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2455 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2455[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2456 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2456[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2457 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2457[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2458 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2458[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2459 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2459[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2460 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2460[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2461 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2461[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2462 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2462[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2463 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2463[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2464 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2464[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2465 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2465[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2466 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2466[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2468 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2468[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2469 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2469[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2470 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2470[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2471 = { sizeof (Scheduler_t2541839005), -1, sizeof(Scheduler_t2541839005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2471[7] = 
{
	Scheduler_t2541839005_StaticFields::get_offset_of_CurrentThread_0(),
	Scheduler_t2541839005_StaticFields::get_offset_of_Immediate_1(),
	Scheduler_t2541839005_StaticFields::get_offset_of_ThreadPool_2(),
	Scheduler_t2541839005_StaticFields::get_offset_of_mainThread_3(),
	Scheduler_t2541839005_StaticFields::get_offset_of_mainThreadIgnoreTimeScale_4(),
	Scheduler_t2541839005_StaticFields::get_offset_of_mainThreadFixedUpdate_5(),
	Scheduler_t2541839005_StaticFields::get_offset_of_mainThreadEndOfFrame_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2472 = { sizeof (CurrentThreadScheduler_t2149373257), -1, 0, sizeof(CurrentThreadScheduler_t2149373257_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2472[2] = 
{
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2473 = { sizeof (Trampoline_t2643259292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2474 = { sizeof (ImmediateScheduler_t3427942977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2475 = { sizeof (DefaultSchedulers_t1705898695), -1, sizeof(DefaultSchedulers_t1705898695_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2475[5] = 
{
	DefaultSchedulers_t1705898695_StaticFields::get_offset_of_constantTime_0(),
	DefaultSchedulers_t1705898695_StaticFields::get_offset_of_tailRecursion_1(),
	DefaultSchedulers_t1705898695_StaticFields::get_offset_of_iteration_2(),
	DefaultSchedulers_t1705898695_StaticFields::get_offset_of_timeBasedOperations_3(),
	DefaultSchedulers_t1705898695_StaticFields::get_offset_of_asyncConversions_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2476 = { sizeof (ThreadPoolScheduler_t3867691986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2477 = { sizeof (Timer_t2127525808), -1, sizeof(Timer_t2127525808_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2477[6] = 
{
	Timer_t2127525808_StaticFields::get_offset_of_s_timers_0(),
	Timer_t2127525808::get_offset_of__disposable_1(),
	Timer_t2127525808::get_offset_of__action_2(),
	Timer_t2127525808::get_offset_of__timer_3(),
	Timer_t2127525808::get_offset_of__hasAdded_4(),
	Timer_t2127525808::get_offset_of__hasRemoved_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2478 = { sizeof (PeriodicTimer_t3462313448), -1, sizeof(PeriodicTimer_t3462313448_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2478[4] = 
{
	PeriodicTimer_t3462313448_StaticFields::get_offset_of_s_timers_0(),
	PeriodicTimer_t3462313448::get_offset_of__action_1(),
	PeriodicTimer_t3462313448::get_offset_of__timer_2(),
	PeriodicTimer_t3462313448::get_offset_of__gate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2479 = { sizeof (U3CScheduleU3Ec__AnonStorey0_t576072825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2479[2] = 
{
	U3CScheduleU3Ec__AnonStorey0_t576072825::get_offset_of_d_0(),
	U3CScheduleU3Ec__AnonStorey0_t576072825::get_offset_of_action_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2480 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2480[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2481 = { sizeof (MainThreadScheduler_t2444614495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2481[1] = 
{
	MainThreadScheduler_t2444614495::get_offset_of_scheduleAction_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2482 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2482[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2483 = { sizeof (U3CDelayActionU3Ec__Iterator0_t2087251210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2483[6] = 
{
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_U24current_3(),
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_U24disposing_4(),
	U3CDelayActionU3Ec__Iterator0_t2087251210::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2484 = { sizeof (U3CPeriodicActionU3Ec__Iterator1_t7372583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2484[8] = 
{
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_period_0(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_cancellation_1(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_action_2(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_U3CsecondsU3E__1_3(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_U3CyieldInstructionU3E__1_4(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_U24current_5(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_U24disposing_6(),
	U3CPeriodicActionU3Ec__Iterator1_t7372583::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2485 = { sizeof (IgnoreTimeScaleMainThreadScheduler_t1272605091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2485[1] = 
{
	IgnoreTimeScaleMainThreadScheduler_t1272605091::get_offset_of_scheduleAction_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2486 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2486[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2487 = { sizeof (U3CDelayActionU3Ec__Iterator0_t2248105899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2487[8] = 
{
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_U3CelapsedU3E__1_3(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_U3CdtU3E__1_4(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_U24current_5(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_U24disposing_6(),
	U3CDelayActionU3Ec__Iterator0_t2248105899::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2488 = { sizeof (U3CPeriodicActionU3Ec__Iterator1_t610688303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2488[8] = 
{
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_period_0(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_cancellation_1(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_action_2(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_U3CelapsedU3E__1_3(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_U3CdtU3E__1_4(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_U24current_5(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_U24disposing_6(),
	U3CPeriodicActionU3Ec__Iterator1_t610688303::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2489 = { sizeof (FixedUpdateMainThreadScheduler_t3953044135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2490 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2490[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2491 = { sizeof (U3CDelayActionU3Ec__Iterator1_t2694533925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2491[9] = 
{
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U3CstartTimeU3E__1_3(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U3CdtU3E__1_4(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U3CelapsedU3E__2_5(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U24current_6(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U24disposing_7(),
	U3CDelayActionU3Ec__Iterator1_t2694533925::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2492 = { sizeof (U3CPeriodicActionU3Ec__Iterator2_t3892302305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2492[10] = 
{
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_period_0(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_cancellation_1(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_action_2(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U3CstartTimeU3E__1_3(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U3CdtU3E__1_4(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U3CftU3E__2_5(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U3CelapsedU3E__2_6(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U24current_7(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U24disposing_8(),
	U3CPeriodicActionU3Ec__Iterator2_t3892302305::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2493 = { sizeof (EndOfFrameMainThreadScheduler_t2642320223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2494 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2494[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2495 = { sizeof (U3CDelayActionU3Ec__Iterator1_t1415181800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2495[8] = 
{
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_U3CelapsedU3E__1_3(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_U3CdtU3E__1_4(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_U24current_5(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_U24disposing_6(),
	U3CDelayActionU3Ec__Iterator1_t1415181800::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2496 = { sizeof (U3CPeriodicActionU3Ec__Iterator2_t2311274174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2496[8] = 
{
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_period_0(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_cancellation_1(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_action_2(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_U3CelapsedU3E__1_3(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_U3CdtU3E__1_4(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_U24current_5(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_U24disposing_6(),
	U3CPeriodicActionU3Ec__Iterator2_t2311274174::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2497 = { sizeof (U3CScheduleU3Ec__AnonStorey0_t1254498525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2497[5] = 
{
	U3CScheduleU3Ec__AnonStorey0_t1254498525::get_offset_of_action_0(),
	U3CScheduleU3Ec__AnonStorey0_t1254498525::get_offset_of_scheduler_1(),
	U3CScheduleU3Ec__AnonStorey0_t1254498525::get_offset_of_gate_2(),
	U3CScheduleU3Ec__AnonStorey0_t1254498525::get_offset_of_group_3(),
	U3CScheduleU3Ec__AnonStorey0_t1254498525::get_offset_of_recursiveAction_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2498 = { sizeof (U3CScheduleU3Ec__AnonStorey1_t505632036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2498[4] = 
{
	U3CScheduleU3Ec__AnonStorey1_t505632036::get_offset_of_isAdded_0(),
	U3CScheduleU3Ec__AnonStorey1_t505632036::get_offset_of_d_1(),
	U3CScheduleU3Ec__AnonStorey1_t505632036::get_offset_of_isDone_2(),
	U3CScheduleU3Ec__AnonStorey1_t505632036::get_offset_of_U3CU3Ef__refU240_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2499 = { sizeof (U3CScheduleU3Ec__AnonStorey2_t4077930708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2499[5] = 
{
	U3CScheduleU3Ec__AnonStorey2_t4077930708::get_offset_of_action_0(),
	U3CScheduleU3Ec__AnonStorey2_t4077930708::get_offset_of_scheduler_1(),
	U3CScheduleU3Ec__AnonStorey2_t4077930708::get_offset_of_gate_2(),
	U3CScheduleU3Ec__AnonStorey2_t4077930708::get_offset_of_group_3(),
	U3CScheduleU3Ec__AnonStorey2_t4077930708::get_offset_of_recursiveAction_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
