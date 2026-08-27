/* FUN_2c492250 @ 0x2c492250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c492250(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  puStack_34 = _LAB_2c492320;
  puStack_38 = _DAT_2c492314;
  iVar4 = 0;
  iStack_1c = *_LAB_2c49230c;
  iStack_24 = 0;
  uVar2 = (ulonglong)_LAB_2c492310;
  uStack_30 = 0;
  uStack_2c = 0;
  if (0xb < param_3) {
    puVar3 = _DAT_2c492314;
    puVar5 = _LAB_2c492320;
    do {
      *puVar5 = *(undefined4 *)(param_2 + iVar4 * 4);
      puVar3[1] = *(undefined4 *)(param_2 + 4 + iVar4 * 4);
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 3;
      puVar3 = puVar3 + 2;
      *puVar3 = *(undefined4 *)(param_2 + 8 + iVar1);
      puVar5 = puVar5 + 1;
    } while (iVar4 != (uint)(uVar2 * param_3 >> 0x23) * 3);
  }
  iStack_28 = _LAB_2c49231c;
  *puStack_38 = *_LAB_2c492318;
  uStack_20 = 0xf0;
  func_0x2c4fb048(param_1,&puStack_38);
  if (0 < iStack_24) {
    if (param_1 == 2) {
      func_0x2c491c90(iStack_28 + 4,iStack_24 + -4);
    }
    else if (param_1 == 3) {
      func_0x2c491cbc();
    }
    else {
      FUN_2c491ce8();
    }
  }
  if (*_LAB_2c49230c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

