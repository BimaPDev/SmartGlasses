/* FUN_1009ab84 @ 0x1009ab84 */

void FUN_1009ab84(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  iVar1 = DAT_1009ac30;
  iVar4 = param_2 + (param_3 * param_4[1] + *param_4) * 2;
  iVar3 = param_5 + (param_7[1] * param_6 + *param_7) * 2;
  if (((*(byte *)(DAT_1009ac30 + 1) & 2) != 0) &&
     (iVar2 = FUN_1009b628(iVar4,(int)(short)param_3,iVar3,(int)(short)param_6,
                           (int)(short)(((short)param_4[2] + 1) - (short)*param_4),
                           (int)(short)(((short)param_4[3] + 1) - (short)param_4[1])), iVar2 == 1))
  {
    return;
  }
  if (((int)((uint)*(byte *)(iVar1 + 1) << 0x1d) < 0) &&
     (iVar1 = FUN_1009c11c(param_2,param_3,param_4,param_5,param_6,param_7), iVar1 == 1)) {
    return;
  }
  FUN_10067318(iVar4,((int)(short)param_3 & 0x7fffU) << 1,iVar3,((int)(short)param_6 & 0x7fffU) << 1
               ,(((short)param_4[2] + 1) - (short)*param_4) * 2,
               ((short)param_4[3] + 1) - (short)param_4[1],iVar3,unaff_r4,unaff_r5,unaff_lr);
  FUN_100673b8(0xffffffff);
  return;
}

