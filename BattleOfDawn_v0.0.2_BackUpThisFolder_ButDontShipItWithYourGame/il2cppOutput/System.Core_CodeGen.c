#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_mE6A81D857AEE59CABDB7CE2E4EC14DEFE3B94EBE (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_m0E3D3D6CC1E9C9ED28CD989485766C91DC71042F (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001F System.Int32 System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Min_m08CFCF12550397A30F094F24E2F68AD21E98EC9F (void);
// 0x00000020 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_m30DE6D3273F1E770CC99EC43653F8F4BA4A94760 (void);
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000022 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000025 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000026 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004D System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004E System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004F TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000052 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000055 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000056 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000057 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000058 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000059 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000005B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000005C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000064 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000065 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000066 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000067 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000068 System.Void System.Linq.Set`1::Resize()
// 0x00000069 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000006A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000006B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000006C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000070 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000071 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000072 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000073 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000076 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000007A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000007B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000007C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000007E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000007F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000080 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000082 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000083 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000084 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000085 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000086 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000089 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000008B System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000008C System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000008D System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000008E System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000008F System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000095 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x00000097 System.Int32 System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x0000009C System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x0000009D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A1 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A2 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[163] = 
{
	Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337,
	Error_ArgumentOutOfRange_mE6A81D857AEE59CABDB7CE2E4EC14DEFE3B94EBE,
	Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF,
	Error_NoElements_m0E3D3D6CC1E9C9ED28CD989485766C91DC71042F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Min_m08CFCF12550397A30F094F24E2F68AD21E98EC9F,
	Enumerable_Max_m30DE6D3273F1E770CC99EC43653F8F4BA4A94760,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[163] = 
{
	2843,
	2843,
	3052,
	3052,
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
	2796,
	2796,
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
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[54] = 
{
	{ 0x02000004, { 167, 5 } },
	{ 0x02000005, { 172, 14 } },
	{ 0x02000006, { 190, 12 } },
	{ 0x02000007, { 206, 15 } },
	{ 0x02000008, { 225, 20 } },
	{ 0x02000009, { 251, 17 } },
	{ 0x0200000A, { 274, 20 } },
	{ 0x0200000B, { 300, 4 } },
	{ 0x0200000C, { 304, 8 } },
	{ 0x0200000D, { 312, 18 } },
	{ 0x0200000E, { 330, 14 } },
	{ 0x0200000F, { 344, 4 } },
	{ 0x02000011, { 348, 14 } },
	{ 0x02000013, { 362, 7 } },
	{ 0x02000014, { 373, 10 } },
	{ 0x02000015, { 383, 14 } },
	{ 0x02000016, { 397, 5 } },
	{ 0x02000017, { 402, 15 } },
	{ 0x02000018, { 417, 11 } },
	{ 0x02000019, { 428, 38 } },
	{ 0x0200001B, { 466, 5 } },
	{ 0x06000005, { 0, 12 } },
	{ 0x06000006, { 12, 14 } },
	{ 0x06000007, { 26, 5 } },
	{ 0x06000008, { 31, 7 } },
	{ 0x06000009, { 38, 4 } },
	{ 0x0600000A, { 42, 5 } },
	{ 0x0600000B, { 47, 6 } },
	{ 0x0600000C, { 53, 4 } },
	{ 0x0600000D, { 57, 3 } },
	{ 0x0600000E, { 60, 4 } },
	{ 0x0600000F, { 64, 5 } },
	{ 0x06000010, { 69, 3 } },
	{ 0x06000011, { 72, 9 } },
	{ 0x06000012, { 81, 9 } },
	{ 0x06000013, { 90, 7 } },
	{ 0x06000014, { 97, 7 } },
	{ 0x06000015, { 104, 7 } },
	{ 0x06000016, { 111, 7 } },
	{ 0x06000017, { 118, 4 } },
	{ 0x06000018, { 122, 3 } },
	{ 0x06000019, { 125, 7 } },
	{ 0x0600001A, { 132, 7 } },
	{ 0x0600001B, { 139, 5 } },
	{ 0x0600001C, { 144, 7 } },
	{ 0x0600001D, { 151, 6 } },
	{ 0x0600001E, { 157, 10 } },
	{ 0x06000030, { 186, 4 } },
	{ 0x06000035, { 202, 4 } },
	{ 0x0600003A, { 221, 4 } },
	{ 0x06000040, { 245, 6 } },
	{ 0x06000045, { 268, 6 } },
	{ 0x0600004A, { 294, 6 } },
	{ 0x0600006D, { 369, 4 } },
};
extern const uint32_t g_rgctx_IEnumerable_1_t7AEE5935ECE18A383FD11919A51AE5602FC558A6;
extern const uint32_t g_rgctx_Func_2_tC8BDB859B1062ECC0A8239BEC7EFB8A8EA6D9980;
extern const uint32_t g_rgctx_Iterator_1_tCFAA62A6C9F96DE2CF39C6650ECDD90ABE2685EC;
extern const uint32_t g_rgctx_Iterator_1_Where_mA2F3F081E1BB8C080173197BF8B3BACB4D1265BD;
extern const uint32_t g_rgctx_TSourceU5BU5D_t3208AEE56FC08B9D8EF3EBC686C813285BEBCA88;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t02B6565B81E6B3116FEB4E19018ECAEA32DBECFE;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_mA1F81211FAEEC31DDDE7FEB4597D827FD8173193;
extern const uint32_t g_rgctx_List_1_t7ECE6A3407ABA1B6A770EE42BC241FA0D5CA8E64;
extern const uint32_t g_rgctx_WhereListIterator_1_tAEF79AA48344AA5DE131BEE39C5D791F28C824AF;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m58771D71B52CBC9B8BE8F30DD4C91AD2D03C28C3;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t937E10A58702C981A92D398826CA6EB6022E26DE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mCC15F47FF48C410C2A5DEFECEB5A4BAD2023196D;
extern const uint32_t g_rgctx_IEnumerable_1_t231085DC654FF569C9B8F5E63237864A5239876C;
extern const uint32_t g_rgctx_Func_2_t6FA4F7F49AC86462A22243E02AC12E2C7FD86D87;
extern const uint32_t g_rgctx_Iterator_1_tBB463E7F0474B9FDAE03AD922C828F75B1607849;
extern const uint32_t g_rgctx_Iterator_1_Select_TisTResult_t09C874818BE124C126D70387CEB3E2879147E979_mA8212390C32951684330D31D8FF50C75DEF6F0ED;
extern const uint32_t g_rgctx_IEnumerable_1_tD13CBA29071C3CF51B7D2AD835B640FB3F76EA81;
extern const uint32_t g_rgctx_TSourceU5BU5D_tB4F773F9FE2E18781B998B5387EF4ED772383522;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tEDE80B0BBD80F7C8DD8C078E1B803892CFEA7BEA;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m2AC7E645F1BC7AB8EFBCDA5548385B40E79C3D1C;
extern const uint32_t g_rgctx_Func_2_t64CD75C26CBC7F61E5F074979E6D4B662C1537D0;
extern const uint32_t g_rgctx_List_1_t06B75CD69EB58B504A2338CAC24DEAB2A4A422D1;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t5A4506F26C43750752687193A2ECBAD317108786;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mF25C917FA82A1B5E82D32A1CA4DA63EDF3475574;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t5E919007496A2E81A975C75A0B3615B078CBA88B;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5372F7F1EB431A98E944244596B6C21D09502A22;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_t88A6949A7AEDDEC91840BDF9765FDB640CC20C45;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m21A2561C62A6B664EF399093687C2B230994127B;
extern const uint32_t g_rgctx_Func_2_t42351EBF54CFD195B1B5FC759E8230659B831E58;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m94C50E845A9EFBBE1304447BF0E1488047DC0EB5;
extern const uint32_t g_rgctx_Func_2__ctor_mC8286BFD1DE847A94D6CEB7715EDEC5CAC8CCEFA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_t3C1DE292CE570AF221D1B927B5FFD65D137F4F53;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_mA324D7BE4B1D42C68C65408628CE1315E1A041C9;
extern const uint32_t g_rgctx_Func_2_t90A38F89EE0925270BECFC158CB52304C9AB8FB1;
extern const uint32_t g_rgctx_Func_2_t46079E56C33454D23CE3E9CFB3ABD3A16E3C41DF;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_mB8CBD5D12D14D3F630E4DBDA0FFE77BC0C07B058;
extern const uint32_t g_rgctx_Func_2_tA57AF6915764EDDF8741C38C57B21EE438C59343;
extern const uint32_t g_rgctx_Func_2__ctor_m0EC239CC0DB375302D978065A77B350F8BAD42E0;
extern const uint32_t g_rgctx_IEnumerable_1_t546E37C3CF73BB0D3DA89FCDD5153A17B8DCC6B3;
extern const uint32_t g_rgctx_Func_2_t9DCB4EFA71B884EBBB9FD09C0C65C77427B26E1F;
extern const uint32_t g_rgctx_Enumerable_SelectManyIterator_TisTSource_t7F0C5740251B05A62A6A641BC51F8E5733AD6760_TisTResult_t38B7679FCD8545B430D820D0F0D98F252D2C2EF5_m149049CA44C6B9AC1CD6FB98A9B9D694DFC53A83;
extern const uint32_t g_rgctx_IEnumerable_1_t3F3B4E4F512D51FC443C60B1CEC526549D6931EE;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_t208D279B305E9176574F99BFB9FB7FF65B585BF3;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2__ctor_m750AD9483F5763DEBA60CB57DA8E7608BE414C2C;
extern const uint32_t g_rgctx_IEnumerable_1_tF9081D9C76C0FDEAD3999E115BF9FE10DA82867E;
extern const uint32_t g_rgctx_Func_2_t5DD521FC94884DAC634B586D331EA4947E58CD4F;
extern const uint32_t g_rgctx_IEnumerable_1_tCC855C5AF6BD9D67E2CF080C15DABD42DE459A0D;
extern const uint32_t g_rgctx_IEnumerable_1_t18B1771E183BBF7ED71C7142E4F25C5925533369;
extern const uint32_t g_rgctx_Func_2_tE2CB3373C3458754A4C0934F608C6BB9DEE2E320;
extern const uint32_t g_rgctx_OrderedEnumerable_2_tF1AACDA47B61C821E04C8EE7FF8ACC912E870472;
extern const uint32_t g_rgctx_OrderedEnumerable_2__ctor_mB8B4AFAD45CC73DEF69E5F02691BE96612B56DFB;
extern const uint32_t g_rgctx_IComparer_1_t6624203B71264564CC7880B19D4B15170C618F26;
extern const uint32_t g_rgctx_IOrderedEnumerable_1_t3E909BD97C8F81E8ADD3E120147FD95260CD4079;
extern const uint32_t g_rgctx_IOrderedEnumerable_1_t95766CE79E223CA6EEE8C3C16211A7F8E7636E47;
extern const uint32_t g_rgctx_Func_2_t5ACD656DB0C3F68C2B54A6A5E949701B9DCEF6C7;
extern const uint32_t g_rgctx_IOrderedEnumerable_1_CreateOrderedEnumerable_TisTKey_t8C2AE010BF0E48BCCA8202648BE024BD4EAD253E_m6E3AD35218932C6080CF0BC526B96E4289082239;
extern const uint32_t g_rgctx_IComparer_1_t2D2DB1CEA4C76DE527E2E09F69941EB5A48F1182;
extern const uint32_t g_rgctx_IEnumerable_1_tBFF6511AD1159F06E17898E6F973E9DED5B7F3F6;
extern const uint32_t g_rgctx_Enumerable_DistinctIterator_TisTSource_tCDDDC3199C11F82403BBADA78670AC4D5C583485_m862FD90198DCAC0510EED7F509C10176737CF06C;
extern const uint32_t g_rgctx_IEqualityComparer_1_t7200EB6ED038EEFF0FAD5D2F869B220EC55D4595;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_t50A3421E39AFDEA147E66F1951CA3A10E22DFA34;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m751BFE5C018D707838D8263E2EFCE8506882F760;
extern const uint32_t g_rgctx_IEnumerable_1_tC33F6CF6D1E787C8C05BB8760DEAB37C0C254CC2;
extern const uint32_t g_rgctx_IEqualityComparer_1_t53BE427B9D2984F116DE9973AB924A726B0E8BA7;
extern const uint32_t g_rgctx_IEnumerable_1_t296117C3CB77FAC982BA7A7B1027F9D3291A496D;
extern const uint32_t g_rgctx_Buffer_1_tE1DE8755D64B058C0ADA242840D34CF5699C6E71;
extern const uint32_t g_rgctx_Buffer_1__ctor_m3FB9EADB6600E16BE09444D9398D589EF1181BCF;
extern const uint32_t g_rgctx_Buffer_1_ToArray_mB13CE17B934DAD48DBFB42688B525215B4691E43;
extern const uint32_t g_rgctx_TSourceU5BU5D_tA76FEBFAA624BA5CF9E6C001773513F67B133455;
extern const uint32_t g_rgctx_IEnumerable_1_t322CF9F8601BC2225C09F636348027E21B22890D;
extern const uint32_t g_rgctx_List_1_t9AEAF71CB03D3DCDB8CF05C06A82571523481244;
extern const uint32_t g_rgctx_List_1__ctor_mC9534C8F75C0F5FFF32F381F2F892589D3BF7975;
extern const uint32_t g_rgctx_IEnumerable_1_t0B866DF058236FEC5415A326A3213F49AA55BC54;
extern const uint32_t g_rgctx_IList_1_tCED22963CED7CC47B5CFDCFA2E0206339244CFB4;
extern const uint32_t g_rgctx_ICollection_1_t28E994F3A824EA898113486CB2BBE8611195DB41;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m3D1918F6D38C1FB6DF84E15DB8CBC3E59E9C94D9;
extern const uint32_t g_rgctx_IList_1_get_Item_m891812AFFF99172B43E25C4FA972CFCADAE240CE;
extern const uint32_t g_rgctx_TSource_t4BE2E321A4CF4873EF48E3EC8EBE1AAB810A1ED1;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m7E82B57644359B28D170CD5F620DDF8264DFBBFC;
extern const uint32_t g_rgctx_IEnumerator_1_t964247E5CED1FD6D2A4A9AC1F3A49B15B6935509;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mC513186FC775307C8BE17EBBF0D947400E07EBAA;
extern const uint32_t g_rgctx_IEnumerable_1_t37FB4609EA4007EA8AAED36AA54BAB3CC9659FED;
extern const uint32_t g_rgctx_IList_1_t5B665A7CA5F8890561CC2FD53C1E2681A23F0EA7;
extern const uint32_t g_rgctx_ICollection_1_t4FA856088EB2B059A3F14DB7E787403ACF8C62DB;
extern const uint32_t g_rgctx_ICollection_1_get_Count_mB0354939EF1221A12C6CFAD635676902B80B1038;
extern const uint32_t g_rgctx_IList_1_get_Item_mCC77534088C01C8B6EFCC8A82DB9C7D715EE2F96;
extern const uint32_t g_rgctx_TSource_tF0FB6BCF72B0121ADA2EA199BC1E1A031F5EB9A7;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m64D4BF718D960AEBFF72C40CA30BFB4871BB3A65;
extern const uint32_t g_rgctx_IEnumerator_1_tEB16E070802285F0C7D10A00CCB1E4074E4E8A0A;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m8E6F3610D00771CE631E796375591DBF67746BCC;
extern const uint32_t g_rgctx_IEnumerable_1_tBC6702195CBC2E0BE4528C405D286B726771E41B;
extern const uint32_t g_rgctx_Func_2_tAFAD4B419AD3D0106D6999001E5A68EE48299D9B;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m67BC61F3D9901C06B1303874DF4C9B5428A72548;
extern const uint32_t g_rgctx_IEnumerator_1_tBA45D46B82C6DEC7BB8483B0F26A4D508DBCF193;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m06D577A7F4E904B05AE5CC4AAA9887EB0E75EB4F;
extern const uint32_t g_rgctx_TSource_t9C8F57E18E2C7CFDA2967D811D0D7CB282F778FE;
extern const uint32_t g_rgctx_Func_2_Invoke_mCCBDF7BCA61445CE52C2DBCFC1D2AA62D2BA00E2;
extern const uint32_t g_rgctx_IEnumerable_1_t90F8CBED2D9C18B43C3829576CF4A316FE813F97;
extern const uint32_t g_rgctx_Func_2_tF8C13789D48D4FFCFBEFF82099054681004790B1;
extern const uint32_t g_rgctx_TSource_tF3CB65B39701E85EC92EADAF0DEE8A6107D23921;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mC5E9D73414E8046423EBA4CA12506AEFE7424657;
extern const uint32_t g_rgctx_IEnumerator_1_t98FAD7BFA0FE613E94306E6AE72B92B2FF4728E3;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mCF311051B917AD99BC2036029EFF69217BACC823;
extern const uint32_t g_rgctx_Func_2_Invoke_mE346F93E96B76E5E1B35B7C31B9A964B64B91906;
extern const uint32_t g_rgctx_IEnumerable_1_t7CEC2B33E6DD3C1C3A6A172B3F8F543C1116982C;
extern const uint32_t g_rgctx_Func_2_tB4B09B48E6A2A7B32ABB0D39C54E835B17CCEE61;
extern const uint32_t g_rgctx_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mCC4AB6E07BBF5914732D63186528794923285145;
extern const uint32_t g_rgctx_IEnumerator_1_tE2C6256C33037DCA358539D2812BAD8FA0E35704;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m272CB7E38BA46922E0937B29BEEA5D644DED9ADD;
extern const uint32_t g_rgctx_Func_2_Invoke_m53A6358BFFA10B30C1CEC31578FC6C8B456A7566;
extern const uint32_t g_rgctx_IEnumerable_1_t54625D3083ADCDF8A2D6937452AEDB2E5834A635;
extern const uint32_t g_rgctx_IList_1_t9D78FA912A746CC065A726C99C4460D31749FAE7;
extern const uint32_t g_rgctx_IList_1_get_Item_mE036AC4868F1C51FFBE57B4FFA181B2439D5CCB4;
extern const uint32_t g_rgctx_TSource_t2A89D673E76D4FA5B6753E816FDC77F4835B465C;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m704EF9BF0CE7EB0AD0A7FDAE461B6B1E2137F4D8;
extern const uint32_t g_rgctx_IEnumerator_1_tC26AE33B7BC7EDF8A344AA81B1BC290AEA3F2BF0;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m75CE3A33FB46BBF767EEB47959CDCAF184315E8B;
extern const uint32_t g_rgctx_EmptyEnumerable_1_tBEA703373DB0C1A396E4DDFD110D9A5402BB0182;
extern const uint32_t g_rgctx_TResultU5BU5D_tC2F645D6BAF8A95BC3019320A9AA2D760777182E;
extern const uint32_t g_rgctx_EmptyEnumerable_1_tBEA703373DB0C1A396E4DDFD110D9A5402BB0182;
extern const uint32_t g_rgctx_IEnumerable_1_t330F555B756F04D1B80E293C25B1AD8FEE854566;
extern const uint32_t g_rgctx_IEnumerable_1_t172656FB996B8C7E336AAC30919996CCF45053EC;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m710BA0C8DA9F68BF7D5119792FA401AC61A1875C;
extern const uint32_t g_rgctx_IEnumerator_1_t5290D6936B1D4D571793E4717B781F0C7FAB2871;
extern const uint32_t g_rgctx_IEnumerable_1_tB31E19935A0E3467E4E51AD773A9D5432B73B518;
extern const uint32_t g_rgctx_Func_2_t738FFE96DA24D4260B7C39DC33541473836A6630;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mA944AB0962D1DBEDDE52E6F419F650AC136C2897;
extern const uint32_t g_rgctx_IEnumerator_1_tC56F860588AE66C881B76D981EE6DE2C1E18EE35;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mD0F557574B1C7EBE3FDA2BB6749399C5668BC2DB;
extern const uint32_t g_rgctx_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE;
extern const uint32_t g_rgctx_Func_2_Invoke_m6020CD4EAC12A5FE9D3B4FB21F10F4FD03BED403;
extern const uint32_t g_rgctx_IEnumerable_1_t695B0D3D337EEE1FA46DCCFB55B304D63CD5FB5F;
extern const uint32_t g_rgctx_Func_2_t3FECB5D235AA89CFF3030502EECEC5CCEAC97C93;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m03E34F9ECD77A216A1C2279AF316C6C5F960082A;
extern const uint32_t g_rgctx_IEnumerator_1_t38E1D374BC4763846B1ADADA83B3C4DFE79CAB70;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m0C348BEACDFF793CB7D558FBF052D24315A0A7CA;
extern const uint32_t g_rgctx_TSource_t774D252380CBC46A784933EA766C83321F487023;
extern const uint32_t g_rgctx_Func_2_Invoke_mBA345BBA6F5E97BABA854681C4387A952E5ECC7C;
extern const uint32_t g_rgctx_IEnumerable_1_t1A61E70010BC8A596B58697486E4551BCB37D4B1;
extern const uint32_t g_rgctx_ICollection_1_t293DB944473C7BFCEA469C1BA4B6DC63B7F22524;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m7138C400B9510DFA97CC37E7202E729B86025149;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mD96D453595A6310A1BA0E3B2104A3F3405E246CE;
extern const uint32_t g_rgctx_IEnumerator_1_t5E396B54BC84949D8A2CE00391412D82175F4A73;
extern const uint32_t g_rgctx_IEnumerable_1_t149216817B0FAD21D58F5F59C151FDECD4514C43;
extern const uint32_t g_rgctx_Func_2_tADCC2B75AD30AC925293181D40C8F7B2763C99A5;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mF57D9CE14A95874343941A3AD4F6F4AE342F232F;
extern const uint32_t g_rgctx_IEnumerator_1_tE20D8708CC88F4F9ED383C47893D0ABF2A8EE0B7;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m6F3627347CD8E7ACA12F304AE53EBCD3895B21F7;
extern const uint32_t g_rgctx_TSource_tFCB2E3BE5F0EF37ACCD60CCF2A212F6A6ED15191;
extern const uint32_t g_rgctx_Func_2_Invoke_mE7AF426752D7F53CCBE1A86E160A8603FADC18BF;
extern const uint32_t g_rgctx_IEnumerable_1_t2604AB001D4D9DD0656EC9ED6F422874A6AE0CAA;
extern const uint32_t g_rgctx_ICollection_1_t8AF47F972E9325FAC3FFCC835F8A9CCF0A6013AE;
extern const uint32_t g_rgctx_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7;
extern const uint32_t g_rgctx_ICollection_1_Contains_m3F543D6A23D15559129542795589DEBA87D6E6E0;
extern const uint32_t g_rgctx_Enumerable_Contains_TisTSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7_m13AFE84E80D4434C455AE4797158507D2CE06F92;
extern const uint32_t g_rgctx_IEqualityComparer_1_t8EB74B430E35284B019D5B00229DDC2CADCA2979;
extern const uint32_t g_rgctx_IEqualityComparer_1_t9B8E14EBDF6C94CA793E9E13A976D30CBE40B8AD;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m541E74134166ECC3AB936F69627F1B05C5A2384E;
extern const uint32_t g_rgctx_EqualityComparer_1_t3D6F7E3583AAB823BB9443692959A8F14EF35ED6;
extern const uint32_t g_rgctx_EqualityComparer_1_t3D6F7E3583AAB823BB9443692959A8F14EF35ED6;
extern const uint32_t g_rgctx_IEnumerable_1_t105252D36D92C84592FCD66878C756E1D207CF23;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mEBFBD0473E424EAE2E050B374CC66B29587F8981;
extern const uint32_t g_rgctx_IEnumerator_1_t0D080C81A7C92A5DA8279E09CE9F225576BD96A9;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m49DBF7833D6F50D75F5E8078E96B6EDC6BAD69DE;
extern const uint32_t g_rgctx_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8;
extern const uint32_t g_rgctx_IEqualityComparer_1_Equals_mD8C87E297C4002B049979B598B893A6D6130B84D;
extern const uint32_t g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4;
extern const uint32_t g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79;
extern const uint32_t g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62;
extern const uint32_t g_rgctx_IEnumerator_1_t15692AE856D4F6CF8F91F15DC932B0FAFFF1B98C;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90;
extern const uint32_t g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424;
extern const uint32_t g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED;
extern const uint32_t g_rgctx_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB;
extern const uint32_t g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_mAB7D8293A40454908F2ACEBDCCC2013C7B797931;
extern const uint32_t g_rgctx_Func_2_t91E4170AD82C80359D1DA956AB2D5F35FFC9E17F;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t1F5FF34DBCE1F6AF7517393D73D356A6DA50B6D1;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF3A2E2792E40371499F8A04F1C4B4CF725C70204;
extern const uint32_t g_rgctx_IEnumerable_1_t644CE4B8B814E279469D9F5065AAF5EF15E981AD;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_TSourceU5BU5D_tF02636C637844512684A90462192D486199D9DDC;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7;
extern const uint32_t g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A;
extern const uint32_t g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_m99E4C6C9A5E23442C4C59423A2C776AB6D8B0174;
extern const uint32_t g_rgctx_IEnumerable_1_t988FF724FA547066EC844CEC6A2D933A9656CFF0;
extern const uint32_t g_rgctx_Func_2_t7E1F1F418656D817F8B1105218612EA9815F076D;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t6BD47364FC721CA8B09BDFC7BE6810CCE818F41E;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m13925FA98D8607D9EA9B1A4792AE6A94B2849DF1;
extern const uint32_t g_rgctx_IEnumerable_1_t1E18B60B778214CF834B5B2B4597F8168987FF46;
extern const uint32_t g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF;
extern const uint32_t g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807;
extern const uint32_t g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C;
extern const uint32_t g_rgctx_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E;
extern const uint32_t g_rgctx_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956;
extern const uint32_t g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_m987D55B3468870CBF0482585D957025163C6B362;
extern const uint32_t g_rgctx_IEnumerable_1_tC15BD51C80FA8BBB44707A0414386F7091E0C5B1;
extern const uint32_t g_rgctx_Func_2_tA2568CACA7B932F3335367555AD3AA649EA8616A;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tA11FC7FED3C26063A55DAAA599906A1C57175B03;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m89A10922BF0309154D097D4D7E630E8451C1B952;
extern const uint32_t g_rgctx_IEnumerable_1_tACDE169121AB80458711A833C20EB643EE04DFBA;
extern const uint32_t g_rgctx_Iterator_1__ctor_m24F4541F8829F51E57F84D96054E563391732CFC;
extern const uint32_t g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F;
extern const uint32_t g_rgctx_IEnumerable_1_tA64D266802CC654E58E383563C59E5BC49B1AD22;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t48BC8AE4F3D8AE2BB3FB23C3AFC140A756CC65A4;
extern const uint32_t g_rgctx_Func_2_t86CFE648CE7192981F7DA895E30FBDA1F513B652;
extern const uint32_t g_rgctx_Func_2_tD5EAA29CDB4313FE2590F76DD99FB1497FF215B1;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mDA7AA133551DE9DAA42B9489EF99A53B6BF80749;
extern const uint32_t g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F;
extern const uint32_t g_rgctx_IEnumerator_1_t01303709A68F833425B5740A2A2D972A0DDEEB26;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mEC8779D213FB3A1CF689B52F5B8219238E54A57B;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m8A5C078C211D763A5213D0930EBD38A3D97EA825;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mFE78B9CDC5BBDF50E78AFAD9CFE23F2223C79F5B;
extern const uint32_t g_rgctx_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093;
extern const uint32_t g_rgctx_Func_2_Invoke_m4148D75120CEABE2FF0024661FDDBFCB6BA771A5;
extern const uint32_t g_rgctx_Func_2_Invoke_m76A5030A28A4F68091A624D3302941DB8B4E0765;
extern const uint32_t g_rgctx_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520;
extern const uint32_t g_rgctx_Func_2_tAA642C0E102AA47F986C3FA375163287B7C468CF;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t46D8F3B462050CB986339EA63B34443BA66D5EE9;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m05CA91B0739729D9DFB15FD9AE29358281C4DF95;
extern const uint32_t g_rgctx_IEnumerable_1_t7D3FB73373A7E55CFB0A929FDB9624DCBBE103AA;
extern const uint32_t g_rgctx_Func_2_t5C13B8D2EFFBB981CCD8A725E58541CE1A667654;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093_TisTResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520_TisTResult2_tACCDF53F8D9C783083BE76E1EBF4F0851CBEA20C_m345D8DF017B8D3765DC97BC209B7210990D6AE2A;
extern const uint32_t g_rgctx_Func_2_t3E1A7BFA68A822C2818AA477502F897ECAFBC9CF;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t091A81B2BFDECBB6B85A5DE344E32E306B979F4E;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF714167A39020832C4835CAA8F81F6E0FAA9A789;
extern const uint32_t g_rgctx_IEnumerable_1_tAAE02E0522D7C8C0A7F3DF5617BA6853BB39B1AE;
extern const uint32_t g_rgctx_Iterator_1__ctor_m6A1E7CB836C19C0B9439096586A06D0057E7AA52;
extern const uint32_t g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7;
extern const uint32_t g_rgctx_TSourceU5BU5D_tBA8B4C9C4370282335B66D6DD7DEF366389F78E9;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t2F5234271A3A4E5F89C63030DD6F9D9260D06FDE;
extern const uint32_t g_rgctx_Func_2_t47CC59E1937CA3FCC9DA471AAD5C7899D9AFF9DF;
extern const uint32_t g_rgctx_Func_2_t8A5A56224271942180907637F3E10A9A3CBDAEDF;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mCD9A624F8C3ACA086CFD4CEBB6150456E1471C9B;
extern const uint32_t g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7;
extern const uint32_t g_rgctx_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78;
extern const uint32_t g_rgctx_Func_2_Invoke_m8DAC2E225A682443964FAEA00BE2C728AAD74B0D;
extern const uint32_t g_rgctx_Func_2_Invoke_mFA2E82CEFB4B24BDB33564DECDF4765D2B7C7053;
extern const uint32_t g_rgctx_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mA9BFBEB710778B3A052F66CEDA033562C82E1D71;
extern const uint32_t g_rgctx_Func_2_t480B273C25623AA9E4317431E82E5CDC83653B88;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tC18F5A6D2AF40216AE21EBC6827AD147E31E17A5;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mA5B3E7EB5B0FFE980FA8EE42233961A20AC087F7;
extern const uint32_t g_rgctx_IEnumerable_1_tB342F7C7B97451C3B30BA929061F3E4C764D0C8F;
extern const uint32_t g_rgctx_Func_2_tF2E1E9B5BCF9C792EB67A2121132E25B39C5D1F5;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t21BF09076F270DC063711DE3ABB52B001A331F78_TisTResult_t278B55150BC17BB45D33B605F011F4D96EFE5425_TisTResult2_tEC28CE9F47F4F949C7CD44736D7F4B15360A65F9_mA81E895EA2CB0BC29569218C386C988368BF3828;
extern const uint32_t g_rgctx_Func_2_t9E2205FDD35EE96086C9455A263182628EA14EEA;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t59D43E919F2DC1D758D7C811297A1435D53D93AC;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m1F6E197D75A7ECC536CF790E45D8855D46A1FDC6;
extern const uint32_t g_rgctx_IEnumerable_1_t038B540C9254B43CB79B6E3FD1F165D17B50C39F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mAB5D6B06319C192633E05B6EBBA9A168FF73AAE9;
extern const uint32_t g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF;
extern const uint32_t g_rgctx_List_1_t905EFEC983EC5317F0B1F633D205BF984BB0BE1D;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tBA41BFF0DB2BFE973868036026CDCA6B8797A8D6;
extern const uint32_t g_rgctx_Func_2_tBE76289600B0D10382BAB5D9F828D996195A6D07;
extern const uint32_t g_rgctx_Func_2_tC25DAB584B0F47C1DAA1B56A2C30A3D42B88D146;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mDFE79323B2924E6309386ABFB7F9AE7BAAD059C2;
extern const uint32_t g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m906D8353E6DC2D62B1C6ACF3849D1970361C7AED;
extern const uint32_t g_rgctx_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716;
extern const uint32_t g_rgctx_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3;
extern const uint32_t g_rgctx_Func_2_Invoke_mF94AE9E660C674B47621BAB249E8B2D27BF85E73;
extern const uint32_t g_rgctx_Func_2_Invoke_m74CA45C07863967094098CE16E020CA52859B1D3;
extern const uint32_t g_rgctx_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mD3BAB36AFD8333EB35A46C14C441E1B1A7493CED;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m741197394517AA91B94A9D65A084BBAED71C3C3A;
extern const uint32_t g_rgctx_Func_2_t8E8A035865E0B12506807F075F71DBE42DE1DEA7;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t957AB458B1F7D316B1F8960AE854A6CD7E1DD852;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mF25AEB188FA18B82EFB71A5BAD8534E8A1FFCEE2;
extern const uint32_t g_rgctx_IEnumerable_1_tF3EF3E2AC9748DE151D15746807E2B4895D45AF1;
extern const uint32_t g_rgctx_Func_2_t8A02B4523B02AD775A6B514283295415A129D83D;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3_TisTResult_t11AC9139084FDCB528CAF75FE5166467D3329A05_TisTResult2_tECB8FBA56F78B893A9D06A35F011858B7CE2F3E3_m5476B06EE2463B58E14E67144E4975FF33FAC444;
extern const uint32_t g_rgctx_Func_2_t8D6915DA2C514D8EC62968CAF8A9C7B13CE7C64C;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t8C5A1568CD9B2B2E7760D591DD3A4517DB930770;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m43F52D624D5D5CFF28C6B99849AC99EBE6E71A4F;
extern const uint32_t g_rgctx_IEnumerable_1_t841249426E2891AD6CA86F723EF7D2A3F47EC96C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_t85BE6C374EBD46B5FBA9AC2082BC664AC3D7FA9F;
extern const uint32_t g_rgctx_Func_2_t756BE45FD1B4569EBD49EAD2AB1444B766D13F83;
extern const uint32_t g_rgctx_TSource_t7FD8EDECC22AF73DBD12F1882F5F9C6A655487DF;
extern const uint32_t g_rgctx_Func_2_Invoke_mE7A8E49A025849A2FE64A86343365C1808AD743F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_t9D6CCB6F5B3C868A5A90D3A6284ADB626CDC34BD;
extern const uint32_t g_rgctx_Func_2_tB89E2A0A82E89B19927B092B238720F65A87EBE4;
extern const uint32_t g_rgctx_Func_2_tE17298D4C6D18DE4FB73F421AF563BE9FB9630EB;
extern const uint32_t g_rgctx_TSource_tCBE465C8F23425CBF01771A6BF89967BC3CCA7B3;
extern const uint32_t g_rgctx_Func_2_Invoke_m176EFBF601E4DFA96422134D1F9C9A90B94D6ACF;
extern const uint32_t g_rgctx_TMiddle_t34F72DBAB95AE3EC84C8E5B47A243665C8CD6140;
extern const uint32_t g_rgctx_Func_2_Invoke_mE58690AB3F029696906A136F1FFDCB60D54D4C85;
extern const uint32_t g_rgctx_TResult_t91822A9663D50763CEE23B708B1DE99BAE9ED949;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_t80F0A8E8CD72F862C9756B513CA0E69CA552C0D1;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_mF728E3C6B29EA0DF10D3BA06045AD22644EA3E9B;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_m3F705537F51F06056319F653E2259BB61FDFC84F;
extern const uint32_t g_rgctx_IEnumerable_1_tD1389C38D56436639122F61396C8E429889C377A;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m8C99896D8A616F86338CC80E782077A0E16AF4F1;
extern const uint32_t g_rgctx_IEnumerator_1_tFD0011EBB450CC3BF27CEC691ECB0C3AECC7749F;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m6140A669FD20F62976EC9AD7ABC81919CD1D766F;
extern const uint32_t g_rgctx_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107;
extern const uint32_t g_rgctx_Func_2_t613FB799F1283E17E4BF8D5FE514CD5881BA76C1;
extern const uint32_t g_rgctx_Func_2_Invoke_m8DF7C3A537A90832C0824CE33EF2FEBE066C6A41;
extern const uint32_t g_rgctx_IEnumerable_1_tC9F000960A1A3A72A5A8918F1119FCF380D4E487;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m04A4AE5BFD2F48213FF247D36BBE7E18877F921F;
extern const uint32_t g_rgctx_IEnumerator_1_tE098A91CD077E31FC61135B5029A16072F2C0FAC;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mA70C959D540989A08393DCCB40FC89064E6EE422;
extern const uint32_t g_rgctx_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m4F9011CE53A860AD076D2E84B4D9A628DFE8EF34;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2__ctor_mA4E3202CDBBD9520C0E219EEBA20CBE5B69ECDA8;
extern const uint32_t g_rgctx_U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m08198DA1542C22E9478C94AE9559F13D8591B212;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_t9F1140F3B4BD52639A46DEAC9764A78092C97305;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_m5A1FD8F557D9372B7207DA439D3F5400A5D680AB;
extern const uint32_t g_rgctx_IEqualityComparer_1_t84EC52F09ECAEA4C618F813D107FD87A7F30C55F;
extern const uint32_t g_rgctx_Set_1_tF01934D2229565F204C9ADF13158DCCB8CCD2EB7;
extern const uint32_t g_rgctx_Set_1__ctor_m815CB40BA85CEF706F531B7BF439E4D505BB5E42;
extern const uint32_t g_rgctx_IEnumerable_1_t43811822819B75BE6619279ABA5B08ADD11A36C6;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mAFA75F0FA4A7759C4ECC79C7F42CE043C0BBE463;
extern const uint32_t g_rgctx_IEnumerator_1_t2A2E2EF21339FD112C964B9CF2654AA9BAE4F2CA;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mEE747CACD72C9E1BBB4DB60B37811664ED7DC536;
extern const uint32_t g_rgctx_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00;
extern const uint32_t g_rgctx_Set_1_Add_m7DC65238C38BBB6ADCC867FD478D64A4338BA366;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mE5F9EBDAF6CE2E21979B6940EA37E5544C7DFF27;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m412D5949A71FB2DF622581177F22A884DDC67287;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mBE8DC2773FB7231E662A140F2047ECA0B63D6879;
extern const uint32_t g_rgctx_TElementU5BU5D_t5FE845F5AF158D61A1612AC86BF41A482409E218;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t903C1B1D5A3723EB325CD99884D858F929D989D3;
extern const uint32_t g_rgctx_TElementU5BU5D_t5FE845F5AF158D61A1612AC86BF41A482409E218;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t903C1B1D5A3723EB325CD99884D858F929D989D3;
extern const uint32_t g_rgctx_IEqualityComparer_1_t253FDF060C665D2CAE293B27514148BC04F881E2;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0BAAB0F053B99F5503C286F6CA5CD4FEAFFA1E92;
extern const uint32_t g_rgctx_EqualityComparer_1_t3C6F85286B5844659CD99C8CD82F39A1027D0E28;
extern const uint32_t g_rgctx_EqualityComparer_1_t3C6F85286B5844659CD99C8CD82F39A1027D0E28;
extern const uint32_t g_rgctx_Set_1_t7A4A1BB330F38928BA4C3D4671E7C8D5C181A524;
extern const uint32_t g_rgctx_SlotU5BU5D_t505B87EE9501DF282930D90EBCE91A5A51A6ADB6;
extern const uint32_t g_rgctx_SlotU5BU5D_t505B87EE9501DF282930D90EBCE91A5A51A6ADB6;
extern const uint32_t g_rgctx_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D;
extern const uint32_t g_rgctx_Set_1_Find_m0EE1659DEEEBAB3ECCC1F697BADD51B15F897CB4;
extern const uint32_t g_rgctx_Set_1_InternalGetHashCode_mEB2BF942411714E6D3DF54C3B8C84C81FECF480F;
extern const uint32_t g_rgctx_Slot_tCF6C106E017087F992287BEE78F3944F04CDE04A;
extern const uint32_t g_rgctx_IEqualityComparer_1_Equals_mE91439EC229D29977A94DDFDE430E5512204C1ED;
extern const uint32_t g_rgctx_Set_1_Resize_mC350A354D2354B256A23057B23D4977E4653170F;
extern const uint32_t g_rgctx_IEqualityComparer_1_GetHashCode_m72FC6D66920C3DFDB7422DCC3D13CE50ED7E24A8;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1_t3CC996D75E05583A2C68BDAA6119DD5395C4CAEE;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD3A17D2F3E5D0A469641D57A4AB655B4545F375E;
extern const uint32_t g_rgctx_OrderedEnumerable_1_tF21AF4414E89CEDA2C00E6F0BF68D017AAFE1A3A;
extern const uint32_t g_rgctx_IEnumerator_1_tF34DA2030B04C69A451CC3052FFB517370CEBC9D;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerator_mBBDBE3B4727EE491AF45177AF6A25516F22737D7;
extern const uint32_t g_rgctx_IEnumerable_1_tCF79AA47BDE72EE23097C64EC751E154207B0007;
extern const uint32_t g_rgctx_IOrderedEnumerable_1_t59A4E37EC4D47D4BDCA15AB2263003DFB4AD4392;
extern const uint32_t g_rgctx_Func_2_t3EC367D33290240896A6863CD702B99F688F6502;
extern const uint32_t g_rgctx_IComparer_1_t11E44E663DAC2EEF8C678ED611840426974D69C4;
extern const uint32_t g_rgctx_OrderedEnumerable_2_tBEC552CAD99DF0748B3CF3552F93BE83E3A03F3F;
extern const uint32_t g_rgctx_OrderedEnumerable_2__ctor_m8890686A74F81E8473FB5D036EE0D750597D2994;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1_tAC327306F51A03C30C746FA91A2956D91298A625;
extern const uint32_t g_rgctx_OrderedEnumerable_1_t9A3D8D2850455B28D36B701298D0B1331F534031;
extern const uint32_t g_rgctx_IEnumerable_1_t55B23EE80DE4AC2729B007E4996B4EC6092C22B1;
extern const uint32_t g_rgctx_Buffer_1_t41F8077A5F13608D5270B50E18148B45F5F315C7;
extern const uint32_t g_rgctx_Buffer_1__ctor_mA99E4505CFF1FED56FB8272A49E274F14DBB6727;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m5F587D4742CDA03CB231EF0741B98D9EB7EF4E84;
extern const uint32_t g_rgctx_EnumerableSorter_1_tA62734D066C60347DFE7A135B5958DFFCF9E8C51;
extern const uint32_t g_rgctx_TElementU5BU5D_tED49DDAD3D022FB685E20197948E5E240356DD8B;
extern const uint32_t g_rgctx_EnumerableSorter_1_Sort_m82301704DAE9F05F1C2681B4E735E04BB7919073;
extern const uint32_t g_rgctx_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C;
extern const uint32_t g_rgctx_OrderedEnumerable_1__ctor_m920D35170CC92329CACC9CFB60EF8BB9C06FF9FF;
extern const uint32_t g_rgctx_OrderedEnumerable_1_t06CB3897759B3B58FCFDD71EC11AFB8E99366F94;
extern const uint32_t g_rgctx_IEnumerable_1_tB5E9084E800EEA2109299120A911D7CBD68313A3;
extern const uint32_t g_rgctx_Func_2_tD4C0D9C7FE619F338A606ED13C68E50D3B060274;
extern const uint32_t g_rgctx_OrderedEnumerable_1_t06CB3897759B3B58FCFDD71EC11AFB8E99366F94;
extern const uint32_t g_rgctx_OrderedEnumerable_2_tC9CE505A2DBA4D868BE7EA99305BF8842B4A7B1B;
extern const uint32_t g_rgctx_IComparer_1_tDC50F63DA3477B5CC9DE6B5EAAD06AA748D13B15;
extern const uint32_t g_rgctx_Comparer_1_get_Default_m6B94980B8459B87D60C5B69F2A918613EB300EB5;
extern const uint32_t g_rgctx_Comparer_1_t05930316C99AB50EC343359F3B8840EEADD7452B;
extern const uint32_t g_rgctx_Comparer_1_t05930316C99AB50EC343359F3B8840EEADD7452B;
extern const uint32_t g_rgctx_EnumerableSorter_1_tD9E9E30BC61256A4C95915F5404B404BB4FF0F5F;
extern const uint32_t g_rgctx_EnumerableSorter_2_t8479B5254E2828D3550EA1B532B05EDB1B1215D6;
extern const uint32_t g_rgctx_EnumerableSorter_2__ctor_m18A2FE6C6F5054713B98012F0E2CD0B5DB7C20BE;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m7268D01B139AF537E1343B1EC035A4E3EB18243D;
extern const uint32_t g_rgctx_TElementU5BU5D_t3ED42A4BA193A9DC6EDF323FB4AD1053E96FD749;
extern const uint32_t g_rgctx_EnumerableSorter_1_tBB9ADD7C21E31739D9683D99CFF9DC117D8BAB11;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_m0261683B46812CA7A0CEB845C1EF325F8033694E;
extern const uint32_t g_rgctx_EnumerableSorter_1_QuickSort_m01455655602074FD67BC431F21F62F7A9180571C;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_mFB513F8D369E5221DD6F66ACC4F34A50807CDBC6;
extern const uint32_t g_rgctx_EnumerableSorter_1__ctor_mFF96BE3E2A79A8BC38E1A650D9434EA57297BF46;
extern const uint32_t g_rgctx_EnumerableSorter_1_t053F2BD859874727D1E461B965976B49B4A173C7;
extern const uint32_t g_rgctx_Func_2_t5E10C25103ED51C0C843F4F679CFF099A92D2033;
extern const uint32_t g_rgctx_EnumerableSorter_2_tA19C7029F1CECEB4E93C278DDE6C4238D0BC1EE4;
extern const uint32_t g_rgctx_IComparer_1_t1FA8428328A44FE33A3569A2A717B4CC10F6D553;
extern const uint32_t g_rgctx_EnumerableSorter_1_t053F2BD859874727D1E461B965976B49B4A173C7;
extern const uint32_t g_rgctx_TKeyU5BU5D_tE5676E72B1BCCA85AD5A6118A3858A2144C86857;
extern const uint32_t g_rgctx_TKeyU5BU5D_tE5676E72B1BCCA85AD5A6118A3858A2144C86857;
extern const uint32_t g_rgctx_TElementU5BU5D_tDD687E24A22E45963C8860E83A668B089236AC54;
extern const uint32_t g_rgctx_TElement_t60940EC98E895D6BD6A1E5613E8522DE5FED38CD;
extern const uint32_t g_rgctx_Func_2_Invoke_m8D38D643551E8034BC2F061748DC2E8A54B8FC99;
extern const uint32_t g_rgctx_TKey_tCEB1916A91D8BD6826A56F094336B2CAF4D0B1E6;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_mFBB6EE61ABB9424BD1DD39936A10EA3D454AF202;
extern const uint32_t g_rgctx_IComparer_1_Compare_m392095FFDA3D97DA5903FA4F1CCEE94E1CA1E5BA;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_mA39249DC095B5EC415BF70815665F8483E6229D6;
extern const uint32_t g_rgctx_IEnumerable_1_t03135CC19B082BC866CC79592745590E608D5CE4;
extern const uint32_t g_rgctx_ICollection_1_tB92B34A134CB1BF586A69F2A283CF79675A37E1D;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m853E49D009E94914082E87AD16E91AD4A7694DEE;
extern const uint32_t g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15;
extern const uint32_t g_rgctx_ICollection_1_CopyTo_m1623FBCB4E13BACF6CA953F8F38FD10B4ABDC6C9;
extern const uint32_t g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mD5E0E805DDE55F5756E21D0D5FEDB2220FA39060;
extern const uint32_t g_rgctx_IEnumerator_1_t13EFC35CCC3C9F302141EE5C116481E1CF2CDC48;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m1BB68E9CA48B668E739FD9AF759EEE794E0CC7A5;
extern const uint32_t g_rgctx_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5;
extern const uint32_t g_rgctx_Buffer_1_tA7D595D30E21A96C82F7EFCCB95EE57E75D35223;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m4174234FC56DD1F9890041E9BFF3C38107E68D00;
extern const uint32_t g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60;
extern const uint32_t g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60;
extern const uint32_t g_rgctx_HashSet_1__ctor_m781AB04365DCD9333E443C412DFFE8102DCAA2D0;
extern const uint32_t g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B;
extern const uint32_t g_rgctx_HashSet_1_tF089CA52CB584DB29B4FF68C4A59B7C5FBD3630A;
extern const uint32_t g_rgctx_IEnumerable_1_t08DFCA249A6163529549D46ACA84A83C8CD361EC;
extern const uint32_t g_rgctx_HashSet_1__ctor_m07CC1E138E0D451EA7ED1AC941AC1245011C2093;
extern const uint32_t g_rgctx_HashSet_1_AreEqualityComparersEqual_mDDCC239294D0B3B5AF7E2DCB8D1479D0FF8DE41B;
extern const uint32_t g_rgctx_HashSet_1_tF089CA52CB584DB29B4FF68C4A59B7C5FBD3630A;
extern const uint32_t g_rgctx_HashSet_1_CopyFrom_mF3114EC5E22390EB6044B5BB4731BE3733A2AACA;
extern const uint32_t g_rgctx_ICollection_1_t0962A9980803A8F46108387826B91CD4DB9B0F97;
extern const uint32_t g_rgctx_ICollection_1_get_Count_mC4059B0C3219EDC8E97DE3ECFF2B0A4A0280801E;
extern const uint32_t g_rgctx_HashSet_1_Initialize_m06C4A2DE0A243BB8A2D0C4345712ED9B91231993;
extern const uint32_t g_rgctx_HashSet_1_UnionWith_m630B15B252A9518ACDC7F2CC33E343AF51C014B1;
extern const uint32_t g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7;
extern const uint32_t g_rgctx_HashSet_1_TrimExcess_m772030970D2E00DEA17364C4A8633644B366DE11;
extern const uint32_t g_rgctx_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5;
extern const uint32_t g_rgctx_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94;
extern const uint32_t g_rgctx_HashSet_1_AddValue_m1539D2475B8B90B247ED5A3C4E01698DF6D74F19;
extern const uint32_t g_rgctx_HashSet_1_AddIfNotPresent_mF89D8C4E328F141B43BA304A67EFAE78CF643968;
extern const uint32_t g_rgctx_HashSet_1_InternalGetHashCode_m175DF882B346A324B102A8692CA09758B465DF72;
extern const uint32_t g_rgctx_IEqualityComparer_1_Equals_m0539178A3A28082426D3792F170D842E3F99CCA6;
extern const uint32_t g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_mAC8E7BAAD9DE7ECC11D9FC60E3A4FBD661B4A329;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94_mC2F4F596AEB6576F80BEB5EBFA1BDB1588C1226B;
extern const uint32_t g_rgctx_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D;
extern const uint32_t g_rgctx_Enumerator__ctor_m757B4624317C66B0082A97D86F44F4732370B396;
extern const uint32_t g_rgctx_IEnumerator_1_t1BD2EC88A1B4550751DED0BBB53571254F37887A;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mD059A216A04E59863006CEE9F7C3BD8AA41F1D5C;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m149653A74BD91288C695A04557C5D768E16EA745;
extern const uint32_t g_rgctx_Predicate_1_t1F12E2E3D79CAB6F034E6063432D655A79E0C690;
extern const uint32_t g_rgctx_Predicate_1_Invoke_m1E90162EC37F65593DEE945DFC92BA7B4259B3B7;
extern const uint32_t g_rgctx_HashSet_1_Remove_mFD3EA80DFC96201A988DBFBD52A4F920AFB5384D;
extern const uint32_t g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7;
extern const uint32_t g_rgctx_HashSet_1_SetCapacity_mBAE6B90A5CE1BD75B08B8527763700172A4ADB69;
extern const uint32_t g_rgctx_HashSet_1_IncreaseCapacity_mC430EB8352A6B45A9776BF3373EEE6551FC85ABE;
extern const uint32_t g_rgctx_IEqualityComparer_1_GetHashCode_mB43AB2E622EB30D675693CDC96CA5D836DE43336;
extern const uint32_t g_rgctx_HashSet_1_t4303F708FBAA10F4AEFFF032066BB6ABA20E29F3;
extern const uint32_t g_rgctx_Enumerator_tB091A59F0E047A76EF2099D441944326FE3C0B97;
extern const uint32_t g_rgctx_T_t6D22409F37413B725563BF484486F55FB7202BB8;
extern const uint32_t g_rgctx_SlotU5BU5D_t60EAC05F1274FA013F450CFD354680AA56C10EE9;
extern const uint32_t g_rgctx_Slot_t58F6F802D1D0CF12016B76609C3A54B33273FD13;
static const Il2CppRGCTXDefinition s_rgctxValues[471] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7AEE5935ECE18A383FD11919A51AE5602FC558A6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC8BDB859B1062ECC0A8239BEC7EFB8A8EA6D9980 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tCFAA62A6C9F96DE2CF39C6650ECDD90ABE2685EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Where_mA2F3F081E1BB8C080173197BF8B3BACB4D1265BD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_t3208AEE56FC08B9D8EF3EBC686C813285BEBCA88 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t02B6565B81E6B3116FEB4E19018ECAEA32DBECFE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_mA1F81211FAEEC31DDDE7FEB4597D827FD8173193 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t7ECE6A3407ABA1B6A770EE42BC241FA0D5CA8E64 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_tAEF79AA48344AA5DE131BEE39C5D791F28C824AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m58771D71B52CBC9B8BE8F30DD4C91AD2D03C28C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t937E10A58702C981A92D398826CA6EB6022E26DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mCC15F47FF48C410C2A5DEFECEB5A4BAD2023196D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t231085DC654FF569C9B8F5E63237864A5239876C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t6FA4F7F49AC86462A22243E02AC12E2C7FD86D87 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tBB463E7F0474B9FDAE03AD922C828F75B1607849 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Select_TisTResult_t09C874818BE124C126D70387CEB3E2879147E979_mA8212390C32951684330D31D8FF50C75DEF6F0ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tD13CBA29071C3CF51B7D2AD835B640FB3F76EA81 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tB4F773F9FE2E18781B998B5387EF4ED772383522 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_tEDE80B0BBD80F7C8DD8C078E1B803892CFEA7BEA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m2AC7E645F1BC7AB8EFBCDA5548385B40E79C3D1C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t64CD75C26CBC7F61E5F074979E6D4B662C1537D0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t06B75CD69EB58B504A2338CAC24DEAB2A4A422D1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_t5A4506F26C43750752687193A2ECBAD317108786 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_mF25C917FA82A1B5E82D32A1CA4DA63EDF3475574 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t5E919007496A2E81A975C75A0B3615B078CBA88B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5372F7F1EB431A98E944244596B6C21D09502A22 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_t88A6949A7AEDDEC91840BDF9765FDB640CC20C45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m21A2561C62A6B664EF399093687C2B230994127B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t42351EBF54CFD195B1B5FC759E8230659B831E58 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m94C50E845A9EFBBE1304447BF0E1488047DC0EB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mC8286BFD1DE847A94D6CEB7715EDEC5CAC8CCEFA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_t3C1DE292CE570AF221D1B927B5FFD65D137F4F53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_mA324D7BE4B1D42C68C65408628CE1315E1A041C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t90A38F89EE0925270BECFC158CB52304C9AB8FB1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t46079E56C33454D23CE3E9CFB3ABD3A16E3C41DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_mB8CBD5D12D14D3F630E4DBDA0FFE77BC0C07B058 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA57AF6915764EDDF8741C38C57B21EE438C59343 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m0EC239CC0DB375302D978065A77B350F8BAD42E0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t546E37C3CF73BB0D3DA89FCDD5153A17B8DCC6B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9DCB4EFA71B884EBBB9FD09C0C65C77427B26E1F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_SelectManyIterator_TisTSource_t7F0C5740251B05A62A6A641BC51F8E5733AD6760_TisTResult_t38B7679FCD8545B430D820D0F0D98F252D2C2EF5_m149049CA44C6B9AC1CD6FB98A9B9D694DFC53A83 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t3F3B4E4F512D51FC443C60B1CEC526549D6931EE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_t208D279B305E9176574F99BFB9FB7FF65B585BF3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2__ctor_m750AD9483F5763DEBA60CB57DA8E7608BE414C2C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tF9081D9C76C0FDEAD3999E115BF9FE10DA82867E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t5DD521FC94884DAC634B586D331EA4947E58CD4F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tCC855C5AF6BD9D67E2CF080C15DABD42DE459A0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t18B1771E183BBF7ED71C7142E4F25C5925533369 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tE2CB3373C3458754A4C0934F608C6BB9DEE2E320 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_2_tF1AACDA47B61C821E04C8EE7FF8ACC912E870472 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_2__ctor_mB8B4AFAD45CC73DEF69E5F02691BE96612B56DFB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparer_1_t6624203B71264564CC7880B19D4B15170C618F26 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IOrderedEnumerable_1_t3E909BD97C8F81E8ADD3E120147FD95260CD4079 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IOrderedEnumerable_1_t95766CE79E223CA6EEE8C3C16211A7F8E7636E47 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t5ACD656DB0C3F68C2B54A6A5E949701B9DCEF6C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IOrderedEnumerable_1_CreateOrderedEnumerable_TisTKey_t8C2AE010BF0E48BCCA8202648BE024BD4EAD253E_m6E3AD35218932C6080CF0BC526B96E4289082239 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparer_1_t2D2DB1CEA4C76DE527E2E09F69941EB5A48F1182 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tBFF6511AD1159F06E17898E6F973E9DED5B7F3F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_DistinctIterator_TisTSource_tCDDDC3199C11F82403BBADA78670AC4D5C583485_m862FD90198DCAC0510EED7F509C10176737CF06C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t7200EB6ED038EEFF0FAD5D2F869B220EC55D4595 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_t50A3421E39AFDEA147E66F1951CA3A10E22DFA34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m751BFE5C018D707838D8263E2EFCE8506882F760 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tC33F6CF6D1E787C8C05BB8760DEAB37C0C254CC2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t53BE427B9D2984F116DE9973AB924A726B0E8BA7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t296117C3CB77FAC982BA7A7B1027F9D3291A496D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Buffer_1_tE1DE8755D64B058C0ADA242840D34CF5699C6E71 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Buffer_1__ctor_m3FB9EADB6600E16BE09444D9398D589EF1181BCF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Buffer_1_ToArray_mB13CE17B934DAD48DBFB42688B525215B4691E43 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tA76FEBFAA624BA5CF9E6C001773513F67B133455 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t322CF9F8601BC2225C09F636348027E21B22890D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t9AEAF71CB03D3DCDB8CF05C06A82571523481244 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mC9534C8F75C0F5FFF32F381F2F892589D3BF7975 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t0B866DF058236FEC5415A326A3213F49AA55BC54 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IList_1_tCED22963CED7CC47B5CFDCFA2E0206339244CFB4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t28E994F3A824EA898113486CB2BBE8611195DB41 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m3D1918F6D38C1FB6DF84E15DB8CBC3E59E9C94D9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IList_1_get_Item_m891812AFFF99172B43E25C4FA972CFCADAE240CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t4BE2E321A4CF4873EF48E3EC8EBE1AAB810A1ED1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m7E82B57644359B28D170CD5F620DDF8264DFBBFC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t964247E5CED1FD6D2A4A9AC1F3A49B15B6935509 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mC513186FC775307C8BE17EBBF0D947400E07EBAA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t37FB4609EA4007EA8AAED36AA54BAB3CC9659FED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IList_1_t5B665A7CA5F8890561CC2FD53C1E2681A23F0EA7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t4FA856088EB2B059A3F14DB7E787403ACF8C62DB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_mB0354939EF1221A12C6CFAD635676902B80B1038 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IList_1_get_Item_mCC77534088C01C8B6EFCC8A82DB9C7D715EE2F96 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tF0FB6BCF72B0121ADA2EA199BC1E1A031F5EB9A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m64D4BF718D960AEBFF72C40CA30BFB4871BB3A65 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tEB16E070802285F0C7D10A00CCB1E4074E4E8A0A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m8E6F3610D00771CE631E796375591DBF67746BCC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tBC6702195CBC2E0BE4528C405D286B726771E41B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tAFAD4B419AD3D0106D6999001E5A68EE48299D9B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m67BC61F3D9901C06B1303874DF4C9B5428A72548 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tBA45D46B82C6DEC7BB8483B0F26A4D508DBCF193 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m06D577A7F4E904B05AE5CC4AAA9887EB0E75EB4F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t9C8F57E18E2C7CFDA2967D811D0D7CB282F778FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mCCBDF7BCA61445CE52C2DBCFC1D2AA62D2BA00E2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t90F8CBED2D9C18B43C3829576CF4A316FE813F97 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tF8C13789D48D4FFCFBEFF82099054681004790B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tF3CB65B39701E85EC92EADAF0DEE8A6107D23921 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mC5E9D73414E8046423EBA4CA12506AEFE7424657 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t98FAD7BFA0FE613E94306E6AE72B92B2FF4728E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mCF311051B917AD99BC2036029EFF69217BACC823 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE346F93E96B76E5E1B35B7C31B9A964B64B91906 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7CEC2B33E6DD3C1C3A6A172B3F8F543C1116982C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB4B09B48E6A2A7B32ABB0D39C54E835B17CCEE61 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mCC4AB6E07BBF5914732D63186528794923285145 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tE2C6256C33037DCA358539D2812BAD8FA0E35704 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m272CB7E38BA46922E0937B29BEEA5D644DED9ADD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m53A6358BFFA10B30C1CEC31578FC6C8B456A7566 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t54625D3083ADCDF8A2D6937452AEDB2E5834A635 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IList_1_t9D78FA912A746CC065A726C99C4460D31749FAE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IList_1_get_Item_mE036AC4868F1C51FFBE57B4FFA181B2439D5CCB4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t2A89D673E76D4FA5B6753E816FDC77F4835B465C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m704EF9BF0CE7EB0AD0A7FDAE461B6B1E2137F4D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tC26AE33B7BC7EDF8A344AA81B1BC290AEA3F2BF0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m75CE3A33FB46BBF767EEB47959CDCAF184315E8B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyEnumerable_1_tBEA703373DB0C1A396E4DDFD110D9A5402BB0182 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResultU5BU5D_tC2F645D6BAF8A95BC3019320A9AA2D760777182E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyEnumerable_1_tBEA703373DB0C1A396E4DDFD110D9A5402BB0182 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t330F555B756F04D1B80E293C25B1AD8FEE854566 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t172656FB996B8C7E336AAC30919996CCF45053EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m710BA0C8DA9F68BF7D5119792FA401AC61A1875C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t5290D6936B1D4D571793E4717B781F0C7FAB2871 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tB31E19935A0E3467E4E51AD773A9D5432B73B518 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t738FFE96DA24D4260B7C39DC33541473836A6630 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mA944AB0962D1DBEDDE52E6F419F650AC136C2897 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tC56F860588AE66C881B76D981EE6DE2C1E18EE35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mD0F557574B1C7EBE3FDA2BB6749399C5668BC2DB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m6020CD4EAC12A5FE9D3B4FB21F10F4FD03BED403 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t695B0D3D337EEE1FA46DCCFB55B304D63CD5FB5F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3FECB5D235AA89CFF3030502EECEC5CCEAC97C93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m03E34F9ECD77A216A1C2279AF316C6C5F960082A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t38E1D374BC4763846B1ADADA83B3C4DFE79CAB70 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m0C348BEACDFF793CB7D558FBF052D24315A0A7CA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t774D252380CBC46A784933EA766C83321F487023 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mBA345BBA6F5E97BABA854681C4387A952E5ECC7C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t1A61E70010BC8A596B58697486E4551BCB37D4B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t293DB944473C7BFCEA469C1BA4B6DC63B7F22524 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m7138C400B9510DFA97CC37E7202E729B86025149 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mD96D453595A6310A1BA0E3B2104A3F3405E246CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t5E396B54BC84949D8A2CE00391412D82175F4A73 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t149216817B0FAD21D58F5F59C151FDECD4514C43 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tADCC2B75AD30AC925293181D40C8F7B2763C99A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mF57D9CE14A95874343941A3AD4F6F4AE342F232F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tE20D8708CC88F4F9ED383C47893D0ABF2A8EE0B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m6F3627347CD8E7ACA12F304AE53EBCD3895B21F7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tFCB2E3BE5F0EF37ACCD60CCF2A212F6A6ED15191 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE7AF426752D7F53CCBE1A86E160A8603FADC18BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t2604AB001D4D9DD0656EC9ED6F422874A6AE0CAA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t8AF47F972E9325FAC3FFCC835F8A9CCF0A6013AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_Contains_m3F543D6A23D15559129542795589DEBA87D6E6E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Contains_TisTSource_t2A13F2ACA63C8AD11C2FF60F2430DE480EA94CB7_m13AFE84E80D4434C455AE4797158507D2CE06F92 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t8EB74B430E35284B019D5B00229DDC2CADCA2979 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t9B8E14EBDF6C94CA793E9E13A976D30CBE40B8AD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m541E74134166ECC3AB936F69627F1B05C5A2384E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t3D6F7E3583AAB823BB9443692959A8F14EF35ED6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t3D6F7E3583AAB823BB9443692959A8F14EF35ED6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t105252D36D92C84592FCD66878C756E1D207CF23 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mEBFBD0473E424EAE2E050B374CC66B29587F8981 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t0D080C81A7C92A5DA8279E09CE9F225576BD96A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m49DBF7833D6F50D75F5E8078E96B6EDC6BAD69DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tC79DC90DAC43350E29C613D3E1120A3D8ED256A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_Equals_mD8C87E297C4002B049979B598B893A6D6130B84D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t15692AE856D4F6CF8F91F15DC932B0FAFFF1B98C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_mAB7D8293A40454908F2ACEBDCCC2013C7B797931 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t91E4170AD82C80359D1DA956AB2D5F35FFC9E17F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t1F5FF34DBCE1F6AF7517393D73D356A6DA50B6D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF3A2E2792E40371499F8A04F1C4B4CF725C70204 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t644CE4B8B814E279469D9F5065AAF5EF15E981AD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tF02636C637844512684A90462192D486199D9DDC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_m99E4C6C9A5E23442C4C59423A2C776AB6D8B0174 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t988FF724FA547066EC844CEC6A2D933A9656CFF0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t7E1F1F418656D817F8B1105218612EA9815F076D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t6BD47364FC721CA8B09BDFC7BE6810CCE818F41E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m13925FA98D8607D9EA9B1A4792AE6A94B2849DF1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t1E18B60B778214CF834B5B2B4597F8168987FF46 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_m987D55B3468870CBF0482585D957025163C6B362 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tC15BD51C80FA8BBB44707A0414386F7091E0C5B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA2568CACA7B932F3335367555AD3AA649EA8616A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_tA11FC7FED3C26063A55DAAA599906A1C57175B03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_m89A10922BF0309154D097D4D7E630E8451C1B952 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tACDE169121AB80458711A833C20EB643EE04DFBA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m24F4541F8829F51E57F84D96054E563391732CFC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tA64D266802CC654E58E383563C59E5BC49B1AD22 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t48BC8AE4F3D8AE2BB3FB23C3AFC140A756CC65A4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t86CFE648CE7192981F7DA895E30FBDA1F513B652 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD5EAA29CDB4313FE2590F76DD99FB1497FF215B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mDA7AA133551DE9DAA42B9489EF99A53B6BF80749 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tA31D49CCC35E12E44AB58CA8F1ABB8B79289764F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t01303709A68F833425B5740A2A2D972A0DDEEB26 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mEC8779D213FB3A1CF689B52F5B8219238E54A57B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m8A5C078C211D763A5213D0930EBD38A3D97EA825 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mFE78B9CDC5BBDF50E78AFAD9CFE23F2223C79F5B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m4148D75120CEABE2FF0024661FDDBFCB6BA771A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m76A5030A28A4F68091A624D3302941DB8B4E0765 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tAA642C0E102AA47F986C3FA375163287B7C468CF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t46D8F3B462050CB986339EA63B34443BA66D5EE9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m05CA91B0739729D9DFB15FD9AE29358281C4DF95 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7D3FB73373A7E55CFB0A929FDB9624DCBBE103AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t5C13B8D2EFFBB981CCD8A725E58541CE1A667654 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093_TisTResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520_TisTResult2_tACCDF53F8D9C783083BE76E1EBF4F0851CBEA20C_m345D8DF017B8D3765DC97BC209B7210990D6AE2A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3E1A7BFA68A822C2818AA477502F897ECAFBC9CF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2_t091A81B2BFDECBB6B85A5DE344E32E306B979F4E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mF714167A39020832C4835CAA8F81F6E0FAA9A789 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tAAE02E0522D7C8C0A7F3DF5617BA6853BB39B1AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m6A1E7CB836C19C0B9439096586A06D0057E7AA52 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tBA8B4C9C4370282335B66D6DD7DEF366389F78E9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t2F5234271A3A4E5F89C63030DD6F9D9260D06FDE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t47CC59E1937CA3FCC9DA471AAD5C7899D9AFF9DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8A5A56224271942180907637F3E10A9A3CBDAEDF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mCD9A624F8C3ACA086CFD4CEBB6150456E1471C9B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tEE17D73E1A34A4CF384B00C3E896D8BCCA8406C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m8DAC2E225A682443964FAEA00BE2C728AAD74B0D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mFA2E82CEFB4B24BDB33564DECDF4765D2B7C7053 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mA9BFBEB710778B3A052F66CEDA033562C82E1D71 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t480B273C25623AA9E4317431E82E5CDC83653B88 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_tC18F5A6D2AF40216AE21EBC6827AD147E31E17A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mA5B3E7EB5B0FFE980FA8EE42233961A20AC087F7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tB342F7C7B97451C3B30BA929061F3E4C764D0C8F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tF2E1E9B5BCF9C792EB67A2121132E25B39C5D1F5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t21BF09076F270DC063711DE3ABB52B001A331F78_TisTResult_t278B55150BC17BB45D33B605F011F4D96EFE5425_TisTResult2_tEC28CE9F47F4F949C7CD44736D7F4B15360A65F9_mA81E895EA2CB0BC29569218C386C988368BF3828 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9E2205FDD35EE96086C9455A263182628EA14EEA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectArrayIterator_2_t59D43E919F2DC1D758D7C811297A1435D53D93AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m1F6E197D75A7ECC536CF790E45D8855D46A1FDC6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t038B540C9254B43CB79B6E3FD1F165D17B50C39F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_mAB5D6B06319C192633E05B6EBBA9A168FF73AAE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t905EFEC983EC5317F0B1F633D205BF984BB0BE1D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_tBA41BFF0DB2BFE973868036026CDCA6B8797A8D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tBE76289600B0D10382BAB5D9F828D996195A6D07 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC25DAB584B0F47C1DAA1B56A2C30A3D42B88D146 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_mDFE79323B2924E6309386ABFB7F9AE7BAAD059C2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t908D71005972796790D5ED7033CA7098F2134EEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m906D8353E6DC2D62B1C6ACF3849D1970361C7AED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mF94AE9E660C674B47621BAB249E8B2D27BF85E73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m74CA45C07863967094098CE16E020CA52859B1D3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mD3BAB36AFD8333EB35A46C14C441E1B1A7493CED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m741197394517AA91B94A9D65A084BBAED71C3C3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8E8A035865E0B12506807F075F71DBE42DE1DEA7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t957AB458B1F7D316B1F8960AE854A6CD7E1DD852 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mF25AEB188FA18B82EFB71A5BAD8534E8A1FFCEE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tF3EF3E2AC9748DE151D15746807E2B4895D45AF1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8A02B4523B02AD775A6B514283295415A129D83D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3_TisTResult_t11AC9139084FDCB528CAF75FE5166467D3329A05_TisTResult2_tECB8FBA56F78B893A9D06A35F011858B7CE2F3E3_m5476B06EE2463B58E14E67144E4975FF33FAC444 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8D6915DA2C514D8EC62968CAF8A9C7B13CE7C64C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereSelectListIterator_2_t8C5A1568CD9B2B2E7760D591DD3A4517DB930770 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereSelectListIterator_2__ctor_m43F52D624D5D5CFF28C6B99849AC99EBE6E71A4F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t841249426E2891AD6CA86F723EF7D2A3F47EC96C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_t85BE6C374EBD46B5FBA9AC2082BC664AC3D7FA9F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t756BE45FD1B4569EBD49EAD2AB1444B766D13F83 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t7FD8EDECC22AF73DBD12F1882F5F9C6A655487DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE7A8E49A025849A2FE64A86343365C1808AD743F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_t9D6CCB6F5B3C868A5A90D3A6284ADB626CDC34BD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB89E2A0A82E89B19927B092B238720F65A87EBE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tE17298D4C6D18DE4FB73F421AF563BE9FB9630EB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tCBE465C8F23425CBF01771A6BF89967BC3CCA7B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m176EFBF601E4DFA96422134D1F9C9A90B94D6ACF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TMiddle_t34F72DBAB95AE3EC84C8E5B47A243665C8CD6140 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE58690AB3F029696906A136F1FFDCB60D54D4C85 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_t91822A9663D50763CEE23B708B1DE99BAE9ED949 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_t80F0A8E8CD72F862C9756B513CA0E69CA552C0D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_mF728E3C6B29EA0DF10D3BA06045AD22644EA3E9B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_m3F705537F51F06056319F653E2259BB61FDFC84F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tD1389C38D56436639122F61396C8E429889C377A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m8C99896D8A616F86338CC80E782077A0E16AF4F1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tFD0011EBB450CC3BF27CEC691ECB0C3AECC7749F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m6140A669FD20F62976EC9AD7ABC81919CD1D766F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t613FB799F1283E17E4BF8D5FE514CD5881BA76C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m8DF7C3A537A90832C0824CE33EF2FEBE066C6A41 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tC9F000960A1A3A72A5A8918F1119FCF380D4E487 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m04A4AE5BFD2F48213FF247D36BBE7E18877F921F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tE098A91CD077E31FC61135B5029A16072F2C0FAC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mA70C959D540989A08393DCCB40FC89064E6EE422 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m4F9011CE53A860AD076D2E84B4D9A628DFE8EF34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2__ctor_mA4E3202CDBBD9520C0E219EEBA20CBE5B69ECDA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m08198DA1542C22E9478C94AE9559F13D8591B212 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_t9F1140F3B4BD52639A46DEAC9764A78092C97305 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_m5A1FD8F557D9372B7207DA439D3F5400A5D680AB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t84EC52F09ECAEA4C618F813D107FD87A7F30C55F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Set_1_tF01934D2229565F204C9ADF13158DCCB8CCD2EB7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Set_1__ctor_m815CB40BA85CEF706F531B7BF439E4D505BB5E42 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t43811822819B75BE6619279ABA5B08ADD11A36C6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mAFA75F0FA4A7759C4ECC79C7F42CE043C0BBE463 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t2A2E2EF21339FD112C964B9CF2654AA9BAE4F2CA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mEE747CACD72C9E1BBB4DB60B37811664ED7DC536 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Set_1_Add_m7DC65238C38BBB6ADCC867FD478D64A4338BA366 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mE5F9EBDAF6CE2E21979B6940EA37E5544C7DFF27 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m412D5949A71FB2DF622581177F22A884DDC67287 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mBE8DC2773FB7231E662A140F2047ECA0B63D6879 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t5FE845F5AF158D61A1612AC86BF41A482409E218 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyEnumerable_1_t903C1B1D5A3723EB325CD99884D858F929D989D3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t5FE845F5AF158D61A1612AC86BF41A482409E218 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyEnumerable_1_t903C1B1D5A3723EB325CD99884D858F929D989D3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t253FDF060C665D2CAE293B27514148BC04F881E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m0BAAB0F053B99F5503C286F6CA5CD4FEAFFA1E92 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t3C6F85286B5844659CD99C8CD82F39A1027D0E28 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t3C6F85286B5844659CD99C8CD82F39A1027D0E28 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Set_1_t7A4A1BB330F38928BA4C3D4671E7C8D5C181A524 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_t505B87EE9501DF282930D90EBCE91A5A51A6ADB6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_t505B87EE9501DF282930D90EBCE91A5A51A6ADB6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Set_1_Find_m0EE1659DEEEBAB3ECCC1F697BADD51B15F897CB4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Set_1_InternalGetHashCode_mEB2BF942411714E6D3DF54C3B8C84C81FECF480F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Slot_tCF6C106E017087F992287BEE78F3944F04CDE04A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_Equals_mE91439EC229D29977A94DDFDE430E5512204C1ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Set_1_Resize_mC350A354D2354B256A23057B23D4977E4653170F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_GetHashCode_m72FC6D66920C3DFDB7422DCC3D13CE50ED7E24A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CGetEnumeratorU3Ed__1_t3CC996D75E05583A2C68BDAA6119DD5395C4CAEE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD3A17D2F3E5D0A469641D57A4AB655B4545F375E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_1_tF21AF4414E89CEDA2C00E6F0BF68D017AAFE1A3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tF34DA2030B04C69A451CC3052FFB517370CEBC9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_1_GetEnumerator_mBBDBE3B4727EE491AF45177AF6A25516F22737D7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tCF79AA47BDE72EE23097C64EC751E154207B0007 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IOrderedEnumerable_1_t59A4E37EC4D47D4BDCA15AB2263003DFB4AD4392 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3EC367D33290240896A6863CD702B99F688F6502 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparer_1_t11E44E663DAC2EEF8C678ED611840426974D69C4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_2_tBEC552CAD99DF0748B3CF3552F93BE83E3A03F3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_2__ctor_m8890686A74F81E8473FB5D036EE0D750597D2994 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CGetEnumeratorU3Ed__1_tAC327306F51A03C30C746FA91A2956D91298A625 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_1_t9A3D8D2850455B28D36B701298D0B1331F534031 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t55B23EE80DE4AC2729B007E4996B4EC6092C22B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Buffer_1_t41F8077A5F13608D5270B50E18148B45F5F315C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Buffer_1__ctor_mA99E4505CFF1FED56FB8272A49E274F14DBB6727 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m5F587D4742CDA03CB231EF0741B98D9EB7EF4E84 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_1_tA62734D066C60347DFE7A135B5958DFFCF9E8C51 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_tED49DDAD3D022FB685E20197948E5E240356DD8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_Sort_m82301704DAE9F05F1C2681B4E735E04BB7919073 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_1__ctor_m920D35170CC92329CACC9CFB60EF8BB9C06FF9FF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_1_t06CB3897759B3B58FCFDD71EC11AFB8E99366F94 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tB5E9084E800EEA2109299120A911D7CBD68313A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD4C0D9C7FE619F338A606ED13C68E50D3B060274 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_1_t06CB3897759B3B58FCFDD71EC11AFB8E99366F94 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OrderedEnumerable_2_tC9CE505A2DBA4D868BE7EA99305BF8842B4A7B1B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparer_1_tDC50F63DA3477B5CC9DE6B5EAAD06AA748D13B15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Comparer_1_get_Default_m6B94980B8459B87D60C5B69F2A918613EB300EB5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Comparer_1_t05930316C99AB50EC343359F3B8840EEADD7452B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Comparer_1_t05930316C99AB50EC343359F3B8840EEADD7452B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_1_tD9E9E30BC61256A4C95915F5404B404BB4FF0F5F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_2_t8479B5254E2828D3550EA1B532B05EDB1B1215D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_2__ctor_m18A2FE6C6F5054713B98012F0E2CD0B5DB7C20BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m7268D01B139AF537E1343B1EC035A4E3EB18243D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t3ED42A4BA193A9DC6EDF323FB4AD1053E96FD749 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_1_tBB9ADD7C21E31739D9683D99CFF9DC117D8BAB11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_ComputeKeys_m0261683B46812CA7A0CEB845C1EF325F8033694E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_QuickSort_m01455655602074FD67BC431F21F62F7A9180571C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_CompareKeys_mFB513F8D369E5221DD6F66ACC4F34A50807CDBC6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1__ctor_mFF96BE3E2A79A8BC38E1A650D9434EA57297BF46 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_1_t053F2BD859874727D1E461B965976B49B4A173C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t5E10C25103ED51C0C843F4F679CFF099A92D2033 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_2_tA19C7029F1CECEB4E93C278DDE6C4238D0BC1EE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparer_1_t1FA8428328A44FE33A3569A2A717B4CC10F6D553 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EnumerableSorter_1_t053F2BD859874727D1E461B965976B49B4A173C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKeyU5BU5D_tE5676E72B1BCCA85AD5A6118A3858A2144C86857 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKeyU5BU5D_tE5676E72B1BCCA85AD5A6118A3858A2144C86857 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_tDD687E24A22E45963C8860E83A668B089236AC54 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t60940EC98E895D6BD6A1E5613E8522DE5FED38CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m8D38D643551E8034BC2F061748DC2E8A54B8FC99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tCEB1916A91D8BD6826A56F094336B2CAF4D0B1E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_ComputeKeys_mFBB6EE61ABB9424BD1DD39936A10EA3D454AF202 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComparer_1_Compare_m392095FFDA3D97DA5903FA4F1CCEE94E1CA1E5BA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EnumerableSorter_1_CompareKeys_mA39249DC095B5EC415BF70815665F8483E6229D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t03135CC19B082BC866CC79592745590E608D5CE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tB92B34A134CB1BF586A69F2A283CF79675A37E1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m853E49D009E94914082E87AD16E91AD4A7694DEE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_CopyTo_m1623FBCB4E13BACF6CA953F8F38FD10B4ABDC6C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElementU5BU5D_t65424EAA6380C3A80C7FCEBE88D5E248445EFD15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mD5E0E805DDE55F5756E21D0D5FEDB2220FA39060 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t13EFC35CCC3C9F302141EE5C116481E1CF2CDC48 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m1BB68E9CA48B668E739FD9AF759EEE794E0CC7A5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Buffer_1_tA7D595D30E21A96C82F7EFCCB95EE57E75D35223 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m4174234FC56DD1F9890041E9BFF3C38107E68D00 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tA96567156D027DA41596C9CA1C5DEAB0CDEE6C60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m781AB04365DCD9333E443C412DFFE8102DCAA2D0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t66DFFD1D981BA05FF20035307F86BFC3864B2E2B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tF089CA52CB584DB29B4FF68C4A59B7C5FBD3630A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t08DFCA249A6163529549D46ACA84A83C8CD361EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m07CC1E138E0D451EA7ED1AC941AC1245011C2093 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_AreEqualityComparersEqual_mDDCC239294D0B3B5AF7E2DCB8D1479D0FF8DE41B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tF089CA52CB584DB29B4FF68C4A59B7C5FBD3630A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyFrom_mF3114EC5E22390EB6044B5BB4731BE3733A2AACA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t0962A9980803A8F46108387826B91CD4DB9B0F97 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_mC4059B0C3219EDC8E97DE3ECFF2B0A4A0280801E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Initialize_m06C4A2DE0A243BB8A2D0C4345712ED9B91231993 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_UnionWith_m630B15B252A9518ACDC7F2CC33E343AF51C014B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_TrimExcess_m772030970D2E00DEA17364C4A8633644B366DE11 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_AddValue_m1539D2475B8B90B247ED5A3C4E01698DF6D74F19 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_AddIfNotPresent_mF89D8C4E328F141B43BA304A67EFAE78CF643968 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_InternalGetHashCode_m175DF882B346A324B102A8692CA09758B465DF72 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_Equals_m0539178A3A28082426D3792F170D842E3F99CCA6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t6BCCEA57BEA1E43097B80E2965A5789452F93BA0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyTo_mAC8E7BAAD9DE7ECC11D9FC60E3A4FBD661B4A329 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94_mC2F4F596AEB6576F80BEB5EBFA1BDB1588C1226B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_m757B4624317C66B0082A97D86F44F4732370B396 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t1BD2EC88A1B4550751DED0BBB53571254F37887A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mD059A216A04E59863006CEE9F7C3BD8AA41F1D5C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m149653A74BD91288C695A04557C5D768E16EA745 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Predicate_1_t1F12E2E3D79CAB6F034E6063432D655A79E0C690 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Predicate_1_Invoke_m1E90162EC37F65593DEE945DFC92BA7B4259B3B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Remove_mFD3EA80DFC96201A988DBFBD52A4F920AFB5384D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_tCF3C9EE13C54F730A642AD5F260A5A7D2F9F73F7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_SetCapacity_mBAE6B90A5CE1BD75B08B8527763700172A4ADB69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_IncreaseCapacity_mC430EB8352A6B45A9776BF3373EEE6551FC85ABE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEqualityComparer_1_GetHashCode_mB43AB2E622EB30D675693CDC96CA5D836DE43336 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t4303F708FBAA10F4AEFFF032066BB6ABA20E29F3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tB091A59F0E047A76EF2099D441944326FE3C0B97 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6D22409F37413B725563BF484486F55FB7202BB8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SlotU5BU5D_t60EAC05F1274FA013F450CFD354680AA56C10EE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Slot_t58F6F802D1D0CF12016B76609C3A54B33273FD13 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	163,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	54,
	s_rgctxIndices,
	471,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
