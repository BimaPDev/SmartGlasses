/* FUN_2c55fea0 @ 0x2c55fea0 */

void FUN_2c55fea0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_2c55fef8;
  if (((param_1[0x16] != 0) && (param_2 <= (short)param_1[6])) && (0 < param_2)) {
    *(short *)((int)param_1 + 0x56) = (short)param_2;
    if (*(code **)(*param_1 + 0x10) == pcVar1) {
      iVar2 = (short)param_1[0x15] + 0x1fc;
      FUN_2c60518c(param_1[0x16],(int)(short)((short)iVar2 * ((short)param_2 + -1)),0,iVar2,param_4)
      ;
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

