/* FUN_2c4cc91c @ 0x2c4cc91c */

undefined4 FUN_2c4cc91c(uint *param_1,int param_2,int param_3,int *param_4,int param_5,uint param_6)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  if (*(char *)(param_2 + 0xb3) == '\x02') {
    iVar8 = 8;
    sVar1 = *(short *)(param_4[1] + (uint)*(byte *)(param_2 + 0xb4) * 2);
    if (param_5 < 0) {
      param_5 = param_5 + 7;
    }
    param_5 = param_5 >> 3;
  }
  else {
    iVar8 = 1;
    sVar1 = *(short *)(*param_4 + (uint)*(byte *)(param_2 + 0xb4) * 2);
  }
  if ((param_6 & 0x100000) == 0) {
    uVar7 = 0;
    uVar5 = param_1[1];
    uVar3 = 1 - uVar5;
    if ((int)uVar3 < 1) {
      uVar3 = *param_1;
    }
    else {
      if (uVar3 != 0x20) {
        uVar7 = *param_1 << (uVar3 & 0xff);
      }
      uVar3 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar3;
      uVar5 = param_1[1] + 0x20;
    }
    param_1[1] = uVar5 - 1;
    bVar10 = ((uVar3 >> (uVar5 - 1 & 0xff) | uVar7) & *(uint *)(DAT_2c4cca04 + 4) & 0xffff) != 0;
  }
  else {
    bVar10 = true;
  }
  iVar6 = 0;
  while( true ) {
    bVar9 = bVar10;
    if (iVar6 != 0) {
      bVar9 = false;
    }
    iVar4 = *(int *)(param_2 + 0xb8) * iVar6;
    iVar6 = iVar6 + 1;
    iVar4 = FUN_2c4daac0(*(undefined4 *)(param_3 + 0x30),param_1,
                         *(int *)(param_2 + 0x94) + iVar4 * 4,(int)sVar1,param_5,bVar9);
    if (iVar4 != 0) break;
    if (iVar6 == iVar8) {
      return 0;
    }
  }
  if (iVar4 == 5) {
    uVar2 = 0x4002;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

