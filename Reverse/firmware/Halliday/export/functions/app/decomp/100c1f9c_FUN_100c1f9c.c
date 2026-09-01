/* FUN_100c1f9c @ 0x100c1f9c */

int FUN_100c1f9c(int *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  iVar2 = *param_1;
  if (uVar1 < param_2) {
    FUN_10119dc2(DAT_100c1fe0,DAT_100c1fdc,DAT_100c1fd8,0x49c,param_1,param_2);
    FUN_1011a1f0(DAT_100c1fd8,0x49c,param_3,(uint)uVar1);
  }
  *(short *)(param_1 + 1) = (short)param_1[1] - (short)param_2;
  *param_1 = *param_1 + param_2;
  return iVar2;
}

