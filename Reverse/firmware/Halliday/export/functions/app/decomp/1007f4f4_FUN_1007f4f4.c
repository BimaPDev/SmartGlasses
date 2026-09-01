/* FUN_1007f4f4 @ 0x1007f4f4 */

undefined4 FUN_1007f4f4(int *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  ushort local_54 [2];
  ushort local_50 [2];
  undefined1 auStack_4c [3];
  undefined1 local_49;
  ushort local_46;
  undefined1 auStack_3c [5];
  int local_37;
  int local_33;
  undefined1 *local_2f;
  
  piVar7 = (int *)param_1[3];
  iVar4 = FUN_101215ac();
  if (iVar4 == 1) {
    FUN_1011ea48(auStack_4c,0xff,0x10);
    iVar8 = (int)piVar7 + 0xc6;
    FUN_1011ea48(iVar8,0xff,(uint)*(byte *)(*piVar7 + 0xb) << 9);
    iVar4 = param_2 + 0x18;
    uVar6 = (uint)*(ushort *)((int)piVar7 + iVar4 * 4 + 6);
    uVar1 = *(ushort *)(piVar7 + param_2 + 0x19);
    uVar10 = (uint)uVar1;
    local_33 = iVar8;
    local_2f = auStack_4c;
    if ((int)(uVar6 & 0xfff) < (int)(*(ushort *)((int)piVar7 + 0xc2) - 4)) {
      iVar9 = (int)(short)(ushort)((uVar6 << 0x14) >> 0x14);
    }
    else {
      FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar7[0x1d],uVar10,0);
      iVar9 = thunk_FUN_1007e6ec(param_1,auStack_3c);
      if (iVar9 != 1) {
        local_50[0] = local_50[0] & 0xf000 | uVar1 & 0xfff;
        iVar9 = FUN_1007ecec(param_1,local_54,local_50,0);
        if (iVar9 != 1) {
          return 0;
        }
        uVar10 = local_54[0] & 0xfff;
        *(ushort *)(piVar7 + param_2 + 0x19) = (ushort)(((uint)local_54[0] << 0x14) >> 0x14);
      }
      iVar9 = -4;
    }
    uVar1 = (short)iVar9 + 4;
    *(ushort *)((int)piVar7 + iVar4 * 4 + 6) =
         *(ushort *)((int)piVar7 + iVar4 * 4 + 6) & 0xf000 | uVar1 & 0xfff;
    FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar7[0x1d],uVar10,(int)(short)uVar1);
    pbVar11 = (byte *)piVar7[0x1d];
    FUN_1011ea40(iVar8,*(undefined4 *)(pbVar11 + 8),piVar7[(uint)*pbVar11 * 7 + 0xd] << 1);
    FUN_1011ea40(iVar8 + piVar7[(uint)*pbVar11 * 7 + 0xd] * 2,*(undefined4 *)(pbVar11 + 0x10),
                 piVar7[(uint)*pbVar11 * 7 + 0xe] << 1);
    uVar2 = FUN_10120ab0(local_33,0x3ff);
    *(undefined2 *)(piVar7 + 0x231) = uVar2;
    if ((short)uVar1 == 0) {
      sVar3 = FUN_10120b24(param_1,param_2);
      local_46 = sVar3 << 10 | 0x80aa;
    }
    local_49 = 0x55;
    uVar6 = (uint)*(byte *)(*piVar7 + 10) * (uint)*(byte *)(*piVar7 + 0xb);
    if ((uVar6 & 0xff) != 0) {
      if (uVar6 == 0x20) {
        local_37 = -1;
      }
      else {
        local_37 = (1 << (uVar6 & 0xff)) + -1;
      }
      FUN_1007e498(param_1,auStack_3c);
      FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar7[0x1d],uVar10,iVar9 + 5);
      FUN_1011ea48(auStack_4c,0xff,0x10);
      FUN_1011ea48(iVar8,0xff,(uint)*(byte *)(*piVar7 + 0xb) << 9);
      pbVar11 = (byte *)piVar7[0x1d];
      FUN_1011ea40(iVar8,*(undefined4 *)(pbVar11 + 0xc),piVar7[(uint)*pbVar11 * 7 + 0xf] << 3);
      uVar2 = FUN_10120ab0(*(undefined4 *)(pbVar11 + 0xc),0x20);
      local_49 = 0x55;
      *(undefined2 *)(piVar7 + 0x231) = uVar2;
      uVar6 = (uint)*(byte *)(*piVar7 + 10) * (uint)*(byte *)(*piVar7 + 0xb);
      if ((uVar6 & 0xff) != 0) {
        if (uVar6 == 0x20) {
          local_37 = -1;
        }
        else {
          local_37 = (1 << (uVar6 & 0xff)) + -1;
        }
        FUN_1007e498(param_1,auStack_3c);
        return 1;
      }
    }
  }
  else if ((*(char *)(*param_1 + 0x10) != '\0') &&
          (pcVar5 = *(code **)(*param_1 + 0xc), pcVar5 != (code *)0x0)) {
    (*pcVar5)(DAT_1007f700,DAT_1007f6fc,0x2e8);
  }
  return 0;
}

