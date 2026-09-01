/* FUN_100fcd00 @ 0x100fcd00 */

undefined4 FUN_100fcd00(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  cVar1 = *(char *)(param_1 + 0x5c);
  if (cVar1 == '\x01') {
    uVar7 = *(uint *)(param_1 + 0x40);
    if ((int)uVar7 <= param_3) goto LAB_100fcd28;
    iVar10 = *(int *)(param_1 + 0x50);
    uVar9 = *(uint *)(param_1 + 0x24);
    iVar4 = uVar9 - *(int *)(iVar10 + 8);
    if (iVar4 < 0) {
LAB_100fcf9e:
      *(undefined4 *)(param_1 + 0x28) = 99;
      return 1;
    }
    iVar5 = *(int *)(param_1 + 8);
    uVar3 = *(int *)(param_1 + 4) - 1U & uVar7;
    uVar6 = uVar9;
    if (iVar4 != 0) {
      *(int *)(iVar10 + 0x10) = iVar4 >> 2;
      if (iVar5 <= (int)uVar3) {
        uVar2 = *(ushort *)(iVar10 + 0xc);
        if ((uVar2 & 8) == 0) {
          uVar2 = uVar2 | 0x20;
        }
        else {
          uVar2 = uVar2 | 0x10;
        }
        *(ushort *)(iVar10 + 0xc) = uVar2;
      }
      uVar6 = uVar9 + 0x20;
      *(uint *)(param_1 + 0x50) = uVar9;
      *(uint *)(param_1 + 0x24) = uVar6;
      *(uint *)(uVar9 + 8) = uVar6;
      *(undefined4 *)(uVar9 + 0x10) = 0;
      *(uint *)(iVar10 + 0x1c) = uVar9;
      *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + 1;
    }
    if (*(uint *)(param_1 + 0x20) <= uVar6) {
LAB_100fcf86:
      *(undefined4 *)(param_1 + 0x28) = 0x62;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x4f) = 0;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(uint *)(param_1 + 0x50) = uVar6;
      *(uint *)(param_1 + 0x54) = uVar6;
      uVar6 = uVar6 + 0x20;
      *(uint *)(param_1 + 0x24) = uVar6;
      if (*(uint *)(param_1 + 0x20) <= uVar6) goto LAB_100fcf86;
    }
    iVar4 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 4) = 0;
    *(uint *)(iVar4 + 8) = uVar6;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    uVar2 = (ushort)*(byte *)(param_1 + 0xa4);
    if (iVar5 <= (int)uVar3) {
      uVar2 = *(byte *)(param_1 + 0xa4) | 0x10;
    }
    *(ushort *)(iVar4 + 0xc) = uVar2;
    if (*(int *)(param_1 + 0x58) == 0) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
LAB_100fce62:
    *(undefined1 *)(param_1 + 0x5c) = 2;
    *(undefined2 *)(param_1 + 0x4e) = 1;
    iVar4 = FUN_100fc030(param_1,*(undefined4 *)(param_1 + 0x3c),-uVar7,param_2,-param_3,
                         -*(int *)(param_1 + 0x48),-*(int *)(param_1 + 0x44));
