/* FUN_10106c9c @ 0x10106c9c */

void FUN_10106c9c(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_3c;
  
  iVar11 = param_1[2];
  iVar12 = *(int *)(iVar11 + param_5 * 8);
  iVar4 = *(int *)(iVar11 + param_4 * 8);
  iVar3 = param_4 << 3;
  iVar5 = iVar4;
  iVar7 = param_5 << 3;
  if (iVar12 < iVar4) {
    iVar3 = param_5 << 3;
    iVar5 = iVar12;
    iVar7 = param_4 << 3;
    iVar12 = iVar4;
  }
  iVar6 = *param_1;
  iVar4 = param_1[1];
  iVar10 = *(int *)(iVar4 + iVar3);
  iVar8 = *(int *)(iVar6 + iVar3);
  iVar9 = *(int *)(iVar6 + iVar7);
  iVar3 = *(int *)(iVar4 + iVar7);
  if ((iVar10 == iVar3) || (iVar5 == iVar12)) {
    for (; param_2 <= param_3; param_2 = param_2 + 1) {
      iVar11 = *(int *)(iVar6 + param_2 * 8);
      if (iVar8 < iVar11) {
        iVar5 = iVar10;
        if (iVar9 <= iVar11) {
          iVar5 = iVar11 + (iVar3 - iVar9);
        }
      }
      else {
        iVar5 = iVar11 + (iVar10 - iVar8);
      }
      *(int *)(iVar4 + param_2 * 8) = iVar5;
    }
  }
  else if (param_2 <= param_3) {
    local_3c = 0;
    bVar2 = false;
    do {
      iVar7 = *(int *)(iVar6 + param_2 * 8);
      iVar6 = param_2 * 8;
      if (iVar8 < iVar7) {
        if (iVar7 < iVar9) {
          if (!bVar2) {
            local_3c = FUN_100f87b8(iVar3 - iVar10,iVar12 - iVar5);
            iVar4 = param_1[1];
            iVar11 = param_1[2];
          }
          lVar1 = (longlong)local_3c * (longlong)(*(int *)(iVar11 + iVar6) - iVar5);
          lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
          bVar2 = true;
          iVar7 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000) + iVar10;
          goto LAB_10106d1a;
        }
        *(int *)(iVar4 + iVar6) = iVar7 + (iVar3 - iVar9);
      }
      else {
        iVar7 = iVar7 + (iVar10 - iVar8);
LAB_10106d1a:
        *(int *)(iVar4 + iVar6) = iVar7;
      }
      if (param_3 < param_2 + 1) {
        return;
      }
      param_2 = param_2 + 1;
      iVar6 = *param_1;
    } while( true );
  }
  return;
}

