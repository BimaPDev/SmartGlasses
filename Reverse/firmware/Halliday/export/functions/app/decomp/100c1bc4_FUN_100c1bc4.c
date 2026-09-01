/* FUN_100c1bc4 @ 0x100c1bc4 */

void FUN_100c1bc4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = CONCAT44(param_2,param_1);
  uVar3 = param_4;
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_100c1c18,DAT_100c1c14,DAT_100c1c10,0x1d2,0,param_2,param_3,param_4,param_4);
    uVar2 = FUN_1011a1f0(DAT_100c1c10,0x1d2,param_3,param_4);
    param_3 = extraout_r2;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 1);
  if (uVar1 != 0) {
    FUN_10119dc2(DAT_100c1c18,DAT_100c1c1c,DAT_100c1c10,0x1d3,uVar2,param_3,uVar1,uVar3);
    FUN_1011a1f0(DAT_100c1c10,0x1d3,param_3,uVar1);
  }
  *param_1 = param_1[2] + param_2;
  return;
}

