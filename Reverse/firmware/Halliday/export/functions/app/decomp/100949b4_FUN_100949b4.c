/* FUN_100949b4 @ 0x100949b4 */

void FUN_100949b4(int *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  pcVar1 = DAT_100949bc;
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    FUN_10094174(3,DAT_100949b0,0x1a5,DAT_100949ac,DAT_100949a8);
  }
  else {
    uVar9 = (uint)*(byte *)((int)param_1 + 7);
    uVar8 = param_2 & 0x3fff;
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        uVar9 = *(ushort *)(param_1 + 1) & 0x3fff;
        if (uVar9 == uVar8) {
          puVar5 = (ushort *)(param_1 + 1);
LAB_100948f0:
          (*DAT_100949bc)(param_2,param_3,puVar5,param_1);
          return;
        }
        piVar3 = (int *)FUN_10094254(0xc,DAT_100949ac,0xffff,uVar9,param_1,param_2);
        if (piVar3 == (int *)0x0) {
          return;
        }
        bVar4 = *(char *)((int)param_1 + 7) + 1;
        iVar2 = *param_1;
        *(byte *)((int)param_1 + 7) = bVar4;
        *param_1 = (int)piVar3;
        *(short *)(piVar3 + bVar4) = (short)param_1[1];
        piVar6 = (int *)((int)piVar3 + (uint)bVar4 * 4 + 2);
        *piVar3 = iVar2;
        piVar3 = piVar3 + 1;
      }
      else {
        piVar6 = param_1 + 1;
        *(undefined1 *)((int)param_1 + 7) = 1;
        piVar3 = param_1;
      }
    }
    else {
      iVar7 = uVar9 - 1;
      iVar2 = *param_1;
      puVar5 = (ushort *)(iVar7 * 2 + uVar9 * 4 + iVar2);
      do {
        if (uVar8 == (*puVar5 & 0x3fff)) {
          param_1 = (int *)(iVar2 + iVar7 * 4);
          goto LAB_100948f0;
        }
        bVar10 = iVar7 != 0;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + -1;
      } while (bVar10);
      iVar2 = FUN_10094280(iVar2,uVar9 * 6 + 6,DAT_100949ac);
      if (iVar2 == 0) {
        return;
      }
      uVar9 = (uint)*(byte *)((int)param_1 + 7);
      *param_1 = iVar2;
      iVar7 = iVar2 + uVar9 * 4;
      while (bVar10 = uVar9 != 0, uVar9 = uVar9 - 1, bVar10) {
        *(undefined2 *)(iVar7 + 4 + uVar9 * 2) = *(undefined2 *)(iVar7 + uVar9 * 2);
      }
      bVar4 = *(char *)((int)param_1 + 7) + 1;
      *(byte *)((int)param_1 + 7) = bVar4;
      piVar6 = (int *)((uint)bVar4 * 6 + -2 + iVar2);
      piVar3 = (int *)((uint)bVar4 * 4 + -4 + iVar2);
    }
    (*pcVar1)(param_2,param_3,piVar6,piVar3);
    uVar8 = FUN_1012b284(uVar8);
    *(byte *)((int)param_1 + 6) = (byte)(1 << (uVar8 & 0xff)) | *(byte *)((int)param_1 + 6);
  }
  return;
}

