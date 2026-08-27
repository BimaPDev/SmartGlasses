/* FUN_2c5bb2c8 @ 0x2c5bb2c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bb2c8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [16];
  undefined1 *apuStack_30 [2];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5bb3e8;
  if (param_2[9] != 0) {
    FUN_2c557290(apuStack_48,param_2[9],param_3,0);
    FUN_2c52f5f4(param_1 + 0xe,apuStack_48);
    FUN_2c52f5f4(param_1 + 0x14,apuStack_30);
    param_1[0x1a] = uStack_18;
    if (apuStack_30[0] != auStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (apuStack_48[0] != auStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  param_1[0x22] = param_2[1];
  iVar2 = param_2[7];
  param_1[0x20] = iVar2;
  uVar1 = FUN_2c66c4ec(iVar2);
  FUN_2c5bb134(param_1 + 6,0,param_1[7],iVar2,uVar1);
  param_1[0x21] = param_2[8];
  iVar2 = param_2[2];
  param_1[0x23] = iVar2;
  uVar1 = FUN_2c66c4ec(iVar2);
  FUN_2c5bb134(param_1,0,param_1[1],iVar2,uVar1);
  iVar2 = param_2[4];
  iVar3 = param_2[5];
  param_1[0x2e] = 0;
  param_1[0x26] = iVar2;
  param_1[0x27] = iVar3;
  param_1[0xc] = iVar2;
  param_1[0xd] = iVar3;
  uVar1 = registry_lookup(0x6105);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x25] = uVar1;
  uVar1 = func_0x2c5bb98c(param_2[2]);
  param_1[0x1f] = uVar1;
  iVar2 = *param_2;
  param_1[0x29] = _LAB_2c5bb3ec;
  *(bool *)((int)param_1 + 0xa1) = iVar2 == 1;
  FUN_2c5e8f34(param_1 + 0x1c);
  uVar4 = FUN_2c5bafa0(*param_1,param_1[1],_LAB_2c5bb3f0);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    FUN_2c531704(0,uVar1,10,0,0,0);
  }
  else {
    FUN_2c531704(0,uVar1,0xb,0,0,0);
  }
  if (*_LAB_2c5bb3e8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

