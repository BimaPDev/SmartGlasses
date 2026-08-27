/* FUN_2c6629f0 @ 0x2c6629f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c6629f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,short *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  int iStack_38;
  int aiStack_34 [2];
  
  iVar3 = param_7;
  uStack_48 = param_3;
  uStack_44 = param_4;
  iVar1 = FUN_2c660988(auStack_3c,param_7 + 0x6c);
  uVar7 = *(uint *)(iVar3 + 0xc) & 0x4a;
  iStack_38 = 0;
  if (uVar7 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar7 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  uVar2 = FUN_2c656bf6(&uStack_48,&param_5);
  if (uVar2 == 0) {
    iStack_38 = FUN_2c656bd8(&uStack_48);
    bVar15 = *(int *)(iVar1 + 0xbc) == iStack_38;
    if ((((bVar15) || (*(int *)(iVar1 + 0xc0) == iStack_38)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(int *)(iVar1 + 0x28) != iStack_38)))) &&
       (*(int *)(iVar1 + 0x24) != iStack_38)) {
      FUN_2c65f53c(uStack_48);
      uStack_44 = 0xffffffff;
      iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
      if (iVar3 == 0) {
        uVar9 = 0;
        uVar10 = 0;
        uVar12 = 1;
        goto LAB_2c662b34;
      }
      iStack_38 = FUN_2c656bd8(&uStack_48);
    }
    uVar9 = 0;
    uVar10 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') &&
          (uVar12 = uVar2, *(int *)(iVar1 + 0x28) == iStack_38)) ||
         (uVar12 = uVar2, *(int *)(iVar1 + 0x24) == iStack_38)) break;
      if (*(int *)(iVar1 + 0xcc) == iStack_38) {
        if (uVar9 == 0) {
          if (uVar7 != 0) {
            if (uVar11 != 8) goto LAB_2c662ac8;
            uVar10 = 0;
LAB_2c662aca:
            uVar9 = 1;
            goto LAB_2c662aec;
          }
          uVar9 = 1;
        }
        else {
          if (uVar11 != 10) goto LAB_2c662ad0;
          if (uVar7 != 0) {
LAB_2c662ac8:
            uVar10 = uVar10 + 1;
            goto LAB_2c662aca;
          }
        }
        uVar11 = 8;
        uVar10 = uVar7;
      }
      else {
        uVar12 = uVar9;
        if (uVar9 == 0) break;
LAB_2c662ad0:
        if ((*(int *)(iVar1 + 0xc4) != iStack_38) && (*(int *)(iVar1 + 200) != iStack_38)) {
          uVar9 = 1;
          uVar12 = uVar2;
          break;
        }
        if (uVar7 == 0) {
          uVar11 = 0x10;
          uVar9 = 0;
          uVar10 = uVar7;
        }
        else {
          if (uVar11 != 0x10) {
            uVar9 = 1;
            uVar12 = uVar2;
            uVar7 = uVar11;
            goto LAB_2c662b42;
          }
          uVar9 = 0;
          uVar10 = 0;
        }
      }
LAB_2c662aec:
      FUN_2c65f53c(uStack_48);
      uStack_44 = 0xffffffff;
      iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
      if (iVar3 == 0) {
        uVar12 = 1;
        break;
      }
      iStack_38 = FUN_2c656bd8(&uStack_48);
      uVar12 = uVar9;
    } while (uVar9 != 0);
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    bVar15 = false;
    uVar12 = uVar2;
  }
LAB_2c662b34:
  uVar7 = uVar11;
  if (uVar11 == 0x10) {
    uVar7 = 0x16;
  }
LAB_2c662b42:
  aiStack_34[0] = _LAB_2c662d14;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_2c6510f6(aiStack_34,0x20);
  }
  uVar2 = (uint)*(byte *)(iVar1 + 0x124);
  if (uVar2 == 0) {
    uVar13 = 0;
    sVar6 = 0;
    uVar14 = uVar2;
    if (uVar12 == 0) {
      while( true ) {
        sVar6 = (short)uVar13;
        iVar3 = FUN_2c65f550(uVar7,iStack_38);
        if (iVar3 == -1) break;
        if (0xffff / uVar11 < uVar13) {
          uVar14 = 1;
        }
        else {
          uVar10 = uVar10 + 1;
          uVar2 = uVar11 * uVar13 & 0xffff;
          if (0xffff - iVar3 < (int)uVar2) {
            uVar14 = uVar14 | 1;
          }
          uVar13 = uVar2 + iVar3 & 0xffff;
        }
        sVar6 = (short)uVar13;
        FUN_2c65f53c(uStack_48);
        uStack_44 = 0xffffffff;
        iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
        if (iVar3 == 0) {
          uVar12 = 1;
          break;
        }
        iStack_38 = FUN_2c656bd8(&uStack_48);
      }
    }
  }
  else {
    uVar8 = 0;
    uVar13 = 0;
    uVar14 = uVar12;
    while (uVar12 = uVar14, sVar6 = (short)uVar8, uVar14 = uVar13, uVar12 == 0) {
      while( true ) {
        sVar6 = (short)uVar8;
        cVar4 = *(char *)(iVar1 + 0x10);
        if ((cVar4 == '\0') || (iStack_38 != *(int *)(iVar1 + 0x28))) {
          if (iStack_38 == *(int *)(iVar1 + 0x24)) goto LAB_2c662bd2;
          iVar3 = FUN_2c65137e(iVar1 + 0xcc,uVar7,&iStack_38);
          if (iVar3 == 0) {
            cVar4 = '\0';
            goto LAB_2c662bd4;
          }
          iVar3 = iVar3 - (iVar1 + 0xcc);
          iVar5 = iVar3 >> 2;
          if (0x3c < iVar3) {
            iVar5 = iVar5 + -6;
          }
          uVar13 = uVar2;
          if (uVar8 <= 0xffff / uVar11) {
            uVar10 = uVar10 + 1;
            uVar13 = uVar11 * uVar8 & 0xffff;
            if (0xffff - iVar5 < (int)uVar13) {
              uVar14 = uVar14 | 1;
            }
            uVar8 = uVar13 + iVar5 & 0xffff;
            uVar13 = uVar14;
          }
        }
        else {
          if (uVar10 == 0) goto LAB_2c662bd4;
          uVar13 = uVar10 & 0xff;
          uVar10 = 0;
          FUN_2c651292(aiStack_34,uVar13);
          uVar13 = uVar14;
        }
        FUN_2c65f53c(uStack_48);
        uStack_44 = 0xffffffff;
        iVar3 = FUN_2c656c1a(&uStack_48,&param_5);
        uVar14 = uVar2;
        if (iVar3 == 0) break;
        iStack_38 = FUN_2c656bd8(&uStack_48);
        uVar14 = uVar13;
      }
    }
  }
LAB_2c662bd2:
  cVar4 = '\0';
LAB_2c662bd4:
  if (*(int *)(aiStack_34[0] + -0xc) != 0) {
    FUN_2c651292(aiStack_34,uVar10 & 0xff);
    iVar3 = FUN_2c665bc0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),aiStack_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar10 == 0) && (uVar9 == 0)) && (*(int *)(aiStack_34[0] + -0xc) == 0)) || (cVar4 != '\0'))
  {
    sVar6 = 0;
  }
  else {
    if (uVar14 == 0) {
      if (bVar15) {
        sVar6 = -sVar6;
      }
      *param_9 = sVar6;
      goto LAB_2c662cde;
    }
    sVar6 = -1;
  }
  *param_9 = sVar6;
  *param_8 = 4;
LAB_2c662cde:
  if (uVar12 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  FUN_2c650e60(aiStack_34);
  return param_1;
}

