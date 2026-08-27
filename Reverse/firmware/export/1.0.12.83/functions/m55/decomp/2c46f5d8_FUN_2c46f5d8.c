/* FUN_2c46f5d8 @ 0x2c46f5d8 */

void FUN_2c46f5d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_2c47245c(0,9,param_3,param_4,param_4);
  *(uint *)(iVar3 + -4) = *(uint *)(iVar3 + -4) | 1;
  puVar2 = DAT_2c4726d4;
  piVar1 = DAT_2c4726d0;
  if (iVar3 == 0) {
    return;
  }
  if (*DAT_2c4726d0 != 0) {
    FUN_2c644044(*DAT_2c4726d4,0xffffffff);
    FUN_2c47231c(*piVar1,DAT_2c4726d8,0,iVar3);
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
}

