/* FUN_100c1f58 @ 0x100c1f58 */

void FUN_100c1f58(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 1);
  if (uVar1 < param_2) {
    FUN_10119dc2(DAT_100c1f98,DAT_100c1f94,DAT_100c1f90,0x490,param_1,param_2,param_3,uVar1,param_4)
    ;
    FUN_1011a1f0(DAT_100c1f90,0x490,param_3,uVar1);
  }
  *(short *)(param_1 + 1) = (short)param_1[1] - (short)param_2;
  *param_1 = *param_1 + param_2;
  return;
}

