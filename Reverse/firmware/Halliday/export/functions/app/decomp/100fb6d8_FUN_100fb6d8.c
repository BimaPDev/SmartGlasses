/* FUN_100fb6d8 @ 0x100fb6d8 */

int FUN_100fb6d8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar6 = LZCOUNT((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f) |
                  (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f) |
                  (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f) |
                  (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f));
  uVar9 = iVar6 - 4;
  if ((int)uVar9 < 1) {
    uVar8 = 4 - iVar6;
    iVar2 = (int)param_2 >> (uVar8 & 0xff);
    iVar3 = (int)param_3 >> (uVar8 & 0xff);
    iVar6 = (int)param_4 >> (uVar8 & 0xff);
    iVar4 = (int)param_1 >> (uVar8 & 0xff);
  }
  else {
    if (1 < (int)uVar9) {
      uVar9 = 2;
    }
    iVar2 = param_2 << (uVar9 & 0xff);
    iVar6 = param_4 << (uVar9 & 0xff);
    iVar4 = param_1 << (uVar9 & 0xff);
    iVar3 = param_3 << (uVar9 & 0xff);
  }
  do {
    iVar1 = iVar4;
    iVar4 = iVar2 + iVar3;
    iVar5 = iVar1 + iVar2;
    iVar7 = iVar3 + iVar6;
    iVar10 = iVar5 + iVar4;
    if ((iVar2 < 1) && (iVar3 < 1)) {
      iVar1 = 0;
      break;
    }
    if (iVar7 < iVar5) {
      iVar2 = iVar5 >> 1;
      iVar6 = iVar4 + iVar7 + iVar10 >> 3;
      iVar10 = iVar10 >> 2;
      iVar4 = iVar1;
      if (iVar1 == iVar2) {
LAB_100fb76e:
        iVar4 = iVar1;
        if (iVar10 <= iVar1) break;
      }
    }
    else {
      iVar3 = iVar3 + iVar2;
      iVar4 = iVar3 + iVar7;
      iVar2 = iVar4 >> 2;
      iVar1 = iVar5 + iVar3 + iVar4 >> 3;
      iVar10 = iVar7 >> 1;
      iVar4 = iVar1;
      if (iVar1 == iVar2) goto LAB_100fb76e;
    }
    iVar1 = iVar10;
    iVar3 = iVar1;
  } while ((iVar1 != iVar6) || (iVar1 < iVar2));
  if ((int)uVar9 < 1) {
    iVar1 = iVar1 << (-uVar9 & 0xff);
  }
  else {
    iVar1 = iVar1 >> (uVar9 & 0xff);
  }
  return iVar1;
}

