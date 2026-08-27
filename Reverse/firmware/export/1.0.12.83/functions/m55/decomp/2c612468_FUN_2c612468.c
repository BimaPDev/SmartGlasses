/* FUN_2c612468 @ 0x2c612468 */

undefined1
FUN_2c612468(undefined4 param_1,int param_2,uint param_3,int param_4,short param_5,int param_6)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int local_50;
  int local_48;
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  
  uVar9 = (uint)*(byte *)(param_2 + 0x14);
  local_2c = *DAT_2c612760;
  iVar3 = 0;
  iVar12 = (int)param_5;
  sVar1 = (short)param_4;
  iVar5 = param_2;
  if (((uVar9 & 0x1e) == 4) || (uVar7 = uVar9 & 0x1f, uVar7 == 6)) {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      uVar15 = *(undefined4 *)(param_2 + 0x24);
      iVar12 = FUN_2c614f2c(uVar9 & 0x1f);
      uVar16 = FUN_2c62e030(uVar15,((int)(iVar12 * ((int)sVar1 *
                                                    (int)(short)(ushort)((uint)(*(int *)(param_2 +
                                                                                        0x14) << 0xb
                                                                               ) >> 0x15) + param_3)
                                         ) >> 3) + 4,0);
      iVar5 = (int)((ulonglong)uVar16 >> 0x20);
      iVar3 = (int)uVar16;
      if (iVar3 == 0) {
        iVar12 = (int)(short)(ushort)(byte)((uint)(iVar12 << 0x15) >> 0x18) * (int)param_5;
        local_48 = iVar3;
        uVar16 = FUN_2c62de74(uVar15,param_6,iVar12,&local_48);
        iVar5 = (int)((ulonglong)uVar16 >> 0x20);
        iVar3 = (int)uVar16;
        if ((iVar3 == 0) && (iVar12 - local_48 == 0)) {
          uVar13 = 1;
          goto LAB_2c6124a8;
        }
      }
    }
  }
  else if (uVar7 - 0xb < 4) {
    puVar14 = &local_3c;
    uVar15 = *(undefined4 *)(param_2 + 8);
    local_44[0] = 0xff00;
    local_40 = 0xffaa5500;
    local_3c = *DAT_2c612764;
    uStack_38 = DAT_2c612764[1];
    uStack_34 = DAT_2c612764[2];
    uStack_30 = DAT_2c612764[3];
    if (0 < iVar12) {
      puVar8 = (undefined4 *)(param_6 + -4);
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = uVar15;
      } while ((undefined4 *)(param_6 + (iVar12 - 1U & 0xffff) * 4) != puVar8);
      uVar9 = (uint)*(byte *)(param_2 + 0x14);
    }
    bVar2 = FUN_2c614f2c(uVar9 & 0x1f);
    switch(*(byte *)(param_2 + 0x14) & 0x1f) {
    case 0xb:
      puVar14 = (undefined4 *)local_44;
      puVar8 = (undefined4 *)(~param_3 & 7);
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 7) >> 3;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 3);
      break;
    case 0xc:
      puVar14 = &local_40;
      puVar8 = (undefined4 *)((~param_3 & 3) << 1);
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 3) >> 2;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 2);
      break;
    case 0xd:
      if ((param_3 & 1) == 0) {
        puVar8 = (undefined4 *)&Reset;
      }
      else {
        puVar8 = (undefined4 *)0x0;
      }
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 1) >> 1;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 1);
      break;
    case 0xe:
      puVar8 = (undefined4 *)0x0;
      puVar14 = (undefined4 *)0x0;
      local_50 = (int)sVar1 * (int)(short)(ushort)((*(uint *)(param_2 + 0x14) << 0xb) >> 0x15) +
                 param_3;
      uVar9 = (*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10;
      break;
    default:
      uVar9 = 0;
      puVar8 = (undefined4 *)0x0;
      local_50 = 0;
      puVar14 = puVar8;
    }
    uVar15 = *(undefined4 *)(param_2 + 0x24);
    uVar16 = FUN_2c62bf1c(uVar9);
    pbVar4 = (byte *)uVar16;
    iVar3 = 0;
    iVar5 = (int)((ulonglong)uVar16 >> 0x20);
    if (pbVar4 != (byte *)0x0) {
      if (*(char *)(param_2 + 0x10) == '\0') {
        pbVar6 = (byte *)(*(int *)(*(int *)(param_2 + 4) + 8) + local_50);
      }
      else {
        FUN_2c62e030(uVar15,local_50 + 4,0);
        FUN_2c62de74(uVar15,pbVar4,uVar9,0);
        pbVar6 = pbVar4;
      }
      if (0 < iVar12) {
        iVar3 = param_6 + 4;
        do {
          puVar10 = (undefined4 *)(int)(char)((char)puVar8 - bVar2);
          uVar9 = (int)(uint)*pbVar6 >> ((uint)puVar8 & 0xff) &
                  (int)(char)((char)(1 << (uint)bVar2) + -1) & 0xff;
          if ((*(byte *)(param_2 + 0x14) & 0x1f) != 0xe) {
            uVar9 = (uint)*(byte *)((int)puVar14 + uVar9);
          }
          *(char *)(param_6 + 3) = (char)uVar9;
          puVar8 = puVar10;
          if ((int)puVar10 < 0) {
            pbVar6 = pbVar6 + 1;
            puVar8 = (undefined4 *)(int)(char)('\b' - bVar2);
          }
          param_6 = param_6 + 4;
        } while (param_6 != iVar3 + (iVar12 - 1U & 0xffff) * 4);
      }
      uVar13 = 1;
      uVar16 = FUN_2c62c040(pbVar4);
      goto LAB_2c6124a8;
    }
  }
  else if (uVar7 - 7 < 4) {
    bVar2 = FUN_2c614f2c(uVar9 & 0x1f);
    switch(*(byte *)(param_2 + 0x14) & 0x1f) {
    case 7:
      uVar7 = ~param_3 & 7;
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 7) >> 3;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 3) + 8;
      break;
    case 8:
      uVar7 = (~param_3 & 3) << 1;
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 3) >> 2;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 2) + 0x10;
      break;
    case 9:
      if ((param_3 & 1) == 0) {
        uVar7 = 4;
      }
      else {
        uVar7 = 0;
      }
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 1) >> 1;
      local_50 = uVar9 * param_4 + ((int)param_3 >> 1) + 0x40;
      break;
    case 10:
      uVar7 = 0;
      uVar9 = (*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10;
      local_50 = (int)sVar1 * (int)(short)(ushort)((*(uint *)(param_2 + 0x14) << 0xb) >> 0x15) +
                 param_3 + 0x400;
      break;
    default:
      uVar9 = 0;
      uVar7 = 0;
      local_50 = 0;
    }
    iVar11 = *(int *)(param_2 + 0x24);
    uVar16 = FUN_2c62bf1c(uVar9);
    pbVar4 = (byte *)uVar16;
    iVar3 = 0;
    iVar5 = (int)((ulonglong)uVar16 >> 0x20);
    if (pbVar4 != (byte *)0x0) {
      if (*(char *)(param_2 + 0x10) == '\0') {
        pbVar6 = (byte *)(*(int *)(*(int *)(param_2 + 4) + 8) + local_50);
      }
      else {
        FUN_2c62e030(iVar11,local_50 + 4,0);
        FUN_2c62de74(iVar11,pbVar4,uVar9,0);
        pbVar6 = pbVar4;
      }
      if (0 < iVar12) {
        puVar14 = (undefined4 *)(param_6 + -4);
        do {
          uVar9 = (uint)(char)((char)uVar7 - bVar2);
          uVar7 = (int)(uint)*pbVar6 >> (uVar7 & 0xff) & (int)(char)((char)(1 << (uint)bVar2) + -1)
                  & 0xff;
          puVar8 = puVar14 + 1;
          *puVar8 = *(undefined4 *)(*(int *)(iVar11 + 0xc) + uVar7 * 4);
          *(undefined1 *)((int)puVar14 + 7) = *(undefined1 *)(*(int *)(iVar11 + 0x10) + uVar7);
          uVar7 = uVar9;
          if ((int)uVar9 < 0) {
            pbVar6 = pbVar6 + 1;
            uVar7 = (int)(char)('\b' - bVar2);
          }
          puVar14 = puVar8;
        } while ((undefined4 *)(param_6 + (iVar12 - 1U & 0xffff) * 4) != puVar8);
      }
      uVar13 = 1;
      uVar16 = FUN_2c62c040(pbVar4);
      goto LAB_2c6124a8;
    }
  }
  uVar16 = CONCAT44(iVar5,iVar3);
  uVar13 = 0;
LAB_2c6124a8:
  if ((*DAT_2c612760 ^ local_2c) == 0) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*DAT_2c612760 ^ local_2c,0);
}

