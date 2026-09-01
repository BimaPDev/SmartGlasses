/* FUN_1010ebfc @ 0x1010ebfc */

void FUN_1010ebfc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  uVar7 = *(ushort *)(param_1 + 0xe) - 0x400 & 0xffff;
  if (0x25 < uVar7) {
    iVar9 = 0;
    uVar6 = 0;
    iVar5 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    uVar7 = uVar6;
    uVar8 = uVar6;
    goto LAB_1010ec6a;
  }
  bVar2 = *(byte *)(DAT_1010ed28 + uVar7);
  bVar1 = *(byte *)(DAT_1010ed2c + uVar7);
  bVar3 = *(byte *)(DAT_1010ed30 + uVar7);
  bVar4 = *(byte *)(DAT_1010ed38 + uVar7);
  iVar9 = (int)(char)bVar4;
  local_38 = (uint)*(char *)(DAT_1010ed34 + uVar7);
  local_34 = (uint)*(char *)(DAT_1010ed3c + uVar7);
  local_40 = (uint)*(char *)(DAT_1010ed40 + uVar7);
  local_3c = (uint)*(char *)(DAT_1010ed44 + uVar7);
  if (bVar3 == 0) {
    if (iVar9 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
LAB_1010ecd0:
      iVar9 = FUN_1013b608(param_4[1],(1 << (uint)bVar4) + -1);
      if (bVar3 != 0) goto LAB_1010ece8;
      uVar6 = 0;
    }
  }
  else {
    uVar7 = FUN_1013b608(*param_4,(1 << (uint)bVar3) + -1);
    if (iVar9 != 0) goto LAB_1010ecd0;
LAB_1010ece8:
    uVar6 = FUN_1013b608(param_4[2],(1 << (uint)bVar3) + -1);
  }
  uVar8 = (uint)bVar2;
  if (bVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_1013b608(param_4[3],(1 << (uint)bVar1) + -1);
  }
LAB_1010ec6a:
  uVar7 = uVar7 << (local_38 & 0xff) | iVar9 << (local_34 & 0xff) | uVar6 << (local_40 & 0xff) |
          iVar5 << (local_3c & 0xff);
  iVar9 = *(int *)(param_1 + 8) * param_3 + *(int *)(param_1 + 0x14);
  if (uVar8 == 8) {
    *(char *)(iVar9 + param_2) = (char)uVar7;
  }
  else if (8 < uVar8) {
    if (uVar8 == 0x10) {
      *(short *)(iVar9 + param_2 * 2) = (short)uVar7;
    }
    else if (uVar8 == 0x20) {
      *(uint *)(iVar9 + param_2 * 4) = uVar7;
    }
  }
  return;
}

