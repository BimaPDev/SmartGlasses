/* FUN_10064218 @ 0x10064218 */

void FUN_10064218(undefined4 param_1,undefined3 param_2)

{
  int iVar1;
  
  iVar1 = *DAT_10064244;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064250,0xbf,DAT_1006424c,DAT_10064248);
  }
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))
            (iVar1,param_1,0x16,&stack0xffffffef,param_1,CONCAT13((char)param_2,param_2));
  return;
}

