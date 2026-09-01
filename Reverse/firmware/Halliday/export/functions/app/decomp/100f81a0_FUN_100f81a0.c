/* FUN_100f81a0 @ 0x100f81a0 */

void FUN_100f81a0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = *param_1;
  uVar6 = *param_2;
  if ((int)uVar4 < (int)uVar6) {
    uVar7 = -uVar4;
    if ((int)uVar7 < (int)uVar6) {
      uVar5 = uVar7;
      uVar7 = uVar6;
      iVar9 = 0x5a0000;
    }
    else {
      uVar5 = -uVar6;
      iVar9 = DAT_100f826c;
      if (0 < (int)uVar6) {
        iVar9 = 0xb40000;
      }
    }
  }
  else if ((int)uVar6 < (int)-uVar4) {
    uVar7 = -uVar6;
    uVar5 = uVar4;
    iVar9 = DAT_100f8274;
  }
  else {
    uVar5 = uVar6;
    uVar7 = uVar4;
    iVar9 = 0;
  }
  uVar4 = 1;
  iVar3 = 1;
  iVar8 = DAT_100f8270;
  do {
    while( true ) {
      iVar2 = uVar7 + iVar3;
      uVar6 = uVar4 & 0xff;
      if (0 < (int)uVar5) break;
      iVar2 = uVar7 + iVar3;
      uVar1 = uVar4 & 0xff;
      uVar6 = uVar4 & 0xff;
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 - ((int)(iVar3 + uVar5) >> uVar1);
      uVar5 = uVar5 + (iVar2 >> uVar6);
      iVar9 = iVar9 - *(int *)(iVar8 + -4);
      iVar3 = iVar3 << 1;
      iVar8 = iVar8 + 4;
      if (uVar4 == 0x17) goto LAB_100f8224;
    }
    uVar7 = uVar7 + ((int)(iVar3 + uVar5) >> (uVar4 & 0xff));
    uVar4 = uVar4 + 1;
    uVar5 = uVar5 - (iVar2 >> uVar6);
    iVar9 = iVar9 + *(int *)(iVar8 + -4);
    iVar3 = iVar3 << 1;
    iVar8 = iVar8 + 4;
  } while (uVar4 != 0x17);
LAB_100f8224:
  if (-1 < iVar9) {
    *param_1 = uVar7;
    *param_2 = iVar9 + 8U & 0xfffffff0;
    return;
  }
  *param_1 = uVar7;
  *param_2 = -(8U - iVar9 & 0xfffffff0);
  return;
}

