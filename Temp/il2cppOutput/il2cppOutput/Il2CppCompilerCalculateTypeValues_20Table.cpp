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

// UniRx.IScheduler
struct IScheduler_t2155394887;
// System.IDisposable
struct IDisposable_t2501142828;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t884213852;
// System.Action`1<System.Exception>
struct Action_1_t2956856813;
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_t3998696158;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t810895357;
// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>
struct PriorityQueue_1_t505909690;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t3312461263;
// System.Object[]
struct ObjectU5BU5D_t1976496096;
// UniRx.Subject`1<System.Boolean>
struct Subject_1_t2789814197;
// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_t4194016478;
// UniRx.CountNotifier
struct CountNotifier_t436721851;
// System.Collections.IEnumerator
struct IEnumerator_t367850151;
// System.Func`2<UniRx.CancellationToken,System.Collections.IEnumerator>
struct Func_2_t2589802106;
// UniRx.BooleanDisposable
struct BooleanDisposable_t267319562;
// System.Action
struct Action_t441168646;
// UniRx.RefCountDisposable
struct RefCountDisposable_t3254589225;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t637074938;
// UniRx.Triggers.ObservableDestroyTrigger
struct ObservableDestroyTrigger_t382230738;
// UnityEngine.GameObject
struct GameObject_t3527829199;
// UniRx.AsyncSubject`1<UniRx.Unit>
struct AsyncSubject_1_t3547303610;
// UniRx.Observable/<ToAsync>c__AnonStoreyD
struct U3CToAsyncU3Ec__AnonStoreyD_t1257328641;
// System.Action`1<System.IAsyncResult>
struct Action_1_t2941096359;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_t531982678;
// System.Char[]
struct CharU5BU5D_t2983273317;
// System.IDisposable[]
struct IDisposableU5BU5D_t4160475301;
// UniRx.ICancelable
struct ICancelable_t231639692;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t2827159665;
// UniRx.ICustomYieldInstructionErrorHandler
struct ICustomYieldInstructionErrorHandler_t260812371;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t4280213245;
// System.Func`3<UniRx.IObserver`1<System.Int64>,UniRx.CancellationToken,System.Collections.IEnumerator>
struct Func_3_t2874073423;
// System.Func`3<System.Int64,UniRx.Unit,System.Int64>
struct Func_3_t2854336645;
// System.Func`3<UniRx.IObserver`1<UniRx.Unit>,UniRx.CancellationToken,System.Collections.IEnumerator>
struct Func_3_t3733236492;
// UniRx.IObserver`1<System.Int64>
struct IObserver_1_t2429303660;




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
#ifndef BOOLEANDISPOSABLE_T267319562_H
#define BOOLEANDISPOSABLE_T267319562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.BooleanDisposable
struct  BooleanDisposable_t267319562  : public RuntimeObject
{
public:
	// System.Boolean UniRx.BooleanDisposable::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BooleanDisposable_t267319562, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANDISPOSABLE_T267319562_H
#ifndef U3CTIMERFRAMEU3EC__ANONSTOREY2A_T267620843_H
#define U3CTIMERFRAMEU3EC__ANONSTOREY2A_T267620843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<TimerFrame>c__AnonStorey2A
struct  U3CTimerFrameU3Ec__AnonStorey2A_t267620843  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrame>c__AnonStorey2A::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_0;

public:
	inline static int32_t get_offset_of_dueTimeFrameCount_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameU3Ec__AnonStorey2A_t267620843, ___dueTimeFrameCount_0)); }
	inline int32_t get_dueTimeFrameCount_0() const { return ___dueTimeFrameCount_0; }
	inline int32_t* get_address_of_dueTimeFrameCount_0() { return &___dueTimeFrameCount_0; }
	inline void set_dueTimeFrameCount_0(int32_t value)
	{
		___dueTimeFrameCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMERFRAMEU3EC__ANONSTOREY2A_T267620843_H
#ifndef U3CTIMERFRAMEU3EC__ANONSTOREY2B_T3072116678_H
#define U3CTIMERFRAMEU3EC__ANONSTOREY2B_T3072116678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<TimerFrame>c__AnonStorey2B
struct  U3CTimerFrameU3Ec__AnonStorey2B_t3072116678  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrame>c__AnonStorey2B::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_0;
	// System.Int32 UniRx.Observable/<TimerFrame>c__AnonStorey2B::periodFrameCount
	int32_t ___periodFrameCount_1;

public:
	inline static int32_t get_offset_of_dueTimeFrameCount_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameU3Ec__AnonStorey2B_t3072116678, ___dueTimeFrameCount_0)); }
	inline int32_t get_dueTimeFrameCount_0() const { return ___dueTimeFrameCount_0; }
	inline int32_t* get_address_of_dueTimeFrameCount_0() { return &___dueTimeFrameCount_0; }
	inline void set_dueTimeFrameCount_0(int32_t value)
	{
		___dueTimeFrameCount_0 = value;
	}

	inline static int32_t get_offset_of_periodFrameCount_1() { return static_cast<int32_t>(offsetof(U3CTimerFrameU3Ec__AnonStorey2B_t3072116678, ___periodFrameCount_1)); }
	inline int32_t get_periodFrameCount_1() const { return ___periodFrameCount_1; }
	inline int32_t* get_address_of_periodFrameCount_1() { return &___periodFrameCount_1; }
	inline void set_periodFrameCount_1(int32_t value)
	{
		___periodFrameCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMERFRAMEU3EC__ANONSTOREY2B_T3072116678_H
#ifndef SCHEDULEDDISPOSABLE_T2493402679_H
#define SCHEDULEDDISPOSABLE_T2493402679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ScheduledDisposable
struct  ScheduledDisposable_t2493402679  : public RuntimeObject
{
public:
	// UniRx.IScheduler UniRx.ScheduledDisposable::scheduler
	RuntimeObject* ___scheduler_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.ScheduledDisposable::disposable
	RuntimeObject* ___disposable_1;
	// System.Int32 UniRx.ScheduledDisposable::isDisposed
	int32_t ___isDisposed_2;

public:
	inline static int32_t get_offset_of_scheduler_0() { return static_cast<int32_t>(offsetof(ScheduledDisposable_t2493402679, ___scheduler_0)); }
	inline RuntimeObject* get_scheduler_0() const { return ___scheduler_0; }
	inline RuntimeObject** get_address_of_scheduler_0() { return &___scheduler_0; }
	inline void set_scheduler_0(RuntimeObject* value)
	{
		___scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_0), value);
	}

	inline static int32_t get_offset_of_disposable_1() { return static_cast<int32_t>(offsetof(ScheduledDisposable_t2493402679, ___disposable_1)); }
	inline RuntimeObject* get_disposable_1() const { return ___disposable_1; }
	inline RuntimeObject** get_address_of_disposable_1() { return &___disposable_1; }
	inline void set_disposable_1(RuntimeObject* value)
	{
		___disposable_1 = value;
		Il2CppCodeGenWriteBarrier((&___disposable_1), value);
	}

	inline static int32_t get_offset_of_isDisposed_2() { return static_cast<int32_t>(offsetof(ScheduledDisposable_t2493402679, ___isDisposed_2)); }
	inline int32_t get_isDisposed_2() const { return ___isDisposed_2; }
	inline int32_t* get_address_of_isDisposed_2() { return &___isDisposed_2; }
	inline void set_isDisposed_2(int32_t value)
	{
		___isDisposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULEDDISPOSABLE_T2493402679_H
#ifndef SERIALDISPOSABLE_T1774394752_H
#define SERIALDISPOSABLE_T1774394752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.SerialDisposable
struct  SerialDisposable_t1774394752  : public RuntimeObject
{
public:
	// System.Object UniRx.SerialDisposable::gate
	RuntimeObject * ___gate_0;
	// System.IDisposable UniRx.SerialDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SerialDisposable::disposed
	bool ___disposed_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(SerialDisposable_t1774394752, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((&___gate_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(SerialDisposable_t1774394752, ___current_1)); }
	inline RuntimeObject* get_current_1() const { return ___current_1; }
	inline RuntimeObject** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(RuntimeObject* value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(SerialDisposable_t1774394752, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALDISPOSABLE_T1774394752_H
#ifndef SINGLEASSIGNMENTDISPOSABLE_T4273953033_H
#define SINGLEASSIGNMENTDISPOSABLE_T4273953033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.SingleAssignmentDisposable
struct  SingleAssignmentDisposable_t4273953033  : public RuntimeObject
{
public:
	// System.Object UniRx.SingleAssignmentDisposable::gate
	RuntimeObject * ___gate_0;
	// System.IDisposable UniRx.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SingleAssignmentDisposable::disposed
	bool ___disposed_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(SingleAssignmentDisposable_t4273953033, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((&___gate_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(SingleAssignmentDisposable_t4273953033, ___current_1)); }
	inline RuntimeObject* get_current_1() const { return ___current_1; }
	inline RuntimeObject** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(RuntimeObject* value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(SingleAssignmentDisposable_t4273953033, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEASSIGNMENTDISPOSABLE_T4273953033_H
#ifndef STABLECOMPOSITEDISPOSABLE_T336377914_H
#define STABLECOMPOSITEDISPOSABLE_T336377914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable
struct  StableCompositeDisposable_t336377914  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STABLECOMPOSITEDISPOSABLE_T336377914_H
#ifndef ASYNCLOCK_T984821197_H
#define ASYNCLOCK_T984821197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.InternalUtil.AsyncLock
struct  AsyncLock_t984821197  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<System.Action> UniRx.InternalUtil.AsyncLock::queue
	Queue_1_t884213852 * ___queue_0;
	// System.Boolean UniRx.InternalUtil.AsyncLock::isAcquired
	bool ___isAcquired_1;
	// System.Boolean UniRx.InternalUtil.AsyncLock::hasFaulted
	bool ___hasFaulted_2;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(AsyncLock_t984821197, ___queue_0)); }
	inline Queue_1_t884213852 * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t884213852 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t884213852 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((&___queue_0), value);
	}

	inline static int32_t get_offset_of_isAcquired_1() { return static_cast<int32_t>(offsetof(AsyncLock_t984821197, ___isAcquired_1)); }
	inline bool get_isAcquired_1() const { return ___isAcquired_1; }
	inline bool* get_address_of_isAcquired_1() { return &___isAcquired_1; }
	inline void set_isAcquired_1(bool value)
	{
		___isAcquired_1 = value;
	}

	inline static int32_t get_offset_of_hasFaulted_2() { return static_cast<int32_t>(offsetof(AsyncLock_t984821197, ___hasFaulted_2)); }
	inline bool get_hasFaulted_2() const { return ___hasFaulted_2; }
	inline bool* get_address_of_hasFaulted_2() { return &___hasFaulted_2; }
	inline void set_hasFaulted_2(bool value)
	{
		___hasFaulted_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCLOCK_T984821197_H
#ifndef MICROCOROUTINE_T758758931_H
#define MICROCOROUTINE_T758758931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.InternalUtil.MicroCoroutine
struct  MicroCoroutine_t758758931  : public RuntimeObject
{
public:
	// System.Object UniRx.InternalUtil.MicroCoroutine::runningAndQueueLock
	RuntimeObject * ___runningAndQueueLock_1;
	// System.Object UniRx.InternalUtil.MicroCoroutine::arrayLock
	RuntimeObject * ___arrayLock_2;
	// System.Action`1<System.Exception> UniRx.InternalUtil.MicroCoroutine::unhandledExceptionCallback
	Action_1_t2956856813 * ___unhandledExceptionCallback_3;
	// System.Int32 UniRx.InternalUtil.MicroCoroutine::tail
	int32_t ___tail_4;
	// System.Boolean UniRx.InternalUtil.MicroCoroutine::running
	bool ___running_5;
	// System.Collections.IEnumerator[] UniRx.InternalUtil.MicroCoroutine::coroutines
	IEnumeratorU5BU5D_t3998696158* ___coroutines_6;
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> UniRx.InternalUtil.MicroCoroutine::waitQueue
	Queue_1_t810895357 * ___waitQueue_7;

public:
	inline static int32_t get_offset_of_runningAndQueueLock_1() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___runningAndQueueLock_1)); }
	inline RuntimeObject * get_runningAndQueueLock_1() const { return ___runningAndQueueLock_1; }
	inline RuntimeObject ** get_address_of_runningAndQueueLock_1() { return &___runningAndQueueLock_1; }
	inline void set_runningAndQueueLock_1(RuntimeObject * value)
	{
		___runningAndQueueLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___runningAndQueueLock_1), value);
	}

	inline static int32_t get_offset_of_arrayLock_2() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___arrayLock_2)); }
	inline RuntimeObject * get_arrayLock_2() const { return ___arrayLock_2; }
	inline RuntimeObject ** get_address_of_arrayLock_2() { return &___arrayLock_2; }
	inline void set_arrayLock_2(RuntimeObject * value)
	{
		___arrayLock_2 = value;
		Il2CppCodeGenWriteBarrier((&___arrayLock_2), value);
	}

	inline static int32_t get_offset_of_unhandledExceptionCallback_3() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___unhandledExceptionCallback_3)); }
	inline Action_1_t2956856813 * get_unhandledExceptionCallback_3() const { return ___unhandledExceptionCallback_3; }
	inline Action_1_t2956856813 ** get_address_of_unhandledExceptionCallback_3() { return &___unhandledExceptionCallback_3; }
	inline void set_unhandledExceptionCallback_3(Action_1_t2956856813 * value)
	{
		___unhandledExceptionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___unhandledExceptionCallback_3), value);
	}

	inline static int32_t get_offset_of_tail_4() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___tail_4)); }
	inline int32_t get_tail_4() const { return ___tail_4; }
	inline int32_t* get_address_of_tail_4() { return &___tail_4; }
	inline void set_tail_4(int32_t value)
	{
		___tail_4 = value;
	}

	inline static int32_t get_offset_of_running_5() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___running_5)); }
	inline bool get_running_5() const { return ___running_5; }
	inline bool* get_address_of_running_5() { return &___running_5; }
	inline void set_running_5(bool value)
	{
		___running_5 = value;
	}

	inline static int32_t get_offset_of_coroutines_6() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___coroutines_6)); }
	inline IEnumeratorU5BU5D_t3998696158* get_coroutines_6() const { return ___coroutines_6; }
	inline IEnumeratorU5BU5D_t3998696158** get_address_of_coroutines_6() { return &___coroutines_6; }
	inline void set_coroutines_6(IEnumeratorU5BU5D_t3998696158* value)
	{
		___coroutines_6 = value;
		Il2CppCodeGenWriteBarrier((&___coroutines_6), value);
	}

	inline static int32_t get_offset_of_waitQueue_7() { return static_cast<int32_t>(offsetof(MicroCoroutine_t758758931, ___waitQueue_7)); }
	inline Queue_1_t810895357 * get_waitQueue_7() const { return ___waitQueue_7; }
	inline Queue_1_t810895357 ** get_address_of_waitQueue_7() { return &___waitQueue_7; }
	inline void set_waitQueue_7(Queue_1_t810895357 * value)
	{
		___waitQueue_7 = value;
		Il2CppCodeGenWriteBarrier((&___waitQueue_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICROCOROUTINE_T758758931_H
#ifndef SCHEDULERQUEUE_T3289265577_H
#define SCHEDULERQUEUE_T3289265577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.InternalUtil.SchedulerQueue
struct  SchedulerQueue_t3289265577  : public RuntimeObject
{
public:
	// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem> UniRx.InternalUtil.SchedulerQueue::_queue
	PriorityQueue_1_t505909690 * ____queue_0;

public:
	inline static int32_t get_offset_of__queue_0() { return static_cast<int32_t>(offsetof(SchedulerQueue_t3289265577, ____queue_0)); }
	inline PriorityQueue_1_t505909690 * get__queue_0() const { return ____queue_0; }
	inline PriorityQueue_1_t505909690 ** get_address_of__queue_0() { return &____queue_0; }
	inline void set__queue_0(PriorityQueue_1_t505909690 * value)
	{
		____queue_0 = value;
		Il2CppCodeGenWriteBarrier((&____queue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULERQUEUE_T3289265577_H
#ifndef THREADSAFEQUEUEWORKER_T2203656433_H
#define THREADSAFEQUEUEWORKER_T2203656433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.InternalUtil.ThreadSafeQueueWorker
struct  ThreadSafeQueueWorker_t2203656433  : public RuntimeObject
{
public:
	// System.Object UniRx.InternalUtil.ThreadSafeQueueWorker::gate
	RuntimeObject * ___gate_2;
	// System.Boolean UniRx.InternalUtil.ThreadSafeQueueWorker::dequing
	bool ___dequing_3;
	// System.Int32 UniRx.InternalUtil.ThreadSafeQueueWorker::actionListCount
	int32_t ___actionListCount_4;
	// System.Action`1<System.Object>[] UniRx.InternalUtil.ThreadSafeQueueWorker::actionList
	Action_1U5BU5D_t3312461263* ___actionList_5;
	// System.Object[] UniRx.InternalUtil.ThreadSafeQueueWorker::actionStates
	ObjectU5BU5D_t1976496096* ___actionStates_6;
	// System.Int32 UniRx.InternalUtil.ThreadSafeQueueWorker::waitingListCount
	int32_t ___waitingListCount_7;
	// System.Action`1<System.Object>[] UniRx.InternalUtil.ThreadSafeQueueWorker::waitingList
	Action_1U5BU5D_t3312461263* ___waitingList_8;
	// System.Object[] UniRx.InternalUtil.ThreadSafeQueueWorker::waitingStates
	ObjectU5BU5D_t1976496096* ___waitingStates_9;

public:
	inline static int32_t get_offset_of_gate_2() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___gate_2)); }
	inline RuntimeObject * get_gate_2() const { return ___gate_2; }
	inline RuntimeObject ** get_address_of_gate_2() { return &___gate_2; }
	inline void set_gate_2(RuntimeObject * value)
	{
		___gate_2 = value;
		Il2CppCodeGenWriteBarrier((&___gate_2), value);
	}

	inline static int32_t get_offset_of_dequing_3() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___dequing_3)); }
	inline bool get_dequing_3() const { return ___dequing_3; }
	inline bool* get_address_of_dequing_3() { return &___dequing_3; }
	inline void set_dequing_3(bool value)
	{
		___dequing_3 = value;
	}

	inline static int32_t get_offset_of_actionListCount_4() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___actionListCount_4)); }
	inline int32_t get_actionListCount_4() const { return ___actionListCount_4; }
	inline int32_t* get_address_of_actionListCount_4() { return &___actionListCount_4; }
	inline void set_actionListCount_4(int32_t value)
	{
		___actionListCount_4 = value;
	}

	inline static int32_t get_offset_of_actionList_5() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___actionList_5)); }
	inline Action_1U5BU5D_t3312461263* get_actionList_5() const { return ___actionList_5; }
	inline Action_1U5BU5D_t3312461263** get_address_of_actionList_5() { return &___actionList_5; }
	inline void set_actionList_5(Action_1U5BU5D_t3312461263* value)
	{
		___actionList_5 = value;
		Il2CppCodeGenWriteBarrier((&___actionList_5), value);
	}

	inline static int32_t get_offset_of_actionStates_6() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___actionStates_6)); }
	inline ObjectU5BU5D_t1976496096* get_actionStates_6() const { return ___actionStates_6; }
	inline ObjectU5BU5D_t1976496096** get_address_of_actionStates_6() { return &___actionStates_6; }
	inline void set_actionStates_6(ObjectU5BU5D_t1976496096* value)
	{
		___actionStates_6 = value;
		Il2CppCodeGenWriteBarrier((&___actionStates_6), value);
	}

	inline static int32_t get_offset_of_waitingListCount_7() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___waitingListCount_7)); }
	inline int32_t get_waitingListCount_7() const { return ___waitingListCount_7; }
	inline int32_t* get_address_of_waitingListCount_7() { return &___waitingListCount_7; }
	inline void set_waitingListCount_7(int32_t value)
	{
		___waitingListCount_7 = value;
	}

	inline static int32_t get_offset_of_waitingList_8() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___waitingList_8)); }
	inline Action_1U5BU5D_t3312461263* get_waitingList_8() const { return ___waitingList_8; }
	inline Action_1U5BU5D_t3312461263** get_address_of_waitingList_8() { return &___waitingList_8; }
	inline void set_waitingList_8(Action_1U5BU5D_t3312461263* value)
	{
		___waitingList_8 = value;
		Il2CppCodeGenWriteBarrier((&___waitingList_8), value);
	}

	inline static int32_t get_offset_of_waitingStates_9() { return static_cast<int32_t>(offsetof(ThreadSafeQueueWorker_t2203656433, ___waitingStates_9)); }
	inline ObjectU5BU5D_t1976496096* get_waitingStates_9() const { return ___waitingStates_9; }
	inline ObjectU5BU5D_t1976496096** get_address_of_waitingStates_9() { return &___waitingStates_9; }
	inline void set_waitingStates_9(ObjectU5BU5D_t1976496096* value)
	{
		___waitingStates_9 = value;
		Il2CppCodeGenWriteBarrier((&___waitingStates_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEQUEUEWORKER_T2203656433_H
#ifndef NOTIFICATION_T1921566780_H
#define NOTIFICATION_T1921566780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Notification
struct  Notification_t1921566780  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATION_T1921566780_H
#ifndef BOOLEANNOTIFIER_T2678395376_H
#define BOOLEANNOTIFIER_T2678395376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.BooleanNotifier
struct  BooleanNotifier_t2678395376  : public RuntimeObject
{
public:
	// UniRx.Subject`1<System.Boolean> UniRx.BooleanNotifier::boolTrigger
	Subject_1_t2789814197 * ___boolTrigger_0;
	// System.Boolean UniRx.BooleanNotifier::boolValue
	bool ___boolValue_1;

public:
	inline static int32_t get_offset_of_boolTrigger_0() { return static_cast<int32_t>(offsetof(BooleanNotifier_t2678395376, ___boolTrigger_0)); }
	inline Subject_1_t2789814197 * get_boolTrigger_0() const { return ___boolTrigger_0; }
	inline Subject_1_t2789814197 ** get_address_of_boolTrigger_0() { return &___boolTrigger_0; }
	inline void set_boolTrigger_0(Subject_1_t2789814197 * value)
	{
		___boolTrigger_0 = value;
		Il2CppCodeGenWriteBarrier((&___boolTrigger_0), value);
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(BooleanNotifier_t2678395376, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANNOTIFIER_T2678395376_H
#ifndef COUNTNOTIFIER_T436721851_H
#define COUNTNOTIFIER_T436721851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier
struct  CountNotifier_t436721851  : public RuntimeObject
{
public:
	// System.Object UniRx.CountNotifier::lockObject
	RuntimeObject * ___lockObject_0;
	// UniRx.Subject`1<UniRx.CountChangedStatus> UniRx.CountNotifier::statusChanged
	Subject_1_t4194016478 * ___statusChanged_1;
	// System.Int32 UniRx.CountNotifier::max
	int32_t ___max_2;
	// System.Int32 UniRx.CountNotifier::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CountNotifier_t436721851, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_statusChanged_1() { return static_cast<int32_t>(offsetof(CountNotifier_t436721851, ___statusChanged_1)); }
	inline Subject_1_t4194016478 * get_statusChanged_1() const { return ___statusChanged_1; }
	inline Subject_1_t4194016478 ** get_address_of_statusChanged_1() { return &___statusChanged_1; }
	inline void set_statusChanged_1(Subject_1_t4194016478 * value)
	{
		___statusChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___statusChanged_1), value);
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(CountNotifier_t436721851, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CountNotifier_t436721851, ___U3CCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CCountU3Ek__BackingField_3() const { return ___U3CCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_3() { return &___U3CCountU3Ek__BackingField_3; }
	inline void set_U3CCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CCountU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTNOTIFIER_T436721851_H
#ifndef U3CINCREMENTU3EC__ANONSTOREY0_T4229625713_H
#define U3CINCREMENTU3EC__ANONSTOREY0_T4229625713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier/<Increment>c__AnonStorey0
struct  U3CIncrementU3Ec__AnonStorey0_t4229625713  : public RuntimeObject
{
public:
	// System.Int32 UniRx.CountNotifier/<Increment>c__AnonStorey0::incrementCount
	int32_t ___incrementCount_0;
	// UniRx.CountNotifier UniRx.CountNotifier/<Increment>c__AnonStorey0::$this
	CountNotifier_t436721851 * ___U24this_1;

public:
	inline static int32_t get_offset_of_incrementCount_0() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t4229625713, ___incrementCount_0)); }
	inline int32_t get_incrementCount_0() const { return ___incrementCount_0; }
	inline int32_t* get_address_of_incrementCount_0() { return &___incrementCount_0; }
	inline void set_incrementCount_0(int32_t value)
	{
		___incrementCount_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t4229625713, ___U24this_1)); }
	inline CountNotifier_t436721851 * get_U24this_1() const { return ___U24this_1; }
	inline CountNotifier_t436721851 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CountNotifier_t436721851 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINCREMENTU3EC__ANONSTOREY0_T4229625713_H
#ifndef U3CTOOBSERVABLEU3EC__ANONSTOREY29_T3464301533_H
#define U3CTOOBSERVABLEU3EC__ANONSTOREY29_T3464301533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<ToObservable>c__AnonStorey29
struct  U3CToObservableU3Ec__AnonStorey29_t3464301533  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator UniRx.Observable/<ToObservable>c__AnonStorey29::coroutine
	RuntimeObject* ___coroutine_0;
	// System.Boolean UniRx.Observable/<ToObservable>c__AnonStorey29::publishEveryYield
	bool ___publishEveryYield_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CToObservableU3Ec__AnonStorey29_t3464301533, ___coroutine_0)); }
	inline RuntimeObject* get_coroutine_0() const { return ___coroutine_0; }
	inline RuntimeObject** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(RuntimeObject* value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_1() { return static_cast<int32_t>(offsetof(U3CToObservableU3Ec__AnonStorey29_t3464301533, ___publishEveryYield_1)); }
	inline bool get_publishEveryYield_1() const { return ___publishEveryYield_1; }
	inline bool* get_address_of_publishEveryYield_1() { return &___publishEveryYield_1; }
	inline void set_publishEveryYield_1(bool value)
	{
		___publishEveryYield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTOOBSERVABLEU3EC__ANONSTOREY29_T3464301533_H
#ifndef U3CFROMMICROCOROUTINEU3EC__ANONSTOREY20_T2503987949_H
#define U3CFROMMICROCOROUTINEU3EC__ANONSTOREY20_T2503987949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<FromMicroCoroutine>c__AnonStorey20
struct  U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949  : public RuntimeObject
{
public:
	// System.Func`2<UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable/<FromMicroCoroutine>c__AnonStorey20::coroutine
	Func_2_t2589802106 * ___coroutine_0;
	// System.Boolean UniRx.Observable/<FromMicroCoroutine>c__AnonStorey20::publishEveryYield
	bool ___publishEveryYield_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949, ___coroutine_0)); }
	inline Func_2_t2589802106 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_2_t2589802106 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_2_t2589802106 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_1() { return static_cast<int32_t>(offsetof(U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949, ___publishEveryYield_1)); }
	inline bool get_publishEveryYield_1() const { return ___publishEveryYield_1; }
	inline bool* get_address_of_publishEveryYield_1() { return &___publishEveryYield_1; }
	inline void set_publishEveryYield_1(bool value)
	{
		___publishEveryYield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFROMMICROCOROUTINEU3EC__ANONSTOREY20_T2503987949_H
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
#ifndef EMPTYDISPOSABLE_T3354462109_H
#define EMPTYDISPOSABLE_T3354462109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Disposable/EmptyDisposable
struct  EmptyDisposable_t3354462109  : public RuntimeObject
{
public:

public:
};

struct EmptyDisposable_t3354462109_StaticFields
{
public:
	// UniRx.Disposable/EmptyDisposable UniRx.Disposable/EmptyDisposable::Singleton
	EmptyDisposable_t3354462109 * ___Singleton_0;

public:
	inline static int32_t get_offset_of_Singleton_0() { return static_cast<int32_t>(offsetof(EmptyDisposable_t3354462109_StaticFields, ___Singleton_0)); }
	inline EmptyDisposable_t3354462109 * get_Singleton_0() const { return ___Singleton_0; }
	inline EmptyDisposable_t3354462109 ** get_address_of_Singleton_0() { return &___Singleton_0; }
	inline void set_Singleton_0(EmptyDisposable_t3354462109 * value)
	{
		___Singleton_0 = value;
		Il2CppCodeGenWriteBarrier((&___Singleton_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYDISPOSABLE_T3354462109_H
#ifndef MULTIPLEASSIGNMENTDISPOSABLE_T2763624440_H
#define MULTIPLEASSIGNMENTDISPOSABLE_T2763624440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.MultipleAssignmentDisposable
struct  MultipleAssignmentDisposable_t2763624440  : public RuntimeObject
{
public:
	// System.Object UniRx.MultipleAssignmentDisposable::gate
	RuntimeObject * ___gate_1;
	// System.IDisposable UniRx.MultipleAssignmentDisposable::current
	RuntimeObject* ___current_2;

public:
	inline static int32_t get_offset_of_gate_1() { return static_cast<int32_t>(offsetof(MultipleAssignmentDisposable_t2763624440, ___gate_1)); }
	inline RuntimeObject * get_gate_1() const { return ___gate_1; }
	inline RuntimeObject ** get_address_of_gate_1() { return &___gate_1; }
	inline void set_gate_1(RuntimeObject * value)
	{
		___gate_1 = value;
		Il2CppCodeGenWriteBarrier((&___gate_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(MultipleAssignmentDisposable_t2763624440, ___current_2)); }
	inline RuntimeObject* get_current_2() const { return ___current_2; }
	inline RuntimeObject** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject* value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}
};

struct MultipleAssignmentDisposable_t2763624440_StaticFields
{
public:
	// UniRx.BooleanDisposable UniRx.MultipleAssignmentDisposable::True
	BooleanDisposable_t267319562 * ___True_0;

public:
	inline static int32_t get_offset_of_True_0() { return static_cast<int32_t>(offsetof(MultipleAssignmentDisposable_t2763624440_StaticFields, ___True_0)); }
	inline BooleanDisposable_t267319562 * get_True_0() const { return ___True_0; }
	inline BooleanDisposable_t267319562 ** get_address_of_True_0() { return &___True_0; }
	inline void set_True_0(BooleanDisposable_t267319562 * value)
	{
		___True_0 = value;
		Il2CppCodeGenWriteBarrier((&___True_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIPLEASSIGNMENTDISPOSABLE_T2763624440_H
#ifndef ANONYMOUSDISPOSABLE_T2357074146_H
#define ANONYMOUSDISPOSABLE_T2357074146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Disposable/AnonymousDisposable
struct  AnonymousDisposable_t2357074146  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Disposable/AnonymousDisposable::isDisposed
	bool ___isDisposed_0;
	// System.Action UniRx.Disposable/AnonymousDisposable::dispose
	Action_t441168646 * ___dispose_1;

public:
	inline static int32_t get_offset_of_isDisposed_0() { return static_cast<int32_t>(offsetof(AnonymousDisposable_t2357074146, ___isDisposed_0)); }
	inline bool get_isDisposed_0() const { return ___isDisposed_0; }
	inline bool* get_address_of_isDisposed_0() { return &___isDisposed_0; }
	inline void set_isDisposed_0(bool value)
	{
		___isDisposed_0 = value;
	}

	inline static int32_t get_offset_of_dispose_1() { return static_cast<int32_t>(offsetof(AnonymousDisposable_t2357074146, ___dispose_1)); }
	inline Action_t441168646 * get_dispose_1() const { return ___dispose_1; }
	inline Action_t441168646 ** get_address_of_dispose_1() { return &___dispose_1; }
	inline void set_dispose_1(Action_t441168646 * value)
	{
		___dispose_1 = value;
		Il2CppCodeGenWriteBarrier((&___dispose_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANONYMOUSDISPOSABLE_T2357074146_H
#ifndef REFCOUNTDISPOSABLE_T3254589225_H
#define REFCOUNTDISPOSABLE_T3254589225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.RefCountDisposable
struct  RefCountDisposable_t3254589225  : public RuntimeObject
{
public:
	// System.Object UniRx.RefCountDisposable::_gate
	RuntimeObject * ____gate_0;
	// System.IDisposable UniRx.RefCountDisposable::_disposable
	RuntimeObject* ____disposable_1;
	// System.Boolean UniRx.RefCountDisposable::_isPrimaryDisposed
	bool ____isPrimaryDisposed_2;
	// System.Int32 UniRx.RefCountDisposable::_count
	int32_t ____count_3;

public:
	inline static int32_t get_offset_of__gate_0() { return static_cast<int32_t>(offsetof(RefCountDisposable_t3254589225, ____gate_0)); }
	inline RuntimeObject * get__gate_0() const { return ____gate_0; }
	inline RuntimeObject ** get_address_of__gate_0() { return &____gate_0; }
	inline void set__gate_0(RuntimeObject * value)
	{
		____gate_0 = value;
		Il2CppCodeGenWriteBarrier((&____gate_0), value);
	}

	inline static int32_t get_offset_of__disposable_1() { return static_cast<int32_t>(offsetof(RefCountDisposable_t3254589225, ____disposable_1)); }
	inline RuntimeObject* get__disposable_1() const { return ____disposable_1; }
	inline RuntimeObject** get_address_of__disposable_1() { return &____disposable_1; }
	inline void set__disposable_1(RuntimeObject* value)
	{
		____disposable_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable_1), value);
	}

	inline static int32_t get_offset_of__isPrimaryDisposed_2() { return static_cast<int32_t>(offsetof(RefCountDisposable_t3254589225, ____isPrimaryDisposed_2)); }
	inline bool get__isPrimaryDisposed_2() const { return ____isPrimaryDisposed_2; }
	inline bool* get_address_of__isPrimaryDisposed_2() { return &____isPrimaryDisposed_2; }
	inline void set__isPrimaryDisposed_2(bool value)
	{
		____isPrimaryDisposed_2 = value;
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(RefCountDisposable_t3254589225, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFCOUNTDISPOSABLE_T3254589225_H
#ifndef INNERDISPOSABLE_T3350648439_H
#define INNERDISPOSABLE_T3350648439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.RefCountDisposable/InnerDisposable
struct  InnerDisposable_t3350648439  : public RuntimeObject
{
public:
	// UniRx.RefCountDisposable UniRx.RefCountDisposable/InnerDisposable::_parent
	RefCountDisposable_t3254589225 * ____parent_0;
	// System.Object UniRx.RefCountDisposable/InnerDisposable::parentLock
	RuntimeObject * ___parentLock_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(InnerDisposable_t3350648439, ____parent_0)); }
	inline RefCountDisposable_t3254589225 * get__parent_0() const { return ____parent_0; }
	inline RefCountDisposable_t3254589225 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RefCountDisposable_t3254589225 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of_parentLock_1() { return static_cast<int32_t>(offsetof(InnerDisposable_t3350648439, ___parentLock_1)); }
	inline RuntimeObject * get_parentLock_1() const { return ___parentLock_1; }
	inline RuntimeObject ** get_address_of_parentLock_1() { return &___parentLock_1; }
	inline void set_parentLock_1(RuntimeObject * value)
	{
		___parentLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentLock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INNERDISPOSABLE_T3350648439_H
#ifndef U3CFROMMICROCOROUTINEU3EC__ANONSTOREY1F_T1089390104_H
#define U3CFROMMICROCOROUTINEU3EC__ANONSTOREY1F_T1089390104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<FromMicroCoroutine>c__AnonStorey1F
struct  U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104  : public RuntimeObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> UniRx.Observable/<FromMicroCoroutine>c__AnonStorey1F::coroutine
	Func_1_t637074938 * ___coroutine_0;
	// System.Boolean UniRx.Observable/<FromMicroCoroutine>c__AnonStorey1F::publishEveryYield
	bool ___publishEveryYield_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104, ___coroutine_0)); }
	inline Func_1_t637074938 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t637074938 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t637074938 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_1() { return static_cast<int32_t>(offsetof(U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104, ___publishEveryYield_1)); }
	inline bool get_publishEveryYield_1() const { return ___publishEveryYield_1; }
	inline bool* get_address_of_publishEveryYield_1() { return &___publishEveryYield_1; }
	inline void set_publishEveryYield_1(bool value)
	{
		___publishEveryYield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFROMMICROCOROUTINEU3EC__ANONSTOREY1F_T1089390104_H
#ifndef U3CMONITORTRIGGERHEALTHU3EC__ITERATOR0_T3815226083_H
#define U3CMONITORTRIGGERHEALTHU3EC__ITERATOR0_T3815226083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0
struct  U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083  : public RuntimeObject
{
public:
	// UniRx.Triggers.ObservableDestroyTrigger UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0::trigger
	ObservableDestroyTrigger_t382230738 * ___trigger_0;
	// UnityEngine.GameObject UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0::targetGameObject
	GameObject_t3527829199 * ___targetGameObject_1;
	// System.Object UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UniRx.DisposableExtensions/<MonitorTriggerHealth>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_trigger_0() { return static_cast<int32_t>(offsetof(U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083, ___trigger_0)); }
	inline ObservableDestroyTrigger_t382230738 * get_trigger_0() const { return ___trigger_0; }
	inline ObservableDestroyTrigger_t382230738 ** get_address_of_trigger_0() { return &___trigger_0; }
	inline void set_trigger_0(ObservableDestroyTrigger_t382230738 * value)
	{
		___trigger_0 = value;
		Il2CppCodeGenWriteBarrier((&___trigger_0), value);
	}

	inline static int32_t get_offset_of_targetGameObject_1() { return static_cast<int32_t>(offsetof(U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083, ___targetGameObject_1)); }
	inline GameObject_t3527829199 * get_targetGameObject_1() const { return ___targetGameObject_1; }
	inline GameObject_t3527829199 ** get_address_of_targetGameObject_1() { return &___targetGameObject_1; }
	inline void set_targetGameObject_1(GameObject_t3527829199 * value)
	{
		___targetGameObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___targetGameObject_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMONITORTRIGGERHEALTHU3EC__ITERATOR0_T3815226083_H
#ifndef U3CTOASYNCU3EC__ANONSTOREYD_T1257328641_H
#define U3CTOASYNCU3EC__ANONSTOREYD_T1257328641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<ToAsync>c__AnonStoreyD
struct  U3CToAsyncU3Ec__AnonStoreyD_t1257328641  : public RuntimeObject
{
public:
	// UniRx.IScheduler UniRx.Observable/<ToAsync>c__AnonStoreyD::scheduler
	RuntimeObject* ___scheduler_0;
	// System.Action UniRx.Observable/<ToAsync>c__AnonStoreyD::action
	Action_t441168646 * ___action_1;

public:
	inline static int32_t get_offset_of_scheduler_0() { return static_cast<int32_t>(offsetof(U3CToAsyncU3Ec__AnonStoreyD_t1257328641, ___scheduler_0)); }
	inline RuntimeObject* get_scheduler_0() const { return ___scheduler_0; }
	inline RuntimeObject** get_address_of_scheduler_0() { return &___scheduler_0; }
	inline void set_scheduler_0(RuntimeObject* value)
	{
		___scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CToAsyncU3Ec__AnonStoreyD_t1257328641, ___action_1)); }
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
#endif // U3CTOASYNCU3EC__ANONSTOREYD_T1257328641_H
#ifndef U3CTOASYNCU3EC__ANONSTOREYE_T1397792885_H
#define U3CTOASYNCU3EC__ANONSTOREYE_T1397792885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<ToAsync>c__AnonStoreyD/<ToAsync>c__AnonStoreyE
struct  U3CToAsyncU3Ec__AnonStoreyE_t1397792885  : public RuntimeObject
{
public:
	// UniRx.AsyncSubject`1<UniRx.Unit> UniRx.Observable/<ToAsync>c__AnonStoreyD/<ToAsync>c__AnonStoreyE::subject
	AsyncSubject_1_t3547303610 * ___subject_0;
	// UniRx.Observable/<ToAsync>c__AnonStoreyD UniRx.Observable/<ToAsync>c__AnonStoreyD/<ToAsync>c__AnonStoreyE::<>f__ref$13
	U3CToAsyncU3Ec__AnonStoreyD_t1257328641 * ___U3CU3Ef__refU2413_1;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(U3CToAsyncU3Ec__AnonStoreyE_t1397792885, ___subject_0)); }
	inline AsyncSubject_1_t3547303610 * get_subject_0() const { return ___subject_0; }
	inline AsyncSubject_1_t3547303610 ** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(AsyncSubject_1_t3547303610 * value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier((&___subject_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU2413_1() { return static_cast<int32_t>(offsetof(U3CToAsyncU3Ec__AnonStoreyE_t1397792885, ___U3CU3Ef__refU2413_1)); }
	inline U3CToAsyncU3Ec__AnonStoreyD_t1257328641 * get_U3CU3Ef__refU2413_1() const { return ___U3CU3Ef__refU2413_1; }
	inline U3CToAsyncU3Ec__AnonStoreyD_t1257328641 ** get_address_of_U3CU3Ef__refU2413_1() { return &___U3CU3Ef__refU2413_1; }
	inline void set_U3CU3Ef__refU2413_1(U3CToAsyncU3Ec__AnonStoreyD_t1257328641 * value)
	{
		___U3CU3Ef__refU2413_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU2413_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTOASYNCU3EC__ANONSTOREYE_T1397792885_H
#ifndef DISPOSABLEEXTENSIONS_T3371619886_H
#define DISPOSABLEEXTENSIONS_T3371619886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.DisposableExtensions
struct  DisposableExtensions_t3371619886  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPOSABLEEXTENSIONS_T3371619886_H
#ifndef U3CFROMASYNCPATTERNU3EC__ANONSTOREY1A_T753551102_H
#define U3CFROMASYNCPATTERNU3EC__ANONSTOREY1A_T753551102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<FromAsyncPattern>c__AnonStorey1A
struct  U3CFromAsyncPatternU3Ec__AnonStorey1A_t753551102  : public RuntimeObject
{
public:
	// System.Action`1<System.IAsyncResult> UniRx.Observable/<FromAsyncPattern>c__AnonStorey1A::end
	Action_1_t2941096359 * ___end_0;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CFromAsyncPatternU3Ec__AnonStorey1A_t753551102, ___end_0)); }
	inline Action_1_t2941096359 * get_end_0() const { return ___end_0; }
	inline Action_1_t2941096359 ** get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(Action_1_t2941096359 * value)
	{
		___end_0 = value;
		Il2CppCodeGenWriteBarrier((&___end_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFROMASYNCPATTERNU3EC__ANONSTOREY1A_T753551102_H
#ifndef U3CFROMCOROUTINEU3EC__ANONSTOREY1D_T41164812_H
#define U3CFROMCOROUTINEU3EC__ANONSTOREY1D_T41164812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<FromCoroutine>c__AnonStorey1D
struct  U3CFromCoroutineU3Ec__AnonStorey1D_t41164812  : public RuntimeObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> UniRx.Observable/<FromCoroutine>c__AnonStorey1D::coroutine
	Func_1_t637074938 * ___coroutine_0;
	// System.Boolean UniRx.Observable/<FromCoroutine>c__AnonStorey1D::publishEveryYield
	bool ___publishEveryYield_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CFromCoroutineU3Ec__AnonStorey1D_t41164812, ___coroutine_0)); }
	inline Func_1_t637074938 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t637074938 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t637074938 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_1() { return static_cast<int32_t>(offsetof(U3CFromCoroutineU3Ec__AnonStorey1D_t41164812, ___publishEveryYield_1)); }
	inline bool get_publishEveryYield_1() const { return ___publishEveryYield_1; }
	inline bool* get_address_of_publishEveryYield_1() { return &___publishEveryYield_1; }
	inline void set_publishEveryYield_1(bool value)
	{
		___publishEveryYield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFROMCOROUTINEU3EC__ANONSTOREY1D_T41164812_H
#ifndef COMPOSITEDISPOSABLE_T1252303580_H
#define COMPOSITEDISPOSABLE_T1252303580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CompositeDisposable
struct  CompositeDisposable_t1252303580  : public RuntimeObject
{
public:
	// System.Object UniRx.CompositeDisposable::_gate
	RuntimeObject * ____gate_0;
	// System.Boolean UniRx.CompositeDisposable::_disposed
	bool ____disposed_1;
	// System.Collections.Generic.List`1<System.IDisposable> UniRx.CompositeDisposable::_disposables
	List_1_t531982678 * ____disposables_2;
	// System.Int32 UniRx.CompositeDisposable::_count
	int32_t ____count_3;

public:
	inline static int32_t get_offset_of__gate_0() { return static_cast<int32_t>(offsetof(CompositeDisposable_t1252303580, ____gate_0)); }
	inline RuntimeObject * get__gate_0() const { return ____gate_0; }
	inline RuntimeObject ** get_address_of__gate_0() { return &____gate_0; }
	inline void set__gate_0(RuntimeObject * value)
	{
		____gate_0 = value;
		Il2CppCodeGenWriteBarrier((&____gate_0), value);
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(CompositeDisposable_t1252303580, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}

	inline static int32_t get_offset_of__disposables_2() { return static_cast<int32_t>(offsetof(CompositeDisposable_t1252303580, ____disposables_2)); }
	inline List_1_t531982678 * get__disposables_2() const { return ____disposables_2; }
	inline List_1_t531982678 ** get_address_of__disposables_2() { return &____disposables_2; }
	inline void set__disposables_2(List_1_t531982678 * value)
	{
		____disposables_2 = value;
		Il2CppCodeGenWriteBarrier((&____disposables_2), value);
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(CompositeDisposable_t1252303580, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEDISPOSABLE_T1252303580_H
#ifndef U3CFROMCOROUTINEU3EC__ANONSTOREY1E_T2792171121_H
#define U3CFROMCOROUTINEU3EC__ANONSTOREY1E_T2792171121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<FromCoroutine>c__AnonStorey1E
struct  U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121  : public RuntimeObject
{
public:
	// System.Func`2<UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable/<FromCoroutine>c__AnonStorey1E::coroutine
	Func_2_t2589802106 * ___coroutine_0;
	// System.Boolean UniRx.Observable/<FromCoroutine>c__AnonStorey1E::publishEveryYield
	bool ___publishEveryYield_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121, ___coroutine_0)); }
	inline Func_2_t2589802106 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_2_t2589802106 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_2_t2589802106 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_1() { return static_cast<int32_t>(offsetof(U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121, ___publishEveryYield_1)); }
	inline bool get_publishEveryYield_1() const { return ___publishEveryYield_1; }
	inline bool* get_address_of_publishEveryYield_1() { return &___publishEveryYield_1; }
	inline void set_publishEveryYield_1(bool value)
	{
		___publishEveryYield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFROMCOROUTINEU3EC__ANONSTOREY1E_T2792171121_H
#ifndef DISPOSABLE_T303996215_H
#define DISPOSABLE_T303996215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Disposable
struct  Disposable_t303996215  : public RuntimeObject
{
public:

public:
};

struct Disposable_t303996215_StaticFields
{
public:
	// System.IDisposable UniRx.Disposable::Empty
	RuntimeObject* ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Disposable_t303996215_StaticFields, ___Empty_0)); }
	inline RuntimeObject* get_Empty_0() const { return ___Empty_0; }
	inline RuntimeObject** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(RuntimeObject* value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPOSABLE_T303996215_H
#ifndef ENUM_T2452033136_H
#define ENUM_T2452033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2452033136  : public ValueType_t1511057308
{
public:

public:
};

struct Enum_t2452033136_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2983273317* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2452033136_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2983273317* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2983273317** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2983273317* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2452033136_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2452033136_marshaled_com
{
};
#endif // ENUM_T2452033136_H
#ifndef BINARY_T2210356996_H
#define BINARY_T2210356996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable/Binary
struct  Binary_t2210356996  : public StableCompositeDisposable_t336377914
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Binary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Binary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Binary::_disposable2
	RuntimeObject* ____disposable2_2;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Binary_t2210356996, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Binary_t2210356996, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable1_1), value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Binary_t2210356996, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((&____disposable2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARY_T2210356996_H
#ifndef TRINARY_T705153811_H
#define TRINARY_T705153811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable/Trinary
struct  Trinary_t705153811  : public StableCompositeDisposable_t336377914
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Trinary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable2
	RuntimeObject* ____disposable2_2;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable3
	RuntimeObject* ____disposable3_3;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Trinary_t705153811, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Trinary_t705153811, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable1_1), value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Trinary_t705153811, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((&____disposable2_2), value);
	}

	inline static int32_t get_offset_of__disposable3_3() { return static_cast<int32_t>(offsetof(Trinary_t705153811, ____disposable3_3)); }
	inline RuntimeObject* get__disposable3_3() const { return ____disposable3_3; }
	inline RuntimeObject** get_address_of__disposable3_3() { return &____disposable3_3; }
	inline void set__disposable3_3(RuntimeObject* value)
	{
		____disposable3_3 = value;
		Il2CppCodeGenWriteBarrier((&____disposable3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRINARY_T705153811_H
#ifndef QUATERNARY_T1831393202_H
#define QUATERNARY_T1831393202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable/Quaternary
struct  Quaternary_t1831393202  : public StableCompositeDisposable_t336377914
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Quaternary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable2
	RuntimeObject* ____disposable2_2;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable3
	RuntimeObject* ____disposable3_3;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable4
	RuntimeObject* ____disposable4_4;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Quaternary_t1831393202, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Quaternary_t1831393202, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable1_1), value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Quaternary_t1831393202, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((&____disposable2_2), value);
	}

	inline static int32_t get_offset_of__disposable3_3() { return static_cast<int32_t>(offsetof(Quaternary_t1831393202, ____disposable3_3)); }
	inline RuntimeObject* get__disposable3_3() const { return ____disposable3_3; }
	inline RuntimeObject** get_address_of__disposable3_3() { return &____disposable3_3; }
	inline void set__disposable3_3(RuntimeObject* value)
	{
		____disposable3_3 = value;
		Il2CppCodeGenWriteBarrier((&____disposable3_3), value);
	}

	inline static int32_t get_offset_of__disposable4_4() { return static_cast<int32_t>(offsetof(Quaternary_t1831393202, ____disposable4_4)); }
	inline RuntimeObject* get__disposable4_4() const { return ____disposable4_4; }
	inline RuntimeObject** get_address_of__disposable4_4() { return &____disposable4_4; }
	inline void set__disposable4_4(RuntimeObject* value)
	{
		____disposable4_4 = value;
		Il2CppCodeGenWriteBarrier((&____disposable4_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNARY_T1831393202_H
#ifndef NARYUNSAFE_T581227384_H
#define NARYUNSAFE_T581227384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable/NAryUnsafe
struct  NAryUnsafe_t581227384  : public StableCompositeDisposable_t336377914
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/NAryUnsafe::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable[] modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/NAryUnsafe::_disposables
	IDisposableU5BU5D_t4160475301* ____disposables_1;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(NAryUnsafe_t581227384, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposables_1() { return static_cast<int32_t>(offsetof(NAryUnsafe_t581227384, ____disposables_1)); }
	inline IDisposableU5BU5D_t4160475301* get__disposables_1() const { return ____disposables_1; }
	inline IDisposableU5BU5D_t4160475301** get_address_of__disposables_1() { return &____disposables_1; }
	inline void set__disposables_1(IDisposableU5BU5D_t4160475301* value)
	{
		____disposables_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposables_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NARYUNSAFE_T581227384_H
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
#ifndef CANCELLATIONTOKEN_T634065412_H
#define CANCELLATIONTOKEN_T634065412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CancellationToken
struct  CancellationToken_t634065412 
{
public:
	// UniRx.ICancelable UniRx.CancellationToken::source
	RuntimeObject* ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t634065412, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}
};

struct CancellationToken_t634065412_StaticFields
{
public:
	// UniRx.CancellationToken UniRx.CancellationToken::Empty
	CancellationToken_t634065412  ___Empty_1;
	// UniRx.CancellationToken UniRx.CancellationToken::None
	CancellationToken_t634065412  ___None_2;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(CancellationToken_t634065412_StaticFields, ___Empty_1)); }
	inline CancellationToken_t634065412  get_Empty_1() const { return ___Empty_1; }
	inline CancellationToken_t634065412 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(CancellationToken_t634065412  value)
	{
		___Empty_1 = value;
	}

	inline static int32_t get_offset_of_None_2() { return static_cast<int32_t>(offsetof(CancellationToken_t634065412_StaticFields, ___None_2)); }
	inline CancellationToken_t634065412  get_None_2() const { return ___None_2; }
	inline CancellationToken_t634065412 * get_address_of_None_2() { return &___None_2; }
	inline void set_None_2(CancellationToken_t634065412  value)
	{
		___None_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.CancellationToken
struct CancellationToken_t634065412_marshaled_pinvoke
{
	RuntimeObject* ___source_0;
};
// Native definition for COM marshalling of UniRx.CancellationToken
struct CancellationToken_t634065412_marshaled_com
{
	RuntimeObject* ___source_0;
};
#endif // CANCELLATIONTOKEN_T634065412_H
#ifndef NARY_T1077724770_H
#define NARY_T1077724770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.StableCompositeDisposable/NAry
struct  NAry_t1077724770  : public StableCompositeDisposable_t336377914
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/NAry::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.Collections.Generic.List`1<System.IDisposable> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/NAry::_disposables
	List_1_t531982678 * ____disposables_1;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(NAry_t1077724770, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposables_1() { return static_cast<int32_t>(offsetof(NAry_t1077724770, ____disposables_1)); }
	inline List_1_t531982678 * get__disposables_1() const { return ____disposables_1; }
	inline List_1_t531982678 ** get_address_of__disposables_1() { return &____disposables_1; }
	inline void set__disposables_1(List_1_t531982678 * value)
	{
		____disposables_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposables_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NARY_T1077724770_H
#ifndef COUNTCHANGEDSTATUS_T1305631405_H
#define COUNTCHANGEDSTATUS_T1305631405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountChangedStatus
struct  CountChangedStatus_t1305631405 
{
public:
	// System.Int32 UniRx.CountChangedStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CountChangedStatus_t1305631405, ___value___1)); }
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
#endif // COUNTCHANGEDSTATUS_T1305631405_H
#ifndef U3CWRAPENUMERATORU3EC__ITERATOR2_T2207008758_H
#define U3CWRAPENUMERATORU3EC__ITERATOR2_T2207008758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<WrapEnumerator>c__Iterator2
struct  U3CWrapEnumeratorU3Ec__Iterator2_t2207008758  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Observable/<WrapEnumerator>c__Iterator2::<hasNext>__0
	bool ___U3ChasNextU3E__0_0;
	// System.Boolean UniRx.Observable/<WrapEnumerator>c__Iterator2::<raisedError>__0
	bool ___U3CraisedErrorU3E__0_1;
	// System.Collections.IEnumerator UniRx.Observable/<WrapEnumerator>c__Iterator2::enumerator
	RuntimeObject* ___enumerator_2;
	// UniRx.IObserver`1<UniRx.Unit> UniRx.Observable/<WrapEnumerator>c__Iterator2::observer
	RuntimeObject* ___observer_3;
	// System.Boolean UniRx.Observable/<WrapEnumerator>c__Iterator2::publishEveryYield
	bool ___publishEveryYield_4;
	// System.Object UniRx.Observable/<WrapEnumerator>c__Iterator2::<current>__1
	RuntimeObject * ___U3CcurrentU3E__1_5;
	// UniRx.ICustomYieldInstructionErrorHandler UniRx.Observable/<WrapEnumerator>c__Iterator2::<customHandler>__1
	RuntimeObject* ___U3CcustomHandlerU3E__1_6;
	// UniRx.CancellationToken UniRx.Observable/<WrapEnumerator>c__Iterator2::cancellationToken
	CancellationToken_t634065412  ___cancellationToken_7;
	// System.Object UniRx.Observable/<WrapEnumerator>c__Iterator2::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean UniRx.Observable/<WrapEnumerator>c__Iterator2::$disposing
	bool ___U24disposing_9;
	// System.Int32 UniRx.Observable/<WrapEnumerator>c__Iterator2::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3ChasNextU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U3ChasNextU3E__0_0)); }
	inline bool get_U3ChasNextU3E__0_0() const { return ___U3ChasNextU3E__0_0; }
	inline bool* get_address_of_U3ChasNextU3E__0_0() { return &___U3ChasNextU3E__0_0; }
	inline void set_U3ChasNextU3E__0_0(bool value)
	{
		___U3ChasNextU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CraisedErrorU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U3CraisedErrorU3E__0_1)); }
	inline bool get_U3CraisedErrorU3E__0_1() const { return ___U3CraisedErrorU3E__0_1; }
	inline bool* get_address_of_U3CraisedErrorU3E__0_1() { return &___U3CraisedErrorU3E__0_1; }
	inline void set_U3CraisedErrorU3E__0_1(bool value)
	{
		___U3CraisedErrorU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_enumerator_2() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___enumerator_2)); }
	inline RuntimeObject* get_enumerator_2() const { return ___enumerator_2; }
	inline RuntimeObject** get_address_of_enumerator_2() { return &___enumerator_2; }
	inline void set_enumerator_2(RuntimeObject* value)
	{
		___enumerator_2 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_2), value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((&___observer_3), value);
	}

	inline static int32_t get_offset_of_publishEveryYield_4() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___publishEveryYield_4)); }
	inline bool get_publishEveryYield_4() const { return ___publishEveryYield_4; }
	inline bool* get_address_of_publishEveryYield_4() { return &___publishEveryYield_4; }
	inline void set_publishEveryYield_4(bool value)
	{
		___publishEveryYield_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentU3E__1_5() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U3CcurrentU3E__1_5)); }
	inline RuntimeObject * get_U3CcurrentU3E__1_5() const { return ___U3CcurrentU3E__1_5; }
	inline RuntimeObject ** get_address_of_U3CcurrentU3E__1_5() { return &___U3CcurrentU3E__1_5; }
	inline void set_U3CcurrentU3E__1_5(RuntimeObject * value)
	{
		___U3CcurrentU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentU3E__1_5), value);
	}

	inline static int32_t get_offset_of_U3CcustomHandlerU3E__1_6() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U3CcustomHandlerU3E__1_6)); }
	inline RuntimeObject* get_U3CcustomHandlerU3E__1_6() const { return ___U3CcustomHandlerU3E__1_6; }
	inline RuntimeObject** get_address_of_U3CcustomHandlerU3E__1_6() { return &___U3CcustomHandlerU3E__1_6; }
	inline void set_U3CcustomHandlerU3E__1_6(RuntimeObject* value)
	{
		___U3CcustomHandlerU3E__1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcustomHandlerU3E__1_6), value);
	}

	inline static int32_t get_offset_of_cancellationToken_7() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___cancellationToken_7)); }
	inline CancellationToken_t634065412  get_cancellationToken_7() const { return ___cancellationToken_7; }
	inline CancellationToken_t634065412 * get_address_of_cancellationToken_7() { return &___cancellationToken_7; }
	inline void set_cancellationToken_7(CancellationToken_t634065412  value)
	{
		___cancellationToken_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ec__Iterator2_t2207008758, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRAPENUMERATORU3EC__ITERATOR2_T2207008758_H
#ifndef SCHEDULEDITEM_T1993320728_H
#define SCHEDULEDITEM_T1993320728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.InternalUtil.ScheduledItem
struct  ScheduledItem_t1993320728  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.InternalUtil.ScheduledItem::_disposable
	BooleanDisposable_t267319562 * ____disposable_0;
	// System.TimeSpan UniRx.InternalUtil.ScheduledItem::_dueTime
	TimeSpan_t1412719355  ____dueTime_1;
	// System.Action UniRx.InternalUtil.ScheduledItem::_action
	Action_t441168646 * ____action_2;

public:
	inline static int32_t get_offset_of__disposable_0() { return static_cast<int32_t>(offsetof(ScheduledItem_t1993320728, ____disposable_0)); }
	inline BooleanDisposable_t267319562 * get__disposable_0() const { return ____disposable_0; }
	inline BooleanDisposable_t267319562 ** get_address_of__disposable_0() { return &____disposable_0; }
	inline void set__disposable_0(BooleanDisposable_t267319562 * value)
	{
		____disposable_0 = value;
		Il2CppCodeGenWriteBarrier((&____disposable_0), value);
	}

	inline static int32_t get_offset_of__dueTime_1() { return static_cast<int32_t>(offsetof(ScheduledItem_t1993320728, ____dueTime_1)); }
	inline TimeSpan_t1412719355  get__dueTime_1() const { return ____dueTime_1; }
	inline TimeSpan_t1412719355 * get_address_of__dueTime_1() { return &____dueTime_1; }
	inline void set__dueTime_1(TimeSpan_t1412719355  value)
	{
		____dueTime_1 = value;
	}

	inline static int32_t get_offset_of__action_2() { return static_cast<int32_t>(offsetof(ScheduledItem_t1993320728, ____action_2)); }
	inline Action_t441168646 * get__action_2() const { return ____action_2; }
	inline Action_t441168646 ** get_address_of__action_2() { return &____action_2; }
	inline void set__action_2(Action_t441168646 * value)
	{
		____action_2 = value;
		Il2CppCodeGenWriteBarrier((&____action_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULEDITEM_T1993320728_H
#ifndef OBSERVABLE_T3965122885_H
#define OBSERVABLE_T3965122885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable
struct  Observable_t3965122885  : public RuntimeObject
{
public:

public:
};

struct Observable_t3965122885_StaticFields
{
public:
	// System.TimeSpan UniRx.Observable::InfiniteTimeSpan
	TimeSpan_t1412719355  ___InfiniteTimeSpan_0;
	// System.Collections.Generic.HashSet`1<System.Type> UniRx.Observable::YieldInstructionTypes
	HashSet_1_t4280213245 * ___YieldInstructionTypes_1;
	// System.Func`3<UniRx.IObserver`1<System.Int64>,UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable::<>f__mg$cache0
	Func_3_t2874073423 * ___U3CU3Ef__mgU24cache0_2;
	// System.Func`3<UniRx.IObserver`1<System.Int64>,UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable::<>f__mg$cache1
	Func_3_t2874073423 * ___U3CU3Ef__mgU24cache1_3;
	// System.Func`3<UniRx.IObserver`1<System.Int64>,UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable::<>f__mg$cache2
	Func_3_t2874073423 * ___U3CU3Ef__mgU24cache2_4;
	// System.Func`3<System.Int64,UniRx.Unit,System.Int64> UniRx.Observable::<>f__am$cache0
	Func_3_t2854336645 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`3<System.Int64,UniRx.Unit,System.Int64> UniRx.Observable::<>f__am$cache1
	Func_3_t2854336645 * ___U3CU3Ef__amU24cache1_6;
	// System.Func`3<UniRx.IObserver`1<System.Int64>,UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable::<>f__am$cache2
	Func_3_t2874073423 * ___U3CU3Ef__amU24cache2_7;
	// System.Func`3<UniRx.IObserver`1<UniRx.Unit>,UniRx.CancellationToken,System.Collections.IEnumerator> UniRx.Observable::<>f__mg$cache3
	Func_3_t3733236492 * ___U3CU3Ef__mgU24cache3_8;

public:
	inline static int32_t get_offset_of_InfiniteTimeSpan_0() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___InfiniteTimeSpan_0)); }
	inline TimeSpan_t1412719355  get_InfiniteTimeSpan_0() const { return ___InfiniteTimeSpan_0; }
	inline TimeSpan_t1412719355 * get_address_of_InfiniteTimeSpan_0() { return &___InfiniteTimeSpan_0; }
	inline void set_InfiniteTimeSpan_0(TimeSpan_t1412719355  value)
	{
		___InfiniteTimeSpan_0 = value;
	}

	inline static int32_t get_offset_of_YieldInstructionTypes_1() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___YieldInstructionTypes_1)); }
	inline HashSet_1_t4280213245 * get_YieldInstructionTypes_1() const { return ___YieldInstructionTypes_1; }
	inline HashSet_1_t4280213245 ** get_address_of_YieldInstructionTypes_1() { return &___YieldInstructionTypes_1; }
	inline void set_YieldInstructionTypes_1(HashSet_1_t4280213245 * value)
	{
		___YieldInstructionTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___YieldInstructionTypes_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Func_3_t2874073423 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Func_3_t2874073423 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Func_3_t2874073423 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_3() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__mgU24cache1_3)); }
	inline Func_3_t2874073423 * get_U3CU3Ef__mgU24cache1_3() const { return ___U3CU3Ef__mgU24cache1_3; }
	inline Func_3_t2874073423 ** get_address_of_U3CU3Ef__mgU24cache1_3() { return &___U3CU3Ef__mgU24cache1_3; }
	inline void set_U3CU3Ef__mgU24cache1_3(Func_3_t2874073423 * value)
	{
		___U3CU3Ef__mgU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_4() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__mgU24cache2_4)); }
	inline Func_3_t2874073423 * get_U3CU3Ef__mgU24cache2_4() const { return ___U3CU3Ef__mgU24cache2_4; }
	inline Func_3_t2874073423 ** get_address_of_U3CU3Ef__mgU24cache2_4() { return &___U3CU3Ef__mgU24cache2_4; }
	inline void set_U3CU3Ef__mgU24cache2_4(Func_3_t2874073423 * value)
	{
		___U3CU3Ef__mgU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_3_t2854336645 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_3_t2854336645 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_3_t2854336645 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_3_t2854336645 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_3_t2854336645 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_3_t2854336645 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Func_3_t2874073423 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Func_3_t2874073423 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Func_3_t2874073423 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_8() { return static_cast<int32_t>(offsetof(Observable_t3965122885_StaticFields, ___U3CU3Ef__mgU24cache3_8)); }
	inline Func_3_t3733236492 * get_U3CU3Ef__mgU24cache3_8() const { return ___U3CU3Ef__mgU24cache3_8; }
	inline Func_3_t3733236492 ** get_address_of_U3CU3Ef__mgU24cache3_8() { return &___U3CU3Ef__mgU24cache3_8; }
	inline void set_U3CU3Ef__mgU24cache3_8(Func_3_t3733236492 * value)
	{
		___U3CU3Ef__mgU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVABLE_T3965122885_H
#ifndef EVERYAFTERUPDATEINVOKER_T2848937644_H
#define EVERYAFTERUPDATEINVOKER_T2848937644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/EveryAfterUpdateInvoker
struct  EveryAfterUpdateInvoker_t2848937644  : public RuntimeObject
{
public:
	// System.Int64 UniRx.Observable/EveryAfterUpdateInvoker::count
	int64_t ___count_0;
	// UniRx.IObserver`1<System.Int64> UniRx.Observable/EveryAfterUpdateInvoker::observer
	RuntimeObject* ___observer_1;
	// UniRx.CancellationToken UniRx.Observable/EveryAfterUpdateInvoker::cancellationToken
	CancellationToken_t634065412  ___cancellationToken_2;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(EveryAfterUpdateInvoker_t2848937644, ___count_0)); }
	inline int64_t get_count_0() const { return ___count_0; }
	inline int64_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int64_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(EveryAfterUpdateInvoker_t2848937644, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((&___observer_1), value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(EveryAfterUpdateInvoker_t2848937644, ___cancellationToken_2)); }
	inline CancellationToken_t634065412  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t634065412 * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t634065412  value)
	{
		___cancellationToken_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVERYAFTERUPDATEINVOKER_T2848937644_H
#ifndef U3CTIMERFRAMECOREU3EC__ITERATOR8_T3548952191_H
#define U3CTIMERFRAMECOREU3EC__ITERATOR8_T3548952191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<TimerFrameCore>c__Iterator8
struct  U3CTimerFrameCoreU3Ec__Iterator8_t3548952191  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator8::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_0;
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator8::periodFrameCount
	int32_t ___periodFrameCount_1;
	// System.Int64 UniRx.Observable/<TimerFrameCore>c__Iterator8::<sendCount>__0
	int64_t ___U3CsendCountU3E__0_2;
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator8::<currentFrame>__0
	int32_t ___U3CcurrentFrameU3E__0_3;
	// UniRx.CancellationToken UniRx.Observable/<TimerFrameCore>c__Iterator8::cancel
	CancellationToken_t634065412  ___cancel_4;
	// UniRx.IObserver`1<System.Int64> UniRx.Observable/<TimerFrameCore>c__Iterator8::observer
	RuntimeObject* ___observer_5;
	// System.Object UniRx.Observable/<TimerFrameCore>c__Iterator8::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean UniRx.Observable/<TimerFrameCore>c__Iterator8::$disposing
	bool ___U24disposing_7;
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator8::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_dueTimeFrameCount_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___dueTimeFrameCount_0)); }
	inline int32_t get_dueTimeFrameCount_0() const { return ___dueTimeFrameCount_0; }
	inline int32_t* get_address_of_dueTimeFrameCount_0() { return &___dueTimeFrameCount_0; }
	inline void set_dueTimeFrameCount_0(int32_t value)
	{
		___dueTimeFrameCount_0 = value;
	}

	inline static int32_t get_offset_of_periodFrameCount_1() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___periodFrameCount_1)); }
	inline int32_t get_periodFrameCount_1() const { return ___periodFrameCount_1; }
	inline int32_t* get_address_of_periodFrameCount_1() { return &___periodFrameCount_1; }
	inline void set_periodFrameCount_1(int32_t value)
	{
		___periodFrameCount_1 = value;
	}

	inline static int32_t get_offset_of_U3CsendCountU3E__0_2() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___U3CsendCountU3E__0_2)); }
	inline int64_t get_U3CsendCountU3E__0_2() const { return ___U3CsendCountU3E__0_2; }
	inline int64_t* get_address_of_U3CsendCountU3E__0_2() { return &___U3CsendCountU3E__0_2; }
	inline void set_U3CsendCountU3E__0_2(int64_t value)
	{
		___U3CsendCountU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E__0_3() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___U3CcurrentFrameU3E__0_3)); }
	inline int32_t get_U3CcurrentFrameU3E__0_3() const { return ___U3CcurrentFrameU3E__0_3; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E__0_3() { return &___U3CcurrentFrameU3E__0_3; }
	inline void set_U3CcurrentFrameU3E__0_3(int32_t value)
	{
		___U3CcurrentFrameU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_cancel_4() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___cancel_4)); }
	inline CancellationToken_t634065412  get_cancel_4() const { return ___cancel_4; }
	inline CancellationToken_t634065412 * get_address_of_cancel_4() { return &___cancel_4; }
	inline void set_cancel_4(CancellationToken_t634065412  value)
	{
		___cancel_4 = value;
	}

	inline static int32_t get_offset_of_observer_5() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___observer_5)); }
	inline RuntimeObject* get_observer_5() const { return ___observer_5; }
	inline RuntimeObject** get_address_of_observer_5() { return &___observer_5; }
	inline void set_observer_5(RuntimeObject* value)
	{
		___observer_5 = value;
		Il2CppCodeGenWriteBarrier((&___observer_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator8_t3548952191, ___U24PC_8)); }
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
#endif // U3CTIMERFRAMECOREU3EC__ITERATOR8_T3548952191_H
#ifndef U3CNEXTFRAMECOREU3EC__ITERATOR6_T2441039317_H
#define U3CNEXTFRAMECOREU3EC__ITERATOR6_T2441039317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<NextFrameCore>c__Iterator6
struct  U3CNextFrameCoreU3Ec__Iterator6_t2441039317  : public RuntimeObject
{
public:
	// UniRx.CancellationToken UniRx.Observable/<NextFrameCore>c__Iterator6::cancellation
	CancellationToken_t634065412  ___cancellation_0;
	// UniRx.IObserver`1<UniRx.Unit> UniRx.Observable/<NextFrameCore>c__Iterator6::observer
	RuntimeObject* ___observer_1;
	// System.Object UniRx.Observable/<NextFrameCore>c__Iterator6::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UniRx.Observable/<NextFrameCore>c__Iterator6::$disposing
	bool ___U24disposing_3;
	// System.Int32 UniRx.Observable/<NextFrameCore>c__Iterator6::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_cancellation_0() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ec__Iterator6_t2441039317, ___cancellation_0)); }
	inline CancellationToken_t634065412  get_cancellation_0() const { return ___cancellation_0; }
	inline CancellationToken_t634065412 * get_address_of_cancellation_0() { return &___cancellation_0; }
	inline void set_cancellation_0(CancellationToken_t634065412  value)
	{
		___cancellation_0 = value;
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ec__Iterator6_t2441039317, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((&___observer_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ec__Iterator6_t2441039317, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ec__Iterator6_t2441039317, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ec__Iterator6_t2441039317, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNEXTFRAMECOREU3EC__ITERATOR6_T2441039317_H
#ifndef U3CEVERYCYCLECOREU3EC__ITERATOR5_T627863916_H
#define U3CEVERYCYCLECOREU3EC__ITERATOR5_T627863916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<EveryCycleCore>c__Iterator5
struct  U3CEveryCycleCoreU3Ec__Iterator5_t627863916  : public RuntimeObject
{
public:
	// UniRx.CancellationToken UniRx.Observable/<EveryCycleCore>c__Iterator5::cancellationToken
	CancellationToken_t634065412  ___cancellationToken_0;
	// System.Int64 UniRx.Observable/<EveryCycleCore>c__Iterator5::<count>__0
	int64_t ___U3CcountU3E__0_1;
	// UniRx.IObserver`1<System.Int64> UniRx.Observable/<EveryCycleCore>c__Iterator5::observer
	RuntimeObject* ___observer_2;
	// System.Object UniRx.Observable/<EveryCycleCore>c__Iterator5::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UniRx.Observable/<EveryCycleCore>c__Iterator5::$disposing
	bool ___U24disposing_4;
	// System.Int32 UniRx.Observable/<EveryCycleCore>c__Iterator5::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_cancellationToken_0() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___cancellationToken_0)); }
	inline CancellationToken_t634065412  get_cancellationToken_0() const { return ___cancellationToken_0; }
	inline CancellationToken_t634065412 * get_address_of_cancellationToken_0() { return &___cancellationToken_0; }
	inline void set_cancellationToken_0(CancellationToken_t634065412  value)
	{
		___cancellationToken_0 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___U3CcountU3E__0_1)); }
	inline int64_t get_U3CcountU3E__0_1() const { return ___U3CcountU3E__0_1; }
	inline int64_t* get_address_of_U3CcountU3E__0_1() { return &___U3CcountU3E__0_1; }
	inline void set_U3CcountU3E__0_1(int64_t value)
	{
		___U3CcountU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_observer_2() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___observer_2)); }
	inline RuntimeObject* get_observer_2() const { return ___observer_2; }
	inline RuntimeObject** get_address_of_observer_2() { return &___observer_2; }
	inline void set_observer_2(RuntimeObject* value)
	{
		___observer_2 = value;
		Il2CppCodeGenWriteBarrier((&___observer_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ec__Iterator5_t627863916, ___U24PC_5)); }
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
#endif // U3CEVERYCYCLECOREU3EC__ITERATOR5_T627863916_H
#ifndef U3CWRAPTOCANCELLABLEENUMERATORU3EC__ITERATOR4_T4056919624_H
#define U3CWRAPTOCANCELLABLEENUMERATORU3EC__ITERATOR4_T4056919624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4
struct  U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::<hasNext>__0
	bool ___U3ChasNextU3E__0_0;
	// System.Collections.IEnumerator UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::enumerator
	RuntimeObject* ___enumerator_1;
	// UniRx.CancellationToken UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::cancellationToken
	CancellationToken_t634065412  ___cancellationToken_2;
	// System.Object UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::$disposing
	bool ___U24disposing_4;
	// System.Int32 UniRx.Observable/<WrapToCancellableEnumerator>c__Iterator4::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3ChasNextU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___U3ChasNextU3E__0_0)); }
	inline bool get_U3ChasNextU3E__0_0() const { return ___U3ChasNextU3E__0_0; }
	inline bool* get_address_of_U3ChasNextU3E__0_0() { return &___U3ChasNextU3E__0_0; }
	inline void set_U3ChasNextU3E__0_0(bool value)
	{
		___U3ChasNextU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_enumerator_1() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___enumerator_1)); }
	inline RuntimeObject* get_enumerator_1() const { return ___enumerator_1; }
	inline RuntimeObject** get_address_of_enumerator_1() { return &___enumerator_1; }
	inline void set_enumerator_1(RuntimeObject* value)
	{
		___enumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_1), value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___cancellationToken_2)); }
	inline CancellationToken_t634065412  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t634065412 * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t634065412  value)
	{
		___cancellationToken_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624, ___U24PC_5)); }
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
#endif // U3CWRAPTOCANCELLABLEENUMERATORU3EC__ITERATOR4_T4056919624_H
#ifndef NOTIFICATIONKIND_T725073064_H
#define NOTIFICATIONKIND_T725073064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.NotificationKind
struct  NotificationKind_t725073064 
{
public:
	// System.Int32 UniRx.NotificationKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NotificationKind_t725073064, ___value___1)); }
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
#endif // NOTIFICATIONKIND_T725073064_H
#ifndef U3CTIMERFRAMECOREU3EC__ITERATOR7_T2812723333_H
#define U3CTIMERFRAMECOREU3EC__ITERATOR7_T2812723333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observable/<TimerFrameCore>c__Iterator7
struct  U3CTimerFrameCoreU3Ec__Iterator7_t2812723333  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator7::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_0;
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator7::<currentFrame>__0
	int32_t ___U3CcurrentFrameU3E__0_1;
	// UniRx.CancellationToken UniRx.Observable/<TimerFrameCore>c__Iterator7::cancel
	CancellationToken_t634065412  ___cancel_2;
	// UniRx.IObserver`1<System.Int64> UniRx.Observable/<TimerFrameCore>c__Iterator7::observer
	RuntimeObject* ___observer_3;
	// System.Object UniRx.Observable/<TimerFrameCore>c__Iterator7::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean UniRx.Observable/<TimerFrameCore>c__Iterator7::$disposing
	bool ___U24disposing_5;
	// System.Int32 UniRx.Observable/<TimerFrameCore>c__Iterator7::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_dueTimeFrameCount_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___dueTimeFrameCount_0)); }
	inline int32_t get_dueTimeFrameCount_0() const { return ___dueTimeFrameCount_0; }
	inline int32_t* get_address_of_dueTimeFrameCount_0() { return &___dueTimeFrameCount_0; }
	inline void set_dueTimeFrameCount_0(int32_t value)
	{
		___dueTimeFrameCount_0 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E__0_1() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___U3CcurrentFrameU3E__0_1)); }
	inline int32_t get_U3CcurrentFrameU3E__0_1() const { return ___U3CcurrentFrameU3E__0_1; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E__0_1() { return &___U3CcurrentFrameU3E__0_1; }
	inline void set_U3CcurrentFrameU3E__0_1(int32_t value)
	{
		___U3CcurrentFrameU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_cancel_2() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___cancel_2)); }
	inline CancellationToken_t634065412  get_cancel_2() const { return ___cancel_2; }
	inline CancellationToken_t634065412 * get_address_of_cancel_2() { return &___cancel_2; }
	inline void set_cancel_2(CancellationToken_t634065412  value)
	{
		___cancel_2 = value;
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((&___observer_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ec__Iterator7_t2812723333, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMERFRAMECOREU3EC__ITERATOR7_T2812723333_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (BooleanDisposable_t267319562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2000[1] = 
{
	BooleanDisposable_t267319562::get_offset_of_U3CIsDisposedU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (CompositeDisposable_t1252303580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2001[5] = 
{
	CompositeDisposable_t1252303580::get_offset_of__gate_0(),
	CompositeDisposable_t1252303580::get_offset_of__disposed_1(),
	CompositeDisposable_t1252303580::get_offset_of__disposables_2(),
	CompositeDisposable_t1252303580::get_offset_of__count_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2002[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (Disposable_t303996215), -1, sizeof(Disposable_t303996215_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2003[1] = 
{
	Disposable_t303996215_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (EmptyDisposable_t3354462109), -1, sizeof(EmptyDisposable_t3354462109_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2004[1] = 
{
	EmptyDisposable_t3354462109_StaticFields::get_offset_of_Singleton_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (AnonymousDisposable_t2357074146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2005[2] = 
{
	AnonymousDisposable_t2357074146::get_offset_of_isDisposed_0(),
	AnonymousDisposable_t2357074146::get_offset_of_dispose_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (DisposableExtensions_t3371619886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2008[5] = 
{
	U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083::get_offset_of_trigger_0(),
	U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083::get_offset_of_targetGameObject_1(),
	U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083::get_offset_of_U24current_2(),
	U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083::get_offset_of_U24disposing_3(),
	U3CMonitorTriggerHealthU3Ec__Iterator0_t3815226083::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (MultipleAssignmentDisposable_t2763624440), -1, sizeof(MultipleAssignmentDisposable_t2763624440_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2010[3] = 
{
	MultipleAssignmentDisposable_t2763624440_StaticFields::get_offset_of_True_0(),
	MultipleAssignmentDisposable_t2763624440::get_offset_of_gate_1(),
	MultipleAssignmentDisposable_t2763624440::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (RefCountDisposable_t3254589225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[4] = 
{
	RefCountDisposable_t3254589225::get_offset_of__gate_0(),
	RefCountDisposable_t3254589225::get_offset_of__disposable_1(),
	RefCountDisposable_t3254589225::get_offset_of__isPrimaryDisposed_2(),
	RefCountDisposable_t3254589225::get_offset_of__count_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (InnerDisposable_t3350648439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2012[2] = 
{
	InnerDisposable_t3350648439::get_offset_of__parent_0(),
	InnerDisposable_t3350648439::get_offset_of_parentLock_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (Observable_t3965122885), -1, sizeof(Observable_t3965122885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2013[9] = 
{
	Observable_t3965122885_StaticFields::get_offset_of_InfiniteTimeSpan_0(),
	Observable_t3965122885_StaticFields::get_offset_of_YieldInstructionTypes_1(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_2(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_3(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_4(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_6(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_7(),
	Observable_t3965122885_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2014[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2015[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (EveryAfterUpdateInvoker_t2848937644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2016[3] = 
{
	EveryAfterUpdateInvoker_t2848937644::get_offset_of_count_0(),
	EveryAfterUpdateInvoker_t2848937644::get_offset_of_observer_1(),
	EveryAfterUpdateInvoker_t2848937644::get_offset_of_cancellationToken_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2017[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2018[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2019[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2020[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2021[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (U3CToAsyncU3Ec__AnonStoreyD_t1257328641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2022[2] = 
{
	U3CToAsyncU3Ec__AnonStoreyD_t1257328641::get_offset_of_scheduler_0(),
	U3CToAsyncU3Ec__AnonStoreyD_t1257328641::get_offset_of_action_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (U3CToAsyncU3Ec__AnonStoreyE_t1397792885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2023[2] = 
{
	U3CToAsyncU3Ec__AnonStoreyE_t1397792885::get_offset_of_subject_0(),
	U3CToAsyncU3Ec__AnonStoreyE_t1397792885::get_offset_of_U3CU3Ef__refU2413_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2024[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2025[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2026[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2027[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2028[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2029[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2030[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2031[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2032[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2033[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2034[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (U3CFromAsyncPatternU3Ec__AnonStorey1A_t753551102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2035[1] = 
{
	U3CFromAsyncPatternU3Ec__AnonStorey1A_t753551102::get_offset_of_end_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2036[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2037[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (U3CFromCoroutineU3Ec__AnonStorey1D_t41164812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2038[2] = 
{
	U3CFromCoroutineU3Ec__AnonStorey1D_t41164812::get_offset_of_coroutine_0(),
	U3CFromCoroutineU3Ec__AnonStorey1D_t41164812::get_offset_of_publishEveryYield_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { sizeof (U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2039[2] = 
{
	U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121::get_offset_of_coroutine_0(),
	U3CFromCoroutineU3Ec__AnonStorey1E_t2792171121::get_offset_of_publishEveryYield_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { sizeof (U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2040[2] = 
{
	U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104::get_offset_of_coroutine_0(),
	U3CFromMicroCoroutineU3Ec__AnonStorey1F_t1089390104::get_offset_of_publishEveryYield_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { sizeof (U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2041[2] = 
{
	U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949::get_offset_of_coroutine_0(),
	U3CFromMicroCoroutineU3Ec__AnonStorey20_t2503987949::get_offset_of_publishEveryYield_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { sizeof (U3CWrapEnumeratorU3Ec__Iterator2_t2207008758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2042[11] = 
{
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U3ChasNextU3E__0_0(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U3CraisedErrorU3E__0_1(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_enumerator_2(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_observer_3(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_publishEveryYield_4(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U3CcurrentU3E__1_5(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U3CcustomHandlerU3E__1_6(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_cancellationToken_7(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U24current_8(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U24disposing_9(),
	U3CWrapEnumeratorU3Ec__Iterator2_t2207008758::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2043[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2044 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2044[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2045 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2045[11] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2046 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2046[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2047 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2047[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2048 = { sizeof (U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2048[6] = 
{
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_U3ChasNextU3E__0_0(),
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_enumerator_1(),
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_cancellationToken_2(),
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_U24current_3(),
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_U24disposing_4(),
	U3CWrapToCancellableEnumeratorU3Ec__Iterator4_t4056919624::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2049 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2049[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2050 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2050[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2051 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2051[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2052 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2052[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2053 = { sizeof (U3CToObservableU3Ec__AnonStorey29_t3464301533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2053[2] = 
{
	U3CToObservableU3Ec__AnonStorey29_t3464301533::get_offset_of_coroutine_0(),
	U3CToObservableU3Ec__AnonStorey29_t3464301533::get_offset_of_publishEveryYield_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2054 = { sizeof (U3CEveryCycleCoreU3Ec__Iterator5_t627863916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2054[6] = 
{
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_cancellationToken_0(),
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_U3CcountU3E__0_1(),
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_observer_2(),
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_U24current_3(),
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_U24disposing_4(),
	U3CEveryCycleCoreU3Ec__Iterator5_t627863916::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2055 = { sizeof (U3CNextFrameCoreU3Ec__Iterator6_t2441039317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2055[5] = 
{
	U3CNextFrameCoreU3Ec__Iterator6_t2441039317::get_offset_of_cancellation_0(),
	U3CNextFrameCoreU3Ec__Iterator6_t2441039317::get_offset_of_observer_1(),
	U3CNextFrameCoreU3Ec__Iterator6_t2441039317::get_offset_of_U24current_2(),
	U3CNextFrameCoreU3Ec__Iterator6_t2441039317::get_offset_of_U24disposing_3(),
	U3CNextFrameCoreU3Ec__Iterator6_t2441039317::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2056 = { sizeof (U3CTimerFrameU3Ec__AnonStorey2A_t267620843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2056[1] = 
{
	U3CTimerFrameU3Ec__AnonStorey2A_t267620843::get_offset_of_dueTimeFrameCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2057 = { sizeof (U3CTimerFrameU3Ec__AnonStorey2B_t3072116678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2057[2] = 
{
	U3CTimerFrameU3Ec__AnonStorey2B_t3072116678::get_offset_of_dueTimeFrameCount_0(),
	U3CTimerFrameU3Ec__AnonStorey2B_t3072116678::get_offset_of_periodFrameCount_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2058 = { sizeof (U3CTimerFrameCoreU3Ec__Iterator7_t2812723333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2058[7] = 
{
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_dueTimeFrameCount_0(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_U3CcurrentFrameU3E__0_1(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_cancel_2(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_observer_3(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_U24current_4(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_U24disposing_5(),
	U3CTimerFrameCoreU3Ec__Iterator7_t2812723333::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2059 = { sizeof (U3CTimerFrameCoreU3Ec__Iterator8_t3548952191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2059[9] = 
{
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_dueTimeFrameCount_0(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_periodFrameCount_1(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_U3CsendCountU3E__0_2(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_U3CcurrentFrameU3E__0_3(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_cancel_4(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_observer_5(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_U24current_6(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_U24disposing_7(),
	U3CTimerFrameCoreU3Ec__Iterator8_t3548952191::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2060 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2060[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2061 = { sizeof (ScheduledDisposable_t2493402679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2061[3] = 
{
	ScheduledDisposable_t2493402679::get_offset_of_scheduler_0(),
	ScheduledDisposable_t2493402679::get_offset_of_disposable_1(),
	ScheduledDisposable_t2493402679::get_offset_of_isDisposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2062 = { sizeof (SerialDisposable_t1774394752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2062[3] = 
{
	SerialDisposable_t1774394752::get_offset_of_gate_0(),
	SerialDisposable_t1774394752::get_offset_of_current_1(),
	SerialDisposable_t1774394752::get_offset_of_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2063 = { sizeof (SingleAssignmentDisposable_t4273953033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2063[3] = 
{
	SingleAssignmentDisposable_t4273953033::get_offset_of_gate_0(),
	SingleAssignmentDisposable_t4273953033::get_offset_of_current_1(),
	SingleAssignmentDisposable_t4273953033::get_offset_of_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2064 = { sizeof (StableCompositeDisposable_t336377914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2065 = { sizeof (Binary_t2210356996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2065[3] = 
{
	Binary_t2210356996::get_offset_of_disposedCallCount_0(),
	Binary_t2210356996::get_offset_of__disposable1_1(),
	Binary_t2210356996::get_offset_of__disposable2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2066 = { sizeof (Trinary_t705153811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2066[4] = 
{
	Trinary_t705153811::get_offset_of_disposedCallCount_0(),
	Trinary_t705153811::get_offset_of__disposable1_1(),
	Trinary_t705153811::get_offset_of__disposable2_2(),
	Trinary_t705153811::get_offset_of__disposable3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2067 = { sizeof (Quaternary_t1831393202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2067[5] = 
{
	Quaternary_t1831393202::get_offset_of_disposedCallCount_0(),
	Quaternary_t1831393202::get_offset_of__disposable1_1(),
	Quaternary_t1831393202::get_offset_of__disposable2_2(),
	Quaternary_t1831393202::get_offset_of__disposable3_3(),
	Quaternary_t1831393202::get_offset_of__disposable4_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2068 = { sizeof (NAry_t1077724770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2068[2] = 
{
	NAry_t1077724770::get_offset_of_disposedCallCount_0(),
	NAry_t1077724770::get_offset_of__disposables_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2069 = { sizeof (NAryUnsafe_t581227384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2069[2] = 
{
	NAryUnsafe_t581227384::get_offset_of_disposedCallCount_0(),
	NAryUnsafe_t581227384::get_offset_of__disposables_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2070 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2071 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2072 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2072[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2073 = { sizeof (AsyncLock_t984821197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2073[3] = 
{
	AsyncLock_t984821197::get_offset_of_queue_0(),
	AsyncLock_t984821197::get_offset_of_isAcquired_1(),
	AsyncLock_t984821197::get_offset_of_hasFaulted_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2074 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2074[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2075 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2075[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2076 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2076[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2077 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2077[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2078 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2078[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2079 = { sizeof (MicroCoroutine_t758758931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2079[8] = 
{
	0,
	MicroCoroutine_t758758931::get_offset_of_runningAndQueueLock_1(),
	MicroCoroutine_t758758931::get_offset_of_arrayLock_2(),
	MicroCoroutine_t758758931::get_offset_of_unhandledExceptionCallback_3(),
	MicroCoroutine_t758758931::get_offset_of_tail_4(),
	MicroCoroutine_t758758931::get_offset_of_running_5(),
	MicroCoroutine_t758758931::get_offset_of_coroutines_6(),
	MicroCoroutine_t758758931::get_offset_of_waitQueue_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2080 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2080[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2081 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2081[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2082 = { sizeof (ScheduledItem_t1993320728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2082[3] = 
{
	ScheduledItem_t1993320728::get_offset_of__disposable_0(),
	ScheduledItem_t1993320728::get_offset_of__dueTime_1(),
	ScheduledItem_t1993320728::get_offset_of__action_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2083 = { sizeof (SchedulerQueue_t3289265577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2083[1] = 
{
	SchedulerQueue_t3289265577::get_offset_of__queue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2084 = { sizeof (ThreadSafeQueueWorker_t2203656433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2084[10] = 
{
	0,
	0,
	ThreadSafeQueueWorker_t2203656433::get_offset_of_gate_2(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_dequing_3(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_actionListCount_4(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_actionList_5(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_actionStates_6(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_waitingListCount_7(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_waitingList_8(),
	ThreadSafeQueueWorker_t2203656433::get_offset_of_waitingStates_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2085 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2086 = { sizeof (NotificationKind_t725073064)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2086[4] = 
{
	NotificationKind_t725073064::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2087 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2088 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2088[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2089 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2089[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2090 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2091 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2091[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2092 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2092[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2093 = { sizeof (Notification_t1921566780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2094 = { sizeof (BooleanNotifier_t2678395376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2094[2] = 
{
	BooleanNotifier_t2678395376::get_offset_of_boolTrigger_0(),
	BooleanNotifier_t2678395376::get_offset_of_boolValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2095 = { sizeof (CountChangedStatus_t1305631405)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2095[5] = 
{
	CountChangedStatus_t1305631405::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2096 = { sizeof (CountNotifier_t436721851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2096[4] = 
{
	CountNotifier_t436721851::get_offset_of_lockObject_0(),
	CountNotifier_t436721851::get_offset_of_statusChanged_1(),
	CountNotifier_t436721851::get_offset_of_max_2(),
	CountNotifier_t436721851::get_offset_of_U3CCountU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2097 = { sizeof (U3CIncrementU3Ec__AnonStorey0_t4229625713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2097[2] = 
{
	U3CIncrementU3Ec__AnonStorey0_t4229625713::get_offset_of_incrementCount_0(),
	U3CIncrementU3Ec__AnonStorey0_t4229625713::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2098 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2099 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
