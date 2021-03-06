/*
 *
 * Copyright (c) 2016 Nest Labs, Inc.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *    Description:
 *      This file contains the enumeration of the properties that can be
 *      gotten or set via the "get_prop()" and "set_prop()" methods.
 *
 */

#ifndef wpantund_wpan_properties_h
#define wpantund_wpan_properties_h

#define kWPANTUNDProperty_ConfigNCPSocketPath                   "Config:NCP:SocketPath"
#define kWPANTUNDProperty_ConfigNCPSocketBaud                   "Config:NCP:SocketBaud"
#define kWPANTUNDProperty_ConfigNCPDriverName                   "Config:NCP:DriverName"
#define kWPANTUNDProperty_ConfigNCPHardResetPath                "Config:NCP:HardResetPath"
#define kWPANTUNDProperty_ConfigNCPPowerPath                    "Config:NCP:PowerPath"
#define kWPANTUNDProperty_ConfigNCPReliabilityLayer             "Config:NCP:ReliabilityLayer"
#define kWPANTUNDProperty_ConfigNCPFirmwareCheckCommand         "Config:NCP:FirmwareCheckCommand"
#define kWPANTUNDProperty_ConfigNCPFirmwareUpgradeCommand       "Config:NCP:FirmwareUpgradeCommand"
#define kWPANTUNDProperty_ConfigTUNInterfaceName                "Config:TUN:InterfaceName"
#define kWPANTUNDProperty_ConfigDaemonPIDFile                   "Config:Daemon:PIDFile"
#define kWPANTUNDProperty_ConfigDaemonPrivDropToUser            "Config:Daemon:PrivDropToUser"
#define kWPANTUNDProperty_ConfigDaemonChroot                    "Config:Daemon:Chroot"
#define kWPANTUNDProperty_ConfigDaemonNetworkRetainCommand      "Config:Daemon:NetworkRetainCommand"

#define kWPANTUNDProperty_DaemonVersion                         "Daemon:Version"
#define kWPANTUNDProperty_DaemonEnabled                         "Daemon:Enabled"
#define kWPANTUNDProperty_DaemonSyslogMask                      "Daemon:SyslogMask"
#define kWPANTUNDProperty_DaemonTerminateOnFault                "Daemon:TerminateOnFault"
#define kWPANTUNDProperty_DaemonReadyForHostSleep               "Daemon:ReadyForHostSleep"
#define kWPANTUNDProperty_DaemonAutoAssociateAfterReset         "Daemon:AutoAssociateAfterReset"
#define kWPANTUNDProperty_DaemonAutoFirmwareUpdate              "Daemon:AutoFirmwareUpdate"
#define kWPANTUNDProperty_DaemonAutoDeepSleep                   "Daemon:AutoDeepSleep"
#define kWPANTUNDProperty_DaemonFaultReason                     "Daemon:FaultReason"
#define kWPANTUNDProperty_DaemonTickleOnHostDidWake             "Daemon:TickleOnHostDidWake"
#define kWPANTUNDProperty_DaemonIPv6AutoUpdateIntfaceAddrOnNCP  "Daemon:IPv6:AutoUpdateInterfaceAddrsOnNCP"
#define kWPANTUNDProperty_DaemonIPv6FilterUserAddedLinkLocal    "Daemon:IPv6:FilterUserAddedLinkLocal"
#define kWPANTUNDProperty_DaemonSetDefRouteForAutoAddedPrefix   "Daemon:SetDefaultRouteForAutoAddedPrefix"
#define kWPANTUNDProperty_DaemonOffMeshRouteAutoAddOnInterface  "Daemon:OffMeshRoute:AutoAddOnInterface"
#define kWPANTUNDProperty_DaemonOffMeshRouteFilterSelfAutoAdded "Daemon:OffMeshRoute:FilterSelfAutoAdded"

