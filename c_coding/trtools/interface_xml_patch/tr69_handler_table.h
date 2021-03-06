typedef struct TR69_FUNC_TABLE {
	char *path_name;
	int (*get_proc)(char *path, char *value);
	int (*set_proc)(char *path, char *value);
	char *default_value;
} TR69_FUNC_TABLE;

TR69_FUNC_TABLE tr69_param[] = {
	{"Device.WANDevice.1.WANConnectionDevice.1.WANPPPConnection.1.ExternalIPAddress", get_DW1W1W1_ExternalIPAddress, 0, ""},
	{"Device.SoftwareModules.DeploymentUnit.template.UUID", get_DSDt_UUID, 0, "76183ed7-6a38-3890-66ef-a6488efb6690"},
	{"Device.SoftwareModules.DeploymentUnit.template.DUID", get_DSDt_DUID, 0, "76183ed7-6a38-3890-66ef-a6488efb6690"},
	{"Device.SoftwareModules.DeploymentUnit.template.Alias", get_DSDt_Alias, 0, "Alias"},
	{"Device.SoftwareModules.DeploymentUnit.template.Name", get_DSDt_Name, 0, "DU"},
	{"Device.SoftwareModules.DeploymentUnit.template.Status", get_DSDt_Status, 0, "Installed"},
	{"Device.SoftwareModules.DeploymentUnit.template.Resolved", get_DSDt_Resolved, 0, "1"},
	{"Device.SoftwareModules.DeploymentUnit.template.URL", get_DSDt_URL, 0, ""},
	{"Device.SoftwareModules.DeploymentUnit.template.Description", get_DSDt_Description, 0, ""},
	{"Device.SoftwareModules.DeploymentUnit.template.Vendor", get_DSDt_Vendor, 0, "Vendor"},
	{"Device.SoftwareModules.DeploymentUnit.template.Version", get_DSDt_Version, 0, "1.0"},
	{"Device.SoftwareModules.DeploymentUnit.template.VendorLogList", get_DSDt_VendorLogList, 0, "vendor.log"},
	{"Device.SoftwareModules.DeploymentUnit.template.VendorConfigList", get_DSDt_VendorConfigList, 0, "vendor.conf"},
	{"Device.SoftwareModules.DeploymentUnit.template.ExecutionUnitList", get_DSDt_ExecutionUnitList, 0, "Device.SoftwareModules.ExecutionUnit.1."},
	{"Device.SoftwareModules.DeploymentUnit.template.ExecutionEnvRef", get_DSDt_ExecutionEnvRef, 0, "Device.SoftwareModules.ExecEnv.1."},
	{"Device.SoftwareModules.DeploymentUnit.1.UUID", get_DSD1_UUID, 0, "76183ed7-6a38-3890-66ef-a6488efb6690"},
	{"Device.SoftwareModules.DeploymentUnit.1.DUID", get_DSD1_DUID, 0, "76183ed7-6a38-3890-66ef-a6488efb6690"},
	{"Device.SoftwareModules.DeploymentUnit.1.Alias", get_DSD1_Alias, 0, "Alias"},
	{"Device.SoftwareModules.DeploymentUnit.1.Name", get_DSD1_Name, 0, "DU"},
	{"Device.SoftwareModules.DeploymentUnit.1.Status", get_DSD1_Status, 0, "Installed"},
	{"Device.SoftwareModules.DeploymentUnit.1.Resolved", get_DSD1_Resolved, 0, "1"},
	{"Device.SoftwareModules.DeploymentUnit.1.URL", get_DSD1_URL, 0, ""},
	{"Device.SoftwareModules.DeploymentUnit.1.Description", get_DSD1_Description, 0, ""},
	{"Device.SoftwareModules.DeploymentUnit.1.Vendor", get_DSD1_Vendor, 0, "Vendor"},
	{"Device.SoftwareModules.DeploymentUnit.1.Version", get_DSD1_Version, 0, "1.0"},
	{"Device.SoftwareModules.DeploymentUnit.1.VendorLogList", get_DSD1_VendorLogList, 0, "vendor.log"},
	{"Device.SoftwareModules.DeploymentUnit.1.VendorConfigList", get_DSD1_VendorConfigList, 0, "vendor.conf"},
	{"Device.SoftwareModules.DeploymentUnit.1.ExecutionUnitList", get_DSD1_ExecutionUnitList, 0, "Device.SoftwareModules.ExecutionUnit.1."},
	{"Device.SoftwareModules.DeploymentUnit.1.ExecutionEnvRef", get_DSD1_ExecutionEnvRef, 0, "Device.SoftwareModules.ExecEnv.1."},
	{"Device.SoftwareModules.ExecEnv.template.Enable", get_DSEt_Enable, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.template.Status", get_DSEt_Status, 0, "Up"},
	{"Device.SoftwareModules.ExecEnv.template.Reset", get_DSEt_Reset, 0, "0"},
	{"Device.SoftwareModules.ExecEnv.template.Alias", get_DSEt_Alias, 0, "Alias"},
	{"Device.SoftwareModules.ExecEnv.template.Name", get_DSEt_Name, 0, "ExecEnvName"},
	{"Device.SoftwareModules.ExecEnv.template.Type", get_DSEt_Type, 0, "ExecEnvType"},
	{"Device.SoftwareModules.ExecEnv.template.InitialRunLevel", get_DSEt_InitialRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.template.RequestedRunLevel", get_DSEt_RequestedRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.template.CurrentRunLevel", get_DSEt_CurrentRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.template.Vendor", get_DSEt_Vendor, 0, "Workssys"},
	{"Device.SoftwareModules.ExecEnv.template.Version", get_DSEt_Version, 0, "1.0"},
	{"Device.SoftwareModules.ExecEnv.template.ParentExecEnv", get_DSEt_ParentExecEnv, 0, ""},
	{"Device.SoftwareModules.ExecEnv.template.AllocatedDiskSpace", get_DSEt_AllocatedDiskSpace, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.template.AvailableDiskSpace", get_DSEt_AvailableDiskSpace, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.template.AllocatedMemory", get_DSEt_AllocatedMemory, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.template.AvailableMemory", get_DSEt_AvailableMemory, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.template.ActiveExecutionUnits", get_DSEt_ActiveExecutionUnits, 0, ""},
	{"Device.SoftwareModules.ExecEnv.template.ProcessorRefList", get_DSEt_ProcessorRefList, 0, ""},
	{"Device.SoftwareModules.ExecEnv.1.Enable", get_DSE1_Enable, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.1.Status", get_DSE1_Status, 0, "Up"},
	{"Device.SoftwareModules.ExecEnv.1.Reset", get_DSE1_Reset, 0, "0"},
	{"Device.SoftwareModules.ExecEnv.1.Alias", get_DSE1_Alias, 0, "Alias"},
	{"Device.SoftwareModules.ExecEnv.1.Name", get_DSE1_Name, 0, "ExecEnvName"},
	{"Device.SoftwareModules.ExecEnv.1.Type", get_DSE1_Type, 0, "ExecEnvType"},
	{"Device.SoftwareModules.ExecEnv.1.InitialRunLevel", get_DSE1_InitialRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.1.RequestedRunLevel", get_DSE1_RequestedRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.1.CurrentRunLevel", get_DSE1_CurrentRunLevel, 0, "1"},
	{"Device.SoftwareModules.ExecEnv.1.Vendor", get_DSE1_Vendor, 0, "Workssys"},
	{"Device.SoftwareModules.ExecEnv.1.Version", get_DSE1_Version, 0, "1.0"},
	{"Device.SoftwareModules.ExecEnv.1.ParentExecEnv", get_DSE1_ParentExecEnv, 0, ""},
	{"Device.SoftwareModules.ExecEnv.1.AllocatedDiskSpace", get_DSE1_AllocatedDiskSpace, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.1.AvailableDiskSpace", get_DSE1_AvailableDiskSpace, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.1.AllocatedMemory", get_DSE1_AllocatedMemory, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.1.AvailableMemory", get_DSE1_AvailableMemory, 0, "-1"},
	{"Device.SoftwareModules.ExecEnv.1.ActiveExecutionUnits", get_DSE1_ActiveExecutionUnits, 0, ""},
	{"Device.SoftwareModules.ExecEnv.1.ProcessorRefList", get_DSE1_ProcessorRefList, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.EUID", get_DSEt_EUID, 0, "Euid"},
	{"Device.SoftwareModules.ExecutionUnit.template.Alias", get_DSEt_Alias_66, 0, "Alias"},
	{"Device.SoftwareModules.ExecutionUnit.template.Name", get_DSEt_Name_67, 0, "EU"},
	{"Device.SoftwareModules.ExecutionUnit.template.ExecEnvLabel", get_DSEt_ExecEnvLabel, 0, "EELabel"},
	{"Device.SoftwareModules.ExecutionUnit.template.Status", get_DSEt_Status_69, 0, "Installed"},
	{"Device.SoftwareModules.ExecutionUnit.template.RequestedState", get_DSEt_RequestedState, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.ExecutionFaultCode", get_DSEt_ExecutionFaultCode, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.ExecutionFaultMessage", get_DSEt_ExecutionFaultMessage, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.AutoStart", get_DSEt_AutoStart, 0, "1"},
	{"Device.SoftwareModules.ExecutionUnit.template.RunLevel", get_DSEt_RunLevel, 0, "-1"},
	{"Device.SoftwareModules.ExecutionUnit.template.Vendor", get_DSEt_Vendor_75, 0, "Vendor"},
	{"Device.SoftwareModules.ExecutionUnit.template.Version", get_DSEt_Version_76, 0, "1.0"},
	{"Device.SoftwareModules.ExecutionUnit.template.Description", get_DSEt_Description, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.DiskSpaceInUse", get_DSEt_DiskSpaceInUse, 0, "-1"},
	{"Device.SoftwareModules.ExecutionUnit.template.MemoryInUse", get_DSEt_MemoryInUse, 0, "-1"},
	{"Device.SoftwareModules.ExecutionUnit.template.References", get_DSEt_References, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.AssociatedProcessList", get_DSEt_AssociatedProcessList, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.VendorLogList", get_DSEt_VendorLogList, 0, "vendor.log"},
	{"Device.SoftwareModules.ExecutionUnit.template.VendorConfigList", get_DSEt_VendorConfigList, 0, "vendor.conf"},
	{"Device.SoftwareModules.ExecutionUnit.template.SupportedDataModelList", get_DSEt_SupportedDataModelList, 0, ""},
	{"Device.SoftwareModules.ExecutionUnit.template.ExecutionEnvRef", get_DSEt_ExecutionEnvRef, 0, "Device.SoftwareModules.ExecEnv.1."},
	{"Device.MultiInstanceSample.template.users3.Username2", get_DMtu_Username2, 0, "username2_bak"},
	{"Device.MultiInstanceSample.template.users3.Username1", get_DMtu_Username1, 0, "username1"},
	{"Device.MultiInstanceSample.template.users2.users2-1.Username2", get_DMtuu_Username2, 0, "username2"},
	{"Device.MultiInstanceSample.template.users2.users2-1.Username1", get_DMtuu_Username1, 0, "username1"},
	{"Device.MultiInstanceSample.template.users2.users2-1.users3-1.Username2", get_DMtuuu_Username2, 0, "username2"},
	{"Device.MultiInstanceSample.template.users2.users2-1.users3-1.Username1", get_DMtuuu_Username1, 0, "username1"},
	{"Device.MultiInstanceSample.template.users2.users2-1.users3-1.users4-1.Username2", get_DMtuuuu_Username2, 0, "username2"},
	{"Device.MultiInstanceSample.template.users2.users2-1.users3-1.users4-1.Username1", get_DMtuuuu_Username1, 0, "username1"},
	{"Device.MultiInstanceSample.template.users2.Username2", get_DMtu_Username2_94, 0, "username2"},
	{"Device.MultiInstanceSample.template.users2.Username1", get_DMtu_Username1_95, 0, "username1"},
	{"Device.MultiInstanceSample.template.users1.Username2", get_DMtu_Username2_96, 0, "username2"},
	{"Device.MultiInstanceSample.template.users1.Username1", get_DMtu_Username1_97, 0, "username1"},
	{"Device.ManagementServer.Username", get_DM_Username, 0, "digest"},
	{"Device.ManagementServer.URL", get_DM_URL, 0, "http://192.168.100.102:80/acs"},
	{"Device.ManagementServer.UDPConnectionRequestAddress", get_DM_UDPConnectionRequestAddress, 0, "0.0.0.0:7547"},
	{"Device.ManagementServer.STUNUsername", get_DM_STUNUsername, 0, "test"},
	{"Device.ManagementServer.STUNServerPort", get_DM_STUNServerPort, 0, "3478"},
	{"Device.ManagementServer.STUNServerAddress", get_DM_STUNServerAddress, 0, "116.213.94.142"},
	{"Device.ManagementServer.STUNPassword", get_DM_STUNPassword, 0, "f5d74b9277dc7f03587630ee535bf017e0fb75c7"},
	{"Device.ManagementServer.STUNMinimumKeepAlivePeriod", get_DM_STUNMinimumKeepAlivePeriod, 0, "3000"},
	{"Device.ManagementServer.STUNMaximumKeepAlivePeriod", get_DM_STUNMaximumKeepAlivePeriod, 0, "30"},
	{"Device.ManagementServer.STUNEnable", get_DM_STUNEnable, 0, "0"},
	{"Device.ManagementServer.PeriodicInformTime", get_DM_PeriodicInformTime, 0, "0001-01-01T00:00:00Z"},
	{"Device.ManagementServer.PeriodicInformInterval", get_DM_PeriodicInformInterval, 0, "30"},
	{"Device.ManagementServer.PeriodicInformEnable", get_DM_PeriodicInformEnable, 0, "1"},
	{"Device.ManagementServer.Password", get_DM_Password, 0, "digest"},
	{"Device.ManagementServer.ParameterKey", get_DM_ParameterKey, 0, ""},
	{"Device.ManagementServer.NATDetected", get_DM_NATDetected, 0, "true"},
	{"Device.ManagementServer.ConnectionRequestUsername", get_DM_ConnectionRequestUsername, 0, "username"},
	{"Device.ManagementServer.ConnectionRequestURL", get_DM_ConnectionRequestURL, 0, "http://172.31.0.164:7547"},
	{"Device.ManagementServer.ConnectionRequestPassword", get_DM_ConnectionRequestPassword, 0, "password"},
	{"Device.ManagementServer.CWMPRetryMinimumWaitInterval", get_DM_CWMPRetryMinimumWaitInterval, 0, "5"},
	{"Device.ManagementServer.CWMPRetryIntervalMultiplier", get_DM_CWMPRetryIntervalMultiplier, 0, "2000"},
	{"Device.ManagementServer.DUStateChangeComplPolicy.Enable", get_DMD_Enable, 0, "0"},
	{"Device.ManagementServer.DUStateChangeComplPolicy.ResultTypeFilter", get_DMD_ResultTypeFilter, 0, "Both"},
	{"Device.ManagementServer.DUStateChangeComplPolicy.FaultCodeFilter", get_DMD_FaultCodeFilter, 0, "9001,9003,9012,9013,9015,9016,9017,9018,9022,9023,9024,9025"},
	{"Device.Layer3Forwarding.ForwardNumberOfEntries", get_DL_ForwardNumberOfEntries, 0, "value"},
	{"Device.Layer3Forwarding.DefaultConnectionService", get_DL_DefaultConnectionService, 0, "1"},
	{"Device.DeviceInfo.SpecVersion", get_DD_SpecVersion, 0, "1.1"},
	{"Device.DeviceInfo.SoftwareVersion", get_DD_SoftwareVersion, 0, "1.0"},
	{"Device.DeviceInfo.SerialNumber", get_DD_SerialNumber, 0, "157A"},
	{"Device.DeviceInfo.ProvisioningCode", get_DD_ProvisioningCode, 0, "123"},
	{"Device.DeviceInfo.ProductClass", get_DD_ProductClass, 0, "TRAgent"},
	{"Device.DeviceInfo.ManufacturerOUI", get_DD_ManufacturerOUI, 0, "157A"},
	{"Device.DeviceInfo.Manufacturer", get_DD_Manufacturer, 0, "TRAgent"},
	{"Device.DeviceInfo.HardwareVersion", get_DD_HardwareVersion, 0, "1.0"},
	{"Device.DeviceInfo.X_WKS_Key", get_DD_X_WKS_Key, 0, "wkss"},
	{"Device.UploadDiagnostics.DiagnosticsState", get_DU_DiagnosticsState, 0, "Completed"},
	{"Device.UploadDiagnostics.Interface", get_DU_Interface, 0, ""},
	{"Device.UploadDiagnostics.UploadURL", get_DU_UploadURL, 0, "http://10.10.1.48/acs_filestore/upload/romStore/data.txt"},
	{"Device.UploadDiagnostics.DSCP", get_DU_DSCP, 0, "0"},
	{"Device.UploadDiagnostics.TestFileLength", get_DU_TestFileLength, 0, "10000"},
	{"Device.UploadDiagnostics.ROMTime", get_DU_ROMTime, 0, "2009-09-25T00:14:52.421599"},
	{"Device.UploadDiagnostics.BOMTime", get_DU_BOMTime, 0, "2009-09-25T00:14:52.428843"},
	{"Device.UploadDiagnostics.EOMTime", get_DU_EOMTime, 0, "2009-09-25T00:14:52.749615"},
	{"Device.UploadDiagnostics.TotalBytesSent", get_DU_TotalBytesSent, 0, "30000"},
	{"Device.UploadDiagnostics.TCPOpenRequestTime", get_DU_TCPOpenRequestTime, 0, "2009-09-25T00:14:52.354459"},
	{"Device.UploadDiagnostics.TCPOpenResponseTime", get_DU_TCPOpenResponseTime, 0, "2009-09-25T00:14:52.371839"},
	{"Device.UploadDiagnostics.EthernetPriority", get_DU_EthernetPriority, 0, "0"},
	{"Device.DownloadDiagnostics.DiagnosticsState", get_DD_DiagnosticsState, 0, "Error_InitConnectionFailed"},
	{"Device.DownloadDiagnostics.Interface", get_DD_Interface, 0, ""},
	{"Device.DownloadDiagnostics.DownloadURL", get_DD_DownloadURL, 0, "http://10.10.1.48/acs_filestore/download/data.txt"},
	{"Device.DownloadDiagnostics.DSCP", get_DD_DSCP, 0, "0"},
	{"Device.DownloadDiagnostics.EthernetPriority", get_DD_EthernetPriority, 0, "0"},
	{"Device.DownloadDiagnostics.ROMTime", get_DD_ROMTime, 0, "2009-09-25T00:23:29.111696"},
	{"Device.DownloadDiagnostics.BOMTime", get_DD_BOMTime, 0, "2009-09-25T00:23:29.138323"},
	{"Device.DownloadDiagnostics.EOMTime", get_DD_EOMTime, 0, "2009-09-25T00:23:29.269335"},
	{"Device.DownloadDiagnostics.TestBytesReceived", get_DD_TestBytesReceived, 0, "453630"},
	{"Device.DownloadDiagnostics.TotalBytesReceived", get_DD_TotalBytesReceived, 0, "30000"},
	{"Device.DownloadDiagnostics.TCPOpenRequestTime", get_DD_TCPOpenRequestTime, 0, "2009-09-25T00:23:29.103696"},
	{"Device.DownloadDiagnostics.TCPOpenResponseTime", get_DD_TCPOpenResponseTime, 0, "2009-09-25T00:23:29.110099"},
	{"Device.IPPingDiagnostics.DiagnosticsState", get_DI_DiagnosticsState, 0, "Complete"},
	{"Device.IPPingDiagnostics.Interface", get_DI_Interface, 0, "InternetGatewayDevice.WANDevice.1.WANConnectionDevice.1.WANPPPConnection.1"},
	{"Device.IPPingDiagnostics.Host", get_DI_Host, 0, "192.168.1.1"},
	{"Device.IPPingDiagnostics.NumberOfRepetitions", get_DI_NumberOfRepetitions, 0, "2"},
	{"Device.IPPingDiagnostics.Timeout", get_DI_Timeout, 0, "17000"},
	{"Device.IPPingDiagnostics.DataBlockSize", get_DI_DataBlockSize, 0, "42"},
	{"Device.IPPingDiagnostics.DSCP", get_DI_DSCP, 0, "0"},
	{"Device.IPPingDiagnostics.SuccessCount", get_DI_SuccessCount, 0, "4"},
	{"Device.IPPingDiagnostics.FailureCount", get_DI_FailureCount, 0, "4"},
	{"Device.IPPingDiagnostics.AverageResponseTime", get_DI_AverageResponseTime, 0, "4"},
	{"Device.IPPingDiagnostics.MinimumResponseTime", get_DI_MinimumResponseTime, 0, "4"},
	{"Device.IPPingDiagnostics.MaximumResponseTime", get_DI_MaximumResponseTime, 0, "4"},
	{"Device.TraceRouteDiagnostics.DiagnosticsState", get_DT_DiagnosticsState, 0, "Complete"},
	{"Device.TraceRouteDiagnostics.Interface", get_DT_Interface, 0, ""},
	{"Device.TraceRouteDiagnostics.Host", get_DT_Host, 0, ""},
	{"Device.TraceRouteDiagnostics.NumberOfTries", get_DT_NumberOfTries, 0, "4"},
	{"Device.TraceRouteDiagnostics.Timeout", get_DT_Timeout, 0, "3000"},
	{"Device.TraceRouteDiagnostics.DataBlockSize", get_DT_DataBlockSize, 0, "64"},
	{"Device.TraceRouteDiagnostics.DSCP", get_DT_DSCP, 0, "0"},
	{"Device.TraceRouteDiagnostics.MaxHopCount", get_DT_MaxHopCount, 0, "4"},
	{"Device.TraceRouteDiagnostics.ResponseTime", get_DT_ResponseTime, 0, "4"},
	{"Device.TraceRouteDiagnostics.RouteHopsNumberOfEntries", get_DT_RouteHopsNumberOfEntries, 0, "4"},
	{"Device.TraceRouteDiagnostics.RouteHops.template.HopHost", get_DTRt_HopHost, 0, ""},
	{"Device.TraceRouteDiagnostics.RouteHops.template.HopHostAddress", get_DTRt_HopHostAddress, 0, ""},
	{"Device.TraceRouteDiagnostics.RouteHops.template.HopErrorCode", get_DTRt_HopErrorCode, 0, ""},
	{"Device.TraceRouteDiagnostics.RouteHops.template.HopRTTimes", get_DTRt_HopRTTimes, 0, ""},
	{"Device.Capabilities.PerformanceDiagnostic.DownloadTransports", get_DCP_DownloadTransports, 0, "HTTP"},
	{"Device.Capabilities.PerformanceDiagnostic.UploadTransports", get_DCP_UploadTransports, 0, "HTTP"},
	{"Device.UDPEchoConfig.Enable", get_DU_Enable, 0, "1"},
	{"Device.UDPEchoConfig.Interface", get_DU_Interface_186, 0, ""},
	{"Device.UDPEchoConfig.SourceIPAddress", get_DU_SourceIPAddress, 0, ""},
	{"Device.UDPEchoConfig.UDPPort", get_DU_UDPPort, 0, "1235"},
	{"Device.UDPEchoConfig.EchoPlusEnabled", get_DU_EchoPlusEnabled, 0, "0"},
	{"Device.UDPEchoConfig.EchoPlusSupported", get_DU_EchoPlusSupported, 0, "0"},
	{"Device.UDPEchoConfig.PacketsReceived", get_DU_PacketsReceived, 0, "3001"},
	{"Device.UDPEchoConfig.PacketsResponded", get_DU_PacketsResponded, 0, "64"},
	{"Device.UDPEchoConfig.BytesReceived", get_DU_BytesReceived, 0, "41"},
	{"Device.UDPEchoConfig.BytesResponded", get_DU_BytesResponded, 0, "4"},
	{"Device.UDPEchoConfig.TimeFirstPacketReceived", get_DU_TimeFirstPacketReceived, 0, "2009-09-25T00:23:29.103696"},
	{"Device.UDPEchoConfig.TimeLastPacketReceived", get_DU_TimeLastPacketReceived, 0, "2009-09-25T00:43:25.289011"},
	{"Device.SelfTestDiagnostics.DiagnosticsState", get_DS_DiagnosticsState, 0, ""},
	{"Device.SelfTestDiagnostics.Results", get_DS_Results, 0, ""},
	{"Device.NSLookupDiagnostics.DiagnosticsState", get_DN_DiagnosticsState, 0, ""},
	{"Device.NSLookupDiagnostics.Interface", get_DN_Interface, 0, ""},
	{"Device.NSLookupDiagnostics.HostName", get_DN_HostName, 0, ""},
	{"Device.NSLookupDiagnostics.DNSServer", get_DN_DNSServer, 0, ""},
	{"Device.NSLookupDiagnostics.Timeout", get_DN_Timeout, 0, "5000"},
	{"Device.NSLookupDiagnostics.NumberOfRepetitions", get_DN_NumberOfRepetitions, 0, "1"},
	{"Device.NSLookupDiagnostics.SuccessCount", get_DN_SuccessCount, 0, "1"},
	{"Device.NSLookupDiagnostics.ResultNumberOfEntries", get_DN_ResultNumberOfEntries, 0, "1"},
	{"Device.NSLookupDiagnostics.Result.1.Status", get_DNR1_Status, 0, ""},
	{"Device.NSLookupDiagnostics.Result.1.AnswerType", get_DNR1_AnswerType, 0, ""},
	{"Device.NSLookupDiagnostics.Result.1.HostNameReturned", get_DNR1_HostNameReturned, 0, ""},
	{"Device.NSLookupDiagnostics.Result.1.IPAddresses", get_DNR1_IPAddresses, 0, ""},
	{"Device.NSLookupDiagnostics.Result.1.DNSServerIP", get_DNR1_DNSServerIP, 0, ""},
	{"Device.NSLookupDiagnostics.Result.1.ResponseTime", get_DNR1_ResponseTime, 0, ""},
	{"",0,0,""}
};
