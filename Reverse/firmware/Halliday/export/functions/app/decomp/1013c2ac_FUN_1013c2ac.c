/* FUN_1013c2ac @ 0x1013c2ac */

undefined4
FUN_1013c2ac(float param_1,float param_2,int param_3,int param_4,int *param_5,int *param_6,
            int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  
  if ((((param_5 == (int *)0x0) || (*param_5 == 0)) || (param_6 == (int *)0x0)) || (param_4 == 0)) {
    uVar2 = 1;
  }
  else {
    if (param_3 == 0) {
      uVar5 = 4;
      fVar7 = param_1;
      fVar6 = param_2;
    }
    else {
      uVar5 = 5;
      fVar7 = param_1 + *(float *)(param_4 + 8);
      fVar6 = param_2 + *(float *)(param_4 + 0xc);
    }
    iVar1 = FUN_100f0524(param_7 + 0xc + *param_6);
    if (iVar1 == 0) {
      uVar2 = 5;
    }
    else {
      FUN_1011ea40(iVar1,*param_5,*param_6);
      FUN_10139762(*param_5);
      iVar3 = *param_6;
      *param_5 = iVar1;
      iVar4 = iVar1 + iVar3;
      *(undefined1 *)(iVar1 + iVar3) = uVar5;
      *(float *)(iVar4 + 4) = param_1;
      if (param_3 == 0) {
        *(float *)(iVar4 + 8) = param_2;
      }
      else {
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      uVar2 = 0;
      *param_6 = *param_6 + 0xc;
      *(float *)(param_4 + 8) = fVar7;
      *(float *)(param_4 + 0xc) = fVar6;
      *(float *)(param_4 + 0x10) = fVar7;
      *(float *)(param_4 + 0x14) = fVar6;
    }
  }
  return uVar2;
}

