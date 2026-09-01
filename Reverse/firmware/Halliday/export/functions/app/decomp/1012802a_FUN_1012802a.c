/* FUN_1012802a @ 0x1012802a */

void FUN_1012802a(undefined4 param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  if (0xb4 < param_4) {
    param_4 = (int)(short)((short)param_4 + -0xb4);
  }
  iVar1 = FUN_1013d980((int)(short)((short)param_4 + 0x5a));
  iVar2 = FUN_1013d980(param_4);
  FUN_1008cbec(param_1,param_2,param_3,((iVar1 << 0xb) >> 0x10) + param_2,
               ((iVar2 << 0xb) >> 0x10) + param_3,param_5);
  return;
}

