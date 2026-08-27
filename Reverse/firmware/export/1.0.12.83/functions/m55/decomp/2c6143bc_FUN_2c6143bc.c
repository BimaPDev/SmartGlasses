/* FUN_2c6143bc @ 0x2c6143bc */

void FUN_2c6143bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined1 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)param_4;
  if (0xb4 < param_4) {
    sVar1 = sVar1 + -0xb4;
    param_4 = (int)sVar1;
  }
  iVar2 = FUN_2c62e208((int)(short)(sVar1 + 0x5a));
  iVar3 = FUN_2c62e208(param_4);
  FUN_2c614004(param_1,param_2,param_3,(int)(short)((short)param_2 + (short)(iVar2 >> 5)),
               (int)(short)((short)param_3 + (short)(iVar3 >> 5)),param_5);
  return;
}

