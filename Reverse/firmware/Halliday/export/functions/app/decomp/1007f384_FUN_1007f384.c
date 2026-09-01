/* FUN_1007f384 @ 0x1007f384 */

undefined4 FUN_1007f384(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  ushort uVar8;
  int iVar9;
  undefined1 auStack_3c [5];
  int local_37;
  int local_33;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  uVar2 = FUN_10120af8();
  if (uVar2 < 2) {
    piVar7 = (int *)param_1[3];
    iVar9 = (int)piVar7 + 0xc6;
    uVar5 = (uint)*(byte *)(*piVar7 + 10) * (uint)*(byte *)(*piVar7 + 0xb);
    if (uVar5 != 0x20) {
      local_37 = 1;
    }
    else {
      local_37 = -1;
    }
    if (uVar5 != 0x20) {
      local_37 = (local_37 << (uVar5 & 0xff)) + -1;
    }
    iVar1 = piVar7[param_2 + 0x19];
    uVar8 = *(ushort *)((int)piVar7 + (param_2 + 0x18) * 4 + 6) & 0xfff;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    local_2c = 0;
    local_33 = iVar9;
    FUN_10120a74(param_1,auStack_3c,uVar2,(short)iVar1,uVar8);
    FUN_1011ea48(iVar9,0xaa,(uint)*(byte *)(*piVar7 + 0xb) << 9);
    FUN_1007e320(param_1,auStack_3c);
    uVar5 = FUN_10120ab0(local_33,0x3ff);
    if (*(ushort *)(local_33 + 0x7fe) == uVar5) {
      FUN_1011ea40(*(undefined4 *)(piVar7[0x1d] + 8),iVar9,piVar7[uVar2 * 7 + 0xd] << 1);
      FUN_1011ea40(*(undefined4 *)(piVar7[0x1d] + 0x10),iVar9 + piVar7[uVar2 * 7 + 0xd] * 2,
                   piVar7[uVar2 * 7 + 0xe] << 1);
      FUN_1011ea48(iVar9,0xaa,(uint)*(byte *)(*piVar7 + 0xb) << 9);
      FUN_10120a74(param_1,auStack_3c,uVar2,(short)iVar1,uVar8 + 1);
      uVar3 = FUN_1007e320(param_1,auStack_3c);
      uVar5 = FUN_10120ab0(local_33,0x20);
      if (*(ushort *)(local_33 + 0x7fe) == uVar5) {
        FUN_1011ea40(*(undefined4 *)(piVar7[0x1d] + 0xc),local_33,piVar7[uVar2 * 7 + 0xf] << 3);
        return uVar3;
      }
      if ((*(char *)(*param_1 + 0x10) != '\0') &&
         (pcVar6 = *(code **)(*param_1 + 0xc), pcVar6 != (code *)0x0)) {
        uVar4 = 0x2a3;
        uVar3 = DAT_1007f4ec;
LAB_1007f4d0:
        (*pcVar6)(uVar3,DAT_1007f4e8,uVar4,param_2);
        return 0;
      }
    }
    else if ((*(char *)(*param_1 + 0x10) != '\0') &&
            (pcVar6 = *(code **)(*param_1 + 0xc), pcVar6 != (code *)0x0)) {
      uVar4 = 0x290;
      uVar3 = DAT_1007f4f0;
      goto LAB_1007f4d0;
    }
  }
  return 0;
}

