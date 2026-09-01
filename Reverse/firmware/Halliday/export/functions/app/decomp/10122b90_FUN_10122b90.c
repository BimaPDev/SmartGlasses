/* FUN_10122b90 @ 0x10122b90 */

uint FUN_10122b90(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  pcVar8 = (char *)*param_1;
  if (*(int *)(pcVar8 + 0x20) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar9 = *(uint *)(pcVar8 + 0x18);
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    else if (*(uint *)(pcVar8 + 0x34) <= uVar9) {
      uVar9 = 1;
    }
LAB_10122bb4:
    uVar7 = uVar9;
    if (*pcVar8 != '\x04') {
      do {
        uVar7 = uVar7 + 1;
        if (*(uint *)(pcVar8 + 0x34) <= uVar7) {
          if (uVar9 < 2) break;
          uVar7 = 2;
        }
        iVar2 = FUN_1012270e(param_1,uVar7);
        if (iVar2 == 0) goto LAB_10122c8e;
        if (iVar2 == 1) goto LAB_10122c36;
        if (iVar2 == -1) goto LAB_10122d26;
      } while (uVar7 != uVar9);
      pcVar8[0x20] = '\x01';
      pcVar8[0x21] = '\0';
      pcVar8[0x22] = '\0';
      pcVar8[0x23] = '\0';
      return 0;
    }
    uVar10 = uVar9 - 2;
    uVar11 = uVar10;
    if (*(int *)(pcVar8 + 0x34) - 2U <= uVar10) {
      uVar10 = 0;
      uVar11 = uVar10;
    }
    while (iVar2 = FUN_10122662(pcVar8,*(int *)(pcVar8 + 0x48) + (uVar10 >> 0xc)), iVar2 == 0) {
      uVar3 = (uVar10 & 0xfff) >> 3;
      uVar6 = 1 << (uVar10 & 7) & 0xff;
      uVar7 = uVar10;
      while( true ) {
        do {
          uVar10 = uVar7 + 1;
          bVar12 = *(int *)(pcVar8 + 0x34) - 2U <= uVar10;
          if (bVar12) {
            uVar10 = 0;
          }
          iVar2 = uVar3 + 0x50;
          if (bVar12) {
            uVar3 = 0x1000;
          }
          uVar4 = (byte)pcVar8[iVar2] & uVar6;
          uVar1 = uVar10;
          if (!bVar12) {
            uVar1 = (uVar6 & 0x7f) << 1;
          }
          uVar6 = uVar1;
          if (uVar4 == 0) {
            uVar7 = uVar7 + 2;
            goto LAB_10122c1c;
          }
          if (uVar11 == uVar10) {
            uVar7 = 0;
            goto LAB_10122c1c;
          }
          uVar7 = uVar10;
        } while (uVar6 != 0);
        uVar3 = uVar3 + 1;
        if (0x1ff < uVar3) break;
        uVar6 = 1;
      }
    }
    uVar7 = 0xffffffff;
LAB_10122c1c:
    if (uVar7 - 1 < 0xfffffffe) {
      iVar2 = FUN_10122694(pcVar8,uVar7,1,1,param_4);
      if (iVar2 == 2) goto LAB_10122c36;
      if (iVar2 == 1) goto LAB_10122d26;
      if (param_2 == 0) {
        uVar5 = 2;
LAB_10122c8a:
        *(undefined1 *)((int)param_1 + 7) = uVar5;
      }
      else if ((*(char *)((int)param_1 + 7) == '\x02') && (uVar9 + 1 != uVar7)) {
        param_1[6] = uVar9 - param_1[2];
        uVar5 = 3;
        goto LAB_10122c8a;
      }
LAB_10122c8e:
      if (((*pcVar8 == '\x04') && (*(char *)((int)param_1 + 7) == '\x02')) ||
         ((iVar2 = FUN_101228d0(pcVar8,uVar7,0xffffffff), iVar2 == 0 &&
          ((param_2 == 0 || (iVar2 = FUN_101228d0(pcVar8,param_2,uVar7), iVar2 == 0)))))) {
        *(uint *)(pcVar8 + 0x18) = uVar7;
        if (*(uint *)(pcVar8 + 0x1c) < *(int *)(pcVar8 + 0x34) - 2U) {
          *(uint *)(pcVar8 + 0x1c) = *(uint *)(pcVar8 + 0x1c) - 1;
        }
        pcVar8[4] = pcVar8[4] | 1;
        return uVar7;
      }
      if (iVar2 != 1) goto LAB_10122c36;
    }
    else if (uVar7 == 0) {
      pcVar8[0x20] = '\x01';
      pcVar8[0x21] = '\0';
      pcVar8[0x22] = '\0';
      pcVar8[0x23] = '\0';
      return 0;
    }
LAB_10122d26:
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = FUN_1012270e();
    if (1 < uVar7) {
      if (uVar7 != 0xffffffff) {
        uVar9 = param_2;
        if (uVar7 < *(uint *)(pcVar8 + 0x34)) {
          return uVar7;
        }
        goto LAB_10122bb4;
      }
      goto LAB_10122d26;
    }
LAB_10122c36:
    uVar7 = 1;
  }
  return uVar7;
}

