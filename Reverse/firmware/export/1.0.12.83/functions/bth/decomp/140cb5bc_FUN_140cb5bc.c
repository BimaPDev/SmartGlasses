/* FUN_140cb5bc @ 0x140cb5bc */

uint FUN_140cb5bc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_r4;
  uint uVar7;
  
  uVar1 = FUN_140db264(*(undefined4 *)(param_1 + 0x20));
  puVar4 = *(uint **)(param_1 + 0x20);
  iVar3 = *DAT_140de8b4;
  if (uVar1 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 0)) {
    FUN_140dac50();
  }
  if (puVar4 == DAT_140de89c) {
    puVar4 = *(uint **)(iVar3 + 4);
  }
  else if (puVar4 == DAT_140de8a0) {
    puVar4 = *(uint **)(iVar3 + 8);
  }
  else if (puVar4 == DAT_140de8a4) {
    puVar4 = *(uint **)(iVar3 + 0xc);
  }
  if ((-1 < (int)(puVar4[0x19] << 0x1f)) && (-1 < (int)((uint)(ushort)puVar4[3] << 0x16))) {
    FUN_140db620(puVar4[0x16]);
  }
  uVar5 = (uint)(short)(ushort)puVar4[3];
  *(ushort *)(puVar4 + 3) = (ushort)puVar4[3] & 0xffdf;
  if ((int)(uVar5 << 0x1d) < 0) {
LAB_140de81c:
    uVar7 = uVar1 & 0xff;
    uVar5 = puVar4[1];
    if (puVar4[0xd] == 0) {
      uVar6 = *puVar4;
      if (((puVar4[4] == 0) || (uVar6 <= puVar4[4])) || (*(byte *)(uVar6 - 1) != uVar7)) {
        puVar4[0xf] = uVar6;
        puVar4[0x10] = uVar5;
        puVar4[0xd] = (uint)(puVar4 + 0x11);
        puVar4[0xe] = 3;
        *(undefined1 *)((int)puVar4 + 0x46) = (char)uVar1;
        *puVar4 = (uint)((int)puVar4 + 0x46);
        puVar4[1] = 1;
      }
      else {
        *puVar4 = uVar6 - 1;
        puVar4[1] = uVar5 + 1;
      }
      if ((puVar4[0x19] & 1) != 0) {
        return uVar7;
      }
LAB_140de84c:
      if (-1 < (int)((uint)(ushort)puVar4[3] << 0x16)) {
        FUN_140db624(puVar4[0x16]);
        return uVar7;
      }
      return uVar7;
    }
    if (((int)uVar5 < (int)puVar4[0xe]) || (iVar3 = FUN_140de708(iVar3,puVar4), iVar3 == 0)) {
      uVar5 = *puVar4;
      *puVar4 = uVar5 - 1;
      *(char *)(uVar5 - 1) = (char)uVar1;
      puVar4[1] = puVar4[1] + 1;
      if ((int)(puVar4[0x19] << 0x1f) < 0) {
        return uVar7;
      }
      goto LAB_140de84c;
    }
  }
  else {
    if (-1 < (int)(uVar5 << 0x1b)) {
      if ((int)(puVar4[0x19] << 0x1f) < 0) {
        return 0xffffffff;
      }
      goto LAB_140de7ce;
    }
    if (-1 < (int)(uVar5 << 0x1c)) {
LAB_140de814:
      *(ushort *)(puVar4 + 3) = (ushort)puVar4[3] | 4;
      goto LAB_140de81c;
    }
    iVar2 = FUN_140dab04(iVar3,puVar4,uVar5 & 0xffdf,uVar5 << 0x1b,unaff_r4);
    if (iVar2 == 0) {
      puVar4[2] = 0;
      puVar4[6] = 0;
      *(ushort *)(puVar4 + 3) = (ushort)puVar4[3] & 0xfff7;
      goto LAB_140de814;
    }
  }
  if ((int)(puVar4[0x19] << 0x1f) < 0) {
    return 0xffffffff;
  }
  uVar5 = (uint)(ushort)puVar4[3];
LAB_140de7ce:
  if ((uVar5 & 0x200) == 0) {
    FUN_140db624(puVar4[0x16]);
  }
  return 0xffffffff;
}

