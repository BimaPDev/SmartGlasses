/* FUN_1406af68 @ 0x1406af68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1406af68(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 extraout_r2;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  iVar5 = FUN_1406d034(param_1,param_3);
  if ((iVar5 == 0) || (*(byte *)(iVar5 + 0x13) != param_2)) {
    return 0x40;
  }
  bVar1 = *(byte *)(iVar5 + 0x12);
  if ((int)((uint)bVar1 << 0x1a) < 0) {
    return 0x43;
  }
  if (param_4 == 0) {
    if (param_6 == 0) {
      return 0x40;
    }
    if (*(ushort *)(param_6 + 6) < 7) {
      return 0x4e;
    }
  }
  if (*(char *)(iVar5 + 0x11) != '%') {
    if (*(char *)(iVar5 + 0x11) != '-') {
      return 0x43;
    }
    *(byte *)(iVar5 + 0x12) = bVar1 | 0x20;
    *(undefined1 *)(iVar5 + 0x13) = 0xff;
    if (param_4 != 0) goto LAB_1406ca6e;
    if ((param_6 == 0) || (*(ushort *)(param_6 + 6) < 7)) {
      if (*(int *)(iVar5 + 0x1c) == 0) {
        param_4 = 0xe;
        goto LAB_1406ca6e;
      }
      if (*(char *)(iVar5 + 0x2a) != '\b') {
        FUN_140736a8(param_6,2,0,*(char *)(iVar5 + 0x2a),unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                     unaff_r8,unaff_lr);
        if (param_6 != 0) {
          param_4 = 0xe;
          goto LAB_1406ca96;
        }
        param_4 = 0xe;
        puVar12 = (undefined1 *)0x0;
        goto LAB_1406ca9c;
      }
      param_4 = 0xe;
      uVar7 = 0;
      puVar12 = &NMI;
LAB_1406ca3c:
      FUN_140736a8(param_6,2,uVar7,puVar12,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
      if (param_6 != 0) goto LAB_1406ca46;
      _MasterStackPointer = *(undefined2 *)(iVar5 + 0x24);
    }
    else {
      cVar9 = *(char *)(iVar5 + 0x2a);
      if (cVar9 == '\x06') {
        iVar11 = *(int *)(iVar5 + 0x18);
        sVar4 = *(short *)(param_6 + 4);
        if (iVar11 == 0) {
          if (sVar4 == 0) goto LAB_1406cad0;
        }
        else if ((*(short *)(iVar11 + 4) == sVar4) &&
                (iVar11 = FUN_140db784(*(ushort *)(param_6 + 6) + 0x30 + param_6,
                                       *(ushort *)(iVar11 + 6) + 0x30 + iVar11,sVar4), iVar11 == 0))
        {
LAB_1406cad0:
          FUN_14073790(param_6,sVar4);
          cVar9 = *(char *)(iVar5 + 0x2a);
          *(uint *)(iVar5 + 0x1c) = param_6;
          uVar8 = extraout_r2;
          goto LAB_1406ca20;
        }
        *(short *)(iVar5 + 0x20) = *(short *)(iVar5 + 0x26) + 1;
        if (*(int *)(iVar5 + 0x1c) == 0) goto LAB_1406ca6e;
LAB_1406cac0:
        FUN_140736a8(param_6,2);
LAB_1406ca96:
        puVar12 = (undefined1 *)(*(ushort *)(param_6 + 6) + 0x30 + param_6);
LAB_1406ca9c:
        uVar3 = *(ushort *)(iVar5 + 0x26);
        *puVar12 = (char)uVar3;
        uVar7 = uVar3 >> 8;
        puVar12[1] = (char)(uVar3 >> 8);
        goto LAB_1406ca3c;
      }
      *(uint *)(iVar5 + 0x1c) = param_6;
      uVar8 = 0;
LAB_1406ca20:
      if (cVar9 != '\b') goto LAB_1406cac0;
      FUN_140736a8(param_6,2,uVar8,8,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
LAB_1406ca46:
      uVar2 = *(undefined2 *)(iVar5 + 0x24);
      iVar11 = *(ushort *)(param_6 + 6) + param_6;
      *(char *)(iVar11 + 0x30) = (char)uVar2;
      *(char *)(iVar11 + 0x31) = (char)((ushort)uVar2 >> 8);
      if (*(ushort *)(iVar5 + 0x28) < *(ushort *)(param_6 + 4)) {
        FUN_14073790(param_6,*(ushort *)(param_6 + 4) - *(ushort *)(iVar5 + 0x28));
      }
    }
    FUN_1407358c(param_6);
LAB_1406ca6e:
    FUN_1406d210(param_1,iVar5,6,param_4);
    return 0;
  }
  *(byte *)(iVar5 + 0x12) = bVar1 | 0x20;
  *(undefined1 *)(iVar5 + 0x13) = 0xff;
  if (param_4 != 0) goto LAB_1406aefa;
  iVar11 = *(int *)(iVar5 + 0x20);
  if (*(char *)(iVar5 + 0x2c) == ' ') {
    FUN_140736a8(param_6,2);
    if (param_6 == 0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      puVar12 = (undefined1 *)(*(ushort *)(param_6 + 6) + 0x30 + param_6);
    }
    *puVar12 = (char)param_5;
    puVar12[1] = (char)((uint)param_5 >> 8);
    if (param_6 != 0) goto LAB_1406aeb4;
LAB_1406af2c:
    uVar10 = param_6;
    if (iVar11 == 0) {
      FUN_140739f0(iVar5 + 0x1c,param_6);
      uVar6 = param_6;
      goto LAB_1406aee0;
    }
LAB_1406af34:
    FUN_14073968(param_6,(uint)*(ushort *)(iVar11 + 6) + (uint)*(ushort *)(iVar11 + 4) + 0x30 +
                         iVar11,uVar10);
    FUN_1407373c(iVar11,uVar10);
  }
  else {
    if (param_6 == 0) goto LAB_1406af2c;
LAB_1406aeb4:
    uVar10 = (uint)*(ushort *)(param_6 + 4);
    if ((uint)*(ushort *)(iVar5 + 0x2a) <= (uint)*(ushort *)(param_6 + 4)) {
      uVar10 = (uint)*(ushort *)(iVar5 + 0x2a);
    }
    if ((iVar11 != 0) && (uVar10 <= *(ushort *)(iVar11 + 8))) goto LAB_1406af34;
    FUN_140739f0(iVar5 + 0x1c,param_6);
    uVar6 = *(ushort *)(param_6 + 4) - uVar10 & 0xffff;
LAB_1406aee0:
    FUN_14073790(param_6,uVar6);
    FUN_1407358c(param_6);
  }
  *(short *)(iVar5 + 0x28) = *(short *)(iVar5 + 0x28) + (short)uVar10;
  *(short *)(iVar5 + 0x2a) = *(short *)(iVar5 + 0x2a) - (short)uVar10;
LAB_1406aefa:
  FUN_1406d210(param_1,iVar5,6,param_4);
  return 0;
}

