/* FUN_1010ea5c @ 0x1010ea5c */

float FUN_1010ea5c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  
  iVar2 = *(int *)(param_1 + 8) * param_3 + *(int *)(param_1 + 0x14);
  uVar4 = *(ushort *)(param_1 + 0xe) - 0x400 & 0xffff;
  if (uVar4 < 0x26) {
    bVar1 = *(byte *)(DAT_1010ebdc + uVar4);
    uVar10 = (uint)*(char *)(DAT_1010ebe0 + uVar4);
    uVar11 = (uint)*(char *)(DAT_1010ebe4 + uVar4);
    uVar9 = (uint)*(char *)(DAT_1010ebe8 + uVar4);
    uVar8 = (uint)*(char *)(DAT_1010ebec + uVar4);
    uVar6 = (uint)*(char *)(DAT_1010ebf0 + uVar4);
    uVar7 = (uint)*(char *)(DAT_1010ebf4 + uVar4);
    uVar4 = (uint)*(char *)(DAT_1010ebf8 + uVar4);
    if (bVar1 == 8) {
      uVar5 = (uint)*(byte *)(iVar2 + param_2);
    }
    else if (bVar1 < 9) {
      if (bVar1 == 2) {
        uVar5 = (int)(uint)*(byte *)(iVar2 + ((int)param_2 >> 2)) >> ((param_2 & 3) << 1) & 3;
      }
      else {
        if (bVar1 != 4) goto LAB_1010eab2;
        uVar5 = (int)(uint)*(byte *)(iVar2 + ((int)param_2 >> 1)) >> ((param_2 & 1) << 2) & 0xf;
      }
    }
    else if (bVar1 == 0x10) {
      uVar5 = (uint)*(ushort *)(iVar2 + param_2 * 2);
    }
    else {
      if (bVar1 != 0x20) goto LAB_1010eab2;
      uVar5 = *(uint *)(iVar2 + param_2 * 4);
    }
  }
  else {
    uVar4 = 0;
    uVar6 = uVar4;
    uVar7 = uVar4;
    uVar8 = uVar4;
    uVar9 = uVar4;
    uVar10 = uVar4;
    uVar11 = uVar4;
LAB_1010eab2:
    uVar5 = (int)(uint)*(byte *)(iVar2 + ((int)param_2 >> 3)) >> (param_2 & 7) & 1;
  }
  if (uVar10 == 0) {
    if (uVar11 == 0) {
      fVar12 = 1.0;
      goto LAB_1010eb4c;
    }
    fVar12 = 1.0;
LAB_1010eb02:
    uVar8 = (1 << (uVar11 & 0xff)) - 1;
    VectorSignedToFloat(uVar5 >> (uVar6 & 0xff) & uVar8,(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    if (uVar10 == 0) goto LAB_1010eb4c;
  }
  else {
    uVar3 = (1 << (uVar10 & 0xff)) - 1;
    fVar12 = (float)VectorSignedToFloat(uVar5 >> (uVar8 & 0xff) & uVar3,(byte)(in_fpscr >> 0x16) & 3
                                       );
    fVar13 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = fVar12 / fVar13;
    if (uVar11 != 0) goto LAB_1010eb02;
  }
  uVar6 = (1 << (uVar10 & 0xff)) - 1;
  VectorSignedToFloat(uVar5 >> (uVar7 & 0xff) & uVar6,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
LAB_1010eb4c:
  if (uVar9 != 0) {
    uVar6 = (1 << (uVar9 & 0xff)) - 1;
    VectorSignedToFloat(uVar5 >> (uVar4 & 0xff) & uVar6,(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  }
  return fVar12;
}

