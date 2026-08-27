/* FUN_2c5afdbc @ 0x2c5afdbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5afdbc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar1 = *(byte *)(param_1 + 0x3e);
  if (bVar1 != 0) {
    uStack_18 = _LAB_2c5afe14;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5afe1c,0x157,_LAB_2c5afe18);
  }
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
  FUN_2c602340(uVar3,1,0);
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
  FUN_2c602340(uVar3,8,0);
  iVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
  piVar2 = DAT_2c60239c;
  uStack_14 = *DAT_2c602398;
  if (iVar4 == 0) {
    uVar5 = 0x700000001;
  }
  else {
    iStack_20 = *DAT_2c60239c;
    uStack_18 = uStack_18 & 0xfffffff0;
    uStack_2c = 7;
    uStack_28 = 0;
    uStack_1c = 0;
    *DAT_2c60239c = (int)&iStack_34;
    iStack_34 = iVar4;
    iStack_30 = iVar4;
    uStack_24 = (uint)bVar1;
    uVar5 = FUN_2c602140();
    *piVar2 = iStack_20;
  }
  if ((*DAT_2c602398 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),*DAT_2c602398 ^ uStack_14,0);
}

