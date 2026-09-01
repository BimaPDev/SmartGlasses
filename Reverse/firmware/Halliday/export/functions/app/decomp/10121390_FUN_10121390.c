/* FUN_10121390 @ 0x10121390 */

undefined4 FUN_10121390(int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  short sVar8;
  undefined1 auStack_4c [3];
  undefined1 local_49;
  undefined1 auStack_3c [5];
  int local_37;
  int local_33;
  undefined1 *local_2f;
  
  piVar7 = *(int **)(param_1 + 0xc);
  if (-1 < ((int)(uint)*(ushort *)((int)piVar7 + (*(byte *)(piVar7[0x1d] + 1) + 0x864) * 2 + 2) >>
           (param_2 & 0xff)) << 0x1f) {
    iVar4 = *(int *)(piVar7[0x1d] + 0xc) + param_2 * 8;
    uVar1 = *(ushort *)(iVar4 + 2);
    sVar8 = *(short *)(iVar4 + 4);
    FUN_1011ea48(auStack_4c,0xff,0x10);
    iVar4 = (int)piVar7 + 0xc6;
    sVar8 = sVar8 + 1;
    FUN_1011ea48(iVar4,0xff,(uint)*(byte *)(*piVar7 + 0xb) * (uint)*(byte *)(*piVar7 + 10) * 0x200);
    if (*(short *)((int)piVar7 + 0xc2) == sVar8) {
      FUN_1007f28c(param_1,1);
      if (*(char *)(piVar7[0x23] + 1) == -1) {
        return 1;
      }
      if (*(short *)(piVar7[0x23] + 2) == -1) {
        return 1;
      }
      iVar5 = *(int *)(piVar7[0x1d] + 0xc) + param_2 * 8;
      uVar1 = *(ushort *)(iVar5 + 2);
      sVar8 = *(short *)(iVar5 + 4) + 1;
    }
    uVar2 = *(ushort *)((int)piVar7 + 0xc2);
    iVar5 = piVar7[0x23];
    local_49 = 0xaa;
    local_33 = iVar4;
    local_2f = auStack_4c;
    FUN_1011ea40(iVar4,*(undefined4 *)(iVar5 + 8),(uint)uVar2 << 1);
    uVar3 = FUN_10120ab0(*(undefined4 *)(iVar5 + 8),(uint)uVar2);
    *(undefined2 *)(piVar7 + 0x231) = uVar3;
    FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar7[0x1d],uVar1 & 0xfff,sVar8);
    uVar6 = (uint)*(byte *)(*piVar7 + 0xb) * (uint)*(byte *)(*piVar7 + 10);
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar6 == 0x20) {
      local_37 = -1;
    }
    else {
      local_37 = (1 << (uVar6 & 0xff)) + -1;
    }
    FUN_1007e498(param_1,auStack_3c);
    iVar4 = piVar7[0x23];
    *(short *)(param_2 * 8 + *(int *)(piVar7[0x1d] + 0xc) + 4) = sVar8;
    *(undefined1 *)(iVar4 + 1) = 0xff;
    *(undefined2 *)(piVar7[0x23] + 2) = 0xffff;
  }
  return 1;
}