#define kWPANTUNDProperty_NCPVersion                            "NCP:Version"
#define kWPANTUNDProperty_NCPState                              "NCP:State"
#define kWPANTUNDProperty_NCPHardwareAddress                    "NCP:HardwareAddress"
#define kWPANTUNDProperty_NCPExtendedAddress                    "NCP:ExtendedAddress"
#define kWPANTUNDProperty_NCPMACAddress                         "NCP:MACAddress"
#define kWPANTUNDProperty_NCPChannel                            "NCP:Channel"
#define kWPANTUNDProperty_NCPFrequency                          "NCP:Frequency"
#define kWPANTUNDProperty_NCPTXPower                            "NCP:TXPower"
#define kWPANTUNDProperty_NCPTXPowerLimit                       "NCP:TXPowerLimit"
#define kWPANTUNDProperty_NCPCCAThreshold                       "NCP:CCAThreshold"
#define kWPANTUNDProperty_NCPChannelMask                        "NCP:ChannelMask"
#define kWPANTUNDProperty_NCPSleepyPollInterval                 "NCP:SleepyPollInterval"
#define kWPANTUNDProperty_NCPRSSI                               "NCP:RSSI"
#define kWPANTUNDProperty_NCPCCAFailureRate                     "NCP:CCAFailureRate"
#define kWPANTUNDProperty_NCPMCUPowerState                      "NCP:MCUPowerState"

#define kWPANTUNDProperty_InterfaceUp                           "Interface:Up"

#define kWPANTUNDProperty_NetworkName                           "Network:Name"
#define kWPANTUNDProperty_NetworkXPANID                         "Network:XPANID"
#define kWPANTUNDProperty_NetworkPANID                          "Network:PANID"
#define kWPANTUNDProperty_NetworkNodeType                       "Network:NodeType"
#define kWPANTUNDProperty_NetworkKey                            "Network:Key"
#define kWPANTUNDProperty_NetworkKeyIndex                       "Network:KeyIndex"
#define kWPANTUNDProperty_NetworkIsCommissioned                 "Network:IsCommissioned"
#define kWPANTUNDProperty_NetworkIsConnected                    "Network:IsConnected"
#define kWPANTUNDProperty_NetworkPSKc                           "Network:PSKc"
#define kWPANTUNDProperty_NetworkRole                           "Network:Role"
#define kWPANTUNDProperty_NetworkPartitionId                    "Network:PartitionId"

#define kWPANTUNDProperty_IPv6LinkLocalAddress                  "IPv6:LinkLocalAddress"
#define kWPANTUNDProperty_IPv6MeshLocalAddress                  "IPv6:MeshLocalAddress"
#define kWPANTUNDProperty_IPv6MeshLocalPrefix                   "IPv6:MeshLocalPrefix"
#define kWPANTUNDProperty_IPv6AllAddresses                      "IPv6:AllAddresses"
#define kWPANTUNDProperty_IPv6MulticastAddresses                "IPv6:MulticastAddresses"
#define kWPANTUNDProperty_IPv6InterfaceRoutes                   "IPv6:Routes"
#define kWPANTUNDProperty_IPv6SetSLAACForAutoAddedPrefix        "IPv6:SetSLAACForAutoAddedPrefix"

