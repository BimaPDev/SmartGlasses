/* FUN_10118684 @ 0x10118684 */

code * FUN_10118684(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  code *local_24;
  
  iVar3 = DAT_101188c8;
  bVar2 = (byte)param_2[6];
  puVar6 = (undefined1 *)((int)param_2 + 0x43);
  local_24 = param_4;
  if (0x78 < bVar2) {
switchD_101186c0_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_1011872c:
    puVar6 = (undefined1 *)((int)param_2 + 0x42);
    uVar8 = 1;
LAB_10118878:
    param_2[4] = uVar8;
    *(undefined1 *)((int)param_2 + 0x43) = 0;
    goto LAB_101187d4;
  }
  if (bVar2 < 99) {
    if (bVar2 == 0) goto LAB_10118856;
    if (bVar2 == 0x58) {
      *(undefined1 *)((int)param_2 + 0x45) = 0x58;
      goto LAB_101187f8;
    }
    goto switchD_101186c0_caseD_65;
  }
  switch(bVar2) {
  case 99:
    uVar7 = *(undefined4 *)*param_5;
    *param_5 = (int)((undefined4 *)*param_5 + 1);
    *(char *)((int)param_2 + 0x42) = (char)uVar7;
    goto LAB_1011872c;
  case 100:
  case 0x69:
    uVar10 = *param_2;
    puVar9 = (uint *)*param_5;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar8 = *puVar9;
      *param_5 = (int)(puVar9 + 1);
    }
    else {
      uVar8 = *puVar9;
      *param_5 = (int)(puVar9 + 1);
      if ((uVar10 & 0x40) != 0) {
        uVar8 = (uint)(short)uVar8;
      }
    }
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
    }
    uVar10 = 10;
    iVar3 = DAT_101188c8;
    goto LAB_10118786;
  default:
    goto switchD_101186c0_caseD_65;
  case 0x6e:
    puVar11 = (undefined4 *)*param_5;
    uVar10 = *param_2;
    uVar8 = param_2[5];
    *param_5 = (int)(puVar11 + 1);
    puVar9 = (uint *)*puVar11;
    if (((int)(uVar10 << 0x18) < 0) || (-1 < (int)(uVar10 << 0x19))) {
      *puVar9 = uVar8;
    }
    else {
      *(short *)puVar9 = (short)uVar8;
    }
LAB_10118856:
    param_2[4] = 0;
    goto LAB_101187d4;
  case 0x6f:
  case 0x75:
    puVar9 = (uint *)*param_5;
    uVar8 = *param_2;
    *param_5 = (int)(puVar9 + 1);
    if (((int)(uVar8 << 0x18) < 0) || (-1 < (int)(uVar8 << 0x19))) {
      uVar8 = *puVar9;
    }
    else {
      uVar8 = (uint)(ushort)*puVar9;
    }
    iVar3 = DAT_101188c8;
    if (bVar2 == 0x6f) {
      uVar10 = 8;
    }
    else {
      uVar10 = 10;
    }
    break;
  case 0x70:
    *param_2 = *param_2 | 0x20;
  case 0x78:
    iVar3 = DAT_101188cc;
    *(undefined1 *)((int)param_2 + 0x45) = 0x78;
LAB_101187f8:
    uVar10 = *param_2;
    uVar8 = *(uint *)*param_5;
    *param_5 = (int)((uint *)*param_5 + 1);
    if ((-1 < (int)(uVar10 << 0x18)) && ((int)(uVar10 << 0x19) < 0)) {
      uVar8 = uVar8 & 0xffff;
    }
    if ((int)(uVar10 << 0x1f) < 0) {
      *param_2 = uVar10 | 0x20;
    }
    if (uVar8 == 0) {
      *param_2 = *param_2 & 0xffffffdf;
    }
    uVar10 = 0x10;
    break;
  case 0x73:
    puVar11 = (undefined4 *)*param_5;
    *param_5 = (int)(puVar11 + 1);
    puVar6 = (undefined1 *)*puVar11;
    iVar3 = FUN_1011ea50(puVar6,0,param_2[1],puVar11,param_1,param_2,param_3);
    if (iVar3 != 0) {
      param_2[1] = iVar3 - (int)puVar6;
    }
    uVar8 = param_2[1];
    goto LAB_10118878;
  }
  *(undefined1 *)((int)param_2 + 0x43) = 0;
LAB_10118786:
  uVar12 = param_2[1];
  param_2[2] = uVar12;
  if (-1 < (int)uVar12) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  puVar13 = puVar6;
  if ((uVar8 != 0) || (uVar12 != 0)) {
    do {
      puVar13 = puVar13 + -1;
      *puVar13 = *(undefined1 *)(iVar3 + (uVar8 - uVar10 * (uVar8 / uVar10)));
      bVar1 = uVar10 <= uVar8;
      uVar8 = uVar8 / uVar10;
    } while (bVar1);
  }
  if (((uVar10 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    puVar13[-1] = 0x30;
    puVar13 = puVar13 + -1;
  }
  param_2[4] = (int)puVar6 - (int)puVar13;
  puVar6 = puVar13;
LAB_101187d4:
  iVar3 = FUN_1013d226(param_1,param_2,&local_24,param_3,param_4);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,puVar6,param_2[4]), iVar3 == -1)) {
LAB_101187e8:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_101187e8;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}

