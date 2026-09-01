/* FUN_1003f838 @ 0x1003f838 */

void FUN_1003f838(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1003f880;
  iVar2 = *DAT_1003f87c;
  *(short *)(DAT_1003f880 + 0x3b0) = (short)param_1;
  *(short *)(iVar1 + 0x3b2) = (short)param_2;
  FUN_1003f748(param_1 | param_2 << 0x10,param_2,param_3,0,param_1);
  thunk_FUN_1009efe8(DAT_1003f884,iVar1 + 0x3b0,4);
  if (*DAT_1003f87c != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003f884);
  return;
}

