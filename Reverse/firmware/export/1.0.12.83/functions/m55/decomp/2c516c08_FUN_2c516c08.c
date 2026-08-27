/* FUN_2c516c08 @ 0x2c516c08 */

void FUN_2c516c08(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20;
  int iStack_1c;
  int local_14;
  
  local_14 = *DAT_2c516cec;
  FUN_2c516308(param_1 + 0x14,param_2,param_3,0);
  FUN_2c516308(param_1 + 0x1c);
  FUN_2c5166bc(param_1 + 0xec);
  FUN_2c5166bc(param_1 + 0x8c);
  FUN_2c5166bc(param_1 + 0x14c);
  FUN_2c5178ec(param_1 + 0x1ac);
  FUN_2c516308(param_1 + 0x24);
  FUN_2c517580(param_1 + 0x1c4);
  iVar1 = FUN_2c5e31b4(0x3f,&local_20);
  if (iVar1 != 0) {
    if (local_20 == 1 && iStack_1c == 0) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar2 = FUN_2c5e2e80(DAT_2c516cf0);
      FUN_2c606e38(uVar3,uVar2,0);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = FUN_2c5e2e80(DAT_2c516cf0);
      FUN_2c606e38(uVar3,uVar2,0);
      uVar2 = DAT_2c516cf4;
    }
    else {
      if (local_20 != 2 || iStack_1c != 0) goto LAB_2c516c70;
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar2 = FUN_2c5e2e80(DAT_2c516cf8);
      FUN_2c606e38(uVar3,uVar2,0);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = FUN_2c5e2e80(DAT_2c516cf8);
      FUN_2c606e38(uVar3,uVar2,0);
      uVar2 = DAT_2c516cf0;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = FUN_2c5e2e80(uVar2);
    FUN_2c606e38(uVar3,uVar2,0);
    FUN_2c510790(*(undefined4 *)(param_1 + 4));
  }
LAB_2c516c70:
  if (*DAT_2c516cec == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

