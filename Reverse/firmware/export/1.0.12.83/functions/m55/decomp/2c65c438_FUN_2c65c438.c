/* FUN_2c65c438 @ 0x2c65c438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c65c438(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,short *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [3];
  char cStack_35;
  int aiStack_34 [2];
  
  iVar3 = param_7;
  uStack_40 = param_3;
  uStack_3c = param_4;
  iVar1 = FUN_2c65a49c(auStack_38,param_7 + 0x6c);
  uVar6 = *(uint *)(iVar3 + 0xc) & 0x4a;
  cStack_35 = '\0';
  if (uVar6 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar6 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  uVar2 = FUN_2c652d76(&uStack_40,&param_5);
  if (uVar2 == 0) {
    cStack_35 = FUN_2c652d58(&uStack_40);
    bVar14 = *(char *)(iVar1 + 0x4a) == cStack_35;
    if ((((bVar14) || (*(char *)(iVar1 + 0x4b) == cStack_35)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(char *)(iVar1 + 0x25) != cStack_35)))) &&
       (*(char *)(iVar1 + 0x24) != cStack_35)) {
      FUN_2c658fa0(uStack_40);
      uStack_3c = 0xffffffff;
      iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
      if (iVar3 == 0) {
        uVar8 = 0;
        uVar9 = 0;
        uVar11 = 1;
        goto LAB_2c65c592;
      }
      cStack_35 = FUN_2c652d58(&uStack_40);
    }
    uVar8 = 0;
    uVar9 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') &&
          (uVar11 = uVar2, *(char *)(iVar1 + 0x25) == cStack_35)) ||
         (uVar11 = uVar2, *(char *)(iVar1 + 0x24) == cStack_35)) break;
      if (*(char *)(iVar1 + 0x4e) == cStack_35) {
        if (uVar8 == 0) {
          if (uVar6 != 0) {
            if (uVar10 != 8) goto LAB_2c65c524;
            uVar9 = 0;
LAB_2c65c526:
            uVar8 = 1;
            goto LAB_2c65c548;
          }
          uVar8 = 1;
        }
        else {
          if (uVar10 != 10) goto LAB_2c65c52c;
          if (uVar6 != 0) {
LAB_2c65c524:
            uVar9 = uVar9 + 1;
            goto LAB_2c65c526;
          }
        }
        uVar10 = 8;
        uVar9 = uVar6;
      }
      else {
        uVar11 = uVar8;
        if (uVar8 == 0) break;
LAB_2c65c52c:
        if ((*(char *)(iVar1 + 0x4c) != cStack_35) && (*(char *)(iVar1 + 0x4d) != cStack_35)) {
          uVar8 = 1;
          uVar11 = uVar2;
          break;
        }
        if (uVar6 == 0) {
          uVar10 = 0x10;
          uVar8 = 0;
          uVar9 = uVar6;
        }
        else {
          if (uVar10 != 0x10) {
            uVar8 = 1;
            uVar11 = uVar2;
            uVar6 = uVar10;
            goto LAB_2c65c5a0;
          }
          uVar8 = 0;
          uVar9 = 0;
        }
      }
LAB_2c65c548:
      FUN_2c658fa0(uStack_40);
      uStack_3c = 0xffffffff;
      iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
      if (iVar3 == 0) {
        uVar11 = 1;
        break;
      }
      cStack_35 = FUN_2c652d58(&uStack_40);
      uVar11 = uVar8;
    } while (uVar8 != 0);
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    bVar14 = false;
    uVar11 = uVar2;
  }
LAB_2c65c592:
  uVar6 = uVar10;
  if (uVar10 == 0x10) {
    uVar6 = 0x16;
  }
LAB_2c65c5a0:
  aiStack_34[0] = _LAB_2c65c77c;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_2c6510f6(aiStack_34,0x20);
  }
  uVar2 = (uint)*(byte *)(iVar1 + 100);
  if (uVar2 == 0) {
    uVar12 = 0;
    sVar5 = 0;
    uVar13 = uVar2;
    if (uVar11 == 0) {
      while( true ) {
        sVar5 = (short)uVar12;
        iVar3 = FUN_2c658fb4(uVar6,cStack_35);
        if (iVar3 == -1) break;
        if (0xffff / uVar10 < uVar12) {
          uVar13 = 1;
        }
        else {
          uVar9 = uVar9 + 1;
          uVar2 = uVar10 * uVar12 & 0xffff;
          if (0xffff - iVar3 < (int)uVar2) {
            uVar13 = uVar13 | 1;
          }
          uVar12 = uVar2 + iVar3 & 0xffff;
        }
        sVar5 = (short)uVar12;
        FUN_2c658fa0(uStack_40);
        uStack_3c = 0xffffffff;
        iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
        if (iVar3 == 0) {
          uVar11 = 1;
          break;
        }
        cStack_35 = FUN_2c652d58(&uStack_40);
      }
    }
  }
  else {
    uVar7 = 0;
    uVar12 = 0;
    uVar13 = uVar11;
    while (uVar11 = uVar13, sVar5 = (short)uVar7, uVar13 = uVar12, uVar11 == 0) {
      while( true ) {
        sVar5 = (short)uVar7;
        cVar4 = *(char *)(iVar1 + 0x10);
        if ((cVar4 == '\0') || (*(char *)(iVar1 + 0x25) != cStack_35)) {
          if (*(char *)(iVar1 + 0x24) == cStack_35) goto LAB_2c65c638;
          iVar3 = FUN_2c650c06(iVar1 + 0x4e,uVar6,&cStack_35);
          if (iVar3 == 0) {
            cVar4 = '\0';
            goto LAB_2c65c63a;
          }
          iVar3 = iVar3 - (iVar1 + 0x4e);
          if (0xf < iVar3) {
            iVar3 = iVar3 + -6;
          }
          uVar12 = uVar2;
          if (uVar7 <= 0xffff / uVar10) {
            uVar9 = uVar9 + 1;
            uVar12 = uVar10 * uVar7 & 0xffff;
            if (0xffff - iVar3 < (int)uVar12) {
              uVar13 = uVar13 | 1;
            }
            uVar7 = uVar12 + iVar3 & 0xffff;
            uVar12 = uVar13;
          }
        }
        else {
          if (uVar9 == 0) goto LAB_2c65c63a;
          uVar12 = uVar9 & 0xff;
          uVar9 = 0;
          FUN_2c651292(aiStack_34,uVar12);
          uVar12 = uVar13;
        }
        FUN_2c658fa0(uStack_40);
        uStack_3c = 0xffffffff;
        iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
        uVar13 = uVar2;
        if (iVar3 == 0) break;
        cStack_35 = FUN_2c652d58(&uStack_40);
        uVar13 = uVar12;
      }
    }
  }
LAB_2c65c638:
  cVar4 = '\0';
LAB_2c65c63a:
  if (*(int *)(aiStack_34[0] + -0xc) != 0) {
    FUN_2c651292(aiStack_34,uVar9 & 0xff);
    iVar3 = FUN_2c665bc0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),aiStack_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar9 == 0) && (uVar8 == 0)) && (*(int *)(aiStack_34[0] + -0xc) == 0)) || (cVar4 != '\0'))
  {
    sVar5 = 0;
  }
  else {
    if (uVar13 == 0) {
      if (bVar14) {
        sVar5 = -sVar5;
      }
      *param_9 = sVar5;
      goto LAB_2c65c748;
    }
    sVar5 = -1;
  }
  *param_9 = sVar5;
  *param_8 = 4;
LAB_2c65c748:
  if (uVar11 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  FUN_2c650e60(aiStack_34);
  return param_1;
}

