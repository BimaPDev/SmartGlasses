/* FUN_140d53f0 @ 0x140d53f0 */

undefined4 *
FUN_140d53f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  int local_38;
  int local_34 [2];
  
  iVar4 = param_7;
  local_48 = param_3;
  local_44 = param_4;
  iVar2 = FUN_140d38a0(auStack_3c,param_7 + 0x6c);
  uVar10 = *(uint *)(iVar4 + 0xc) & 0x4a;
  local_38 = 0;
  if (uVar10 == 0x40) {
    uVar12 = 8;
  }
  else if (uVar10 == 8) {
    uVar12 = 0x10;
  }
  else {
    uVar12 = 10;
  }
  uVar3 = FUN_140c9d82(&local_48,&param_5);
  if (uVar3 == 0) {
    local_38 = FUN_140c9d64(&local_48);
    if (*(int *)(iVar2 + 0xbc) == local_38) {
      bVar1 = true;
LAB_140d545c:
      if (((*(char *)(iVar2 + 0x10) == '\0') || (*(int *)(iVar2 + 0x28) != local_38)) &&
         (*(int *)(iVar2 + 0x24) != local_38)) {
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar4 = FUN_140c9da6(&local_48,&param_5);
        if (iVar4 == 0) {
          uVar8 = 0;
          uVar9 = 0;
          uVar13 = 1;
          goto LAB_140d5536;
        }
        local_38 = FUN_140c9d64(&local_48);
      }
    }
    else {
      bVar1 = false;
      if (*(int *)(iVar2 + 0xc0) == local_38) goto LAB_140d545c;
    }
    uVar8 = 0;
    uVar9 = 0;
    do {
      if (((*(char *)(iVar2 + 0x10) != '\0') && (uVar13 = uVar3, *(int *)(iVar2 + 0x28) == local_38)
          ) || (uVar13 = uVar3, *(int *)(iVar2 + 0x24) == local_38)) break;
      if (*(int *)(iVar2 + 0xcc) == local_38) {
        if (uVar8 == 0) {
          if (uVar10 != 0) {
            if (uVar12 != 8) goto LAB_140d54ca;
            uVar9 = 0;
LAB_140d54cc:
            uVar8 = 1;
            goto LAB_140d54ee;
          }
          uVar8 = 1;
        }
        else {
          if (uVar12 != 10) goto LAB_140d54d2;
          if (uVar10 != 0) {
LAB_140d54ca:
            uVar9 = uVar9 + 1;
            goto LAB_140d54cc;
          }
        }
        uVar12 = 8;
        uVar9 = uVar10;
      }
      else {
        uVar13 = uVar8;
        if (uVar8 == 0) break;
LAB_140d54d2:
        if ((*(int *)(iVar2 + 0xc4) != local_38) && (*(int *)(iVar2 + 200) != local_38)) {
          uVar8 = 1;
          uVar13 = uVar3;
          break;
        }
        if (uVar10 == 0) {
          uVar12 = 0x10;
          uVar8 = 0;
          uVar9 = uVar10;
        }
        else {
          if (uVar12 != 0x10) {
            uVar8 = 1;
            uVar13 = uVar3;
            uVar10 = uVar12;
            goto LAB_140d5544;
          }
          uVar8 = 0;
          uVar9 = 0;
        }
      }
LAB_140d54ee:
      FUN_140d2450(local_48);
      local_44 = 0xffffffff;
      iVar4 = FUN_140c9da6(&local_48,&param_5);
      if (iVar4 == 0) {
        uVar13 = 1;
        break;
      }
      local_38 = FUN_140c9d64(&local_48);
      uVar13 = uVar8;
    } while (uVar8 != 0);
  }
  else {
    bVar1 = false;
    uVar9 = 0;
    uVar8 = 0;
    uVar13 = uVar3;
  }
LAB_140d5536:
  uVar10 = uVar12;
  if (uVar12 == 0x10) {
    uVar10 = 0x16;
  }
LAB_140d5544:
  local_34[0] = DAT_140d5724;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    FUN_140c427a(local_34,0x20);
  }
  if (bVar1) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = 0x7fffffff;
  }
  uVar6 = (uint)*(byte *)(iVar2 + 0x124);
  if (uVar6 == 0) {
    uVar11 = 0;
    uVar15 = uVar6;
    if (uVar13 == 0) {
      while (iVar4 = FUN_140d2464(uVar10,local_38), iVar4 != -1) {
        if (uVar3 / uVar12 < uVar11) {
          uVar15 = 1;
        }
        else {
          uVar9 = uVar9 + 1;
          if (uVar3 - iVar4 < uVar11 * uVar12) {
            uVar15 = uVar15 | 1;
          }
          uVar11 = uVar11 * uVar12 + iVar4;
        }
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar4 = FUN_140c9da6(&local_48,&param_5);
        if (iVar4 == 0) {
          uVar13 = 1;
          break;
        }
        local_38 = FUN_140c9d64(&local_48);
      }
    }
  }
  else {
    uVar11 = 0;
    uVar14 = 0;
    uVar15 = uVar13;
    while (uVar13 = uVar15, uVar15 = uVar14, uVar13 == 0) {
      while( true ) {
        cVar5 = *(char *)(iVar2 + 0x10);
        if ((cVar5 == '\0') || (local_38 != *(int *)(iVar2 + 0x28))) {
          if (local_38 == *(int *)(iVar2 + 0x24)) goto LAB_140d55e0;
          iVar4 = FUN_140c4502(iVar2 + 0xcc,uVar10,&local_38);
          if (iVar4 == 0) {
            cVar5 = '\0';
            goto LAB_140d55e2;
          }
          iVar4 = iVar4 - (iVar2 + 0xcc);
          iVar7 = iVar4 >> 2;
          if (0x3c < iVar4) {
            iVar7 = iVar7 + -6;
          }
          uVar14 = uVar6;
          if (uVar11 <= uVar3 / uVar12) {
            uVar9 = uVar9 + 1;
            if (uVar3 - iVar7 < uVar11 * uVar12) {
              uVar15 = uVar15 | 1;
            }
            uVar11 = uVar11 * uVar12 + iVar7;
            uVar14 = uVar15;
          }
        }
        else {
          if (uVar9 == 0) goto LAB_140d55e2;
          uVar14 = uVar9 & 0xff;
          uVar9 = 0;
          FUN_140c4416(local_34,uVar14);
          uVar14 = uVar15;
        }
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar4 = FUN_140c9da6(&local_48,&param_5);
        uVar15 = uVar6;
        if (iVar4 == 0) break;
        local_38 = FUN_140c9d64(&local_48);
        uVar15 = uVar14;
      }
    }
  }
LAB_140d55e0:
  cVar5 = '\0';
LAB_140d55e2:
  if (*(int *)(local_34[0] + -0xc) != 0) {
    FUN_140c4416(local_34,uVar9 & 0xff);
    iVar4 = FUN_140d8b0c(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),local_34);
    if (iVar4 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar9 == 0) && (uVar8 == 0)) && (*(int *)(local_34[0] + -0xc) == 0)) || (cVar5 != '\0')) {
    uVar10 = 0;
  }
  else {
    if (uVar15 == 0) {
      if (bVar1) {
        uVar11 = -uVar11;
      }
      *param_9 = uVar11;
      goto LAB_140d56e4;
    }
    if (bVar1) {
      uVar10 = 0x80000000;
    }
    else {
      uVar10 = 0x7fffffff;
    }
  }
  *param_9 = uVar10;
  *param_8 = 4;
LAB_140d56e4:
  if (uVar13 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  FUN_140c3fe4(local_34);
  return param_1;
}

