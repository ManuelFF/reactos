

#define STUB(x) void x() {}

STUB(KdpEnableSafeMem)
STUB(KfLowerIrql)
STUB(KeRaiseIrql)
STUB(KeLowerIrql)
STUB(KeRaiseIrqlToSynchLevel)
STUB(KeRaiseIrqlToDpcLevel)
STUB(KiIdleLoop)
STUB(KeGetCurrentIrql)
STUB(KeAcquireInStackQueuedSpinLockRaiseToSynch)
STUB(KeNumberProcessors)
STUB(KeBugcheckCallbackListHead)
STUB(ExpInterlockedPushEntrySList)
STUB(NtContinue)
STUB(KeActiveProcessors)
STUB(KeDisableInterrupts)
STUB(KiSwapContext)
STUB(KeContextToTrapFrame)
STUB(KiDispatchException)
STUB(MiGetUserPageDirectoryCount)
STUB(MmStats)
STUB(ExAcquireResourceLock)
STUB(ExReleaseResourceLock)
STUB(MiNonPagedPoolLength)
STUB(MiNonPagedPoolStart)
STUB(KiInitializeUserApc)
STUB(KiComputeTimerTableIndex)
STUB(KeBugcheckReasonCallbackListHead)
STUB(BugCheckCallbackLock)
STUB(NtCallbackReturn)
STUB(NtRaiseException)
STUB(NtSetLdtEntries)
STUB(NtVdmControl)
STUB(KiSwapProcess)
STUB(KeGetCurrentProcessorNumber)
STUB(Ke386InitThreadWithContext)
STUB(ExpInterlockedPopEntrySList)
STUB(ExAllocateFromNPagedLookasideList)
STUB(RtlGetCallersAddress)
STUB(RtlCompareMemory)
STUB(ExpEnvironmentLock)
STUB(ExpFirmwareTableProviderListHead)
STUB(ExInterlockedInsertTailList)
STUB(ExInterlockedRemoveHeadList)
STUB(ExInterlockedAddLargeStatistic)
STUB(CmpInitializeMachineDependentConfiguration)
STUB(ExpFirmwareTableResource)
STUB(MmNumberOfPhysicalPages)
STUB(MmMapLockedPage)
STUB(PsThreadType)
STUB(ExfInterlockedCompareExchange64)
STUB(ExInterlockedInsertHeadList)
STUB(IoCompletionType)
STUB(IoCompletionPacketLookaside)
STUB(CancelSpinLock)
STUB(KdbpCliInit)
STUB(KeDisconnectInterrupt)
STUB(KeInitializeInterrupt)
STUB(MiFreeDescriptor)
STUB(MmPfnDatabase)
STUB(MmHighestPhysicalPage)
STUB(MiFreeDescriptorOrg)
STUB(ExEventObjectType)
STUB(KeRosDumpStackFrames)
STUB(RtlWalkFrameChain)
STUB(ExSystemLookasideListHead)
STUB(PspGetOrSetContextKernelRoutine)
STUB(KeConnectInterrupt)
STUB(KeRaiseUserException)
STUB(_ExSemaphoreObjectType)
STUB(KeFeatureBits)
STUB(KiSystemService)
STUB(KdpGdbStubInit)
STUB(KdbpGetCommandLineSettings)
STUB(KdbpSafeReadMemory)
STUB(RtlFillMemoryUlong)
STUB(RtlCaptureContext)
STUB(RtlpGetExceptionAddress)
STUB(RtlDispatchException)
STUB(DbgkDebugObjectType)
STUB(KdbEnterDebuggerException)
STUB(KdbpCliModuleLoaded)
STUB(RtlUnwind)
STUB(RtlInitializeContext)
STUB(DbgCommandString)
STUB(ExAcquireRundownProtection)
STUB(ExAcquireRundownProtectionCacheAware)
STUB(ExAcquireRundownProtectionCacheAwareEx)
STUB(ExAcquireRundownProtectionEx)
STUB(ExAllocateFromPagedLookasideList)
STUB(ExEnterCriticalRegionAndAcquireResourceShared)
STUB(ExEnterCriticalRegionAndAcquireSharedWaitForExclusive)
STUB(ExFreeToPagedLookasideList)
STUB(ExInitializeRundownProtection)
STUB(ExInterlockedAddLargeInteger)
STUB(ExInterlockedAddUlong)
STUB(ExInterlockedPopEntryList)
STUB(ExInterlockedPushEntryList)
STUB(ExQueryDepthSList)
STUB(ExRaiseException)
STUB(ExRaiseStatus)
STUB(ExReInitializeRundownProtection)
STUB(ExReInitializeRundownProtectionCacheAware)
STUB(ExReleaseRundownProtection)
STUB(ExReleaseRundownProtectionCacheAware)
STUB(ExReleaseRundownProtectionCacheAwareEx)
STUB(ExReleaseRundownProtectionEx)
STUB(ExRundownCompleted)
STUB(ExRundownCompletedCacheAware)
STUB(ExSemaphoreObjectType)
STUB(ExWaitForRundownProtectionRelease)
STUB(ExWaitForRundownProtectionReleaseCacheAware)
STUB(ExpInterlockedFlushSList)
STUB(FsRtlAddBaseMcbEntry)
STUB(FsRtlGetNextBaseMcbEntry)
STUB(FsRtlInitializeBaseMcb)
STUB(FsRtlLegalAnsiCharacterArray)
STUB(FsRtlLookupBaseMcbEntry)
STUB(FsRtlLookupLastBaseMcbEntry)
STUB(FsRtlLookupLastBaseMcbEntryAndIndex)
STUB(FsRtlNumberOfRunsInBaseMcb)
STUB(FsRtlRemoveBaseMcbEntry)
STUB(FsRtlResetBaseMcb)
STUB(FsRtlSplitBaseMcb)
STUB(FsRtlTruncateBaseMcb)
STUB(FsRtlUninitializeBaseMcb)
STUB(HalDispatchTable)
STUB(HeadlessDispatch)
STUB(InitializeSListHead)
STUB(IoFileObjectType)
STUB(IoForwardAndCatchIrp)
STUB(IoIs32bitProcess)
STUB(IoTranslateBusAddress)
STUB(IoWMIDeviceObjectToProviderId)
STUB(KdDebuggerEnabled)
STUB(KdDebuggerNotPresent)
STUB(KeAcquireQueuedSpinLock)
STUB(_imp__KeAcquireQueuedSpinLock)
STUB(_imp__KeReleaseQueuedSpinLock)
STUB(KeAcquireQueuedSpinLockRaiseToSynch)
STUB(KeAcquireSpinLockRaiseToDpc)
STUB(KeAcquireSpinLockRaiseToSynch)
STUB(KeEnterCriticalRegion)
STUB(KeEnterGuardedRegion)
STUB(KeExpandKernelStackAndCallout)
STUB(KeFlushEntireTb)
STUB(KeGenericCallDpc)
STUB(KeGetRecommendedSharedDataAlignment)
STUB(KeInvalidateAllCaches)
STUB(KeIsWaitListEmpty)
STUB(KeLastBranchMSR)
STUB(KeLeaveCriticalRegion)
STUB(KeLeaveGuardedRegion)
STUB(KeQueryActiveProcessors)
STUB(KeQueryMultiThreadProcessorSet)
STUB(KeQueryPrcbAddress)
STUB(KeReadStateMutex)
STUB(KeReleaseQueuedSpinLock)
STUB(KeReleaseSpinLock)
STUB(KeRestoreFloatingPointState)
STUB(KeSaveFloatingPointState)
STUB(KeSaveStateForHibernate)
STUB(KeSetDmaIoCoherency)
STUB(KeSignalCallDpcDone)
STUB(KeSignalCallDpcSynchronize)
STUB(KeSynchronizeExecution)
STUB(KeTryToAcquireQueuedSpinLock)
STUB(KeTryToAcquireQueuedSpinLockRaiseToSynch)
STUB(KeUpdateRunTime)
STUB(KeUpdateSystemTime)
STUB(KeUserModeCallback)
STUB(KeWaitForMutexObject)
STUB(KfRaiseIrql)
STUB(KiBugCheckData)
STUB(KiCpuId)
STUB(MmCommitSessionMappedView)
STUB(MmCreateMirror)
STUB(MmIsIoSpaceActive)
STUB(MmLockPagableImageSection)
STUB(NlsOemLeadByteInfo)
STUB(ObDeleteCapturedInsertInfo)
STUB(ObSetHandleAttributes)
STUB(PfxFindPrefix)
STUB(PfxInitialize)
STUB(PfxInsertPrefix)
STUB(PfxRemovePrefix)
STUB(PoCancelDeviceNotify)
STUB(PoRegisterDeviceNotify)
STUB(PoRequestShutdownEvent)
STUB(PoSetHiberRange)
STUB(PoShutdownBugCheck)
STUB(PsGetCurrentProcess)
STUB(PsGetCurrentProcessWow64Process)
STUB(PsGetCurrentThread)
STUB(PsGetCurrentThreadProcess)
STUB(PsGetCurrentThreadProcessId)
STUB(PsGetCurrentThreadTeb)
STUB(PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion)
STUB(PsGetProcessSessionIdEx)
STUB(PsGetProcessWow64Process)
STUB(PsIsSystemProcess)
STUB(PsProcessType)
STUB(PsWrapApcWow64Thread)
STUB(RtlAnsiStringToUnicodeSize)
STUB(RtlCompareMemoryUlong)
STUB(RtlCopyMemory)
STUB(RtlCopyMemoryNonTemporal)
STUB(RtlFillMemory)
STUB(RtlLookupFunctionEntry)
STUB(RtlMoveMemory)
STUB(RtlOemStringToUnicodeSize)
STUB(RtlPcToFileHeader)
STUB(RtlPrefetchMemoryNonTemporal)
STUB(RtlRestoreContext)
STUB(RtlTraceDatabaseAdd)
STUB(RtlTraceDatabaseCreate)
STUB(RtlTraceDatabaseDestroy)
STUB(RtlTraceDatabaseEnumerate)
STUB(RtlTraceDatabaseFind)
STUB(RtlTraceDatabaseLock)
STUB(RtlTraceDatabaseUnlock)
STUB(RtlTraceDatabaseValidate)
STUB(RtlUnicodeStringToAnsiSize)
STUB(RtlUnicodeStringToOemSize)
STUB(RtlUnwindEx)
STUB(RtlVirtualUnwind)
STUB(RtlZeroMemory)
STUB(SeReportSecurityEvent)
STUB(SeSetAuditParameter)
STUB(SeTokenObjectType)
STUB(VfFailDeviceNode)
STUB(VfFailDriver)
STUB(VfFailSystemBIOS)
STUB(VfIsVerificationEnabled)
STUB(WmiFlushTrace)
STUB(WmiGetClock)
STUB(WmiQueryTrace)
STUB(WmiQueryTraceInformation)
STUB(WmiStartTrace)
STUB(WmiStopTrace)
STUB(WmiTraceFastEvent)
STUB(WmiTraceMessage)
STUB(WmiTraceMessageVa)
STUB(WmiUpdateTrace)
STUB(XIPDispatch)
STUB(__C_specific_handler)
STUB(__misaligned_access)
STUB(_local_unwind)
STUB(_setjmp)
STUB(_setjmpex)
STUB(longjmp)
STUB(KfReleaseSpinLock)
STUB(KeAcquireInStackQueuedSpinLock)
STUB(KeReleaseInStackQueuedSpinLock)
STUB(KfAcquireSpinLock)
STUB(KiSaveProcessorControlState)
STUB(KeProcessorArchitecture)
STUB(KeProcessorLevel)
STUB(KeProcessorRevision)
STUB(RtlpGetStackLimits)
STUB(KeSwitchKernelStack)
