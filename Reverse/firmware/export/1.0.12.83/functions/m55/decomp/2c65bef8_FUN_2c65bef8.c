/* FUN_2c65bef8 @ 0x2c65bef8 */

undefined4 *
FUN_2c65bef8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [3];
  char local_35;
  int local_34 [2];
  
  iVar4 = param_7;
  local_40 = param_3;
  local_3c = param_4;
  iVar2 = FUN_2c65a49c(auStack_38,param_7 + 0x6c);
  uVar9 = *(uint *)(iVar4 + 0xc) & 0x4a;
  local_35 = '\0';
  if (uVar9 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar9 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  uVar3 = FUN_2c652d76(&local_40,&param_5);
  if (uVar3 == 0) {
    local_35 = FUN_2c652d58(&local_40);
    if (*(char *)(iVar2 + 0x4a) == local_35) {
      bVar1 = true;
LAB_2c65bf6c:
      if (((*(char *)(iVar2 + 0x10) == '\0') || (*(char *)(iVar2 + 0x25) != local_35)) &&
         (*(char *)(iVar2 + 0x24) != local_35)) {
        FUN_2c658fa0(local_40);
        local_3c = 0xffffffff;
        iVar4 = FUN_2c652d9a(&local_40,&param_5);
        if (iVar4 == 0) {
          uVar7 = 0;
          uVar8 = 0;
          uVar12 = 1;
          goto LAB_2c65c054;
        }
        local_35 = FUN_2c652d58(&local_40);
      }
    }
    else {
      bVar1 = false;
      if (*(char *)(iVar2 + 0x4b) == local_35) goto LAB_2c65bf6c;
    }
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (((*(char *)(iVar2 + 0x10) != '\0') &&
          (uVar12 = uVar3, *(char *)(iVar2 + 0x25) == local_35)) ||
         (uVar12 = uVar3, *(char *)(iVar2 + 0x24) == local_35)) break;
      if (*(char *)(iVar2 + 0x4e) == local_35) {
        if (uVar7 == 0) {
          if (uVar9 != 0) {
            if (uVar11 != 8) goto LAB_2c65bfe6;
            uVar8 = 0;
LAB_2c65bfe8:
            uVar7 = 1;
            goto LAB_2c65c00a;
          }
          uVar7 = 1;
        }
        else {
          if (uVar11 != 10) goto LAB_2c65bfee;
          if (uVar9 != 0) {
LAB_2c65bfe6:
            uVar8 = uVar8 + 1;
            goto LAB_2c65bfe8;
          }
        }
        uVar11 = 8;
        uVar8 = uVar9;
      }
      else {
        uVar12 = uVar7;
        if (uVar7 == 0) break;
LAB_2c65bfee:
        if ((*(char *)(iVar2 + 0x4c) != local_35) && (*(char *)(iVar2 + 0x4d) != local_35)) {
          uVar7 = 1;
          uVar12 = uVar3;
          break;
        }
        if (uVar9 == 0) {
          uVar11 = 0x10;
          uVar7 = 0;
          uVar8 = uVar9;
        }
        else {
          if (uVar11 != 0x10) {
            uVar7 = 1;
            uVar12 = uVar3;
            uVar9 = uVar11;
            goto LAB_2c65c062;
          }
          uVar7 = 0;
          uVar8 = 0;
        }
      }
LAB_2c65c00a:
      FUN_2c658fa0(local_40);
      local_3c = 0xffffffff;
      iVar4 = FUN_2c652d9a(&local_40,&param_5);
      if (iVar4 == 0) {
        uVar12 = 1;
        break;
      }
      local_35 = FUN_2c652d58(&local_40);
      uVar12 = uVar7;
    } while (uVar7 != 0);
  }
  else {
    bVar1 = false;
    uVar8 = 0;
    uVar7 = 0;
    uVar12 = uVar3;
  }
LAB_2c65c054:
  uVar9 = uVar11;
  if (uVar11 == 0x10) {
    uVar9 = 0x16;
  }
