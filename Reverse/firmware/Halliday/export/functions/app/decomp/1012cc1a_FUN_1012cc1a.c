/* FUN_1012cc1a @ 0x1012cc1a */

void FUN_1012cc1a(float param_1,float param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  
  iVar5 = *param_4;
  iVar1 = iVar5 * 4;
  pfVar7 = (float *)(iVar1 + 4 + param_3);
  pfVar6 = (float *)(iVar1 + 8 + param_3);
  pfVar4 = (float *)(iVar1 + 0xc + param_3);
  pfVar3 = (float *)(iVar1 + 0x10 + param_3);
  pfVar2 = (float *)(iVar1 + 0x14 + param_3);
  *(undefined4 *)(param_3 + iVar5 * 4) = 8;
  if (param_6 == 0) {
    *pfVar7 = *(float *)(param_5 + 0x1c) + param_1;
    *pfVar6 = *(float *)(param_5 + 0x20) + param_2;
    *pfVar4 = *(float *)(param_5 + 0x14) + param_1;
    *pfVar3 = *(float *)(param_5 + 0x18) + param_2;
    *pfVar2 = *(float *)(param_5 + 0xc) + param_1;
    fVar8 = *(float *)(param_5 + 0x10);
  }
  else {
    *pfVar7 = *(float *)(param_5 + 0x14) + param_1;
    *pfVar6 = *(float *)(param_5 + 0x18) + param_2;
    *pfVar4 = *(float *)(param_5 + 0x1c) + param_1;
    *pfVar3 = *(float *)(param_5 + 0x20) + param_2;
    *pfVar2 = *(float *)(param_5 + 0x24) + param_1;
    fVar8 = *(float *)(param_5 + 0x28);
  }
  *(float *)(iVar1 + 0x18 + param_3) = fVar8 + param_2;
  *param_4 = iVar5 + 7;
  return;
}

