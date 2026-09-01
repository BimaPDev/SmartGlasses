/* FUN_100641e0 @ 0x100641e0 */

undefined4 FUN_100641e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *DAT_10064208;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064214,0xa3,DAT_10064210,DAT_1006420c);
  }
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar1,param_1,1,param_2,param_4);
  return 0;
}