#define kWPANTUNDProperty_ThreadRLOC16                          "Thread:RLOC16"
#define kWPANTUNDProperty_ThreadRouterID                        "Thread:RouterID"
#define kWPANTUNDProperty_ThreadLeaderAddress                   "Thread:Leader:Address"
#define kWPANTUNDProperty_ThreadLeaderRouterID                  "Thread:Leader:RouterID"
#define kWPANTUNDProperty_ThreadLeaderWeight                    "Thread:Leader:Weight"
#define kWPANTUNDProperty_ThreadLeaderLocalWeight               "Thread:Leader:LocalWeight"
#define kWPANTUNDProperty_ThreadLeaderNetworkData               "Thread:Leader:NetworkData"
#define kWPANTUNDProperty_ThreadStableLeaderNetworkData         "Thread:Leader:StableNetworkData"
#define kWPANTUNDProperty_ThreadNetworkData                     "Thread:NetworkData"
#define kWPANTUNDProperty_ThreadChildTable                      "Thread:ChildTable"
#define kWPANTUNDProperty_ThreadChildTableAsValMap              "Thread:ChildTable:AsValMap"
#define kWPANTUNDProperty_ThreadChildTableAddresses             "Thread:ChildTable:Addresses"
#define kWPANTUNDProperty_ThreadNeighborTable                   "Thread:NeighborTable"
#define kWPANTUNDProperty_ThreadNeighborTableAsValMap           "Thread:NeighborTable:AsValMap"
#define kWPANTUNDProperty_ThreadNeighborTableErrorRates         "Thread:NeighborTable:ErrorRates"
#define kWPANTUNDProperty_ThreadNeighborTableErrorRatesAsValMap "Thread:NeighborTable:ErrorRates:AsValMap"
#define kWPANTUNDProperty_ThreadRouterTable                     "Thread:RouterTable"
#define kWPANTUNDProperty_ThreadRouterTableAsValMap             "Thread:RouterTable:AsValMap"
#define kWPANTUNDProperty_ThreadNetworkDataVersion              "Thread:NetworkDataVersion"
#define kWPANTUNDProperty_ThreadStableNetworkData               "Thread:StableNetworkData"
#define kWPANTUNDProperty_ThreadStableNetworkDataVersion        "Thread:StableNetworkDataVersion"
#define kWPANTUNDProperty_ThreadPreferredRouterID               "Thread:PreferredRouterID"
#define kWPANTUNDProperty_ThreadCommissionerEnabled             "Thread:Commissioner:Enabled"
#define kWPANTUNDProperty_ThreadDeviceMode                      "Thread:DeviceMode"
#define kWPANTUNDProperty_ThreadOffMeshRoutes                   "Thread:OffMeshRoutes"
#define kWPANTUNDProperty_ThreadOnMeshPrefixes                  "Thread:OnMeshPrefixes"
#define kWPANTUNDProperty_ThreadRouterRoleEnabled               "Thread:RouterRole:Enabled"
#define kWPANTUNDProperty_ThreadConfigFilterRLOCAddresses       "Thread:Config:FilterRLOCAddresses"
#define kWPANTUNDProperty_ThreadActiveDataset                   "Thread:ActiveDataset"
#define kWPANTUNDProperty_ThreadActiveDatasetAsValMap           "Thread:ActiveDataset:AsValMap"
#define kWPANTUNDProperty_ThreadPendingDataset                  "Thread:PendingDataset"
#define kWPANTUNDProperty_ThreadPendingDatasetAsValMap          "Thread:PendingDataset:AsValMap"

#define kWPANTUNDProperty_DatasetActiveTimestamp                "Dataset:ActiveTimestamp"
#define kWPANTUNDProperty_DatasetPendingTimestamp               "Dataset:PendingTimestamp"
#define kWPANTUNDProperty_DatasetMasterKey                      "Dataset:MasterKey"
#define kWPANTUNDProperty_DatasetNetworkName                    "Dataset:NetworkName"
#define kWPANTUNDProperty_DatasetExtendedPanId                  "Dataset:ExtendedPanId"
#define kWPANTUNDProperty_DatasetMeshLocalPrefix                "Dataset:MeshLocalPrefix"
#define kWPANTUNDProperty_DatasetDelay                          "Dataset:Delay"
#define kWPANTUNDProperty_DatasetPanId                          "Dataset:PanId"
#define kWPANTUNDProperty_DatasetChannel                        "Dataset:Channel"
#define kWPANTUNDProperty_DatasetPSKc                           "Dataset:PSKc"
#define kWPANTUNDProperty_DatasetChannelMaskPage0               "Dataset:ChannelMaskPage0"
#define kWPANTUNDProperty_DatasetSecPolicyKeyRotation           "Dataset:SecPolicy:KeyRotation"
#define kWPANTUNDProperty_DatasetSecPolicyFlags                 "Dataset:SecPolicy:Flags"
#define kWPANTUNDProperty_DatasetRawTlvs                        "Dataset:RawTlvs"

#define kWPANTUNDProperty_DatasetAllFileds                      "Dataset:AllFields"
#define kWPANTUNDProperty_DatasetAllFileds_AltString            "Dataset"
#define kWPANTUNDProperty_DatasetAllFiledsAsValMap              "Dataset:AsValMap"
#define kWPANTUNDProperty_DatasetCommand                        "Dataset:Command"

#define kWPANTUNDDatasetCommand_Erase                           "Erase"
#define kWPANTUNDDatasetCommand_GetActive                       "GetActive"
#define kWPANTUNDDatasetCommand_SetActive                       "SetActive"
#define kWPANTUNDDatasetCommand_MgmtSendActive                  "MgmtSendActive"
#define kWPANTUNDDatasetCommand_GetPending                      "GetPending"
#define kWPANTUNDDatasetCommand_SetPending                      "SetPending"
#define kWPANTUNDDatasetCommand_MgmtSendPending                 "MgmtSendPending"

