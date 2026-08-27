/* FUN_2c663458 @ 0x2c663458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c663458(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  uint uVar7;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  int iStack_38;
  int aiStack_34 [2];
  
  iVar3 = param_7;
  uStack_48 = param_3;
  uStack_44 = param_4;
  iVar1 = FUN_2c660988(auStack_3c,param_7 + 0x6c);
  uVar10 = *(uint *)(iVar3 + 0xc) & 0x4a;
  iStack_38 = 0;
  if (uVar10 == 0x40) {
    uVar14 = 8;
  }
  else if (uVar10 == 8) {
    uVar14 = 0x10;
  }
  else {
    uVar14 = 10;
  }
  uVar2 = FUN_2c656bf6(&uStack_48,&param_5);
  if (uVar2 == 0) {
    iStack_38 = FUN_2c656bd8(&uStack_48);
    bVar19 = *(int *)(iVar1 + 0xbc) == iStack_38;
    if ((((bVar19) || (*(int *)(iVar1 + 0xc0) == iStack_38)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(int *)(iVar1 + 0x28) != iStack_38)))) &&
       (*(int *)(iVar1 + 0x24) != iStack_38)) {
      FUN_2c65f53c(uStack_48);
      uStack_44 = 0xffffffff;
      iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
      if (iVar3 == 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar15 = 1;
        goto LAB_2c6635a0;
      }
      iStack_38 = FUN_2c656bd8(&uStack_48);
    }
    uVar12 = 0;
    uVar13 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') &&
          (uVar15 = uVar2, *(int *)(iVar1 + 0x28) == iStack_38)) ||
         (uVar15 = uVar2, *(int *)(iVar1 + 0x24) == iStack_38)) break;
      if (*(int *)(iVar1 + 0xcc) == iStack_38) {
        if (uVar12 == 0) {
          if (uVar10 != 0) {
            if (uVar14 != 8) goto LAB_2c663530;
            uVar13 = 0;
LAB_2c663532:
            uVar12 = 1;
            goto LAB_2c663558;
          }
          uVar12 = 1;
        }
        else {
          if (uVar14 != 10) goto LAB_2c663538;
          if (uVar10 != 0) {
LAB_2c663530:
            uVar13 = uVar13 + 1;
            goto LAB_2c663532;
          }
        }
        uVar14 = 8;
        uVar13 = uVar10;
      }
      else {
        uVar15 = uVar12;
        if (uVar12 == 0) break;
LAB_2c663538:
        if ((*(int *)(iVar1 + 0xc4) != iStack_38) && (*(int *)(iVar1 + 200) != iStack_38)) {
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
            goto LAB_2c6635ae;
          }
          uVar12 = 0;
          uVar13 = 0;
        }
      }
LAB_2c663558:
      FUN_2c65f53c(uStack_48);
      uStack_44 = 0xffffffff;
      iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
      if (iVar3 == 0) {
        uVar15 = 1;
        break;
      }
      iStack_38 = FUN_2c656bd8(&uStack_48);
      uVar15 = uVar12;
    } while (uVar12 != 0);
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    bVar19 = false;
    uVar15 = uVar2;
  }
LAB_2c6635a0:
  uVar10 = uVar14;
  if (uVar14 == 0x10) {
    uVar10 = 0x16;
  }
LAB_2c6635ae:
  aiStack_34[0] = _LAB_2c6637e8;
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
  uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
  uVar4 = (uint)uVar20;
  uVar9 = (uint)*(byte *)(iVar1 + 0x124);
  if (uVar9 == 0) {
    uVar11 = 0;
    uVar16 = uVar11;
    uVar18 = uVar9;
    if (uVar15 == 0) {
      while( true ) {
        uVar20 = FUN_2c65f550(uVar10,iStack_38);
        uVar9 = (uint)uVar20;
        if (uVar9 == 0xffffffff) break;
        iVar5 = (uVar6 - uVar16) - (uint)(uVar11 > uVar4);
        if (uVar16 < uVar6 || uVar6 - uVar16 < (uint)(uVar11 <= uVar4)) {
          uVar7 = (uint)((ulonglong)uVar14 * (ulonglong)uVar11);
          uVar13 = uVar13 + 1;
          uVar16 = uVar14 * uVar16 + (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
          uVar17 = uVar2 - uVar9;
          uVar11 = (iVar3 - ((int)uVar9 >> 0x1f)) - (uint)(uVar2 < uVar9);
          iVar5 = (uVar11 - uVar16) - (uint)(uVar7 > uVar17);
          if (uVar11 <= uVar16 && (uint)(uVar7 <= uVar17) <= uVar11 - uVar16) {
            uVar18 = uVar18 | 1;
          }
          uVar11 = uVar9 + uVar7;
          uVar16 = uVar16 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar9,uVar7);
        }
        else {
          uVar18 = 1;
          uVar17 = extraout_r2;
        }
        FUN_2c65f53c(uStack_48,(int)((ulonglong)uVar20 >> 0x20),uVar17,iVar5);
        uStack_44 = 0xffffffff;
        iVar5 = FUN_2c656c1a(&uStack_48,&param_5);
        if (iVar5 == 0) {
          uVar15 = 1;
          break;
        }
        iStack_38 = FUN_2c656bd8(&uStack_48);
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
        if ((cVar8 == '\0') || (iStack_38 != *(int *)(iVar1 + 0x28))) {
          if (iStack_38 == *(int *)(iVar1 + 0x24)) goto LAB_2c663664;
          iVar5 = FUN_2c65137e(iVar1 + 0xcc,uVar10,&iStack_38);
          if (iVar5 == 0) {
            cVar8 = '\0';
            goto LAB_2c663666;
          }
          iVar5 = iVar5 - (iVar1 + 0xcc);
          uVar7 = iVar5 >> 2;
          if (0x3c < iVar5) {
            uVar7 = uVar7 - 6;
          }
          uVar17 = uVar9;
          if (uVar16 < uVar6 || uVar6 - uVar16 < (uint)(uVar11 <= uVar4)) {
            uVar17 = (uint)((ulonglong)uVar14 * (ulonglong)uVar11);
            uVar13 = uVar13 + 1;
            uVar16 = uVar14 * uVar16 + (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
            uVar11 = (iVar3 - ((int)uVar7 >> 0x1f)) - (uint)(uVar2 < uVar7);
            if (uVar11 <= uVar16 && (uint)(uVar17 <= uVar2 - uVar7) <= uVar11 - uVar16) {
              uVar18 = uVar18 | 1;
            }
            uVar11 = uVar7 + uVar17;
            uVar16 = uVar16 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar7,uVar17);
            uVar17 = uVar18;
          }
        }
        else {
          if (uVar13 == 0) goto LAB_2c663666;
          uVar17 = uVar13 & 0xff;
          uVar13 = 0;
          FUN_2c651292(aiStack_34,uVar17);
          uVar17 = uVar18;
        }
        FUN_2c65f53c(uStack_48);
        uStack_44 = 0xffffffff;
        iVar5 = FUN_2c656c1a(&uStack_48,&param_5);
        uVar18 = uVar9;
        if (iVar5 == 0) break;
        iStack_38 = FUN_2c656bd8(&uStack_48);
        uVar18 = uVar17;
      }
    }
  }
LAB_2c663664:
  cVar8 = '\0';
LAB_2c663666:
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
      goto LAB_2c6637a4;
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
LAB_2c6637a4:
  if (uVar15 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  FUN_2c650e60(aiStack_34);
  return param_1;
}

