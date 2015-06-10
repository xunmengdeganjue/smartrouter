int get_D_RootDataModelVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(D_RootDataModelVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_D_InterfaceStackNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(D_InterfaceStackNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_DeviceCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_DeviceCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ModelName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ModelName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ModelNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ModelNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_HardwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_HardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SoftwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_AdditionalHardwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_AdditionalHardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_AdditionalSoftwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_AdditionalSoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProvisioningCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProvisioningCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DD_ProvisioningCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DD_ProvisioningCode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_UpTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_UpTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_FirstUseDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_FirstUseDate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_VendorConfigFileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_VendorConfigFileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SupportedDataModelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SupportedDataModelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProcessorNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProcessorNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_VendorLogFileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_VendorLogFileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_LocationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_LocationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Version(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Version, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Date(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Date, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_UseForBackupRestore(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_UseForBackupRestore, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSt_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_UUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_UUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_URN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_URN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_Features(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_Features, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDM_Total(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDM_Total, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDM_Free(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDM_Free, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_CPUUsage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_CPUUsage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProcessNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProcessNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_PID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_PID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_Command(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Command, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_Size(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Size, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_CPUTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_CPUTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_State(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_State, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDT_ProcessNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDT_ProcessNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_LowAlarmValue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTt_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_HighAlarmValue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTt_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTt_PollingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTt_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTt_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDN_MaxTCPWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDN_MaxTCPWindowSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDN_TCPImplementation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDN_TCPImplementation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDPt_Architecture(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Architecture, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Alias_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Alias_75, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDVt_Alias_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDVt_Alias_75, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Name_77(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Name_77, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_MaximumSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_MaximumSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Persistent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Persistent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Source(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Source, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_AcquiredTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_AcquiredTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ExternalSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ExternalSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ExternalProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ExternalProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DataObject(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DataObject, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_DataObject(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_DataObject, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_EnableCWMP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_EnableCWMP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_EnableCWMP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_EnableCWMP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_Username, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_Password, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ParameterKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ParameterKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestUsername, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnectionRequestUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnectionRequestUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnectionRequestPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnectionRequestPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UpgradesManaged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UpgradesManaged, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_UpgradesManaged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UpgradesManaged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_KickURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_KickURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_DownloadProgressURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_DownloadProgressURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_CWMPRetryMinimumWaitInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_CWMPRetryMinimumWaitInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_CWMPRetryMinimumWaitInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_CWMPRetryMinimumWaitInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_CWMPRetryIntervalMultiplier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_CWMPRetryIntervalMultiplier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_CWMPRetryIntervalMultiplier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_CWMPRetryIntervalMultiplier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UDPConnectionRequestAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPConnectionRequestAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_STUNEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNServerAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNServerAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNServerAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNServerAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNUsername, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_NATDetected(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_NATDetected, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_AliasBasedAddressing(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_AliasBasedAddressing, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_InstanceMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InstanceMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_InstanceMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_InstanceMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_AutoCreateInstances(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_AutoCreateInstances, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_AutoCreateInstances(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_AutoCreateInstances, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ManageableDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ManageableDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_EmbeddedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_EmbeddedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_VirtualDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_VirtualDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_SupportedConnReqMethods(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_SupportedConnReqMethods, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnReqXMPPConnection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqXMPPConnection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnReqXMPPConnection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnReqXMPPConnection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ConnReqAllowedJabberIDs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqAllowedJabberIDs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnReqAllowedJabberIDs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnReqAllowedJabberIDs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ConnReqJabberID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqJabberID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_HTTPCompressionSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_HTTPCompressionSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_HTTPCompression(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_HTTPCompression, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_HTTPCompression(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_HTTPCompression, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_LightweightNotificationProtocolsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_LightweightNotificationProtocolsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_LightweightNotificationProtocolsUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_LightweightNotificationProtocolsUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_LightweightNotificationProtocolsUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_LightweightNotificationProtocolsUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UDPLightweightNotificationHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPLightweightNotificationHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_UDPLightweightNotificationHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UDPLightweightNotificationHost, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UDPLightweightNotificationPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPLightweightNotificationPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_UDPLightweightNotificationPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UDPLightweightNotificationPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_InformParameterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InformParameterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMMt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMMt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMMt_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_TransferTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_TransferTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_TransferTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_TransferTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_ResultTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_ResultTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_FileTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_FileTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_FileTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_FileTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_Enable_177(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Enable_177, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_Enable_177(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_Enable_177, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMA_GroupNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_GroupNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMGt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMGt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMGt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMGt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMGt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMGt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMGt_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMGt_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMQ_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMQ_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMQ_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMQ_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMQ_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMQ_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMQ_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMQ_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMQ_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMQ_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_OperationTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_OperationTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_OperationTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_OperationTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_ResultTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_ResultTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_FaultCodeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_FaultCodeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_FaultCodeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_FaultCodeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMEt_ControllerID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ControllerID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxiedDeviceID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxiedDeviceID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_Reference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_Reference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_SupportedDataModel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_SupportedDataModel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxyProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxyProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_DiscoveryProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_DiscoveryProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_DiscoveryProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_DiscoveryProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_CommandProcessed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_CommandProcessed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ommandProcessingErrMsg(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ommandProcessingErrMsg, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_LastSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_LastSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMEt_LastSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMEt_LastSyncTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMVt_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProxyProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProxyProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_DiscoveryProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_DiscoveryProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_DiscoveryProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_DiscoveryProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_CRUnawarenessMaxDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_CRUnawarenessMaxDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_CRUnawarenessMaxDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_CRUnawarenessMaxDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_MaxMissedPeriodic(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_MaxMissedPeriodic, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_MaxMissedPeriodic(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_MaxMissedPeriodic, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_NotifyMissedScheduled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_NotifyMissedScheduled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_NotifyMissedScheduled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_NotifyMissedScheduled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_NetworkAwarenessCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_NetworkAwarenessCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_SelfTimerCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_SelfTimerCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_CRAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_CRAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_CRAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_CRAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_PeriodicAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_PeriodicAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_PeriodicAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_PeriodicAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_ScheduledAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_ScheduledAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_ScheduledAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_ScheduledAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_ParameterName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_ParameterName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_ParameterName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_ParameterName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_EventList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_EventList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_EventList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_EventList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DG_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_NTPServer1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer1, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer1, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer2, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer2, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer3(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer3, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer3(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer3, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer4(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer4, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer4(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer4, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer5(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer5, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer5(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer5, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_CurrentLocalTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_CurrentLocalTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_LocalTimeZone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_LocalTimeZone, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_LocalTimeZone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_LocalTimeZone, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_PasswordRequired(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordRequired, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_PasswordRequired(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_PasswordRequired, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_PasswordUserSelectable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordUserSelectable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_PasswordReset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordReset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_PasswordReset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_PasswordReset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_UpgradeAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_UpgradeAvailable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_UpgradeAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_UpgradeAvailable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_WarrantyDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_WarrantyDate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_WarrantyDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_WarrantyDate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPHelpDesk(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHelpDesk, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPHelpDesk(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPHelpDesk, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPHomePage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHomePage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_ISPHelpPage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHelpPage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPHelpPage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPHelpPage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPLogo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPLogo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPLogo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPLogo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPLogoSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPLogoSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPLogoSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPLogoSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPMailServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPMailServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPMailServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPMailServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPNewsServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPNewsServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPNewsServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPNewsServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_TextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_TextColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_TextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_TextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_BackgroundColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_BackgroundColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_BackgroundColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_BackgroundColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ButtonColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ButtonColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ButtonColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ButtonColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ButtonTextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ButtonTextColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ButtonTextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ButtonTextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_AutoUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_AutoUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_AutoUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_AutoUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_UserUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_UserUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_UserUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_UserUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_AvailableLanguages(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_AvailableLanguages, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_AvailableLanguages(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_AvailableLanguages, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_CurrentLanguage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_CurrentLanguage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_CurrentLanguage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_CurrentLanguage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_SupportedProtocols(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_SupportedProtocols, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUR_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Movable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Movable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Movable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Movable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Resizable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Resizable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Resizable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Resizable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_PosX(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_PosX, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_PosX(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_PosX, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_PosY(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_PosY, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_PosY(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_PosY, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Width(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Width, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Width(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Width, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Height(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Height, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Height(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Height, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_DisplayWidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_DisplayWidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUL_DisplayHeight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_DisplayHeight, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIt_HigherLayer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_HigherLayer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_LowerLayer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_LowerLayer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_HigherAlias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_HigherAlias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_LowerAlias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_LowerAlias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_LineNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_LineNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_BondingGroupNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_BondingGroupNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_EnableDataGathering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_EnableDataGathering, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_EnableDataGathering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_EnableDataGathering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LinkStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LinkStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_StandardsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_StandardsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTSE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTSE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_StandardUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_StandardUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTSUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTSUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LineEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LineEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_AllowedProfiles(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_AllowedProfiles, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_CurrentProfile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_CurrentProfile, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_PowerManagementState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_PowerManagementState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SuccessFailureCause(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SuccessFailureCause, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLEPb(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLEPb, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLERPb(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLERPb, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_RXTHRSHds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_RXTHRSHds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTRAMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTRAMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTRAMODEus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTRAMODEus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTINPROCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTINPROCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTINPROCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTINPROCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMROCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMROCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMROCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMROCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastStateTransmittedDownstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastStateTransmittedDownstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastStateTransmittedUpstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastStateTransmittedUpstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_MREFPSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_MREFPSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_MREFPSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_MREFPSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LIMITMASK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LIMITMASK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_US0MASK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_US0MASK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_TRELLISds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_TRELLISds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_TRELLISus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_TRELLISus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTSNRMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTSNRMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTSNRMODEus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTSNRMODEus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_VirtualNoisePSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_VirtualNoisePSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_VirtualNoisePSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_VirtualNoisePSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTUALCE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTUALCE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LineNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LineNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamNoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamNoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMpbus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMpbus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMpbds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMpbds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMIATOds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMIATOds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMIATSds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMIATSds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMCCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMCCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMINPEQMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMINPEQMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURVendor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURVendor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURCountry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURCountry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURANSIStd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURANSIStd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURANSIRev(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURANSIRev, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCVendor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCVendor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCCountry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCCountry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCANSIStd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCANSIStd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCANSIRev(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCANSIRev, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLD_LoggingDepthR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLD_LoggingDepthR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLD_LoggingDepthR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLD_LoggingDepthR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLD_ActLoggingDepthReportingR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLD_ActLoggingDepthReportingR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLD_ActLoggingDepthReportingR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLD_ActLoggingDepthReportingR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLD_EventTraceBufferR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLD_EventTraceBufferR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLD_EventTraceBufferR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLD_EventTraceBufferR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_BytesSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_BytesReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_PacketsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_PacketsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_ErrorsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_ErrorsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_DiscardPacketsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_DiscardPacketsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_TotalStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_ShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_ShowtimeStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_LastShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_LastShowtimeStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_CurrentDayStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLS_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLS_QuarterHourStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLST_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLST_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLST_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLST_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLST_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLST_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLST_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLST_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSS_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSS_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSS_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSS_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSS_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSS_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSS_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSS_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSL_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSL_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSL_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSL_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSL_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSL_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSL_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSL_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSC_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSC_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSC_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSC_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSC_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSC_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSC_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSC_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSQ_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSQ_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSQ_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSQ_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLSQ_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLSQ_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLSQ_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLSQ_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_HLOGMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_QLNMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SNRMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_LATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_LATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_LATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_LATNds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_LATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_LATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_LATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_LATNus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SATNds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLT_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLT_SATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLT_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLT_SATNus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LinkEncapsulationSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LinkEncapsulationSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LinkEncapsulationUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LinkEncapsulationUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LPATH(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LPATH, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INTLVDEPTH(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INTLVDEPTH, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INTLVBLOCK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INTLVBLOCK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ActualInterleavingDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ActualInterleavingDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTINP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTINP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INPREPORT(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INPREPORT, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_NFEC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_NFEC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_RFEC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RFEC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LSYMB(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LSYMB, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_UpstreamCurrRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_UpstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DownstreamCurrRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DownstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTNDR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTNDR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTINPREIN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTINPREIN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_ShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_LastShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCST_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCST_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCST_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCST_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCST_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCST_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCST_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCST_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCST_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSS_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSS_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSS_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSS_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSL_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSL_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSL_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSL_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSC_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSC_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSC_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSC_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSQ_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSQ_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSQ_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSQ_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondSchemesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondSchemesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondScheme(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondScheme, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupCapacity(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupCapacity, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_RunningTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_RunningTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_TargetUpRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_TargetUpRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_TargetDownRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_TargetDownRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_ThreshLowUpRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_ThreshLowUpRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_ThreshLowDownRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_ThreshLowDownRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_UpstreamDifferentialDelayTolerance(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_UpstreamDifferentialDelayTolerance, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_DownstreamDifferentialDelayTolerance(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_DownstreamDifferentialDelayTolerance, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondedChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondedChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBBt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_UnderflowErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_UnderflowErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_CRCErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_CRCErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_AlignmentErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_AlignmentErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_ShortPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_ShortPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_LongPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_LongPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_OverflowErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_OverflowErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_PauseFramesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_PauseFramesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBBES_FramesDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBBES_FramesDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBS_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBST_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBST_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSC_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSC_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBSQ_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBSQ_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFSmallFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFSmallFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFLargeFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFLargeFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFBadFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFBadFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFLostFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFLostFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFLateFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFLateFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFLostStarts(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFLostStarts, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFLostEnds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFLostEnds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PAFOverflows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PAFOverflows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_PauseFramesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_PauseFramesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_CRCErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_CRCErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_AlignmentErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_AlignmentErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_ShortPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_ShortPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_LongPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_LongPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_OverflowErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_OverflowErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBES_FramesDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBES_FramesDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDA_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDA_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDA_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDA_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDA_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDA_ACTPSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTPSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTPSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTPSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTATPds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTATPds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTATPus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTATPus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINSCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINSCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINSCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINSCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_LATNpbds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_LATNpbds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_LATNpbus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_LATNpbus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_BITSpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_BITSpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_BITSpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_BITSpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DO_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DO_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_OpticalSignalLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_OpticalSignalLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerOpticalThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerOpticalThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_UpperOpticalThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_UpperOpticalThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_TransmitOpticalLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_TransmitOpticalLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerTransmitPowerThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerTransmitPowerThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_UpperTransmitPowerThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_UpperTransmitPowerThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_RoamingEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_RoamingEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_RoamingEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_RoamingEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DC_RoamingStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_RoamingStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_AccessPointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_AccessPointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_Upstream, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_IMEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_IMEI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_SupportedAccessTechnologies(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_SupportedAccessTechnologies, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_PreferredAccessTechnology(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_PreferredAccessTechnology, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_PreferredAccessTechnology(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_PreferredAccessTechnology, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_CurrentAccessTechnology(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_CurrentAccessTechnology, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_AvailableNetworks(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_AvailableNetworks, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_NetworkRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_NetworkRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIt_NetworkRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIt_NetworkRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIt_NetworkInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_NetworkInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_RSSI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_RSSI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_UpstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_UpstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIt_DownstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIt_DownstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIU_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIU_IMSI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_IMSI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIU_ICCID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_ICCID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIU_MSISDN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_MSISDN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIU_PINCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_PINCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIU_PINCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIU_PINCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIU_PIN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIU_PIN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCIU_PIN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCIU_PIN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DCAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_APN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_APN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_APN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_APN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Username, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Password, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_Proxy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Proxy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Proxy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Proxy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_ProxyPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_ProxyPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_ProxyPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_ProxyPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DCAt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DCAt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DCAt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DCAt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DA_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DA_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_LinkType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LinkType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_LinkType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_LinkType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_AutoConfig(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_AutoConfig, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_DestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_DestinationAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Encapsulation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Encapsulation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Encapsulation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Encapsulation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_FCSPreserved(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_FCSPreserved, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_FCSPreserved(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_FCSPreserved, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_VCSearchList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_VCSearchList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_VCSearchList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_VCSearchList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_AAL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_AAL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_TransmittedBlocks(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_TransmittedBlocks, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_ReceivedBlocks(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_ReceivedBlocks, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_CRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALS_HECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALS_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALQ_QoSClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALQ_QoSClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALQ_QoSClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALQ_QoSClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALQ_PeakCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALQ_PeakCellRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALQ_PeakCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALQ_PeakCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALQ_MaximumBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALQ_MaximumBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALQ_MaximumBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALQ_MaximumBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALQ_SustainableCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALQ_SustainableCellRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALQ_SustainableCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALQ_SustainableCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DAF_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DAF_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DAF_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DAF_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DAF_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DAF_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DAF_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DAF_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DAF_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DAF_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DAF_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DAF_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DAF_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DAF_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DAF_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DAF_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DAF_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DAF_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DP_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DP_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DP_LinkNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_VLANTerminationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_VLANTerminationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_RMONStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_RMONStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Queue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Queue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_AllQueues(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_AllQueues, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_AllQueues(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_AllQueues, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_DropEvents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_DropEvents, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_BroadcastPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_BroadcastPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_MulticastPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_MulticastPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_CRCErroredPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_CRCErroredPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_UndersizePackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_UndersizePackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_OversizePackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_OversizePackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets64Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets64Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets65to127Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets65to127Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets128to255Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets128to255Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets512to1023Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets512to1023Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets1024to1518Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets1024to1518Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_CurrentBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_CurrentBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_DuplexMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_EEECapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_EEECapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_EEEEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_EEEEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_TPID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_TPID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUPt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Receptacle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Receptacle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Power(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Power, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUU_HostNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUU_HostNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_PowerManagementEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_PowerManagementEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_DeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_DeviceNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_DeviceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_DeviceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_DeviceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_DeviceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_DeviceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_DeviceSubClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_DeviceVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_DeviceVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_DeviceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_DeviceProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_ProductID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_ProductID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_VendorID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_VendorID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_Manufacturer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_ProductClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHDt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHDt_SerialNumber, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHDt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_USBPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_USBPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_Parent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_Parent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_MaxChildren(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_MaxChildren, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_IsSuspended(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_IsSuspended, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_IsSelfPowered(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_IsSelfPowered, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDt_ConfigurationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDt_ConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCt_ConfigurationNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCt_ConfigurationNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCt_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCt_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCIt_InterfaceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCIt_InterfaceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCIt_nterfaceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCIt_nterfaceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCIt_InterfaceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCIt_InterfaceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHDCIt_InterfaceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHDCIt_InterfaceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DH_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DH_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_IsMaster(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_IsMaster, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Synced(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Synced, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_TotalSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_TotalSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NetworkUtilization(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NetworkUtilization, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_PossibleConnectionTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_PossibleConnectionTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_ConnectionType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_PossibleSpectralModes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_PossibleSpectralModes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_SpectralMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_SpectralMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_SpectralMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_SpectralMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_MTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MTU, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_MTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_MTU, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_NoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_DefaultNonLARQPER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_DefaultNonLARQPER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LARQEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LARQEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MinMulticastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MinMulticastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NegMulticastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NegMulticastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MasterSelectionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MasterSelectionMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_MasterSelectionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_MasterSelectionMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIQ_FlowSpecNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQ_FlowSpecNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_TrafficClasses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_TrafficClasses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_FlowType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_FlowType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_FlowType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_FlowType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIQFt_Latency(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Latency, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_Latency(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_Latency, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_Jitter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Jitter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_Jitter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_Jitter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_PacketSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_PacketSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_PacketSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_PacketSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_MinRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_MinRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_MinRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_MinRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_AvgRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_AvgRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_AvgRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_AvgRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_MaxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_MaxRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_PER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_PER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_PER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_PER, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIQFt_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIQFt_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIQFt_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIQFt_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_IsMaster(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_IsMaster, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_Synced(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_Synced, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_TotalSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_TotalSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_PHYDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_PHYDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIAt_PHYDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIAt_PHYDiagnosticsEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_NumPacketsInBurst(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_NumPacketsInBurst, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_NumPacketsInBurst(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_NumPacketsInBurst, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_BurstInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_BurstInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_BurstInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_BurstInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_TestPacketPayloadLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_TestPacketPayloadLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_TestPacketPayloadLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_TestPacketPayloadLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadDataGen(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadDataGen, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadDataGen(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadDataGen, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PriorityLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PriorityLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PriorityLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PriorityLevel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_ResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_ResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_SrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_SrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_DestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_PHYRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_PHYRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_BaudRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_BaudRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_Attenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_Attenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDP_DiagnosticsState_1228(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_DiagnosticsState_1228, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_DiagnosticsState_1228(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_DiagnosticsState_1228, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_Interface_1230(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_Interface_1230, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_Interface_1230(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_Interface_1230, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_SampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_SampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDPN_CurrentStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_CurrentStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_CurrentEnd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsCrcErrored(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsCrcErrored, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsCrcErroredHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsCrcErroredHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsShortErrored(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsShortErrored, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsShortErroredHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsShortErroredHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_RxPacketsDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_RxPacketsDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_TxPacketsDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_TxPacketsDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlRequestLocal(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlRequestLocal, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlReplyLocal(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlReplyLocal, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlRequestRemote(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlRequestRemote, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlReplyRemote(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlReplyRemote, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsInternalControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsInternalControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsInternalControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsInternalControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceivedQueued(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceivedQueued, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceivedForwardUnknown(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceivedForwardUnknown, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_NodeUtilization(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_NodeUtilization, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPC_TimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPC_TimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HostSrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HostSrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HostDestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HostDestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HPNASrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HPNASrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HPNADestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HPNADestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PHYRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PHYRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_BaudRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_BaudRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_LARQPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_LARQPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_FlowSpec(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_FlowSpec, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_Enable_1278(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Enable_1278, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Enable_1278(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Enable_1278, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_Alias_1281(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Alias_1281, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Alias_1281(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Alias_1281, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxIngressBW(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxIngressBW, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxEgressBW(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxEgressBW, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_HighestVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_HighestVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_CurrentVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_CurrentVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_NetworkCoordinator(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NetworkCoordinator, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxNodes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxNodes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PreferredNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PreferredNC, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_BackupNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_BackupNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_PrivacyEnabledSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PrivacyEnabledSetting, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PrivacyEnabledSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PrivacyEnabledSetting, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PrivacyEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PrivacyEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FreqCapabilityMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCapabilityMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FreqCurrentMaskSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCurrentMaskSetting, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_FreqCurrentMaskSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_FreqCurrentMaskSetting, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_FreqCurrentMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCurrentMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_CurrentOperFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_CurrentOperFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LastOperFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LastOperFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxPowerLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxPowerLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PowerCntlPhyTarget(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PowerCntlPhyTarget, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PowerCntlPhyTarget(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PowerCntlPhyTarget, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_BeaconPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_BeaconPowerLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_BeaconPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_BeaconPowerLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_NetworkTabooMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NetworkTabooMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_NetworkTabooMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_NetworkTabooMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxBcastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxBcastRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxBcastPowerReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxBcastPowerReduction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxBcastPowerReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxBcastPowerReduction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_QAM256Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_QAM256Capable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PacketAggregationCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PacketAggregationCapability, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQ_EgressNumFlows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQ_EgressNumFlows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQ_IngressNumFlows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQ_IngressNumFlows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQ_FlowStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQ_FlowStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_FlowID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_FlowID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_PacketDA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_PacketDA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_MaxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_MaxBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_MaxBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_LeaseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_LeaseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_LeaseTimeLeft(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_LeaseTimeLeft, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIQFt_FlowPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIQFt_FlowPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_PreferredNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_HighestVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_HighestVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_PHYTxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_PHYTxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_PHYRxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_PHYRxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_TxPowerControlReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_TxPowerControlReduction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_RxPowerLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_RxPowerLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_TxBcastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_RxBcastPowerLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_RxBcastPowerLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_TxPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_TxPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_RxPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_RxPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_RxErroredAndMissedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_RxErroredAndMissedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_QAM256Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_PacketAggregationCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_RxSNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_RxSNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxTransmitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxTransmitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_TargetDomainNames(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_TargetDomainNames, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_TargetDomainNames(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_TargetDomainNames, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DomainNameIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainNameIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DomainId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DMRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DMRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_DMRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_DMRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_IsDM(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_IsDM, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeSCCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeSCCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_SCRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_SCRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_SCRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_SCRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_IsSC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_IsSC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_StandardVersions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_StandardVersions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxBandPlan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxBandPlan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MediumType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MediumType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_TAIFG(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_TAIFG, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NotchedAmateurRadioBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NotchedAmateurRadioBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_PHYThroughputDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_PHYThroughputDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_PerformanceMonitoringDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_PerformanceMonitoringDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_SMMaskedBandNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_SMMaskedBandNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMConfig(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMConfig, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeSCStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeSCStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGID_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_DomainNameIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_DomainNameIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGID_DomainId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_DomainId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGID_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_MACCycleDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_MACCycleDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_SCDeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_SCDeviceId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_SCMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_SCMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_ReregistrationTimePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_ReregistrationTimePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_TopologyPeriodicInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_TopologyPeriodicInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_MinSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_MinSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGID_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGID_MaxSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGID_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGID_MaxSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_DomainNameIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_DomainNameIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIDt_DomainId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_DomainId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIDt_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_MACCycleDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_MACCycleDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_SCDeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_SCDeviceId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_SCMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_SCMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_ReregistrationTimePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_ReregistrationTimePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_TopologyPeriodicInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_TopologyPeriodicInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_MinSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_MinSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIDt_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIDt_MaxSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIDt_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIDt_MaxSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIS_MICSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MICSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIS_MICSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIS_MICSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIS_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGISt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGISt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGISt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGISt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGISt_BandNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGISt_BandNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGISt_BandNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGISt_BandNumber, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGISt_StartSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGISt_StartSubCarrier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGISt_StartSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGISt_StartSubCarrier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGISt_StopSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGISt_StopSubCarrier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGISt_StopSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGISt_StopSubCarrier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MgmtBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MgmtBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MgmtBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MgmtBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MgmtPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MgmtPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_MgmtPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_MgmtPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BlocksSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BlocksSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BlocksReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BlocksReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BlocksResent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BlocksResent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIS_BlocksErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIS_BlocksErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIAt_MACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIAt_DeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIAt_DeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIAt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIAt_TxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIAt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIAt_RxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIAt_Active, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnoseMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnoseMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnoseMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnoseMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_PHYThroughputResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_PHYThroughputResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPRt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_DestinationMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPRt_LinkState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_LinkState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPRt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_TxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPRt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_RxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnosticsState_1510(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnosticsState_1510, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnosticsState_1510(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnosticsState_1510, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_Interface_1512(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_Interface_1512, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_Interface_1512(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_Interface_1512, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnoseMACAddress_1514(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnoseMACAddress_1514, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnoseMACAddress_1514(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnoseMACAddress_1514, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_SampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_SampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_SNRGroupLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_SNRGroupLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_SNRGroupLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_SNRGroupLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPN_CurrentStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_CurrentStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_CurrentEnd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPN_CurrentEnd, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPNNt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksResent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksResent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPC_TimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPC_TimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPCCt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPCCt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPCCt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPCCt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DH_InterfaceNumberOfEntries_1554(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DH_InterfaceNumberOfEntries_1554, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Enable_1555(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Enable_1555, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Enable_1555(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Enable_1555, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Status_1557(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Status_1557, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Alias_1558(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Alias_1558, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Alias_1558(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Alias_1558, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Name_1560(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Name_1560, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LastChange_1561(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LastChange_1561, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LowerLayers_1562(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LowerLayers_1562, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LowerLayers_1562(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LowerLayers_1562, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Upstream_1564(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Upstream_1564, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MACAddress_1565(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MACAddress_1565, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LogicalNetwork, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Version(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Version, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_FirmwareVersion_1569(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_FirmwareVersion_1569, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_ForceCCo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_ForceCCo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_ForceCCo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_ForceCCo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_NetworkPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NetworkPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_NetworkPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_NetworkPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_OtherNetworksPresent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_OtherNetworksPresent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MaxBitRate_1575(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MaxBitRate_1575, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_AssociatedDeviceNumberOfEntries_1576(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_AssociatedDeviceNumberOfEntries_1576, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BytesSent_1577(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BytesSent_1577, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BytesReceived_1578(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BytesReceived_1578, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_PacketsSent_1579(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_PacketsSent_1579, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_PacketsReceived_1580(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_PacketsReceived_1580, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_ErrorsSent_1581(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_ErrorsSent_1581, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_ErrorsReceived_1582(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_ErrorsReceived_1582, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnicastPacketsSent_1583(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnicastPacketsSent_1583, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnicastPacketsReceived_1584(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnicastPacketsReceived_1584, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_DiscardPacketsSent_1585(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_DiscardPacketsSent_1585, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_DiscardPacketsReceived_1586(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_DiscardPacketsReceived_1586, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MulticastPacketsSent_1587(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MulticastPacketsSent_1587, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MulticastPacketsReceived_1588(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MulticastPacketsReceived_1588, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BroadcastPacketsSent_1589(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BroadcastPacketsSent_1589, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_BroadcastPacketsReceived_1590(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_BroadcastPacketsReceived_1590, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_UnknownProtoPacketsReceived_1591(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_UnknownProtoPacketsReceived_1591, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MPDUTxAck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MPDUTxAck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MPDUTxCol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MPDUTxCol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MPDUTxFailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MPDUTxFailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MPDURxAck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MPDURxAck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIS_MPDURxFailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIS_MPDURxFailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_MACAddress_1597(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_MACAddress_1597, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_SNRPerTone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_SNRPerTone, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_AvgAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_AvgAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_EndStationMACs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_EndStationMACs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIAt_Active_1603(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIAt_Active_1603, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_InterfaceNumberOfEntries_1604(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_InterfaceNumberOfEntries_1604, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Enable_1605(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Enable_1605, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Enable_1605(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Enable_1605, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Status_1607(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Status_1607, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Alias_1608(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Alias_1608, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Alias_1608(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Alias_1608, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Name_1610(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Name_1610, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LastChange_1611(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LastChange_1611, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LowerLayers_1612(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LowerLayers_1612, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LowerLayers_1612(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LowerLayers_1612, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Upstream_1614(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Upstream_1614, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MACAddress_1615(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MACAddress_1615, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MaxBitRate_1617(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MaxBitRate_1617, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_NodeType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_NodeType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_NodeType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_NodeType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LogicalNetwork, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_EncryptionMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EncryptionMethod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_EncryptionMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_EncryptionMethod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_EncryptionKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EncryptionKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_EncryptionKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_EncryptionKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_PowerBackoffEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_PowerBackoffEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_PowerBackoffEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_PowerBackoffEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_PowerBackoffMechanismActive(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_PowerBackoffMechanismActive, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_EstApplicationThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EstApplicationThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_ActiveNotchEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_ActiveNotchEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_ActiveNotchEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_ActiveNotchEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_ActiveNotchNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_ActiveNotchNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_BridgeForNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_BridgeForNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BytesSent_1635(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BytesSent_1635, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BytesReceived_1636(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BytesReceived_1636, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_PacketsSent_1637(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_PacketsSent_1637, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_PacketsReceived_1638(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_PacketsReceived_1638, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_ErrorsSent_1639(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_ErrorsSent_1639, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_ErrorsReceived_1640(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_ErrorsReceived_1640, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnicastPacketsSent_1641(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnicastPacketsSent_1641, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnicastPacketsReceived_1642(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnicastPacketsReceived_1642, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_DiscardPacketsSent_1643(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_DiscardPacketsSent_1643, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_DiscardPacketsReceived_1644(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_DiscardPacketsReceived_1644, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_MulticastPacketsSent_1645(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_MulticastPacketsSent_1645, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_MulticastPacketsReceived_1646(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_MulticastPacketsReceived_1646, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BroadcastPacketsSent_1647(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BroadcastPacketsSent_1647, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_BroadcastPacketsReceived_1648(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_BroadcastPacketsReceived_1648, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIS_UnknownProtoPacketsReceived_1649(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIS_UnknownProtoPacketsReceived_1649, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_PhyTxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_PhyTxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_PhyRxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_PhyRxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_RealPhyRxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_RealPhyRxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_EstimatedPLR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_EstimatedPLR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_MeanEstimatedAtt(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_MeanEstimatedAtt, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_SmartRouteIntermediatePLCMAC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_SmartRouteIntermediatePLCMAC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_DirectRoute(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_DirectRoute, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIAt_StartFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_StartFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIAt_StartFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIAt_StartFreq, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIAt_StopFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_StopFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIAt_StopFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIAt_StopFreq, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIAt_Depth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIAt_Depth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIAt_Depth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIAt_Depth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIBt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIBt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIBt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIBt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Measurements(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Measurements, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUDI_RxGain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_RxGain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_RadioNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_RadioNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_SSIDNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_SSIDNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_AccessPointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_AccessPointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_EndPointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_EndPointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_SupportedFrequencyBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedFrequencyBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingStandards, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PossibleChannels(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_ChannelsInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_ExtensionChannel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_ExtensionChannel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_GuardInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_GuardInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_MCS, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_MCS, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_TransmitPowerSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_IEEE80211hSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_IEEE80211hSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_IEEE80211hEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_IEEE80211hEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RegulatoryDomain, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_CCARequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_CCARequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_CCAReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_CCAReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RPIHistogramRequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RPIHistogramRequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RPIHistogramReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RPIHistogramReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_FragmentationThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_FragmentationThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RTSThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RTSThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LongRetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_LongRetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_BeaconPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_DTIMPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PacketAggregationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_PacketAggregationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PreambleType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_PreambleType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_SupportedDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_PLCPErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_PLCPErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_FCSErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_FCSErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_InvalidMACCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_InvalidMACCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_PacketsOtherReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_PacketsOtherReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRS_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRS_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWN_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWN_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWN_ResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWN_ResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Radio(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Radio, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Mode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Mode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SecurityModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SecurityModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_EncryptionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_EncryptionMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BasicDataTransferRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BasicDataTransferRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SupportedDataTransferRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SupportedDataTransferRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_SSIDReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_WMMCapability_1836(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMCapability_1836, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAS_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAS_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAS_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAS_SecondaryRadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAA_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAA_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAA_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAA_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAW_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAW_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAW_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAW_ConfigMethodsSupported, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAAAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAAAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAAAS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAAAS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAAAS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_ProfileReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_ProfileReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_ProfileReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_ProfileReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_ProfileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_ProfileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWES_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWES_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWES_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWES_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWES_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWES_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWES_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWES_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWES_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWES_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWES_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWES_ModesSupported, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPt_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPt_Location, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPt_Priority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPS_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPS_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPS_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPS_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEPS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEPS_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEPS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEPS_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEW_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEW_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEW_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_AccessCategory, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEAS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEAS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEAS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZ_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZ_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZ_ZDONumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZ_ZDONumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZIt_IEEEAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_IEEEAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_NetworkAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_NetworkAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_ZDOReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_ZDOReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIS_UnknownPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIS_UnknownPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIAt_IEEEAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIAt_IEEEAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIAt_NetworkAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIAt_NetworkAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZIAt_ZDOReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZIAt_ZDOReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZt_IEEEAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_IEEEAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZt_NetworkAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_NetworkAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZt_BindingTableNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_BindingTableNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZt_GroupNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_GroupNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZt_ApplicationEndpointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZt_ApplicationEndpointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_LogicalType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_LogicalType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_ComplexDescriptorSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_ComplexDescriptorSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_UserDescriptorSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_UserDescriptorSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_FrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_FrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_MACCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_MACCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_ManufactureCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_ManufactureCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_MaximumBufferSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_MaximumBufferSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_MaximumIncomingTransferSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_MaximumIncomingTransferSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_MaximumOutgoingTransferSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_MaximumOutgoingTransferSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_ServerMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_ServerMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_DescriptorCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_DescriptorCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZP_CurrentPowerMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZP_CurrentPowerMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZP_AvailablePowerSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZP_AvailablePowerSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZP_CurrentPowerSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZP_CurrentPowerSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZP_CurrentPowerSourceLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZP_CurrentPowerSourceLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZU_DescriptorAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZU_DescriptorAvailable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZU_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZU_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_DescriptorAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_DescriptorAvailable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_Language(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_Language, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_CharacterSet(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_CharacterSet, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_ManufacturerName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_ManufacturerName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_ModelName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_ModelName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_DeviceURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_DeviceURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_Icon(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_Icon, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZC_IconURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZC_IconURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZS_TrustCenterAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZS_TrustCenterAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZS_SecurityLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZS_SecurityLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZS_TimeOutPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZS_TimeOutPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_NeighborNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_NeighborNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNN_Neighbor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNN_Neighbor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNN_LQI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNN_LQI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNN_Relationship(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNN_Relationship, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNN_PermitJoin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNN_PermitJoin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNN_Depth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNN_Depth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZN_RoutingTableNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZN_RoutingTableNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_DestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_NextHopAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_NextHopAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_MemoryConstrained(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_MemoryConstrained, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_ManyToOne(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_ManyToOne, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZNRt_RouteRecordRequired(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZNRt_RouteRecordRequired, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_SourceEndpoint(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_SourceEndpoint, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_SourceEndpoint(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_SourceEndpoint, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_SourceAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_SourceAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_SourceAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_SourceAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_ClusterId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_ClusterId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_ClusterId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_ClusterId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_DestinationAddressMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_DestinationAddressMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_DestinationAddressMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_DestinationAddressMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_DestinationEndpoint(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_DestinationEndpoint, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_DestinationEndpoint(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_DestinationEndpoint, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_IEEEDestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_IEEEDestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_IEEEDestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_IEEEDestinationAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZBt_GroupDestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZBt_GroupDestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZBt_GroupDestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZBt_GroupDestinationAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZGt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZGt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZGt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZGt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZGt_GroupId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZGt_GroupId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZGt_GroupId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZGt_GroupId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZGt_EndpointList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZGt_EndpointList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZGt_EndpointList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZGt_EndpointList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAt_EndpointId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAt_EndpointId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAt_EndpointId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAt_EndpointId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAS_ProfileId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAS_ProfileId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAS_ProfileId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAS_ProfileId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAS_DeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAS_DeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZAS_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAS_DeviceVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZZAS_InputClusterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAS_InputClusterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAS_InputClusterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAS_InputClusterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZZAS_OutputClusterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZZAS_OutputClusterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZZAS_OutputClusterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZZAS_OutputClusterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZC_AreaNetworkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZC_AreaNetworkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZCAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZCAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZCAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZCAt_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZCAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZCAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZCAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZCAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZCAt_Coordinator(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_Coordinator, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DZCAt_Coordinator(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DZCAt_Coordinator, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DZCAt_ZDOReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_ZDOReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DZCAt_ZDOList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DZCAt_ZDOList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxDBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxDBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxQBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxQBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxVLANEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxVLANEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxProviderBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxProviderBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_ProviderBridgeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_ProviderBridgeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxFilterEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxFilterEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_BridgeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_BridgeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_FilterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_FilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Standard, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_VLANNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_VLANNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_VLANPortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_VLANPortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_ManagementPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_ManagementPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_ManagementPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_ManagementPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_DefaultUserPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_DefaultUserPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_PriorityRegeneration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_PriorityRegeneration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_PortState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_PortState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_PVID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_PVID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_TPID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_TPID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_IngressFiltering, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_IngressFiltering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPt_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPt_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPP_PCPSelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPP_PCPSelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPP_UseDEI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPP_UseDEI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPP_RequireDropEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPP_RequireDropEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPP_PCPEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPP_PCPEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPP_PCPDecoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBPP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBPP_PCPDecoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBPS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBPS_UnknownPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBPS_UnknownPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Enable_2226(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Enable_2226, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Enable_2226(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Enable_2226, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Alias_2228(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Alias_2228, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Alias_2228(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Alias_2228, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_VLAN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_VLAN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_VLAN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_VLAN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBVt_Untagged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBVt_Untagged, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBVt_Untagged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBVt_Untagged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBFt_Bridge(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Bridge, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Bridge(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Bridge, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DHCPType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DHCPType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_VLANIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_VLANIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_VLANIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_VLANIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_EthertypeFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_EthertypeFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_EthertypeFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_EthertypeFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_EthertypeFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_EthertypeFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_estMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_estMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_estMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_estMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBFt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBFt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Status, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_SVLANComponent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_SVLANComponent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_SVLANComponent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_SVLANComponent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_CVLANComponents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_CVLANComponents, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_CVLANComponents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_CVLANComponents, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DP_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DP_SupportedNCPs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_SupportedNCPs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_ConnectionStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_ConnectionStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LastConnectionError(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LastConnectionError, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_AutoDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_AutoDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_AutoDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_AutoDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_IdleDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IdleDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IdleDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IdleDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_WarnDisconnectDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_WarnDisconnectDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_WarnDisconnectDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_WarnDisconnectDelay, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Username, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Password, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_EncryptionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_EncryptionProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_EncryptionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_EncryptionProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_CompressionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_CompressionProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_CompressionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_CompressionProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_AuthenticationProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_AuthenticationProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_AuthenticationProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_AuthenticationProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_MaxMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_MaxMRUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_MaxMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_MaxMRUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_CurrentMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_CurrentMRUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_ConnectionTrigger(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_ConnectionTrigger, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_ConnectionTrigger(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_ConnectionTrigger, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_LCPEcho(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LCPEcho, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LCPEchoRetry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LCPEchoRetry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_IPCPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IPCPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IPCPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IPCPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_IPv6CPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IPv6CPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IPv6CPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IPv6CPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIP_SessionID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIP_SessionID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIP_ACName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIP_ACName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIP_ACName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIP_ACName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIP_ServiceName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIP_ServiceName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIP_ServiceName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIP_ServiceName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPII_LocalIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_LocalIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPII_RemoteIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_RemoteIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPII_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPII_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_PassthroughEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPII_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPII_PassthroughEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPII_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_PassthroughDHCPPool, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPII_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPII_PassthroughDHCPPool, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPII_LocalInterfaceIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_LocalInterfaceIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPII_RemoteInterfaceIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPII_RemoteInterfaceIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv4Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_IPv4Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_IPv4Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv6Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_IPv6Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_IPv6Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ULAPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ULAPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_ULAPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_ULAPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ActivePortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ActivePortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv4Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv6Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_ULAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ULAEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_ULAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_ULAEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Router(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Router, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Router(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Router, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_MaxMTUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_MaxMTUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_MaxMTUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_MaxMTUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Loopback(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Loopback, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Loopback(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Loopback, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IPv6AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IPv6PrefixNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6PrefixNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_AutoIPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AutoIPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AutoIPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AutoIPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_IPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_AddressingType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_AddressingType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Enable_2456(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Enable_2456, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Enable_2456(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Enable_2456, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Status_2458(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Status_2458, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_IPAddressStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_IPAddressStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Alias_2460(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Alias_2460, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_IPAddress_2461(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_IPAddress_2461, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_PreferredLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_PreferredLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_ValidLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_ValidLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Anycast(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Anycast, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Enable_2467(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Enable_2467, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Enable_2467(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Enable_2467, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Status_2469(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Status_2469, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_PrefixStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_PrefixStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_Alias_2471(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Alias_2471, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Alias_2471(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Alias_2471, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Prefix_2473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Prefix_2473, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Prefix_2473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Prefix_2473, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Origin_2475(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Origin_2475, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIIt_StaticType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_StaticType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_StaticType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_StaticType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_ParentPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_ParentPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_ParentPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_ParentPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_ChildPrefixBits(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_ChildPrefixBits, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_ChildPrefixBits(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_ChildPrefixBits, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_OnLink(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_OnLink, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_OnLink(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_OnLink, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_Autonomous(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_Autonomous, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_Autonomous(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_Autonomous, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_PreferredLifetime_2486(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_PreferredLifetime_2486, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_PreferredLifetime_2486(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_PreferredLifetime_2486, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIIt_ValidLifetime_2488(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIIt_ValidLifetime_2488, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIIt_ValidLifetime_2488(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIIt_ValidLifetime_2488, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_UnknownPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_UnknownPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_LocalIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_LocalIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_LocalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_LocalPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_RemoteIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_RemoteIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_RemotePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_RemotePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4PingSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4PingSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6PingSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6PingSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4TraceRouteSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4TraceRouteSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6TraceRouteSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6TraceRouteSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4DownloadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4DownloadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6DownloadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6DownloadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4UploadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4UploadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6UploadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6UploadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4UDPEchoDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4UDPEchoDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6UDPEchoDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6UDPEchoDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4ServerSelectionDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4ServerSelectionDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6ServerSelectionDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6ServerSelectionDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_IPAddressUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_SuccessCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_FailureCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_AverageResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MinimumResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MaximumResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_AverageResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_AverageResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_AverageResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_AverageResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MinimumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MinimumResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MinimumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MinimumResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MaximumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MaximumResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MaximumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MaximumResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_NumberOfTries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_NumberOfTries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_NumberOfTries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_NumberOfTries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_MaxHopCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_MaxHopCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_MaxHopCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_MaxHopCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_IPAddressUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_ResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_ResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_ResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_ResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDTRt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_HostAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_HostAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_ErrorCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_ErrorCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_RTTimes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_RTTimes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DownloadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DownloadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadTransports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadTransports, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DownloadDiagnosticMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadDiagnosticMaxConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DownloadDiagnosticMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DownloadDiagnosticMaxConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadDiagnosticsMaxIncrementalResult(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadDiagnosticsMaxIncrementalResult, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_NumberOfConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_NumberOfConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TestBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TestBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_PeriodOfFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_PeriodOfFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_PerConnectionResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_PerConnectionResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EnablePerConnectionResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_EnablePerConnectionResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_IncrementalResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_IncrementalResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_StartTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_StartTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_EndTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_EndTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UploadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_UploadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_UploadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UploadTransports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadTransports, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UploadDiagnosticsMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadDiagnosticsMaxConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UploadDiagnosticsMaxIncrementalResult(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadDiagnosticsMaxIncrementalResult, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TestFileLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestFileLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TestFileLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TestFileLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_NumberOfConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_NumberOfConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TestBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PeriodOfFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PeriodOfFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PerConnectionResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PerConnectionResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EnablePerConnectionResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EnablePerConnectionResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IncrementalResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IncrementalResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_StartTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_StartTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_EndTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_EndTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface_2692(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface_2692, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface_2692(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface_2692, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_SourceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_SourceIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UDPPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UDPPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_UDPPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_UDPPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EchoPlusEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EchoPlusEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EchoPlusEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EchoPlusEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EchoPlusSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EchoPlusSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PacketsResponded(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PacketsResponded, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BytesResponded(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BytesResponded, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TimeFirstPacketReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeFirstPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TimeLastPacketReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeLastPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DiagnosticsState_2707(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DiagnosticsState_2707, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DiagnosticsState_2707(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DiagnosticsState_2707, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface_2709(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface_2709, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface_2709(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface_2709, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_DSCP_2721(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DSCP_2721, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DSCP_2721(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DSCP_2721, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_InterTransmissionTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_InterTransmissionTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_InterTransmissionTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_InterTransmissionTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_ProtocolVersion_2725(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ProtocolVersion_2725, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_ProtocolVersion_2725(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_ProtocolVersion_2725, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IPAddressUsed_2727(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IPAddressUsed_2727, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EnableIndividualPacketResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EnableIndividualPacketResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EnableIndividualPacketResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EnableIndividualPacketResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IndividualPacketResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IndividualPacketResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UDPEchoDiagnosticsMaxResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UDPEchoDiagnosticsMaxResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_PacketSuccess(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_PacketSuccess, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_PacketSendTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_PacketSendTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_PacketReceiveTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_PacketReceiveTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_TestGenSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_TestGenSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_TestRespSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_TestRespSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_TestRespRcvTimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_TestRespRcvTimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_TestRespReplyTimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_TestRespReplyTimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDIt_TestRespReplyFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDIt_TestRespReplyFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DiagnosticsState_2745(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DiagnosticsState_2745, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DiagnosticsState_2745(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DiagnosticsState_2745, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface_2747(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface_2747, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface_2747(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface_2747, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_ProtocolVersion_2749(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ProtocolVersion_2749, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_ProtocolVersion_2749(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_ProtocolVersion_2749, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_HostList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_HostList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_HostList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_HostList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_NumberOfRepetitions_2755(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_NumberOfRepetitions_2755, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_NumberOfRepetitions_2755(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_NumberOfRepetitions_2755, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Timeout_2757(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Timeout_2757, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Timeout_2757(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Timeout_2757, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_FastestHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_FastestHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MinimumResponseTime_2760(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MinimumResponseTime_2760, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_AverageResponseTime_2761(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_AverageResponseTime_2761, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MaximumResponseTime_2762(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MaximumResponseTime_2762, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_IPAddressUsed_2763(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IPAddressUsed_2763, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_DeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDt_ChassisIDSubtype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDt_ChassisIDSubtype, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDt_ChassisID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDt_ChassisID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDt_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDt_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_PortIDSubtype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_PortIDSubtype, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_PortID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_PortID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_TTL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_TTL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_PortDescription(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_PortDescription, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_MACAddressList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_MACAddressList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPt_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPt_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPL_InterfaceType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPL_InterfaceType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDPL_MACForwardingTable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDPL_MACForwardingTable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDD_DeviceCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDD_DeviceCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDD_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDD_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDD_ModelName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDD_ModelName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDD_ModelNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDD_ModelNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDD_VendorSpecificNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDD_VendorSpecificNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDDVt_OrganizationCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDDVt_OrganizationCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDDVt_InformationType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDDVt_InformationType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDDVt_Information(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDDVt_Information, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_AHSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_AHSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SupportedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SupportedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ESPSupportedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ESPSupportedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SupportedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SupportedPseudoRandomFunctions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_SupportedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_SupportedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_SupportedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_SupportedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_MaxFilterEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_MaxFilterEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_MaxProfileEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_MaxProfileEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_FilterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_FilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ProfileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ProfileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_TunnelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_TunnelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SANumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SANumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_NegotiationFailures(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_NegotiationFailures, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_UnknownSPIErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_UnknownSPIErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_ProcessingChoice(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_ProcessingChoice, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_ProcessingChoice(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_ProcessingChoice, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Profile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Profile, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Profile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Profile, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_MaxChildSAs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_MaxChildSAs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_MaxChildSAs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_MaxChildSAs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_RemoteEndpoints, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_RemoteEndpoints, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AuthenticationMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AuthenticationMethod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AuthenticationMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AuthenticationMethod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ESPAllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ESPAllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ESPAllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ESPAllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedPseudoRandomFunctions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedPseudoRandomFunctions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_AHAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_AHAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_AHAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_AHAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ESPAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ESPAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ESPAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ESPAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2DeadPeerDetectionTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2DeadPeerDetectionTimeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2DeadPeerDetectionTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2DeadPeerDetectionTimeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2NATTKeepaliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2NATTKeepaliveTimeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2NATTKeepaliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2NATTKeepaliveTimeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_AntiReplayWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_AntiReplayWindowSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_AntiReplayWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_AntiReplayWindowSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_DoNotFragment(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_DoNotFragment, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_DoNotFragment(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_DoNotFragment, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_DSCPMarkPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_DSCPMarkPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SATrafficLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SATrafficLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SATimeLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SATimeLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SAExpiryAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SAExpiryAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSATrafficLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSATrafficLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSATimeLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSATimeLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSAExpiryAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSAExpiryAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_SentCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_SentCPAttrNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_SentCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_SentCPAttrNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DITt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DITt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DITt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DITt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITt_Filters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_Filters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Status_2924(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status_2924, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias_2925(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias_2925, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Tunnel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Tunnel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LocalAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LocalAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_RemoteAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_RemoteAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_EncryptionAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_EncryptionAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_EncryptionKeyLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_EncryptionKeyLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_PseudoRandomFunction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_PseudoRandomFunction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IntegrityAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IntegrityAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_DiffieHellmanGroupTransform(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_DiffieHellmanGroupTransform, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_CreationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_CreationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_NATDetected(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_NATDetected, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_ReceivedCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ReceivedCPAttrNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_ChildSANumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ChildSANumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_BytesSent_2938(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BytesSent_2938, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_BytesReceived_2939(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_BytesReceived_2939, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_PacketsSent_2940(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_PacketsSent_2940, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_PacketsReceived_2941(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_PacketsReceived_2941, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_ErrorsSent_2942(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_ErrorsSent_2942, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIRt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIRt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIRt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIRt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIICt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIICt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIICt_InboundSPI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICt_InboundSPI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICt_OutboundSPI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICt_OutboundSPI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICt_CreationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICt_CreationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIICS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIICS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_TunnelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_TunnelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_BFilterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_BFilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_RemoteEndpoints, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_RemoteEndpoints, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_KeepAlivePolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_KeepAlivePolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_KeepAlivePolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_KeepAlivePolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_KeepAliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_KeepAliveTimeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_KeepAliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_KeepAliveTimeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_KeepAliveThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_KeepAliveThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_KeepAliveThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_KeepAliveThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_DeliveryHeaderProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_DeliveryHeaderProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_DeliveryHeaderProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_DeliveryHeaderProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGTt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGTt_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGTt_ConnectedRemoteEndpoint(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_ConnectedRemoteEndpoint, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTt_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTt_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_KeepAliveSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_KeepAliveSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_KeepAliveReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_KeepAliveReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_ProtocolIdOverride(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_ProtocolIdOverride, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_UseChecksum(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_UseChecksum, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_KeyIdentifierGenerationPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_KeyIdentifierGenerationPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_KeyIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_KeyIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIt_UseSequenceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIt_UseSequenceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_DiscardChecksumReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_DiscardChecksumReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGTIS_DiscardSequenceNumberReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGTIS_DiscardSequenceNumberReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_VLANIDCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_VLANIDCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_VLANIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_VLANIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGFt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGFt_DSCPMarkPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGFt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGFt_DSCPMarkPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_DomainNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_DomainNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_TransportMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_TransportMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_TransportMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_TransportMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_WANInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_WANInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_WANInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_WANInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_IPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_IPv6Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_IPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_IPv6Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_BRIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_BRIPv6Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_BRIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_BRIPv6Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_DSCPMarkPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_DSCPMarkPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_PSIDOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_PSIDOffset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_PSIDOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_PSIDOffset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_PSIDLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_PSIDLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_PSIDLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_PSIDLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_PSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_PSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_PSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_PSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_IncludeSystemPorts(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_IncludeSystemPorts, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDt_IncludeSystemPorts(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDt_IncludeSystemPorts, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDt_RuleNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDt_RuleNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDRt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDRt_IPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_IPv6Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_IPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_IPv6Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDRt_IPv4Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_IPv4Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_IPv4Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_IPv4Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDRt_EABitsLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_EABitsLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_EABitsLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_EABitsLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDRt_IsFMR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDRt_IsFMR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDRt_IsFMR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDRt_IsFMR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMDIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMDIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMDIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMDIS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMDIS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DC_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_AllowedList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_AllowedList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_AllowedList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_AllowedList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DC_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_RouterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_RouterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRt_IPv4ForwardingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_IPv4ForwardingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_IPv6ForwardingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_IPv6ForwardingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_StaticRoute(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_StaticRoute, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_DestIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_DestIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_DestIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_DestIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_DestSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_DestSubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_DestSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_DestSubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_GatewayIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_GatewayIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_GatewayIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_GatewayIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_ForwardingMetric(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ForwardingMetric, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ForwardingMetric(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ForwardingMetric, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Enable_3128(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Enable_3128, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Enable_3128(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Enable_3128, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Status_3130(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Status_3130, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Alias_3131(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Alias_3131, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Alias_3131(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Alias_3131, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_DestIPPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_DestIPPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_DestIPPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_DestIPPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_ForwardingPolicy_3135(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ForwardingPolicy_3135, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ForwardingPolicy_3135(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ForwardingPolicy_3135, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_NextHop(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_NextHop, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_NextHop(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_NextHop, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Interface_3139(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Interface_3139, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Interface_3139(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Interface_3139, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Origin_3141(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Origin_3141, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_ForwardingMetric_3142(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ForwardingMetric_3142, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ForwardingMetric_3142(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ForwardingMetric_3142, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_ExpirationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ExpirationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_SupportedModes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_SupportedModes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRR_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_AcceptRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_AcceptRA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_AcceptRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_AcceptRA, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_SendRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_SendRA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_SendRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_SendRA, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_Enable_3160(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_Enable_3160, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRR_Enable_3160(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRR_Enable_3160, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_InterfaceSettingNumberOfEntries_3162(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_InterfaceSettingNumberOfEntries_3162, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Status_3163(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Status_3163, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Interface_3164(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Interface_3164, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_SourceRouter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_SourceRouter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_PreferredRouteFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_PreferredRouteFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_RouteLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_RouteLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DN_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DN_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DN_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DN_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RetransTimer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RetransTimer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RtrSolicitationInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RtrSolicitationInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RtrSolicitationInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RtrSolicitationInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_MaxRtrSolicitations(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_MaxRtrSolicitations, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_MaxRtrSolicitations(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_MaxRtrSolicitations, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_NUDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_NUDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_NUDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_NUDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RSEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RSEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RSEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RSEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Enable_3192(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Enable_3192, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Enable_3192(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Enable_3192, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Status_3194(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Status_3194, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Alias_3195(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Alias_3195, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Alias_3195(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Alias_3195, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Interface_3197(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Interface_3197, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Interface_3197(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Interface_3197, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_ManualPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ManualPrefixes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ManualPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ManualPrefixes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Prefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Prefixes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Prefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Prefixes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_MaxRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_MaxRtrAdvInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_MaxRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_MaxRtrAdvInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_MinRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_MinRtrAdvInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_MinRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_MinRtrAdvInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvDefaultLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvDefaultLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvDefaultLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvDefaultLifetime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvManagedFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvManagedFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvManagedFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvManagedFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvOtherConfigFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvOtherConfigFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvOtherConfigFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvOtherConfigFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvMobileAgentFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvMobileAgentFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvMobileAgentFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvMobileAgentFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvPreferredRouterFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvPreferredRouterFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvPreferredRouterFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvPreferredRouterFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvNDProxyFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvNDProxyFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvNDProxyFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvNDProxyFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvLinkMTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvLinkMTU, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvLinkMTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvLinkMTU, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvReachableTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvReachableTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvReachableTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvReachableTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvRetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvRetransTimer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvRetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvRetransTimer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvCurHopLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvCurHopLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvCurHopLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvCurHopLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_OptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_OptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIOt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIOt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIOt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIOt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIOt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIOt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIOt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIOt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_Enable_3236(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Enable_3236, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_Enable_3236(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_Enable_3236, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Enable_3239(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Enable_3239, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Enable_3239(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Enable_3239, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Status_3241(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status_3241, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias_3242(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias_3242, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Alias_3242(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Alias_3242, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_BorderRelayIPv4Addresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_BorderRelayIPv4Addresses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_BorderRelayIPv4Addresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_BorderRelayIPv4Addresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_AllTrafficToBorderRelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AllTrafficToBorderRelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AllTrafficToBorderRelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AllTrafficToBorderRelay, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_SPIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_SPIPv6Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_SPIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_SPIPv6Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4MaskLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4MaskLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv4MaskLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv4MaskLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_AddressSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AddressSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AddressSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AddressSource, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DD_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAssignmentPrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAssignmentPrecedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAssignmentPrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAssignmentPrecedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddressTypePrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddressTypePrecedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAddressTypePrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAddressTypePrecedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddressInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddressInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_EndpointName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQ_MaxClassificationEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxClassificationEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxClassificationEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxClassificationEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_ClassificationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_ClassificationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_ClassificationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_ClassificationNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxAppEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxAppEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxAppEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxAppEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_AppNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_AppNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_AppNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_AppNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxFlowEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxFlowEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxFlowEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxFlowEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_FlowNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_FlowNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_FlowNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_FlowNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxPolicerEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxPolicerEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxPolicerEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxPolicerEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_PolicerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_PolicerNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_PolicerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_PolicerNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxQueueEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxQueueEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxQueueEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxQueueEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_QueueNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_QueueNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_QueueNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_QueueNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_QueueStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_QueueStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_QueueStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_QueueStatsNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxShaperEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxShaperEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxShaperEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxShaperEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_ShaperNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_ShaperNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_ShaperNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_ShaperNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultQueue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_AvailableAppList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_AvailableAppList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_AvailableAppList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_AvailableAppList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQCt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DHCPType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DHCPType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Ethertype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Ethertype, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Ethertype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Ethertype, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthertypeExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthertypeExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthertypeExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthertypeExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SSAP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSAP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_LLCControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_LLCControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_LLCControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_LLCControl, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_LLCControlExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_LLCControlExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_LLCControlExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_LLCControlExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SNAPOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SNAPOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SNAPOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SNAPOUI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SNAPOUIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SNAPOUIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceUserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestUserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TCPACK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TCPACK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TCPACK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TCPACK, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TCPACKExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TCPACKExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TCPACKExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TCPACKExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetDEICheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetDEICheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetDEICheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetDEICheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetDEIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetDEIExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetDEIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetDEIExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_VLANIDCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_VLANIDCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_VLANIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_VLANIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_OutOfBandInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_OutOfBandInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_OutOfBandInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_OutOfBandInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Policer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Policer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_App, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_App, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_ProtocolIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_ProtocolIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_TypeParameters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_TypeParameters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_TypeParameters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_TypeParameters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_App, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_App, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_TrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_TrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Policer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Policer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_DSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_DSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_CommittedRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_CommittedRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_CommittedRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_CommittedRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_CommittedBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_CommittedBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_CommittedBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_CommittedBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_ExcessBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ExcessBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_ExcessBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_ExcessBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PeakRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PeakRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PeakRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PeakRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PeakBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PeakBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PeakBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PeakBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_MeterType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_MeterType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_MeterType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_MeterType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PossibleMeterTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PossibleMeterTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PossibleMeterTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PossibleMeterTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_ConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_ConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_ConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PartialConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartialConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PartialConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PartialConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_NonConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_NonConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_TotalCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_TotalCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_TotalCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_TotalCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_ConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_ConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_PartiallyConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartiallyConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_PartiallyConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartiallyConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_TrafficClasses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_TrafficClasses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_HardwareAssisted(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_HardwareAssisted, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_BufferLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_BufferLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Weight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Weight, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Weight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Weight, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Precedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Precedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Precedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Precedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_REDThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_REDThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_REDThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_REDThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_REDPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_REDPercentage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_REDPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_REDPercentage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_DropAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DropAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_DropAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_DropAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_SchedulerAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_SchedulerAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Enable_3593(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Enable_3593, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Enable_3593(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Enable_3593, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Status_3595(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Status_3595, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Alias_3596(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Alias_3596, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Alias_3596(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Alias_3596, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Queue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Queue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Interface_3600(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Interface_3600, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Interface_3600(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Interface_3600, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_OutputPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_OutputPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_OutputBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_OutputBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_DroppedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DroppedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_DroppedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DroppedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_QueueOccupancyPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_QueueOccupancyPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_QueueOccupancyPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_QueueOccupancyPercentage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;