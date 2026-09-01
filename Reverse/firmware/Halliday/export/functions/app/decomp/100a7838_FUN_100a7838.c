/* FUN_100a7838 @ 0x100a7838 */

undefined4 FUN_100a7838(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    sVar1 = (short)param_2;
    iVar3 = *(int *)(DAT_100a7894 + 0x30);
    *(short *)(param_1 + 0x10) = sVar1;
    local_18 = CONCAT22(sVar1,sVar1);
    local_14 = CONCAT22(sVar1,sVar1);
    iVar3 = (**(code **)(iVar3 + 0x10))();
    if (iVar3 != 0) {
      local_18 = CONCAT22(sVar1 + -0x78,(undefined2)local_18);
    }
    FUN_100641e0(*(undefined4 *)(param_1 + 0x1c),&local_18);
    FUN_100a5b78(DAT_100a78a0 | (DAT_100a7898 - DAT_100a789c) * 0x20 & 0xff00U,DAT_100a78a8,
                 DAT_100a78a4,param_2);
    uVar2 = 0;
  }
  return uVar2;
}

