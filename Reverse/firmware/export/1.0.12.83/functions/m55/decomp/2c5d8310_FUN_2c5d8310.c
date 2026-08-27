/* FUN_2c5d8310 @ 0x2c5d8310 */

void FUN_2c5d8310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_2c602400();
  iVar2 = FUN_2c621084(param_1);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    return;
  }
  puVar3 = (undefined4 *)FUN_2c62107c();
  iVar4 = func_0x2c5d5dd8(*puVar3);
  if (*(int *)(iVar1 + 0x24) != iVar4) {
    if (*(int *)(iVar1 + 0x2c) <= iVar4) {
      iVar4 = *(int *)(iVar1 + 0x2c);
    }
    iVar5 = *(int *)(iVar1 + 0x28);
    if (*(int *)(iVar1 + 0x28) < *(int *)(iVar1 + 0x30)) {
      iVar5 = *(int *)(iVar1 + 0x30);
    }
    if (iVar4 < iVar5) {
      iVar4 = iVar5;
    }
    if (*(int *)(iVar1 + 0x24) != iVar4) {
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0x24) = iVar4;
        FUN_2c607df0();
        return;
      }
      iStack_14 = *DAT_2c6392a4;
      if (*(int *)(iVar1 + 0x48) == -1) {
        iVar2 = *(int *)(iVar1 + 0x24);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x44);
      }
      *(int *)(iVar1 + 0x40) = iVar2;
      *(int *)(iVar1 + 0x44) = iVar4;
      *(int *)(iVar1 + 0x24) = iVar4;
      FUN_2c62e838(iVar1 + 0x3c,0);
      FUN_2c62e7b4(&iStack_58);
      uStack_54 = DAT_2c6392a8;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0x100;
      uStack_4c = DAT_2c6392ac;
      iStack_58 = iVar1 + 0x3c;
      uStack_2c = FUN_2c6033b4(iVar1,0,100);
      if (*(int *)(iVar1 + 0x4c) != 0) {
        iStack_3c = *(int *)(iVar1 + 0x4c);
      }
      FUN_2c62e8ec(&iStack_58);
      if (*DAT_2c6392a4 != iStack_14) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
  }
  return;
}

