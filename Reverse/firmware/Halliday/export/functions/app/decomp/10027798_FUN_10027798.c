/* FUN_10027798 @ 0x10027798 */

void FUN_10027798(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_10027864;
  if (param_2 != 0) goto LAB_100277da;
  FUN_100a5b78(((int)PTR_DAT_10027868 - (int)PTR_DAT_1002786c) * 0x20 & 0xff00U | 0x520011,
               PTR_s_Records_fileGetdata_10027874,PTR_s_Records_fileGetdata_data_is_NULL_10027870);
LAB_100277c8:
  do {
    uVar1 = 0xffffffff;
    while( true ) {
      if (*(int *)PTR_DAT_10027864 == local_1c) {
        return;
      }
      FUN_1013cdc0(uVar1);
LAB_100277da:
      uVar1 = 0;
      local_28 = 0;
      uStack_24 = 0;
      local_20 = 0;
      iVar2 = FUN_1006ba84(&local_28,PTR_s__NAND__SYSTEM_CALL_records_lib_10027878,3);
      if (iVar2 < 0) {
        FUN_100a5b78(((int)PTR_DAT_10027868 - (int)PTR_DAT_1002786c) * 0x20 & 0xff00U | 0x610012,
                     PTR_s_Records_fileGetdata_10027874,PTR_s_fs_open__s_error_ret__d_1002787c,
                     PTR_s__NAND__SYSTEM_CALL_records_lib_10027878,iVar2);
        goto LAB_100277c8;
      }
      param_1 = param_1 * 0x5a;
      FUN_1006bd24(&local_28,param_1 + 0x40,0);
      iVar2 = FUN_1006bc84(&local_28,param_2,0x5a);
      if (iVar2 != 0x5a) break;
      FUN_1006bc30(&local_28);
    }
    FUN_100a5b78(((int)PTR_DAT_10027868 - (int)PTR_DAT_1002786c) * 0x20 & 0xff00U | 0x680011,
                 PTR_s_Records_fileGetdata_10027874,DAT_10027880,iVar2);
    FUN_1006bc30(&local_28);
  } while( true );
}

