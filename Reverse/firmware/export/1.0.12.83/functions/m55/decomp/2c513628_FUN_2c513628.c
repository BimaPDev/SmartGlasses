/* FUN_2c513628 @ 0x2c513628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c513628(int param_1)

{
  int iVar1;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5136a0;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_2c674268(auStack_58,0,0x44,0);
  uStack_44 = _LAB_2c5136a8;
  uStack_40 = _LAB_2c5136a4;
  uStack_54 = FUN_2c5e2e8c(_LAB_2c5136ac);
  uStack_30 = 1;
  iVar1 = FUN_2c5115bc(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
  if (iVar1 == 1) {
    uStack_38 = _LAB_2c5136bc;
    uStack_3c = 0x1068;
  }
  else {
    uStack_3c = 0x1002;
    uStack_38 = _LAB_2c5136b0;
  }
  uStack_2c = _LAB_2c5136b4;
  uStack_34 = _LAB_2c5136b8;
  FUN_2c5e8f4c(auStack_58);
  if (*_LAB_2c5136a0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

