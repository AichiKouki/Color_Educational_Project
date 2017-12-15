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

// UniRx.Subject`1<System.Boolean>
struct Subject_1_t2553311609;
// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_t4122105378;
// UniRx.CountNotifier
struct CountNotifier_t170593930;
// UniRx.IMessageBroker
struct IMessageBroker_t161435551;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t3265008787;
// UniRx.IAsyncMessageBroker
struct IAsyncMessageBroker_t705778327;
// System.Action
struct Action_t1197992549;
// System.Action`1<System.Exception>
struct Action_1_t3262897446;
// System.Char[]
struct CharU5BU5D_t1406760238;




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
#ifndef NOTIFICATION_T3766727739_H
#define NOTIFICATION_T3766727739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Notification
struct  Notification_t3766727739  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATION_T3766727739_H
#ifndef BOOLEANNOTIFIER_T3340864187_H
#define BOOLEANNOTIFIER_T3340864187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.BooleanNotifier
struct  BooleanNotifier_t3340864187  : public RuntimeObject
{
public:
	// UniRx.Subject`1<System.Boolean> UniRx.BooleanNotifier::boolTrigger
	Subject_1_t2553311609 * ___boolTrigger_0;
	// System.Boolean UniRx.BooleanNotifier::boolValue
	bool ___boolValue_1;

public:
	inline static int32_t get_offset_of_boolTrigger_0() { return static_cast<int32_t>(offsetof(BooleanNotifier_t3340864187, ___boolTrigger_0)); }
	inline Subject_1_t2553311609 * get_boolTrigger_0() const { return ___boolTrigger_0; }
	inline Subject_1_t2553311609 ** get_address_of_boolTrigger_0() { return &___boolTrigger_0; }
	inline void set_boolTrigger_0(Subject_1_t2553311609 * value)
	{
		___boolTrigger_0 = value;
		Il2CppCodeGenWriteBarrier((&___boolTrigger_0), value);
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(BooleanNotifier_t3340864187, ___boolValue_1)); }
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
#endif // BOOLEANNOTIFIER_T3340864187_H
#ifndef COUNTNOTIFIER_T170593930_H
#define COUNTNOTIFIER_T170593930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier
struct  CountNotifier_t170593930  : public RuntimeObject
{
public:
	// System.Object UniRx.CountNotifier::lockObject
	RuntimeObject * ___lockObject_0;
	// UniRx.Subject`1<UniRx.CountChangedStatus> UniRx.CountNotifier::statusChanged
	Subject_1_t4122105378 * ___statusChanged_1;
	// System.Int32 UniRx.CountNotifier::max
	int32_t ___max_2;
	// System.Int32 UniRx.CountNotifier::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CountNotifier_t170593930, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_statusChanged_1() { return static_cast<int32_t>(offsetof(CountNotifier_t170593930, ___statusChanged_1)); }
	inline Subject_1_t4122105378 * get_statusChanged_1() const { return ___statusChanged_1; }
	inline Subject_1_t4122105378 ** get_address_of_statusChanged_1() { return &___statusChanged_1; }
	inline void set_statusChanged_1(Subject_1_t4122105378 * value)
	{
		___statusChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___statusChanged_1), value);
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(CountNotifier_t170593930, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CountNotifier_t170593930, ___U3CCountU3Ek__BackingField_3)); }
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
#endif // COUNTNOTIFIER_T170593930_H
#ifndef U3CINCREMENTU3EC__ANONSTOREY0_T124010684_H
#define U3CINCREMENTU3EC__ANONSTOREY0_T124010684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier/<Increment>c__AnonStorey0
struct  U3CIncrementU3Ec__AnonStorey0_t124010684  : public RuntimeObject
{
public:
	// System.Int32 UniRx.CountNotifier/<Increment>c__AnonStorey0::incrementCount
	int32_t ___incrementCount_0;
	// UniRx.CountNotifier UniRx.CountNotifier/<Increment>c__AnonStorey0::$this
	CountNotifier_t170593930 * ___U24this_1;

public:
	inline static int32_t get_offset_of_incrementCount_0() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t124010684, ___incrementCount_0)); }
	inline int32_t get_incrementCount_0() const { return ___incrementCount_0; }
	inline int32_t* get_address_of_incrementCount_0() { return &___incrementCount_0; }
	inline void set_incrementCount_0(int32_t value)
	{
		___incrementCount_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t124010684, ___U24this_1)); }
	inline CountNotifier_t170593930 * get_U24this_1() const { return ___U24this_1; }
	inline CountNotifier_t170593930 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CountNotifier_t170593930 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINCREMENTU3EC__ANONSTOREY0_T124010684_H
