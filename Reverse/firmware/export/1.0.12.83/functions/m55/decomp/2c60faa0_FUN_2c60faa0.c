/* FUN_2c60faa0 @ 0x2c60faa0 */

void FUN_2c60faa0(undefined4 param_1,int param_2,int param_3,short *param_4,int param_5,
                 short param_6,short *param_7)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = param_4[2];
  sVar2 = *param_4;
  iVar3 = (int)param_4[1];
  param_2 = param_2 + (param_3 * iVar3 + (int)sVar2) * 4;
  param_5 = param_5 + ((int)param_6 * (int)param_7[1] + (int)*param_7) * 4;
  if (iVar3 <= param_4[3]) {
    do {
      FUN_2c62c0d8(param_2,param_5,(int)(short)((sVar1 + 1) - sVar2) << 2);
      iVar3 = (int)(short)((short)iVar3 + 1);
      param_2 = param_2 + param_3 * 4;
      param_5 = param_5 + param_6 * 4;
    } while (iVar3 <= param_4[3]);
  }
  return;
}

