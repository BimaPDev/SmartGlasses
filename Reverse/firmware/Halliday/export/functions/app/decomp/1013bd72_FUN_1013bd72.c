/* FUN_1013bd72 @ 0x1013bd72 */

int FUN_1013bd72(float param_1,float param_2,float param_3,float param_4,short *param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (param_5 == (short *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_1013ba4c(param_1 + param_3,param_2 + param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1013bbca(param_1 - param_3,param_2 - param_4,param_5), iVar1 == 0)) {
      pfVar3 = *(float **)(param_5 + 0x1c);
      pfVar2 = *(float **)(param_5 + 0x1e);
      if (*param_5 == 0x1701) {
        pfVar3[3] = param_1;
        pfVar3[4] = param_2;
        *(undefined1 *)((int)pfVar3 + 9) = 4;
      }
      else if (*param_5 == 0x1702) {
        *pfVar2 = *pfVar2 - param_4;
        pfVar2[1] = pfVar2[1] + param_3;
        *pfVar3 = *pfVar3 - param_4;
        pfVar3[1] = pfVar3[1] + param_3;
      }
      pfVar2[6] = (float)pfVar3;
      pfVar3[7] = (float)pfVar2;
    }
  }
  return iVar1;
}

