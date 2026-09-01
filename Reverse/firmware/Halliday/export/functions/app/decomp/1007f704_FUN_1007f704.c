/* FUN_1007f704 @ 0x1007f704 */

undefined1 FUN_1007f704(int *param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  ushort uVar8;
  undefined1 auStack_4c [3];
  char local_49;
  short local_48;
  undefined1 auStack_3c [5];
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  int local_33;
  undefined1 *local_2f;
  
  piVar6 = (int *)param_1[3];
  iVar5 = *(int *)((undefined1 *)piVar6[0x1d] + 0xc) + param_2 * 8;
  sVar1 = *(short *)(iVar5 + 4);
  if (sVar1 == -1) {
    FUN_1011ea48(*(undefined4 *)(piVar6[0x23] + 8),0xff,(uint)*(ushort *)((int)piVar6 + 0xc2) << 1);
  }
  else {
    local_2f = auStack_4c;
    local_37 = 0xf;
    local_36 = 0;
    local_35 = 0;
    local_34 = 0;
    uVar8 = *(ushort *)(iVar5 + 2) & 0xfff;
    local_33 = (int)piVar6 + 0xc6;
    FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar6[0x1d],uVar8,sVar1);
    FUN_1011ea48((int)piVar6 + 0xc6,0xaa,(uint)*(byte *)(*piVar6 + 0xb) << 9);
    FUN_1007e320(param_1,auStack_3c);
    uVar2 = *(ushort *)(local_33 + 0x7fe);
    uVar4 = FUN_10120ab0(local_33,*(undefined2 *)((int)piVar6 + 0xc2));
    if (uVar4 == uVar2 && (local_48 == -1 && local_49 == -0x56)) {
      FUN_1011ea40(*(undefined4 *)(piVar6[0x23] + 8),local_33,
                   (uint)*(ushort *)((int)piVar6 + 0xc2) << 1);
      return 1;
    }
    if (((int)(uint)*(ushort *)((int)piVar6 + (*(byte *)(piVar6[0x1d] + 1) + 0x864) * 2 + 2) >>
        (param_2 & 0xff)) << 0x1f < 0) {
      FUN_1011ea48(*(undefined4 *)(piVar6[0x23] + 8),0xff,(uint)*(ushort *)((int)piVar6 + 0xc2) << 1
                  );
      iVar5 = *(int *)(piVar6[0x23] + 8);
      uVar2 = *(ushort *)(*(int *)(piVar6[0x1d] + 0xc) + param_2 * 8 + 4);
      uVar8 = 0;
      do {
        uVar4 = (uint)uVar8;
        uVar3 = uVar8 & 0xfff;
        uVar8 = uVar8 + 1;
        *(ushort *)(iVar5 + uVar4 * 2) = *(ushort *)(iVar5 + uVar4 * 2) & 0xf000 | uVar3;
      } while (uVar8 <= uVar2);
    }
    else {
      iVar5 = FUN_101217da(param_1,param_2);
      if (iVar5 != 1) {
        if (*(char *)(*param_1 + 0x10) == '\0') {
          return 0;
        }
        pcVar7 = *(code **)(*param_1 + 0xc);
        if (pcVar7 == (code *)0x0) {
          return 0;
        }
        (*pcVar7)(DAT_1007f860,DAT_1007f85c,0x100,*(undefined1 *)(piVar6[0x1d] + 1),
                  *(undefined2 *)(*(int *)(piVar6[0x1d] + 0xc) + param_2 * 8),uVar8,sVar1);
        return 0;
      }
    }
  }
  return 1;
}