#ifndef MESSAGEBROKER_T3732791497_H
#define MESSAGEBROKER_T3732791497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.MessageBroker
struct  MessageBroker_t3732791497  : public RuntimeObject
{
public:
	// System.Boolean UniRx.MessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.MessageBroker::notifiers
	Dictionary_2_t3265008787 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(MessageBroker_t3732791497, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(MessageBroker_t3732791497, ___notifiers_2)); }
	inline Dictionary_2_t3265008787 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t3265008787 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t3265008787 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct MessageBroker_t3732791497_StaticFields
{
public:
	// UniRx.IMessageBroker UniRx.MessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(MessageBroker_t3732791497_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBROKER_T3732791497_H
#ifndef ASYNCMESSAGEBROKER_T2773350515_H
#define ASYNCMESSAGEBROKER_T2773350515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncMessageBroker
struct  AsyncMessageBroker_t2773350515  : public RuntimeObject
{
public:
	// System.Boolean UniRx.AsyncMessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.AsyncMessageBroker::notifiers
	Dictionary_2_t3265008787 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t2773350515, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t2773350515, ___notifiers_2)); }
	inline Dictionary_2_t3265008787 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t3265008787 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t3265008787 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct AsyncMessageBroker_t2773350515_StaticFields
{
public:
	// UniRx.IAsyncMessageBroker UniRx.AsyncMessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t2773350515_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCMESSAGEBROKER_T2773350515_H
#ifndef OBSERVER_T579997323_H
#define OBSERVER_T579997323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observer
struct  Observer_t579997323  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVER_T579997323_H
#ifndef OBSERVEREXTENSIONS_T1652111042_H
#define OBSERVEREXTENSIONS_T1652111042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObserverExtensions
struct  ObserverExtensions_t1652111042  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVEREXTENSIONS_T1652111042_H
#ifndef OBSERVABLEEXTENSIONS_T3226522144_H
#define OBSERVABLEEXTENSIONS_T3226522144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableExtensions
struct  ObservableExtensions_t3226522144  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVABLEEXTENSIONS_T3226522144_H
#ifndef STUBS_T2907671290_H
#define STUBS_T2907671290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Stubs
struct  Stubs_t2907671290  : public RuntimeObject
{
public:

public:
};

struct Stubs_t2907671290_StaticFields
{
public:
	// System.Action UniRx.Stubs::Nop
	Action_t1197992549 * ___Nop_0;
	// System.Action`1<System.Exception> UniRx.Stubs::Throw
	Action_1_t3262897446 * ___Throw_1;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(Stubs_t2907671290_StaticFields, ___Nop_0)); }
	inline Action_t1197992549 * get_Nop_0() const { return ___Nop_0; }
	inline Action_t1197992549 ** get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(Action_t1197992549 * value)
	{
		___Nop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Nop_0), value);
	}

	inline static int32_t get_offset_of_Throw_1() { return static_cast<int32_t>(offsetof(Stubs_t2907671290_StaticFields, ___Throw_1)); }
	inline Action_1_t3262897446 * get_Throw_1() const { return ___Throw_1; }
	inline Action_1_t3262897446 ** get_address_of_Throw_1() { return &___Throw_1; }
	inline void set_Throw_1(Action_1_t3262897446 * value)
	{
		___Throw_1 = value;
		Il2CppCodeGenWriteBarrier((&___Throw_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STUBS_T2907671290_H
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
#ifndef COUNTCHANGEDSTATUS_T1452012630_H
#define COUNTCHANGEDSTATUS_T1452012630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountChangedStatus
struct  CountChangedStatus_t1452012630 
{
public:
	// System.Int32 UniRx.CountChangedStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CountChangedStatus_t1452012630, ___value___1)); }
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
#endif // COUNTCHANGEDSTATUS_T1452012630_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2100[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2103[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (Notification_t3766727739), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (BooleanNotifier_t3340864187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2106[2] = 
{
	BooleanNotifier_t3340864187::get_offset_of_boolTrigger_0(),
	BooleanNotifier_t3340864187::get_offset_of_boolValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (CountChangedStatus_t1452012630)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2107[5] = 
{
	CountChangedStatus_t1452012630::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (CountNotifier_t170593930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[4] = 
{
	CountNotifier_t170593930::get_offset_of_lockObject_0(),
	CountNotifier_t170593930::get_offset_of_statusChanged_1(),
	CountNotifier_t170593930::get_offset_of_max_2(),
	CountNotifier_t170593930::get_offset_of_U3CCountU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (U3CIncrementU3Ec__AnonStorey0_t124010684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[2] = 
{
	U3CIncrementU3Ec__AnonStorey0_t124010684::get_offset_of_incrementCount_0(),
	U3CIncrementU3Ec__AnonStorey0_t124010684::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (MessageBroker_t3732791497), -1, sizeof(MessageBroker_t3732791497_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2116[3] = 
{
	MessageBroker_t3732791497_StaticFields::get_offset_of_Default_0(),
	MessageBroker_t3732791497::get_offset_of_isDisposed_1(),
	MessageBroker_t3732791497::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (AsyncMessageBroker_t2773350515), -1, sizeof(AsyncMessageBroker_t2773350515_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2117[3] = 
{
	AsyncMessageBroker_t2773350515_StaticFields::get_offset_of_Default_0(),
	AsyncMessageBroker_t2773350515::get_offset_of_isDisposed_1(),
	AsyncMessageBroker_t2773350515::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2118[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2119[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2120[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2121[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2122[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (Observer_t579997323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2124[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2127[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2128[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2129[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (ObserverExtensions_t1652111042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (ObservableExtensions_t3226522144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (Stubs_t2907671290), -1, sizeof(Stubs_t2907671290_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2134[2] = 
{
	Stubs_t2907671290_StaticFields::get_offset_of_Nop_0(),
	Stubs_t2907671290_StaticFields::get_offset_of_Throw_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2135[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2138[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2139[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2140[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2141[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2142[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2143[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2144[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2145[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2146[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2147[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2149[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2151[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2153[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2155[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2156[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2157[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2158[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2159[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2160[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2161[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2162[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2163[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2164[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2165[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2166[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2167[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2169[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2170[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2171[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2172[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2178[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2179[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2180[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2181[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2182[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2183[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2184[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2185[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2186[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2187[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2188[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2189[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2190[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2191[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2192[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2193[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2194[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2196[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2197[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2198[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2199[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
