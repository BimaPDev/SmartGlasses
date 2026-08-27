/* FUN_2c55fddc @ 0x2c55fddc */

void FUN_2c55fddc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_2c55fe3c;
  if (param_1[0x16] != 0) {
    if (*(short *)((int)param_1 + 0x56) < (short)param_1[6]) {
      sVar1 = *(short *)((int)param_1 + 0x56) + 1;
      *(short *)((int)param_1 + 0x56) = sVar1;
      if (*(code **)(*param_1 + 0x10) == pcVar2) {
        iVar3 = sVar1 + -1;
        FUN_2c60518c(param_1[0x16],(int)(short)((short)iVar3 * ((short)param_1[0x15] + 0x1fc)),0,
                     iVar3,param_4);
      }
      else {
        (**(code **)(*param_1 + 0x10))();
      }
      FUN_2c55fae8(param_1);
      if (param_1[0x14] != 0) {
        FUN_2c606d60(param_1[0x14],0xff000000,0);
        param_1[0x14] = 0;
      }
    }
    return;
  }
  return;
}

