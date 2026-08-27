/* FUN_2c5cdde8 @ 0x2c5cdde8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cdde8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_24 [16];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5cdecc;
  uVar5 = FUN_2c6697dc(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  uVar3 = *(uint *)(param_1 + 0x78);
  iStack_30 = uVar3 + (uint)uVar5;
  iStack_2c = (int)((ulonglong)uVar5 >> 0x20) +
              ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar3,(uint)uVar5);
  uVar1 = FUN_2c668f08(&iStack_30);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_2c62c3b0(auStack_24,0x10);
  FUN_2c66b450(auStack_24,0xf,_LAB_2c5cded0,*(undefined4 *)(*(int *)(param_1 + 8) + 8),
               *(undefined4 *)(*(int *)(param_1 + 8) + 4));
  uVar1 = FUN_2c66c4ec(auStack_24);
  FUN_2c5cdc20(param_1 + 0x10,0,*(undefined4 *)(param_1 + 0x14),auStack_24,uVar1);
  FUN_2c620fa4(0x3e9,*(undefined4 *)(param_1 + 0x10));
  uVar1 = func_0x2c5cd944(param_1);
  FUN_2c620fa4(0x401,uVar1);
  uVar1 = func_0x2c5cddb4(param_1);
  FUN_2c620fa4(0x402,uVar1);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
LAB_2c5cde9c:
    if (*_LAB_2c5cdecc != iStack_14) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  if ((**(int **)(param_1 + 8) == 0) || (iVar4 = 0x3c - **(int **)(param_1 + 8), iVar4 < 0)) {
    FUN_2c62be58(iVar2,60000);
  }
  else {
    FUN_2c62be58(iVar2,iVar4 * 1000);
    if (iVar4 < 6) goto LAB_2c5cde9c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cdedc,0x7c,_LAB_2c5cded4,_LAB_2c5cded8);
}

