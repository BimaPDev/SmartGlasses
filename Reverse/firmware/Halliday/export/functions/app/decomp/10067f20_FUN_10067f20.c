/* FUN_10067f20 @ 0x10067f20 */

void FUN_10067f20(void)

{
  int iVar1;
  
  iVar1 = *DAT_10067f30;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10067f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1,0);
    return;
  }
  return;
}

