/* FUN_1008b9e4 @ 0x1008b9e4 */

void FUN_1008b9e4(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_10092f04(), param_1 == (int *)0x0)) {
    return;
  }
  iVar2 = FUN_10086d7c(param_1);
  if (iVar2 == 0) {
    return;
  }
  local_40 = *(byte *)(param_1 + 10) & 4;
  if ((*(byte *)(param_1 + 10) & 4) != 0) {
    FUN_10094174(3,DAT_1008bbb0,0x11b,DAT_1008bbac,DAT_1008bba8);
    return;
  }
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x94) = 0;
    return;
  }
  local_3c = local_40;
  local_38 = FUN_10092f10(param_1);
  local_38 = local_38 + -1;
  local_34 = FUN_10092f2c(param_1);
  local_34 = local_34 + -1;
  iVar2 = FUN_1012a896(&local_30,param_2,&local_40);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *param_1;
  if ((int)((uint)*(byte *)(iVar2 + 0x1c) << 0x1e) < 0) {
    param_1[0xc] = local_40;
    param_1[0xd] = local_3c;
    param_1[0xe] = local_38;
    param_1[0xf] = local_34;
    *(undefined2 *)(param_1 + 0x94) = 1;
    goto LAB_1008ba6c;
  }
  if (*(code **)(iVar2 + 0x24) != (code *)0x0) {
    (**(code **)(iVar2 + 0x24))(iVar2,&local_30);
  }
  sVar5 = 0;
  uVar1 = *(ushort *)(param_1 + 0x94);
  uVar4 = (uint)uVar1;
  do {
    iVar2 = (int)sVar5;
    if ((int)uVar4 <= iVar2) {
      if (0 < iVar2) goto LAB_1008baa4;
      goto LAB_1008bb24;
    }
    sVar5 = sVar5 + 1;
  } while (param_1[iVar2 * 4 + 0xd] < local_2c);
  if (iVar2 < 1) {
LAB_1008bb14:
    if ((param_1[iVar2 * 4 + 0xd] <= local_24) && (-1 < iVar2)) {
LAB_1008bab2:
      piVar8 = param_1 + (iVar2 + 3) * 4;
      uVar4 = (uint)(short)uVar1;
      iVar7 = (int)(short)((short)iVar2 + 1);
      FUN_1012a8da(piVar8,piVar8,&local_30);
      piVar3 = param_1 + iVar7 * 4;
      while ((sVar5 = (short)iVar7, iVar7 < (int)uVar4 && (piVar3[0xd] <= param_1[iVar2 * 4 + 0xf]))
            ) {
        FUN_1012a8da(piVar8,piVar8,piVar3 + 0xc);
        *(short *)(param_1 + 0x94) = (short)param_1[0x94] + -1;
        iVar7 = (int)(short)(sVar5 + 1);
        piVar3 = piVar3 + 4;
      }
      if (uVar4 != *(ushort *)(param_1 + 0x94)) {
        piVar3 = param_1 + iVar7 * 4;
        while( true ) {
          iVar6 = (int)(short)(((short)iVar2 - sVar5) + (short)iVar7);
          if ((int)uVar4 <= iVar7) break;
          param_1[iVar6 * 4 + 0x10] = piVar3[0xc];
          param_1[iVar6 * 4 + 0x11] = piVar3[0xd];
          param_1[(iVar6 + 1) * 4 + 0xe] = piVar3[0xe];
          iVar7 = (int)(short)((short)iVar7 + 1);
          param_1[(iVar6 + 1) * 4 + 0xf] = piVar3[0xf];
          piVar3 = piVar3 + 4;
        }
      }
      goto LAB_1008ba6c;
    }
  }
  else {
LAB_1008baa4:
    if (local_2c <= param_1[(iVar2 + -1) * 4 + 0xf]) {
      iVar2 = (int)(short)(iVar2 + -1);
      goto LAB_1008bab2;
    }
    if (iVar2 < (int)uVar4) goto LAB_1008bb14;
  }
LAB_1008bb24:
  if (uVar4 < 0x20) {
    piVar3 = param_1 + uVar4 * 4;
    for (; iVar2 < (short)uVar4; uVar4 = uVar4 - 1) {
      piVar3[0xc] = piVar3[8];
      piVar3[0xd] = piVar3[9];
      piVar3[0xe] = piVar3[10];
      piVar3[0xf] = piVar3[0xb];
      piVar3 = piVar3 + -4;
    }
    *(ushort *)(param_1 + 0x94) = uVar1 + 1;
    param_1[iVar2 * 4 + 0xc] = local_30;
    param_1[iVar2 * 4 + 0xd] = local_2c;
    param_1[iVar2 * 4 + 0xe] = local_28;
    param_1[iVar2 * 4 + 0xf] = local_24;
  }
  else {
    *(undefined2 *)(param_1 + 0x94) = 1;
    param_1[0x10] = local_40;
    param_1[0x11] = local_3c;
    param_1[0x12] = local_38;
    param_1[0x13] = local_34;
  }
LAB_1008ba6c:
  if (param_1[1] != 0) {
    FUN_1012b32c();
  }
  return;
}

