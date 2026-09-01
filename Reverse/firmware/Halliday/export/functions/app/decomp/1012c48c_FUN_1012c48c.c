/* FUN_1012c48c @ 0x1012c48c */

undefined4 FUN_1012c48c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint unaff_r8;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  if (*param_2 == 0x1000000) {
    iVar1 = FUN_1012a896(param_3,param_5,*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      return 0;
    }
    *param_4 = *param_3 - *param_5;
    param_4[1] = param_3[1] - param_5[1];
    param_4[2] = param_3[2] - *param_5;
    param_4[3] = param_3[3] - param_5[1];
LAB_1012c5dc:
    uVar2 = 1;
  }
  else {
    uVar3 = (uint)*(ushort *)((int)param_2 + 2);
    if (1 < uVar3) {
      unaff_r8 = 0x10000 / uVar3;
    }
    if (uVar3 < 2) {
      unaff_r8 = 0xffff;
    }
    if (1 < uVar3) {
      unaff_r8 = unaff_r8 & 0xffff;
    }
    FUN_1011e1a8(&local_28,&local_26,&local_24,&local_22,(int)(short)*param_5,(int)(short)param_5[1]
                 ,(int)(short)param_5[2],(int)(short)param_5[3],
                 (int)(short)((short)param_2[1] + (short)*param_5),
                 (int)(short)((short)param_2[2] + (short)param_5[1]),(short)*param_2,uVar3,uVar3,8);
    *param_3 = (int)local_28;
    param_3[1] = (int)local_26;
    uVar2 = *(undefined4 *)(param_1 + 8);
    param_3[2] = (int)local_24;
    param_3[3] = (int)local_22;
    iVar1 = FUN_1012a896(param_3,param_3,uVar2);
    if (iVar1 != 0) {
      FUN_1011e1a8(&local_28,&local_26,&local_24,&local_22,(int)(short)(*param_3 << 1),
                   (int)(short)(param_3[1] << 1),(int)(short)(param_3[2] << 1),
                   (int)(short)(param_3[3] << 1),
                   (int)(short)(((short)*param_5 + (short)param_2[1]) * 2),
                   (int)(short)(((short)param_5[1] + (short)param_2[2]) * 2),0xe10 - (short)*param_2
                   ,unaff_r8,unaff_r8,8);
      *param_4 = local_28 + 1 >> 1;
      param_4[1] = local_26 + 1 >> 1;
      param_4[2] = local_24 + 1 >> 1;
      param_4[3] = local_22 + 1 >> 1;
      if (0 < (short)*param_2) {
        FUN_1012a862(param_4,1);
      }
      iVar1 = FUN_1012a896(param_4,param_4,param_5);
      if (iVar1 != 0) {
        FUN_1012a87c(param_4,-*param_5,-param_5[1]);
        goto LAB_1012c5dc;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

