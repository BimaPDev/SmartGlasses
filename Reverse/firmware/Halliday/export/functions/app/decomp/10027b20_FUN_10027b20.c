/* FUN_10027b20 @ 0x10027b20 */

void FUN_10027b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10027b4c;
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_CALL_records_lib_10027b50,param_2,param_3,0,param_1,iVar1,param_3
              );
  if (*(int *)PTR_DAT_10027b4c != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_CALL_10027b54);
  return;
}