#define kWPANTUNDProperty_OpenThreadLogLevel                    "OpenThread:LogLevel"
#define kWPANTUNDProperty_OpenThreadSteeringDataAddress         "OpenThread:SteeringData:Address"
#define kWPANTUNDProperty_OpenThreadSteeringDataSetWhenJoinable "OpenThread:SteeringData:SetWhenJoinable"
#define kWPANTUNDProperty_OpenThreadMsgBufferCounters           "OpenThread:MsgBufferCounters"
#define kWPANTUNDProperty_OpenThreadMsgBufferCountersAsString   "OpenThread:MsgBufferCounters:AsString"
#define kWPANTUNDProperty_OpenThreadDebugTestAssert             "OpenThread:Debug:TestAssert"
#define kWPANTUNDProperty_OpenThreadDebugTestWatchdog           "OpenThread:Debug:TestWatchdog"

#define kWPANTUNDProperty_NCPCounterAllMac                      "NCP:Counter:AllMac"
#define kWPANTUNDProperty_NCPCounterAllMacAsValMap              "NCP:Counter:AllMac:AsValMap"

#define kWPANTUNDProperty_DebugIPv6GlobalIPAddressList          "Debug:IPv6:GlobalIPAddressList"

#define kWPANTUNDProperty_MACWhitelistEnabled                   "MAC:Whitelist:Enabled"
#define kWPANTUNDProperty_MACWhitelistEntries                   "MAC:Whitelist:Entries"
#define kWPANTUNDProperty_MACWhitelistEntriesAsValMap           "MAC:Whitelist:Entries:AsValMap"

#define kWPANTUNDProperty_MACBlacklistEnabled                   "MAC:Blacklist:Enabled"
#define kWPANTUNDProperty_MACBlacklistEntries                   "MAC:Blacklist:Entries"
#define kWPANTUNDProperty_MACBlacklistEntriesAsValMap           "MAC:Blacklist:Entries:AsValMap"

#define kWPANTUNDProperty_JamDetectionStatus                    "JamDetection:Status"
#define kWPANTUNDProperty_JamDetectionEnable                    "JamDetection:Enable"
#define kWPANTUNDProperty_JamDetectionRssiThreshold             "JamDetection:RssiThreshold"
#define kWPANTUNDProperty_JamDetectionWindow                    "JamDetection:Window"
#define kWPANTUNDProperty_JamDetectionBusyPeriod                "JamDetection:BusyPeriod"
#define kWPANTUNDProperty_JamDetectionDebugHistoryBitmap        "JamDetection:Debug:HistoryBitmap"

#define kWPANTUNDProperty_ChannelMonitorSampleInterval          "ChannelMonitor:SampleInterval"
#define kWPANTUNDProperty_ChannelMonitorRssiThreshold           "ChannelMonitor:RssiThreshold"
#define kWPANTUNDProperty_ChannelMonitorSampleWindow            "ChannelMonitor:SampleWindow"
#define kWPANTUNDProperty_ChannelMonitorSampleCount             "ChannelMonitor:SampleCount"
#define kWPANTUNDProperty_ChannelMonitorChannelQuality          "ChannelMonitor:ChannelQuality"
#define kWPANTUNDProperty_ChannelMonitorChannelQualityAsValMap  "ChannelMonitor:ChannelQuality:AsValMap"

#define kWPANTUNDProperty_ChannelManagerNewChannel              "ChannelManager:NewChannel"
#define kWPANTUNDProperty_ChannelManagerDelay                   "ChannelManager:Delay"
#define kWPANTUNDProperty_ChannelManagerChannelSelect           "ChannelManager:ChannelSelect"
#define kWPANTUNDProperty_ChannelManagerAutoSelectEnabled       "ChannelManager:AutoSelect:Enabled"
#define kWPANTUNDProperty_ChannelManagerAutoSelectInterval      "ChannelManager:AutoSelect:Interval"
#define kWPANTUNDProperty_ChannelManagerSupportedChannelMask    "ChannelManager:SupportedChannelMask"
#define kWPANTUNDProperty_ChannelManagerFavoredChannelMask      "ChannelManager:FavoredChannelMask"

#define kWPANTUNDProperty_TmfProxyEnabled                       "TmfProxy:Enabled"
#define kWPANTUNDProperty_TmfProxyStream                        "TmfProxy:Stream"

