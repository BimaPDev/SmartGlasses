/* FUN_2c501b88 @ 0x2c501b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c501b88(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar6 = *param_2 + 1;
  *param_2 = uVar6;
  iVar3 = _LAB_2c501bf4;
  uVar4 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x25);
  if (0xe0f < uVar6) {
    FUN_2c638814(*(undefined4 *)(iVar2 + 0xc),_LAB_2c501bf0,
                 (uint)((ulonglong)_LAB_2c501bec * (ulonglong)uVar6 >> 0x2b),
                 uVar4 + (uint)((ulonglong)param_3 * (ulonglong)uVar4 >> 0x25) * -0x3c,
                 uVar6 + uVar4 * -0x3c);
    return;
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  iVar5 = *DAT_2c638888;
  FUN_2c607df0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar2 + 0x24);
  }
  else {
    if ((*(int *)(iVar2 + 0x24) != 0) && (bVar1 = *(byte *)(iVar2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar2 + 0x24) = bVar1 & 8;
    }
    iVar3 = FUN_2c62bb3c(iVar3);
    *(int *)(iVar2 + 0x24) = iVar3;
    *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf7;
  }
  if (iVar3 != 0) {
    FUN_2c637b3c(iVar2);
  }
  if (*DAT_2c638888 == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

