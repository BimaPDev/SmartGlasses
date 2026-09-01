/* FUN_100c1c20 @ 0x100c1c20 */

void FUN_100c1c20(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int *piVar1;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar2 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100c1c88,DAT_100c1c84,DAT_100c1c80,0x20f,0,param_2);
    uVar3 = FUN_1011a1f0(DAT_100c1c80,0x20f,param_3,param_4);
    param_3 = extraout_r2;
    uVar2 = extraout_r3;
  }
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_10119dc2(DAT_100c1c88,DAT_100c1c8c,DAT_100c1c80,0x210,uVar3);
    FUN_1011a1f0(DAT_100c1c80,0x210,param_3,uVar2);
  }
  while ((int *)*piVar1 != (int *)0x0) {
    *(byte *)((int)piVar1 + 5) = *(byte *)((int)piVar1 + 5) | 1;
    piVar1 = (int *)*piVar1;
  }
  FUN_1013c998(param_1,param_2,piVar1,param_4);
  return;
}