#define kWPANTUNDProperty_NestLabs_NetworkAllowingJoin          "com.nestlabs.internal:Network:AllowingJoin"
#define kWPANTUNDProperty_NestLabs_NetworkPassthruPort          "com.nestlabs.internal:Network:PassthruPort"
#define kWPANTUNDProperty_NestLabs_NCPTransmitHookActive        "com.nestlabs.internal:NCP:TransmitHookActive"
#define kWPANTUNDProperty_NestLabs_LegacyPreferInterface        "com.nestlabs.internal:Legacy:PreferInterface"
#define kWPANTUNDProperty_NestLabs_LegacyMeshLocalAddress       "com.nestlabs.internal:Legacy:MeshLocalAddress"
#define kWPANTUNDProperty_NestLabs_LegacyMeshLocalPrefix        "com.nestlabs.internal:Legacy:MeshLocalPrefix"
#define kWPANTUNDProperty_NestLabs_LegacyEnabled                "com.nestlabs.internal:Legacy:Enabled"
#define kWPANTUNDProperty_NestLabs_NetworkWakeData              "com.nestlabs.internal:NetworkWake:Data"
#define kWPANTUNDProperty_NestLabs_NetworkWakeRemaining         "com.nestlabs.internal:NetworkWake:Remaining"
#define kWPANTUNDProperty_NestLabs_NetworkWakeBlacklist         "com.nestlabs.internal:NetworkWake:Blacklist"
#define kWPANTUNDProperty_NestLabs_HackUseDeepSleepOnLowPower   "com.nestlabs.internal:Hack:UseDeepSleepOnLowPower"
#define kWPANTUNDProperty_NestLabs_HackAlwaysResetToWake        "com.nestlabs.internal:Hack:AlwaysResetToWake"

#define kWPANTUNDProperty_Stat_Prefix                           "Stat:"
#define kWPANTUNDProperty_StatRX                                "Stat:RX"
#define kWPANTUNDProperty_StatTX                                "Stat:TX"
#define kWPANTUNDProperty_StatRXHistory                         "Stat:RX:History"
#define kWPANTUNDProperty_StatTXHistory                         "Stat:TX:History"
#define kWPANTUNDProperty_StatHistory                           "Stat:History"
#define kWPANTUNDProperty_StatNCP                               "Stat:NCP"
#define kWPANTUNDProperty_StatBlockingHostSleep                 "Stat:BlockingHostSleep"
#define kWPANTUNDProperty_StatNode                              "Stat:Node"
#define kWPANTUNDProperty_StatNodeHistory                       "Stat:Node:History"
#define kWPANTUNDProperty_StatNodeHistoryID                     "Stat:Node:History:"
#define kWPANTUNDProperty_StatShort                             "Stat:Short"
#define kWPANTUNDProperty_StatLong                              "Stat:Long"
#define kWPANTUNDProperty_StatAutoLog                           "Stat:AutoLog"
#define kWPANTUNDProperty_StatAutoLogState                      "Stat:AutoLog:State"
#define kWPANTUNDProperty_StatAutoLogPeriod                     "Stat:AutoLog:Period"
#define kWPANTUNDProperty_StatAutoLogLogLevel                   "Stat:AutoLog:LogLevel"
#define kWPANTUNDProperty_StatUserLogRequestLogLevel            "Stat:UserRequest:LogLevel"
#define kWPANTUNDProperty_StatLinkQuality                       "Stat:LinkQuality"
#define kWPANTUNDProperty_StatLinkQualityLong                   "Stat:LinkQuality:Long"
#define kWPANTUNDProperty_StatLinkQualityShort                  "Stat:LinkQuality:Short"
#define kWPANTUNDProperty_StatLinkQualityPeriod                 "Stat:LinkQuality:Period"
#define kWPANTUNDProperty_StatHelp                              "Stat:Help"

// ----------------------------------------------------------------------------

#define kWPANTUNDNodeType_Unknown                               "unknown"
#define kWPANTUNDNodeType_Router                                "router"
#define kWPANTUNDNodeType_EndDevice                             "end-device"
#define kWPANTUNDNodeType_SleepyEndDevice                       "sleepy-end-device"
#define kWPANTUNDNodeType_NestLurker                            "nl-lurker"
#define kWPANTUNDNodeType_Commissioner                          "commissioner"
#define kWPANTUNDNodeType_Leader                                "leader"

// ----------------------------------------------------------------------------

