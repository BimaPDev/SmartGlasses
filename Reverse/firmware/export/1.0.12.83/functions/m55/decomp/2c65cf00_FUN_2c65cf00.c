/* FUN_2c65cf00 @ 0x2c65cf00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c65cf00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r2;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [3];
  char cStack_35;
  int aiStack_34 [2];
  
  iVar3 = param_7;
  uStack_40 = param_3;
  uStack_3c = param_4;
  iVar1 = FUN_2c65a49c(auStack_38,param_7 + 0x6c);
  uVar10 = *(uint *)(iVar3 + 0xc) & 0x4a;
  cStack_35 = '\0';
  if (uVar10 == 0x40) {
    uVar14 = 8;
  }
  else if (uVar10 == 8) {
    uVar14 = 0x10;
  }
  else {
    uVar14 = 10;
  }
  uVar2 = FUN_2c652d76(&uStack_40,&param_5);
  if (uVar2 == 0) {
    cStack_35 = FUN_2c652d58(&uStack_40);
    bVar19 = *(char *)(iVar1 + 0x4a) == cStack_35;
    if ((((bVar19) || (*(char *)(iVar1 + 0x4b) == cStack_35)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(char *)(iVar1 + 0x25) != cStack_35)))) &&
       (*(char *)(iVar1 + 0x24) != cStack_35)) {
      FUN_2c658fa0(uStack_40);
      uStack_3c = 0xffffffff;
      iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
      if (iVar3 == 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar15 = 1;
        goto LAB_2c65d05e;
      }
      cStack_35 = FUN_2c652d58(&uStack_40);
    }
    uVar12 = 0;
    uVar13 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') &&
          (uVar15 = uVar2, *(char *)(iVar1 + 0x25) == cStack_35)) ||
         (uVar15 = uVar2, *(char *)(iVar1 + 0x24) == cStack_35)) break;
      if (*(char *)(iVar1 + 0x4e) == cStack_35) {
        if (uVar12 == 0) {
          if (uVar10 != 0) {
            if (uVar14 != 8) goto LAB_2c65cfec;
            uVar13 = 0;
LAB_2c65cfee:
            uVar12 = 1;
            goto LAB_2c65d014;
          }
          uVar12 = 1;
        }
        else {
          if (uVar14 != 10) goto LAB_2c65cff4;
          if (uVar10 != 0) {
LAB_2c65cfec:
            uVar13 = uVar13 + 1;
            goto LAB_2c65cfee;
          }
        }
        uVar14 = 8;
        uVar13 = uVar10;
      }
      else {
        uVar15 = uVar12;
        if (uVar12 == 0) break;
LAB_2c65cff4:
        if ((*(char *)(iVar1 + 0x4c) != cStack_35) && (*(char *)(iVar1 + 0x4d) != cStack_35)) {
          uVar12 = 1;
          uVar15 = uVar2;
          break;
        }
        if (uVar10 == 0) {
          uVar14 = 0x10;
          uVar12 = 0;
          uVar13 = uVar10;
        }
        else {
          if (uVar14 != 0x10) {
            uVar12 = 1;
            uVar15 = uVar2;
            uVar10 = uVar14;
            goto LAB_2c65d06c;
          }
          uVar12 = 0;
          uVar13 = 0;
        }
      }
LAB_2c65d014:
      FUN_2c658fa0(uStack_40);
      uStack_3c = 0xffffffff;
      iVar3 = FUN_2c652d9a(&uStack_40,&param_5);
      if (iVar3 == 0) {
        uVar15 = 1;
        break;
      }
      cStack_35 = FUN_2c652d58(&uStack_40);
      uVar15 = uVar12;
    } while (uVar12 != 0);
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    bVar19 = false;
    uVar15 = uVar2;
  }
LAB_2c65d05e:
  uVar10 = uVar14;
  if (uVar14 == 0x10) {
    uVar10 = 0x16;
  }
LAB_2c65d06c:
  aiStack_34[0] = _LAB_2c65d2b0;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_2c6510f6(aiStack_34,0x20);
  }
  if (bVar19) {
    uVar2 = 0;
    iVar3 = -0x80000000;
  }
  else {
    uVar2 = 0xffffffff;
    iVar3 = 0x7fffffff;
  }
  uVar20 = FUN_2c672ae8(uVar2,iVar3,uVar14,0);
  uVar7 = (uint)((ulonglong)uVar20 >> 0x20);
  uVar4 = (uint)uVar20;
  uVar9 = (uint)*(byte *)(iVar1 + 100);
  if (uVar9 == 0) {
    uVar11 = 0;
    uVar16 = uVar11;
    uVar18 = uVar9;
    if (uVar15 == 0) {
      while( true ) {
        uVar20 = FUN_2c658fb4(uVar10,cStack_35);
        uVar9 = (uint)uVar20;
        if (uVar9 == 0xffffffff) break;
        iVar5 = (uVar7 - uVar16) - (uint)(uVar11 > uVar4);
        if (uVar16 < uVar7 || uVar7 - uVar16 < (uint)(uVar11 <= uVar4)) {
          uVar6 = (uint)((ulonglong)uVar14 * (ulonglong)uVar11);
          uVar13 = uVar13 + 1;
          uVar16 = uVar14 * uVar16 + (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
          uVar17 = uVar2 - uVar9;
          uVar11 = (iVar3 - ((int)uVar9 >> 0x1f)) - (uint)(uVar2 < uVar9);
          iVar5 = (uVar11 - uVar16) - (uint)(uVar6 > uVar17);
          if (uVar11 <= uVar16 && (uint)(uVar6 <= uVar17) <= uVar11 - uVar16) {
            uVar18 = uVar18 | 1;
          }
          uVar11 = uVar9 + uVar6;
          uVar16 = uVar16 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar9,uVar6);
        }
        else {
          uVar18 = 1;
          uVar17 = extraout_r2;
        }
        FUN_2c658fa0(uStack_40,(int)((ulonglong)uVar20 >> 0x20),uVar17,iVar5);
        uStack_3c = 0xffffffff;
        iVar5 = FUN_2c652d9a(&uStack_40,&param_5);
        if (iVar5 == 0) {
          uVar15 = 1;
          break;
        }
        cStack_35 = FUN_2c652d58(&uStack_40);
      }
    }
  }
  else {
    uVar11 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = uVar15;
    while (uVar15 = uVar18, uVar18 = uVar17, uVar15 == 0) {
      while( true ) {
        cVar8 = *(char *)(iVar1 + 0x10);
        if ((cVar8 == '\0') || (*(char *)(iVar1 + 0x25) != cStack_35)) {
          if (*(char *)(iVar1 + 0x24) == cStack_35) goto LAB_2c65d128;
          iVar5 = FUN_2c650c06(iVar1 + 0x4e,uVar10,&cStack_35);
          if (iVar5 == 0) {
            cVar8 = '\0';
            goto LAB_2c65d12a;
          }
          uVar6 = iVar5 - (iVar1 + 0x4e);
          if (0xf < (int)uVar6) {
            uVar6 = uVar6 - 6;
          }
          uVar17 = uVar9;
          if (uVar16 < uVar7 || uVar7 - uVar16 < (uint)(uVar11 <= uVar4)) {
            uVar17 = (uint)((ulonglong)uVar14 * (ulonglong)uVar11);
            uVar13 = uVar13 + 1;
            uVar16 = uVar14 * uVar16 + (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
            uVar11 = (iVar3 - ((int)uVar6 >> 0x1f)) - (uint)(uVar2 < uVar6);
            if (uVar11 <= uVar16 && (uint)(uVar17 <= uVar2 - uVar6) <= uVar11 - uVar16) {
              uVar18 = uVar18 | 1;
            }
            uVar11 = uVar6 + uVar17;
            uVar16 = uVar16 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar17);
            uVar17 = uVar18;
          }
        }
        else {
          if (uVar13 == 0) goto LAB_2c65d12a;
          uVar17 = uVar13 & 0xff;
          uVar13 = 0;
          FUN_2c651292(aiStack_34,uVar17);
          uVar17 = uVar18;
        }
        FUN_2c658fa0(uStack_40);
        uStack_3c = 0xffffffff;
        iVar5 = FUN_2c652d9a(&uStack_40,&param_5);
        uVar18 = uVar9;
        if (iVar5 == 0) break;
        cStack_35 = FUN_2c652d58(&uStack_40);
        uVar18 = uVar17;
      }
    }
  }
LAB_2c65d128:
  cVar8 = '\0';
LAB_2c65d12a:
  if (*(int *)(aiStack_34[0] + -0xc) != 0) {
    FUN_2c651292(aiStack_34,uVar13 & 0xff);
    iVar3 = FUN_2c665bc0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),aiStack_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar13 == 0) && (uVar12 == 0)) && (*(int *)(aiStack_34[0] + -0xc) == 0)) || (cVar8 != '\0')
     ) {
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    if (uVar18 == 0) {
      if (bVar19) {
        bVar19 = uVar11 != 0;
        uVar11 = -uVar11;
        uVar16 = -uVar16 - (uint)bVar19;
      }
      *param_9 = uVar11;
      param_9[1] = uVar16;
      goto LAB_2c65d26c;
    }
    if (bVar19) {
      uVar10 = 0;
      uVar14 = 0x80000000;
    }
    else {
      uVar10 = 0xffffffff;
      uVar14 = 0x7fffffff;
    }
  }
  *param_9 = uVar10;
  param_9[1] = uVar14;
  *param_8 = 4;
LAB_2c65d26c:
  if (uVar15 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  FUN_2c650e60(aiStack_34);
  return param_1;
}

