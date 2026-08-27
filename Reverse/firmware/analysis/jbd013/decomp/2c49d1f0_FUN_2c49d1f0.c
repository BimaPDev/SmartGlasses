/* FUN_2c49d1f0 @ 0x2c49d1f0 */

void FUN_2c49d1f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte local_d;
  uint local_c;
  
  iVar1 = DAT_2c49d244;
  local_c = *DAT_2c49d240;
  if (*(int *)(DAT_2c49d244 + 0x48) == 1) {
    uVar4 = FUN_2c49c6a0(DAT_2c49d244,0,&local_d);
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 < 0) {
      uVar3 = *(uint *)(iVar1 + 0x10);
    }
    else {
      uVar3 = (uint)local_d;
      *(uint *)(iVar1 + 0x10) = uVar3;
    }
    if (uVar3 == 0xa0) {
      uVar2 = 0xa0;
      goto LAB_2c49d208;
    }
  }
  uVar2 = 0;
LAB_2c49d208:
  if ((*DAT_2c49d240 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,param_2,*DAT_2c49d240 ^ local_c,0);
}