// When querying the value of the association state property,
// the returned value will be a human-readable string. Compare
// it with one of the constants below to get the exact meaning.
#define kWPANTUNDStateUninitialized                             "uninitialized"
#define kWPANTUNDStateFault                                     "uninitialized:fault"
#define kWPANTUNDStateUpgrading                                 "uninitialized:upgrading"
#define kWPANTUNDStateDeepSleep                                 "offline:deep-sleep"
#define kWPANTUNDStateOffline                                   "offline"
#define kWPANTUNDStateCommissioned                              "offline:commissioned"
#define kWPANTUNDStateAssociating                               "associating"
#define kWPANTUNDStateCredentialsNeeded                         "associating:credentials-needed"
#define kWPANTUNDStateAssociated                                "associated"
#define kWPANTUNDStateIsolated                                  "associated:no-parent"
#define kWPANTUNDStateNetWake_Asleep                            "associated:netwake-asleep"
#define kWPANTUNDStateNetWake_Waking                            "associated:netwake-waking"

// ----------------------------------------------------------------------------

// Values of the property kWPANTUNDProperty_NCPMCUPowerState
#define kWPANTUNDNCPMCUPowerState_On                            "on"
#define kWPANTUNDNCPMCUPowerState_LowPower                      "low-power"
#define kWPANTUNDNCPMCUPowerState_Off                           "off"

// ----------------------------------------------------------------------------

// Values of  the property kWPANTUNDProperty_StatAutoLogState
#define kWPANTUNDStatAutoLogState_Disabled                      "disabled"
#define kWPANTUNDStatAutoLogState_Long                          "long"
#define kWPANTUNDStatAutoLogState_Short                         "short"

// ----------------------------------------------------------------------------

// Values for value map keys

#define kWPANTUNDValueMapKey_Whitelist_ExtAddress               "ExtAddress"
#define kWPANTUNDValueMapKey_Whitelist_Rssi                     "FixedRssi"

#define kWPANTUNDValueMapKey_ChannelMonitor_Channel             "Channel"
#define kWPANTUNDValueMapKey_ChannelMonitor_Quality             "Quality"

#define kWPANTUNDValueMapKey_NetworkTopology_ExtAddress         "ExtAddress"
#define kWPANTUNDValueMapKey_NetworkTopology_RLOC16             "RLOC16"
#define kWPANTUNDValueMapKey_NetworkTopology_LinkQualityIn      "LinkQualityIn"
#define kWPANTUNDValueMapKey_NetworkTopology_AverageRssi        "AverageRssi"
#define kWPANTUNDValueMapKey_NetworkTopology_LastRssi           "LastRssi"
#define kWPANTUNDValueMapKey_NetworkTopology_Age                "Age"
#define kWPANTUNDValueMapKey_NetworkTopology_RxOnWhenIdle       "RxOnWhenIdle"
#define kWPANTUNDValueMapKey_NetworkTopology_FullFunction       "FullFunction"
#define kWPANTUNDValueMapKey_NetworkTopology_SecureDataRequest  "SecureDataRequest"
#define kWPANTUNDValueMapKey_NetworkTopology_FullNetworkData    "FullNetworkData"
#define kWPANTUNDValueMapKey_NetworkTopology_Timeout            "Timeout"
#define kWPANTUNDValueMapKey_NetworkTopology_NetworkDataVersion "NetworkDataVersion"
#define kWPANTUNDValueMapKey_NetworkTopology_LinkFrameCounter   "LinkFrameCounter"
#define kWPANTUNDValueMapKey_NetworkTopology_MleFrameCounter    "MleFrameCounter"
#define kWPANTUNDValueMapKey_NetworkTopology_IsChild            "IsChild"
#define kWPANTUNDValueMapKey_NetworkTopology_FrameErrorRate     "FrameErrorRate"
#define kWPANTUNDValueMapKey_NetworkTopology_MessageErrorRate   "MessageErrorRate"

#define kWPANTUNDValueMapKey_Scan_Period                        "Scan:Period"
#define kWPANTUNDValueMapKey_Scan_ChannelMask                   "Scan:ChannelMask"
#define kWPANTUNDValueMapKey_Scan_Discover                      "Scan:Discover"
#define kWPANTUNDValueMapKey_Scan_JoinerFalg                    "Scan:JoinerFlag"
#define kWPANTUNDValueMapKey_Scan_EnableFiltering               "Scan:EnableFiltering"
#define kWPANTUNDValueMapKey_Scan_PANIDFilter                   "Scan:PANID"