LAB_100fcdba:
    if (*(char *)(param_1 + 0x4e) == '\0') {
      *(int *)(*(int *)(param_1 + 0x50) + 0x14) = -*(int *)(*(int *)(param_1 + 0x50) + 0x14);
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar7 = *(uint *)(param_1 + 0x40);
      if (param_3 <= (int)uVar7) {
        cVar1 = *(char *)(param_1 + 0x4e);
        iVar4 = FUN_100fc030(param_1,*(undefined4 *)(param_1 + 0x3c),-uVar7,param_2,-param_3,
                             -*(int *)(param_1 + 0x48),-*(int *)(param_1 + 0x44));
        if (cVar1 != '\0') goto LAB_100fcdba;
        goto joined_r0x100fcdcc;
      }
      iVar10 = *(int *)(param_1 + 0x50);
      uVar9 = *(uint *)(param_1 + 0x24);
      iVar4 = uVar9 - *(int *)(iVar10 + 8);
      if (iVar4 < 0) goto LAB_100fcf9e;
      iVar8 = *(int *)(param_1 + 8);
      iVar5 = ((uVar7 + *(int *)(param_1 + 4)) - 1 & -*(int *)(param_1 + 4)) - uVar7;
      uVar6 = uVar9;
      if (iVar4 != 0) {
        *(int *)(iVar10 + 0x10) = iVar4 >> 2;
        if (iVar8 <= iVar5) {
          uVar2 = *(ushort *)(iVar10 + 0xc);
          if ((int)((uint)uVar2 << 0x1c) < 0) {
            uVar2 = uVar2 | 0x10;
          }
          else {
            uVar2 = uVar2 | 0x20;
          }
          *(ushort *)(iVar10 + 0xc) = uVar2;
        }
        uVar6 = uVar9 + 0x20;
        *(uint *)(param_1 + 0x50) = uVar9;
        *(uint *)(param_1 + 0x24) = uVar6;
        *(uint *)(uVar9 + 8) = uVar6;
        *(undefined4 *)(uVar9 + 0x10) = 0;
        *(uint *)(iVar10 + 0x1c) = uVar9;
        *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + 1;
      }
      if (*(uint *)(param_1 + 0x20) <= uVar6) goto LAB_100fcf86;
      *(undefined1 *)(param_1 + 0x4f) = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        *(uint *)(param_1 + 0x50) = uVar6;
        *(uint *)(param_1 + 0x54) = uVar6;
        uVar6 = uVar6 + 0x20;
        *(uint *)(param_1 + 0x24) = uVar6;
        if (*(uint *)(param_1 + 0x20) <= uVar6) goto LAB_100fcf86;
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(uint *)(iVar4 + 8) = uVar6;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      if (iVar5 < iVar8) {
        uVar2 = *(byte *)(param_1 + 0xa4) | 8;
      }
      else {
        uVar2 = *(byte *)(param_1 + 0xa4) | 0x28;
      }
      *(ushort *)(iVar4 + 0xc) = uVar2;
    }
    else {
      if (cVar1 != '\0') goto LAB_100fcd18;
      uVar7 = *(uint *)(param_1 + 0x40);
      if (param_3 <= (int)uVar7) {
        if ((int)uVar7 <= param_3) goto LAB_100fcd18;
        iVar4 = *(int *)(param_1 + 4);
        iVar10 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar5 = *(int *)(param_1 + 0x24);
          uVar9 = iVar5 + 0x20;
          *(int *)(param_1 + 0x50) = iVar5;
          *(int *)(param_1 + 0x54) = iVar5;
          *(uint *)(param_1 + 0x24) = uVar9;
        }
        else {
          uVar9 = *(uint *)(param_1 + 0x24);
        }
        if (*(uint *)(param_1 + 0x20) <= uVar9) goto LAB_100fcf86;
        iVar8 = *(int *)(param_1 + 0x50);
        *(undefined4 *)(iVar8 + 0x10) = 0;
        *(undefined4 *)(iVar8 + 0x14) = 0;
        *(undefined4 *)(iVar8 + 4) = 0;
        *(uint *)(iVar8 + 8) = uVar9;
        *(undefined4 *)(iVar8 + 0x1c) = 0;
        uVar2 = (ushort)*(byte *)(param_1 + 0xa4);
        iVar5 = *(int *)(param_1 + 0x58);
        if (iVar10 <= (int)(iVar4 - 1U & uVar7)) {
          uVar2 = *(byte *)(param_1 + 0xa4) | 0x10;
        }
        *(ushort *)(iVar8 + 0xc) = uVar2;
        if (iVar5 == 0) {
          *(int *)(param_1 + 0x58) = iVar8;
        }
        goto LAB_100fce62;
      }
      iVar10 = *(int *)(param_1 + 4);
      iVar5 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar4 = *(int *)(param_1 + 0x24);
        uVar9 = iVar4 + 0x20;
        *(int *)(param_1 + 0x50) = iVar4;
        *(int *)(param_1 + 0x54) = iVar4;
        *(uint *)(param_1 + 0x24) = uVar9;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x24);
      }
      if (*(uint *)(param_1 + 0x20) <= uVar9) goto LAB_100fcf86;
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(uint *)(iVar4 + 8) = uVar9;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      if ((int)(((uVar7 + iVar10) - 1 & -iVar10) - uVar7) < iVar5) {
        uVar2 = *(byte *)(param_1 + 0xa4) | 8;
      }
      else {
        uVar2 = *(byte *)(param_1 + 0xa4) | 0x28;
      }
      *(ushort *)(iVar4 + 0xc) = uVar2;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 1;
LAB_100fcd28:
    iVar4 = FUN_100fc030(param_1,*(undefined4 *)(param_1 + 0x3c),uVar7,param_2,param_3,
                         *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  }
joined_r0x100fcdcc:
  if (iVar4 != 0) {
    return 1;
  }
LAB_100fcd18:
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(int *)(param_1 + 0x40) = param_3;
  return 0;
}

