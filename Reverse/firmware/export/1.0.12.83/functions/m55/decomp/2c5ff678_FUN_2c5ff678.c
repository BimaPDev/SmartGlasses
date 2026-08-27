/* FUN_2c5ff678 @ 0x2c5ff678 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ff678(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uStack_18;
  uint uStack_14;
  
  uStack_14 = *_LAB_2c5ff714;
  uVar6 = FUN_2c606b94(param_1,1,param_3,0);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    uStack_18 = *param_2;
    FUN_2c607654(param_1,&uStack_18,0,1);
    iVar1 = func_0x2c607f18(param_1,&uStack_18);
    iVar2 = FUN_2c62a750(param_1 + 0x14,&uStack_18,0);
    if (iVar2 == 0) {
      uVar6 = FUN_2c606b94(param_1,0x80000);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        uVar6 = FUN_2c6041fc(param_1);
        goto joined_r0x2c5ff708;
      }
    }
    else {
      uVar6 = FUN_2c6041fc(param_1);
joined_r0x2c5ff708:
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      iVar2 = (int)uVar6 + -1;
      if (-1 < iVar2) {
        do {
          uVar6 = FUN_2c5ff678(*(undefined4 *)(**(int **)(param_1 + 8) + iVar2 * 4),&uStack_18);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          iVar3 = (int)uVar6;
          if ((int)uVar6 != 0) goto LAB_2c5ff6e0;
          bVar5 = iVar2 != 0;
          iVar2 = iVar2 + -1;
        } while (bVar5);
      }
    }
    iVar3 = param_1;
    if (iVar1 != 0) goto LAB_2c5ff6e0;
  }
  iVar3 = 0;
LAB_2c5ff6e0:
  if ((*_LAB_2c5ff714 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar3,uVar4,*_LAB_2c5ff714 ^ uStack_14,0);
}

