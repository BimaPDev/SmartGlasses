/* FUN_1008d3c0 @ 0x1008d3c0 */

undefined4
FUN_1008d3c0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,undefined1 *param_6
            )

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined2 local_40 [2];
  int local_3c;
  int local_38 [5];
  
  uVar3 = (uint)*(byte *)(param_2 + 0x14);
  if (((uVar3 & 0x1e) == 4) || (uVar9 = uVar3 & 0x1f, uVar9 == 6)) {
    if (*(char *)(param_2 + 0x10) != '\x01') {
      return 0;
    }
    uVar13 = *(undefined4 *)(param_2 + 0x24);
    uVar3 = FUN_1008c0b0(uVar3 & 0x1f);
    iVar4 = FUN_1012af70(uVar13,((int)(uVar3 * (param_4 * ((*(uint *)(param_2 + 0x14) & 0x1fffff) >>
                                                          10) + param_3)) >> 3) + 4,0);
    if (iVar4 == 0) {
      param_5 = param_5 * ((uVar3 & 0x7ff) >> 3);
      local_38[0] = iVar4;
      iVar4 = FUN_10093c80(uVar13,param_6,param_5,local_38);
      if ((iVar4 == 0) && (param_5 - local_38[0] == 0)) {
        return 1;
      }
      uVar13 = 0x22b;
      uVar15 = DAT_1008d70c;
      uVar16 = DAT_1008d714;
    }
    else {
      uVar13 = 0x224;
      uVar15 = DAT_1008d70c;
      uVar16 = DAT_1008d708;
    }
LAB_1008d41e:
    FUN_10094174(2,DAT_1008d710,uVar13,uVar15,uVar16);
    return 0;
  }
  if (3 < uVar9 - 0xb) {
    if (3 < uVar9 - 7) {
      uVar13 = 0x1f8;
      uVar15 = DAT_1008d720;
      uVar16 = DAT_1008d71c;
      goto LAB_1008d41e;
    }
    bVar2 = FUN_1008c0b0(uVar3 & 0x1f);
    switch(*(byte *)(param_2 + 0x14) & 0x1f) {
    case 7:
      uVar3 = ~param_3 & 7;
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 7) >> 3;
      uVar8 = uVar9 * param_4 + ((int)param_3 >> 3) + 8;
      break;
    case 8:
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 3) >> 2;
      uVar3 = (~param_3 & 3) << 1;
      uVar8 = uVar9 * param_4 + ((int)param_3 >> 2) + 0x10;
      break;
    case 9:
      uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 1) >> 1;
      if ((param_3 & 1) == 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = 0;
      }
      uVar8 = uVar9 * param_4 + ((int)param_3 >> 1) + 0x40;
      break;
    case 10:
      uVar9 = (*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10;
      uVar8 = uVar9 * param_4 + param_3 + 0x400;
      uVar3 = 0;
      break;
    default:
      uVar8 = 0;
      uVar3 = uVar8;
      uVar9 = uVar8;
    }
    iVar4 = *(int *)(param_2 + 0x24);
    pbVar5 = (byte *)FUN_100942d8(uVar9);
    if (pbVar5 == (byte *)0x0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x10) == '\0') {
      pbVar7 = (byte *)(uVar8 + *(int *)(*(int *)(param_2 + 4) + 8));
    }
    else {
      FUN_1012af70(iVar4,uVar8 + 4,0);
      FUN_10093c80(iVar4,pbVar5,uVar9,0);
      pbVar7 = pbVar5;
    }
    for (iVar6 = 0; iVar6 < param_5; iVar6 = iVar6 + 1) {
      uVar9 = (int)(uint)*pbVar7 >> (uVar3 & 0xff) & (int)(short)((short)(1 << (uint)bVar2) + -1) &
              0xff;
      uVar1 = *(undefined2 *)(*(int *)(iVar4 + 0xc) + uVar9 * 2);
      *param_6 = (char)uVar1;
      param_6[1] = (char)((ushort)uVar1 >> 8);
      uVar3 = (uint)(char)((char)uVar3 - bVar2);
      param_6[2] = *(undefined1 *)(*(int *)(iVar4 + 0x10) + uVar9);
      if ((int)uVar3 < 0) {
        pbVar7 = pbVar7 + 1;
        uVar3 = (int)(char)('\b' - bVar2);
      }
      param_6 = param_6 + 3;
    }
    goto LAB_1008d51e;
  }
  piVar14 = local_38;
  local_40[0] = 0xff00;
  local_3c = -0x55ab00;
  piVar11 = piVar14;
  piVar12 = DAT_1008d718;
  do {
    iVar4 = *piVar12;
    iVar6 = piVar12[1];
    piVar12 = piVar12 + 2;
    *piVar11 = iVar4;
    piVar11[1] = iVar6;
    piVar11 = piVar11 + 2;
  } while (piVar12 != DAT_1008d718 + 4);
  uVar1 = *(undefined2 *)(param_2 + 8);
  puVar10 = param_6;
  for (iVar4 = 0; iVar4 < param_5; iVar4 = iVar4 + 1) {
    *puVar10 = (char)uVar1;
    puVar10[1] = (char)((ushort)uVar1 >> 8);
    puVar10 = puVar10 + 3;
  }
  bVar2 = FUN_1008c0b0(*(byte *)(param_2 + 0x14) & 0x1f);
  switch(*(byte *)(param_2 + 0x14) & 0x1f) {
  case 0xb:
    piVar11 = (int *)(~param_3 & 7);
    uVar3 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 7) >> 3;
    uVar9 = uVar3 * param_4 + ((int)param_3 >> 3);
    piVar14 = (int *)local_40;
    break;
  case 0xc:
    uVar3 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 3) >> 2;
    uVar9 = uVar3 * param_4 + ((int)param_3 >> 2);
    piVar11 = (int *)((~param_3 & 3) << 1);
    piVar14 = &local_3c;
    break;
  case 0xd:
    uVar3 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 1) >> 1;
    if ((param_3 & 1) == 0) {
      piVar11 = (int *)&Reset;
    }
    else {
      piVar11 = (int *)0x0;
    }
    uVar9 = uVar3 * param_4 + ((int)param_3 >> 1);
    break;
  case 0xe:
    uVar3 = (*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10;
    uVar9 = uVar3 * param_4 + param_3;
    goto LAB_1008d574;
  default:
    uVar9 = 0;
    uVar3 = uVar9;
LAB_1008d574:
    piVar11 = (int *)0x0;
    piVar14 = piVar11;
  }
  uVar15 = *(undefined4 *)(param_2 + 0x24);
  pbVar5 = (byte *)FUN_100942d8(uVar3);
  uVar13 = 0;
  if (pbVar5 != (byte *)0x0) {
    if (*(char *)(param_2 + 0x10) == '\0') {
      pbVar7 = (byte *)(uVar9 + *(int *)(*(int *)(param_2 + 4) + 8));
    }
    else {
      FUN_1012af70(uVar15,uVar9 + 4,0);
      FUN_10093c80(uVar15,pbVar5,uVar3,0);
      pbVar7 = pbVar5;
    }
    for (iVar4 = 0; iVar4 < param_5; iVar4 = iVar4 + 1) {
      uVar3 = (int)(uint)*pbVar7 >> ((uint)piVar11 & 0xff) &
              (int)(short)((short)(1 << (uint)bVar2) + -1) & 0xff;
      if ((*(byte *)(param_2 + 0x14) & 0x1f) != 0xe) {
        uVar3 = (uint)*(byte *)((int)piVar14 + uVar3);
      }
      piVar12 = (int *)(int)(char)((char)piVar11 - bVar2);
      piVar11 = piVar12;
      if ((int)piVar12 < 0) {
        piVar11 = (int *)(int)(char)('\b' - bVar2);
      }
      param_6[iVar4 * 3 + 2] = (char)uVar3;
      if ((int)piVar12 < 0) {
        pbVar7 = pbVar7 + 1;
      }
    }
LAB_1008d51e:
    FUN_10094444(pbVar5);
    uVar13 = 1;
  }
  return uVar13;
}

