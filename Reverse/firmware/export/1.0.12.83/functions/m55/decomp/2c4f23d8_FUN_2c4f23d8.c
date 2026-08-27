/* FUN_2c4f23d8 @ 0x2c4f23d8 */

void FUN_2c4f23d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint auStack_20 [5];
  
  auStack_20[3] = *DAT_2c4f243c;
  lVar5 = FUN_2c4f221c(param_1,param_2,DAT_2c4f2440,DAT_2c4f2444,0,auStack_20,0xc);
  uVar2 = (uint)((ulonglong)lVar5 >> 0x20);
  iVar1 = (int)lVar5;
  if (iVar1 < 0) {
    if (iVar1 != -2) goto LAB_2c4f2404;
  }
  else if (iVar1 != -2) {
    puVar3 = (uint *)(param_3 + -4);
    puVar4 = auStack_20;
    do {
      puVar3 = puVar3 + 1;
      uVar2 = *puVar3 ^ *puVar4;
      *puVar3 = uVar2;
      puVar4 = puVar4 + 1;
    } while (puVar3 != (uint *)(param_3 + 8));
  }
  lVar5 = (ulonglong)uVar2 << 0x20;
LAB_2c4f2404:
  if ((*DAT_2c4f243c ^ auStack_20[3]) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*DAT_2c4f243c ^ auStack_20[3],0);
}

