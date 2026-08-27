/* FUN_2c55f4b8 @ 0x2c55f4b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55f4b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_14 = *_LAB_2c55f5f0;
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
  if (iVar1 < 1) {
    iStack_10 = *(int *)(param_1 + 0xc);
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    if (iStack_10 == 0) goto LAB_2c55f5b0;
    *(undefined4 *)(param_1 + 0xc) = 0;
LAB_2c55f594:
    if (*_LAB_2c55f5f0 == iStack_14) {
      uStack_18 = DAT_2c58d444;
      iStack_14 = DAT_2c58d448;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c58d44c,10);
    }
    goto LAB_2c55f5ec;
  }
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
  iVar6 = *(int *)(param_1 + 0x18);
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x28))(*(undefined4 **)(param_1 + 0x28));
  sVar5 = (short)(iVar1 / iVar6);
  if (iVar2 != (iVar2 / *(int *)(param_1 + 0x18)) * *(int *)(param_1 + 0x18)) {
    sVar5 = sVar5 + 1;
  }
  *(short *)(param_1 + 0x14) = sVar5;
  if (*(short *)(param_1 + 0x1e) < 1) {
    *(undefined2 *)(param_1 + 0x1e) = 1;
    if (*(int *)(param_1 + 0xc) != 0) goto LAB_2c55f510;
LAB_2c55f5b0:
    uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (iVar1 != 0) {
      FUN_2c58d410(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    FUN_2c607048(uVar3,0x2064,0x14);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0xc),2,0);
    FUN_2c6072b4(*(undefined4 *)(param_1 + 0xc),9);
    if (0 < *(short *)(param_1 + 0x14)) goto LAB_2c55f514;
LAB_2c55f570:
    iStack_10 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iStack_10 != 0) goto LAB_2c55f594;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_2c55f5b0;
LAB_2c55f510:
    if (sVar5 < 1) goto LAB_2c55f570;
LAB_2c55f514:
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_2c66b4b8(&uStack_2c,_LAB_2c55f5f4,(int)*(short *)(param_1 + 0x1e));
    FUN_2c638730(*(undefined4 *)(param_1 + 0xc),&uStack_2c);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0xc),0xff00ff00,0);
    FUN_2c606e2c(*(undefined4 *)(param_1 + 0xc),0xff,0);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = FUN_2c5e2e80(_LAB_2c55f5f8);
    FUN_2c606e38(uVar4,uVar3,0);
  }
  if (*_LAB_2c55f5f0 == iStack_14) {
    return;
  }
LAB_2c55f5ec:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

