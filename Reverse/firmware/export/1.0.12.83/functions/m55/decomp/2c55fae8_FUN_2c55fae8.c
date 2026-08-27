/* FUN_2c55fae8 @ 0x2c55fae8 */

void FUN_2c55fae8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_2c55fbf8;
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x5c))();
  if (iVar1 < 1) {
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
  }
  else {
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x5c))();
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x5c))(*(undefined4 **)(param_1 + 0x5c));
    sVar4 = (short)(iVar1 / iVar5);
    if (iVar2 != (iVar2 / *(int *)(param_1 + 0x1c)) * *(int *)(param_1 + 0x1c)) {
      sVar4 = sVar4 + 1;
    }
    *(short *)(param_1 + 0x18) = sVar4;
    if (*(short *)(param_1 + 0x56) < 1) {
      *(undefined2 *)(param_1 + 0x56) = 1;
      iVar1 = *(int *)(param_1 + 0x10);
      goto joined_r0x2c55fb7e;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x2c55fb7e:
  if (iVar1 == 0) {
    uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    if (iVar1 != 0) {
      FUN_2c58d410(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
    }
    FUN_2c607048(uVar3,0x27d1);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
    FUN_2c6072b4(*(undefined4 *)(param_1 + 0x10),3);
    FUN_2c606d60(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
    FUN_2c606e2c(*(undefined4 *)(param_1 + 0x10),0xff,0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_2c5e2e80(DAT_2c55fc00);
    FUN_2c606e38(uVar6,uVar3,0);
  }
  local_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  FUN_2c66b4b8(&local_2c,DAT_2c55fbfc,(int)*(short *)(param_1 + 0x56),
               (int)*(short *)(param_1 + 0x18));
  FUN_2c638730(*(undefined4 *)(param_1 + 0x10),&local_2c);
  if (*DAT_2c55fbf8 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

