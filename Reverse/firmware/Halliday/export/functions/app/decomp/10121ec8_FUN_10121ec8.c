/* FUN_10121ec8 @ 0x10121ec8 */

bool FUN_10121ec8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  byte local_35;
  short local_34;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar11 = false;
  if (*(byte *)(iVar1 + 0x10d3) != 0) {
    iVar5 = 0;
    iVar9 = 0;
    iVar6 = (int)(*(ushort *)(iVar1 + 0x10de) - 1) / (int)(uint)*(byte *)(iVar1 + 0x10d3);
    iVar4 = 0;
    while (iVar9 <= iVar6) {
      bVar10 = 0xff;
      iVar7 = iVar9 + iVar6 >> 1;
      for (uVar8 = 0; uVar8 < *(byte *)(iVar1 + 0x10d3); uVar8 = uVar8 + 1) {
        iVar2 = (uint)*(byte *)(iVar1 + 0x10d3) * iVar7 + uVar8;
        FUN_10121e98(param_1);
        iVar3 = iVar2;
        if (local_35 == 0xff) {
          iVar3 = iVar5;
          if ((iVar2 == 0) && (iVar3 = iVar2, local_34 == -1)) {
            iVar3 = iVar5;
          }
        }
        else if (local_35 == 0xaa) {
          iVar4 = iVar2;
        }
        bVar10 = bVar10 & local_35;
        iVar5 = iVar3;
      }
      if (bVar10 == 0xff) {
        iVar6 = iVar7 + -1;
      }
      else {
        iVar9 = iVar7 + 1;
      }
    }
    *param_4 = iVar5;
    bVar11 = iVar4 == iVar5;
  }
  return bVar11;
}

