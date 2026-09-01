/* FUN_10054a1c @ 0x10054a1c */

uint FUN_10054a1c(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar7 = (uint)bVar1;
  if (uVar7 == 0x10) {
    uVar7 = FUN_100548ec(*(undefined4 *)(param_1 + 0x10));
    return uVar7;
  }
  if (0x10 < uVar7) {
    if (uVar7 == 0x40) {
      piVar8 = *(int **)(param_1 + 8);
      if (*(int *)(param_2 + 0x14) == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = 2;
      }
      puVar2 = (undefined1 *)FUN_1011a520(param_2,iVar4 + 1);
      if (puVar2 == (undefined1 *)0x0) {
        return 0;
      }
      *puVar2 = 0x7b;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      if (*(int *)(param_2 + 0x14) != 0) {
        puVar2[1] = 10;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar4;
      while (piVar8 != (int *)0x0) {
        if (*(int *)(param_2 + 0x14) != 0) {
          puVar6 = (undefined1 *)FUN_1011a520(param_2,*(undefined4 *)(param_2 + 0xc));
          puVar2 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            return 0;
          }
          for (; (uint)((int)puVar2 - (int)puVar6) < *(uint *)(param_2 + 0xc); puVar2 = puVar2 + 1)
          {
            *puVar2 = 9;
          }
          *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + *(uint *)(param_2 + 0xc);
        }
        iVar4 = FUN_100548ec(piVar8[8],param_2);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_1011a4de(param_2);
        if (*(int *)(param_2 + 0x14) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = 2;
        }
        puVar2 = (undefined1 *)FUN_1011a520(param_2,iVar4);
        if (puVar2 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar2 = 0x3a;
        if (*(int *)(param_2 + 0x14) != 0) {
          puVar2[1] = 9;
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar4;
        iVar4 = FUN_10054a1c(piVar8,param_2);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_1011a4de(param_2);
        uVar7 = (uint)(*piVar8 != 0);
        if (*(int *)(param_2 + 0x14) != 0) {
          uVar7 = uVar7 + 1;
        }
        puVar2 = (undefined1 *)FUN_1011a520(param_2,uVar7 + 1);
        if (puVar2 == (undefined1 *)0x0) {
          return 0;
        }
        puVar6 = puVar2;
        if (*piVar8 != 0) {
          puVar6 = puVar2 + 1;
          *puVar2 = 0x2c;
        }
        puVar2 = puVar6;
        if (*(int *)(param_2 + 0x14) != 0) {
          puVar2 = puVar6 + 1;
          *puVar6 = 10;
        }
        *puVar2 = 0;
        piVar8 = (int *)*piVar8;
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar7;
      }
      if (*(int *)(param_2 + 0x14) == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = *(int *)(param_2 + 0xc) + 1;
      }
      puVar2 = (undefined1 *)FUN_1011a520(param_2,iVar4);
      if (puVar2 == (undefined1 *)0x0) {
        return 0;
      }
      puVar6 = puVar2;
      if (*(int *)(param_2 + 0x14) != 0) {
        for (; (uint)((int)puVar6 - (int)puVar2) < *(int *)(param_2 + 0xc) - 1U; puVar6 = puVar6 + 1
            ) {
          *puVar6 = 9;
        }
      }
      *puVar6 = 0x7d;
      puVar6[1] = 0;
    }
    else {
      if (uVar7 == 0x80) {
        if (*(int *)(param_1 + 0x10) == 0) {
          return 0;
        }
        iVar4 = FUN_1011ea10();
        iVar3 = FUN_1011a520(param_2,iVar4 + 1);
        if (iVar3 != 0) {
          FUN_1011ea40(iVar3,*(undefined4 *)(param_1 + 0x10),iVar4 + 1);
          return 1;
        }
        return 0;
      }
      if (uVar7 != 0x20) {
        return 0;
      }
      piVar8 = *(int **)(param_1 + 8);
      puVar2 = (undefined1 *)FUN_1011a520(param_2,1);
      if (puVar2 == (undefined1 *)0x0) {
        return 0;
      }
      *puVar2 = 0x5b;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      for (; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
        iVar4 = FUN_10054a1c(piVar8,param_2);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_1011a4de(param_2);
        if (*piVar8 != 0) {
          if (*(int *)(param_2 + 0x14) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
          puVar2 = (undefined1 *)FUN_1011a520(param_2,iVar4 + 1);
          if (puVar2 == (undefined1 *)0x0) {
            return 0;
          }
          *puVar2 = 0x2c;
          if (*(int *)(param_2 + 0x14) == 0) {
            puVar6 = puVar2 + 1;
          }
          else {
            puVar6 = puVar2 + 2;
            puVar2[1] = bVar1;
          }
          *puVar6 = 0;
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar4;
        }
      }
      puVar2 = (undefined1 *)FUN_1011a520(param_2,2);
      if (puVar2 == (undefined1 *)0x0) {
        return 0;
      }
      puVar2[1] = 0;
      *puVar2 = 0x5d;
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    return 1;
  }
  switch(uVar7) {
  case 1:
    iVar4 = FUN_1011a520(param_2,6);
    if (iVar4 == 0) {
      return 0;
    }
    FUN_1011e9f0(iVar4,DAT_10054d54);
    return uVar7;
  case 2:
    iVar4 = FUN_1011a520(param_2,5);
    uVar9 = DAT_10054d58;
    break;
  default:
    goto switchD_10054a46_caseD_3;
  case 4:
    iVar4 = FUN_1011a520(param_2,5);
    uVar9 = DAT_10054d50;
    break;
  case 8:
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = *(uint *)(param_1 + 0x1c);
    local_3c = 0;
    FUN_1011ea48(auStack_38,0,0x16);
    iVar4 = FUN_1000403c(uVar9,uVar7,uVar9,uVar7);
    if (iVar4 == 0) {
      iVar4 = FUN_1000403c(uVar9,uVar7 & 0x7fffffff,0xffffffff,DAT_10054d5c);
      if ((iVar4 != 0) ||
         (iVar4 = FUN_10004000(uVar9,uVar7 & 0x7fffffff,0xffffffff,DAT_10054d5c), iVar4 != 0)) {
        uVar9 = FUN_10004068(uVar9,uVar7);
        iVar4 = FUN_1013d306(&local_3c,0,0x1a,DAT_10054d60,uVar9);
        goto LAB_10054b50;
      }
    }
    FUN_1011e9f0(&local_3c,DAT_10054d50);
    iVar4 = 4;
LAB_10054b50:
    iVar3 = FUN_1011a520(param_2,iVar4 + 1);
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        *(undefined1 *)(iVar3 + iVar5) = *(undefined1 *)((int)&local_3c + iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
      *(undefined1 *)(iVar3 + iVar4) = 0;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar4;
      return 1;
    }
    return 0;
  }
  if (iVar4 != 0) {
    FUN_1011e9f0(iVar4,uVar9);
    return 1;
  }
switchD_10054a46_caseD_3:
  return 0;
}

