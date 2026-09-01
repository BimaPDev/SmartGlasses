/* FUN_10067ae0 @ 0x10067ae0 */

undefined4 FUN_10067ae0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *DAT_10067af4;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10067aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x14))(iVar1,param_1);
    return uVar2;
  }
  return 0xffffffed;
}

