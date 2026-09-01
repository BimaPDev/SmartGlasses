/* FUN_1006a0c8 @ 0x1006a0c8 */

undefined4 FUN_1006a0c8(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  uint local_38;
  uint uStack_34;
  
  iVar1 = *param_1;
  uVar6 = *(uint *)(iVar1 + 0x10);
  uVar8 = param_2;
  if (uVar6 <= param_2) {
    uVar8 = param_2 - uVar6;
  }
  if (uVar6 < uVar8 + 0x30) {
    FUN_10069ba8(param_1,0,*(int *)(iVar1 + 0xc) + uVar8,0,param_3,uVar6 - uVar8);
    uVar4 = *(uint *)(*param_1 + 0xc);
    uVar9 = uVar8 + (0x30 - uVar6);
    uVar7 = uVar4 & 0x1ff;
    uStack_34 = -(uint)(0x200 < uVar7);
    iVar1 = 0;
    uVar3 = (int)uVar9 >> 0x1f;
    bVar11 = uStack_34 <= uVar3;
    if (uVar3 == uStack_34) {
      bVar11 = 0x200 - uVar7 <= uVar9;
    }
    local_38 = 0x200 - uVar7;
    if (!bVar11) {
      local_38 = uVar9;
      uStack_34 = uVar3;
    }
    piVar10 = (int *)((int)param_3 + (uVar6 - uVar8));
    if (uStack_34 == 0 && local_38 == 0) goto LAB_1006a15c;
  }
  else {
    uVar4 = *(int *)(iVar1 + 0xc) + uVar8;
    uVar7 = uVar4 & 0x1ff;
    local_38 = 0x200 - uVar7;
    uStack_34 = -(uint)(0x200 < uVar7);
    if (uStack_34 != 0 || 0x30 < local_38) {
      local_38 = 0x30;
      uStack_34 = 0;
    }
    uVar9 = 0x30;
    piVar10 = param_3;
  }
  pcVar2 = (code *)**(undefined4 **)(param_1[1] + 8);
  (*pcVar2)(param_1[1],pcVar2,uVar4 - uVar7,-(uint)(uVar4 < uVar7),param_1 + 0x61);
  FUN_1011ea40(piVar10,(int)(param_1 + 0x61) + uVar7,local_38);
  bVar11 = CARRY4(uVar4,local_38);
  uVar4 = uVar4 + local_38;
  uVar9 = uVar9 - local_38;
  piVar10 = (int *)((int)piVar10 + local_38);
  iVar1 = uStack_34 + bVar11;
LAB_1006a15c:
  uVar8 = uVar9;
  if ((int)uVar9 < 0) {
    uVar8 = uVar9 + 0x1ff;
  }
  uVar6 = uVar8 & 0xfffffe00;
  if (uVar6 != 0) {
    pcVar2 = (code *)**(undefined4 **)(param_1[1] + 8);
    (*pcVar2)(param_1[1],pcVar2,uVar4,iVar1,piVar10);
    bVar11 = CARRY4(uVar4,uVar6);
    uVar4 = uVar4 + uVar6;
    iVar1 = iVar1 + ((int)uVar8 >> 0x1f) + (uint)bVar11;
    iVar5 = -uVar9;
    uVar8 = uVar9 * -0x800000;
    uVar9 = uVar9 & 0x1ff;
    piVar10 = (int *)((int)piVar10 + uVar6);
    if (-1 < iVar5) {
      uVar9 = -(uVar8 >> 0x17);
    }
  }
  if (0 < (int)uVar9) {
    pcVar2 = (code *)**(undefined4 **)(param_1[1] + 8);
    (*pcVar2)(param_1[1],pcVar2,uVar4,iVar1,param_1 + 0x61);
    FUN_1011ea40(piVar10,param_1 + 0x61,uVar9);
  }
  if (*param_3 == DAT_1006a2b4) {
    iVar5 = param_3[0xb];
    iVar1 = FUN_10068e38(0,param_3,*(ushort *)((int)param_3 + 6) - 4);
    if (iVar5 == iVar1) {
      *param_4 = (param_3[2] + 0xffff + (uint)*(ushort *)((int)param_3 + 6) & 0xffff0000) + param_2;
      return 0x30;
    }
    FUN_100a5b78((DAT_1006a2bc - DAT_1006a2b8) * 0x20 & 0xff00U | 0xcf0011,DAT_1006a2c4,DAT_1006a2c0
                 ,param_2);
  }
  *param_4 = param_2 + 0x10000;
  return 0;
}

