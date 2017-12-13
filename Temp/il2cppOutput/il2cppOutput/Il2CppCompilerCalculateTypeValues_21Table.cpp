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

// UniRx.IMessageBroker
struct IMessageBroker_t2448604484;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t2190876459;
// UniRx.IAsyncMessageBroker
struct IAsyncMessageBroker_t3612693877;
// System.Action
struct Action_t441168646;
// System.Action`1<System.Exception>
struct Action_1_t2956856813;




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
#ifndef MESSAGEBROKER_T2925179866_H
#define MESSAGEBROKER_T2925179866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.MessageBroker
struct  MessageBroker_t2925179866  : public RuntimeObject
{
public:
	// System.Boolean UniRx.MessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.MessageBroker::notifiers
	Dictionary_2_t2190876459 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(MessageBroker_t2925179866, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(MessageBroker_t2925179866, ___notifiers_2)); }
	inline Dictionary_2_t2190876459 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t2190876459 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t2190876459 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct MessageBroker_t2925179866_StaticFields
{
public:
	// UniRx.IMessageBroker UniRx.MessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(MessageBroker_t2925179866_StaticFields, ___Default_0)); }
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
#endif // MESSAGEBROKER_T2925179866_H
#ifndef ASYNCMESSAGEBROKER_T1781704690_H
#define ASYNCMESSAGEBROKER_T1781704690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncMessageBroker
struct  AsyncMessageBroker_t1781704690  : public RuntimeObject
{
public:
	// System.Boolean UniRx.AsyncMessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.AsyncMessageBroker::notifiers
	Dictionary_2_t2190876459 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t1781704690, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t1781704690, ___notifiers_2)); }
	inline Dictionary_2_t2190876459 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t2190876459 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t2190876459 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct AsyncMessageBroker_t1781704690_StaticFields
{
public:
	// UniRx.IAsyncMessageBroker UniRx.AsyncMessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t1781704690_StaticFields, ___Default_0)); }
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
#endif // ASYNCMESSAGEBROKER_T1781704690_H
#ifndef OBSERVER_T1688656468_H
#define OBSERVER_T1688656468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observer
struct  Observer_t1688656468  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVER_T1688656468_H
#ifndef OBSERVEREXTENSIONS_T539421085_H
#define OBSERVEREXTENSIONS_T539421085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObserverExtensions
struct  ObserverExtensions_t539421085  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVEREXTENSIONS_T539421085_H
#ifndef OBSERVABLEEXTENSIONS_T2307991648_H
#define OBSERVABLEEXTENSIONS_T2307991648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableExtensions
struct  ObservableExtensions_t2307991648  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVABLEEXTENSIONS_T2307991648_H
#ifndef STUBS_T2330912281_H
#define STUBS_T2330912281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Stubs
struct  Stubs_t2330912281  : public RuntimeObject
{
public:

public:
};

struct Stubs_t2330912281_StaticFields
{
public:
	// System.Action UniRx.Stubs::Nop
	Action_t441168646 * ___Nop_0;
	// System.Action`1<System.Exception> UniRx.Stubs::Throw
	Action_1_t2956856813 * ___Throw_1;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(Stubs_t2330912281_StaticFields, ___Nop_0)); }
	inline Action_t441168646 * get_Nop_0() const { return ___Nop_0; }
	inline Action_t441168646 ** get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(Action_t441168646 * value)
	{
		___Nop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Nop_0), value);
	}

	inline static int32_t get_offset_of_Throw_1() { return static_cast<int32_t>(offsetof(Stubs_t2330912281_StaticFields, ___Throw_1)); }
	inline Action_1_t2956856813 * get_Throw_1() const { return ___Throw_1; }
	inline Action_1_t2956856813 ** get_address_of_Throw_1() { return &___Throw_1; }
	inline void set_Throw_1(Action_1_t2956856813 * value)
	{
		___Throw_1 = value;
		Il2CppCodeGenWriteBarrier((&___Throw_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STUBS_T2330912281_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (MessageBroker_t2925179866), -1, sizeof(MessageBroker_t2925179866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2104[3] = 
{
	MessageBroker_t2925179866_StaticFields::get_offset_of_Default_0(),
	MessageBroker_t2925179866::get_offset_of_isDisposed_1(),
	MessageBroker_t2925179866::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (AsyncMessageBroker_t1781704690), -1, sizeof(AsyncMessageBroker_t1781704690_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2105[3] = 
{
	AsyncMessageBroker_t1781704690_StaticFields::get_offset_of_Default_0(),
	AsyncMessageBroker_t1781704690::get_offset_of_isDisposed_1(),
	AsyncMessageBroker_t1781704690::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2106[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2110[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (Observer_t1688656468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2112[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2113[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2114[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2116[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2117[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2118[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (ObserverExtensions_t539421085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (ObservableExtensions_t2307991648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (Stubs_t2330912281), -1, sizeof(Stubs_t2330912281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2122[2] = 
{
	Stubs_t2330912281_StaticFields::get_offset_of_Nop_0(),
	Stubs_t2330912281_StaticFields::get_offset_of_Throw_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2123[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2124[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[2] = 
{
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
extern const int32_t g_FieldOffsetTable2128[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2129[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2131[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2132[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2134[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2135[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2139[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2141[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2143[6] = 
{
	0,
	0,
	0,
	0,
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
extern const int32_t g_FieldOffsetTable2145[3] = 
{
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
extern const int32_t g_FieldOffsetTable2147[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2149[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2150[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2151[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2152[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2153[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2154[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2155[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2157[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2158[3] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2166[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2167[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2168[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2169[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2170[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2171[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2172[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2173[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2174[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2175[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2176[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2177[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2178[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2179[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2180[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2181[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2182[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2184[4] = 
{
	0,
	0,
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
extern const int32_t g_FieldOffsetTable2186[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2187[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2188[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2189[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2190[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2191[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2193[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2195[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2197[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2198[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2199[1] = 
{
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