#define kWPANTUNDValueMapKey_Counter_TxTotal                    "TxTotal"              // Number of transmissions
#define kWPANTUNDValueMapKey_Counter_TxUnicast                  "TxUnicast"            // Number of unicast transmissions
#define kWPANTUNDValueMapKey_Counter_TxBroadcast                "TxBroadcast"          // Number of broadcast transmissions
#define kWPANTUNDValueMapKey_Counter_TxAckRequested             "TxAckRequested"       // Number of transmissions with ack request
#define kWPANTUNDValueMapKey_Counter_TxAcked                    "TxAcked"              // Number of transmissions that were acked
#define kWPANTUNDValueMapKey_Counter_TxNoAckRequested           "TxNoAckRequested"     // Number of transmissions without ack request
#define kWPANTUNDValueMapKey_Counter_TxData                     "TxData"               // Number of transmitted data
#define kWPANTUNDValueMapKey_Counter_TxDataPoll                 "TxDataPoll"           // Number of transmitted data poll
#define kWPANTUNDValueMapKey_Counter_TxBeacon                   "TxBeacon"             // Number of transmitted beacon
#define kWPANTUNDValueMapKey_Counter_TxBeaconRequest            "TxBeaconRequest"      // Number of transmitted beacon request
#define kWPANTUNDValueMapKey_Counter_TxOther                    "TxOther"              // Number of transmitted other types of frames
#define kWPANTUNDValueMapKey_Counter_TxRetry                    "TxRetry"              // Number of retransmission times
#define kWPANTUNDValueMapKey_Counter_TxErrCca                   "TxErrCca"             // Number of CCA failure times
#define kWPANTUNDValueMapKey_Counter_TxErrAbort                 "TxErrAbort"           // Number of frame transmission failures due to abort error
#define kWPANTUNDValueMapKey_Counter_TxErrBusyChannel           "TxErrBusyChannel"     // Number of frames that were dropped due to a busy channel
#define kWPANTUNDValueMapKey_Counter_RxTotal                    "RxTotal"              // Number of received packets
#define kWPANTUNDValueMapKey_Counter_RxUnicast                  "RxUnicast"            // Number of unicast packets received
#define kWPANTUNDValueMapKey_Counter_RxBroadcast                "RxBroadcast"          // Number of broadcast packets received
#define kWPANTUNDValueMapKey_Counter_RxData                     "RxData"               // Number of received data
#define kWPANTUNDValueMapKey_Counter_RxDataPoll                 "RxDataPoll"           // Number of received data poll
#define kWPANTUNDValueMapKey_Counter_RxBeacon                   "RxBeacon"             // Number of received beacon
#define kWPANTUNDValueMapKey_Counter_RxBeaconRequest            "RxBeaconRequest"      // Number of received beacon request
#define kWPANTUNDValueMapKey_Counter_RxOther                    "RxOther"              // Number of received other types of frames
#define kWPANTUNDValueMapKey_Counter_RxAddressFiltered          "RxAddressFiltered"    // Number of received packets filtered by address filter (whitelist or blacklist)
#define kWPANTUNDValueMapKey_Counter_RxDestAddrFiltered         "RxDestAddrFiltered"   // Number of received packets filtered by destination check
#define kWPANTUNDValueMapKey_Counter_RxDuplicated               "RxDuplicated"         // Number of received duplicated packets
#define kWPANTUNDValueMapKey_Counter_RxErrNoFrame               "RxErrNoFrame"         // Number of received packets that do not contain contents
#define kWPANTUNDValueMapKey_Counter_RxErrUnknownNeighbor       "RxErrUnknownNeighbor" // Number of received packets from unknown neighbor
#define kWPANTUNDValueMapKey_Counter_RxErrInvalidSrcAddr        "RxErrInvalidSrcAddr"  // Number of received packets whose source address is invalid
#define kWPANTUNDValueMapKey_Counter_RxErrSec                   "RxErrSec"             // Number of received packets with security error
#define kWPANTUNDValueMapKey_Counter_RxErrFcs                   "RxErrFcs"             // Number of received packets with FCS error
#define kWPANTUNDValueMapKey_Counter_RxErrOther                 "RxErrOther"           // Number of received packets with other error

#endif
