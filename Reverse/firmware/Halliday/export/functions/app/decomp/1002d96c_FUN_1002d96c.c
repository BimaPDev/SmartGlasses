/* FUN_1002d96c @ 0x1002d96c */

void FUN_1002d96c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_1002d998;
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_REMIND_remind_lib_1002d99c,param_2,param_3,0,param_1,iVar1,
               param_3);
  if (*(int *)PTR_DAT_1002d998 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_REMIND_1002d9a0);
  return;
}