LAB_2c65c062:
  local_34[0] = DAT_2c65c24c;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    FUN_2c6510f6(local_34,0x20);
  }
  if (bVar1) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = 0x7fffffff;
  }
  uVar6 = (uint)*(byte *)(iVar2 + 100);
  if (uVar6 == 0) {
    uVar10 = 0;
    uVar14 = uVar6;
    if (uVar12 == 0) {
      while (iVar4 = FUN_2c658fb4(uVar9,local_35), iVar4 != -1) {
        if (uVar3 / uVar11 < uVar10) {
          uVar14 = 1;
        }
        else {
          uVar8 = uVar8 + 1;
          if (uVar3 - iVar4 < uVar10 * uVar11) {
            uVar14 = uVar14 | 1;
          }
          uVar10 = uVar10 * uVar11 + iVar4;
        }
        FUN_2c658fa0(local_40);
        local_3c = 0xffffffff;
        iVar4 = FUN_2c652d9a(&local_40,&param_5);
        if (iVar4 == 0) {
          uVar12 = 1;
          break;
        }
        local_35 = FUN_2c652d58(&local_40);
      }
    }
  }
  else {
    uVar10 = 0;
    uVar13 = 0;
    uVar14 = uVar12;
    while (uVar12 = uVar14, uVar14 = uVar13, uVar12 == 0) {
      while( true ) {
        cVar5 = *(char *)(iVar2 + 0x10);
        if ((cVar5 == '\0') || (*(char *)(iVar2 + 0x25) != local_35)) {
          if (*(char *)(iVar2 + 0x24) == local_35) goto LAB_2c65c106;
          iVar4 = FUN_2c650c06(iVar2 + 0x4e,uVar9,&local_35);
          if (iVar4 == 0) {
            cVar5 = '\0';
            goto LAB_2c65c108;
          }
          iVar4 = iVar4 - (iVar2 + 0x4e);
          if (0xf < iVar4) {
            iVar4 = iVar4 + -6;
          }
          uVar13 = uVar6;
          if (uVar10 <= uVar3 / uVar11) {
            uVar8 = uVar8 + 1;
            if (uVar3 - iVar4 < uVar10 * uVar11) {
              uVar14 = uVar14 | 1;
            }
            uVar10 = uVar10 * uVar11 + iVar4;
            uVar13 = uVar14;
          }
        }
        else {
          if (uVar8 == 0) goto LAB_2c65c108;
          uVar13 = uVar8 & 0xff;
          uVar8 = 0;
          FUN_2c651292(local_34,uVar13);
          uVar13 = uVar14;
        }
        FUN_2c658fa0(local_40);
        local_3c = 0xffffffff;
        iVar4 = FUN_2c652d9a(&local_40,&param_5);
        uVar14 = uVar6;
        if (iVar4 == 0) break;
        local_35 = FUN_2c652d58(&local_40);
        uVar14 = uVar13;
      }
    }
  }
LAB_2c65c106:
  cVar5 = '\0';
LAB_2c65c108:
  if (*(int *)(local_34[0] + -0xc) != 0) {
    FUN_2c651292(local_34,uVar8 & 0xff);
    iVar4 = FUN_2c665bc0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),local_34);
    if (iVar4 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar8 == 0) && (uVar7 == 0)) && (*(int *)(local_34[0] + -0xc) == 0)) || (cVar5 != '\0')) {
    uVar9 = 0;
  }
  else {
    if (uVar14 == 0) {
      if (bVar1) {
        uVar10 = -uVar10;
      }
      *param_9 = uVar10;
      goto LAB_2c65c20e;
    }
    if (bVar1) {
      uVar9 = 0x80000000;
    }
    else {
      uVar9 = 0x7fffffff;
    }
  }
  *param_9 = uVar9;
  *param_8 = 4;
LAB_2c65c20e:
  if (uVar12 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  FUN_2c650e60(local_34);
  return param_1;
}

