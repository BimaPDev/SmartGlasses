/* FUN_140d5fc4 @ 0x140d5fc4 */

undefined4 *
FUN_140d5fc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  int local_38;
  int local_34 [2];
  
  iVar3 = param_7;
  local_48 = param_3;
  local_44 = param_4;
  iVar1 = FUN_140d38a0(auStack_3c,param_7 + 0x6c);
  uVar6 = *(uint *)(iVar3 + 0xc) & 0x4a;
  local_38 = 0;
  if (uVar6 == 0x40) {
    uVar8 = 8;
  }
  else if (uVar6 == 8) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 10;
  }
  uVar2 = FUN_140c9d82(&local_48,&param_5);
  if (uVar2 == 0) {
    local_38 = FUN_140c9d64(&local_48);
    bVar14 = *(int *)(iVar1 + 0xbc) == local_38;
    if ((((bVar14) || (*(int *)(iVar1 + 0xc0) == local_38)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(int *)(iVar1 + 0x28) != local_38)))) &&
       (*(int *)(iVar1 + 0x24) != local_38)) {
      FUN_140d2450(local_48);
      local_44 = 0xffffffff;
      iVar3 = FUN_140c9da6(&local_48,&param_5);
      if (iVar3 == 0) {
        uVar5 = 0;
        uVar12 = 0;
        uVar9 = 1;
        goto LAB_140d60fc;
      }
      local_38 = FUN_140c9d64(&local_48);
    }
    uVar5 = 0;
    uVar12 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') && (uVar9 = uVar2, *(int *)(iVar1 + 0x28) == local_38))
         || (uVar9 = uVar2, *(int *)(iVar1 + 0x24) == local_38)) break;
      if (*(int *)(iVar1 + 0xcc) == local_38) {
        if (uVar5 == 0) {
          if (uVar6 != 0) {
            if (uVar8 != 8) goto LAB_140d6092;
            uVar12 = 0;
LAB_140d6096:
            uVar5 = 1;
            goto LAB_140d60b8;
          }
          uVar5 = 1;
        }
        else {
          if (uVar8 != 10) goto LAB_140d609c;
          if (uVar6 != 0) {
LAB_140d6092:
            uVar12 = uVar12 + 1;
            goto LAB_140d6096;
          }
        }
        uVar8 = 8;
        uVar12 = uVar6;
      }
      else {
        uVar9 = uVar5;
        if (uVar5 == 0) break;
LAB_140d609c:
        if ((*(int *)(iVar1 + 0xc4) != local_38) && (*(int *)(iVar1 + 200) != local_38)) {
          uVar5 = 1;
          uVar9 = uVar2;
          break;
        }
        if (uVar6 == 0) {
          uVar8 = 0x10;
          uVar5 = 0;
          uVar12 = uVar6;
        }
        else {
          if (uVar8 != 0x10) {
            uVar5 = 1;
            uVar9 = uVar2;
            uVar6 = uVar8;
            goto LAB_140d6108;
          }
          uVar5 = 0;
          uVar12 = 0;
        }
      }
LAB_140d60b8:
      FUN_140d2450(local_48);
      local_44 = 0xffffffff;
      iVar3 = FUN_140c9da6(&local_48,&param_5);
      if (iVar3 == 0) {
        uVar9 = 1;
        break;
      }
      local_38 = FUN_140c9d64(&local_48);
      uVar9 = uVar5;
    } while (uVar5 != 0);
  }
  else {
    uVar12 = 0;
    uVar5 = 0;
    bVar14 = false;
    uVar9 = uVar2;
  }
LAB_140d60fc:
  uVar6 = uVar8;
  if (uVar8 == 0x10) {
    uVar6 = 0x16;
  }
LAB_140d6108:
  local_34[0] = DAT_140d62dc;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_140c427a(local_34,0x20);
  }
  uVar2 = (uint)*(byte *)(iVar1 + 0x124);
  if (uVar2 == 0) {
    uVar7 = 0;
    uVar11 = uVar2;
    if (uVar9 == 0) {
      while (uVar2 = FUN_140d2464(uVar6,local_38), uVar2 != 0xffffffff) {
        if (0xffffffff / uVar8 < uVar7) {
          uVar11 = 1;
        }
        else {
          uVar12 = uVar12 + 1;
          if (~uVar2 < uVar8 * uVar7) {
            uVar11 = uVar11 | 1;
          }
          uVar7 = uVar8 * uVar7 + uVar2;
        }
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar3 = FUN_140c9da6(&local_48,&param_5);
        if (iVar3 == 0) {
          uVar9 = 1;
          break;
        }
        local_38 = FUN_140c9d64(&local_48);
      }
    }
  }
  else {
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = uVar9;
    while (uVar9 = uVar11, uVar11 = uVar10, uVar9 == 0) {
      while( true ) {
        cVar13 = *(char *)(iVar1 + 0x10);
        if ((cVar13 == '\0') || (local_38 != *(int *)(iVar1 + 0x28))) {
          if (local_38 == *(int *)(iVar1 + 0x24)) goto LAB_140d61a6;
          iVar3 = FUN_140c4502(iVar1 + 0xcc,uVar6,&local_38);
          if (iVar3 == 0) {
            cVar13 = '\0';
            goto LAB_140d61aa;
          }
          iVar3 = iVar3 - (iVar1 + 0xcc);
          uVar4 = iVar3 >> 2;
          if (0x3c < iVar3) {
            uVar4 = uVar4 - 6;
          }
          uVar10 = uVar2;
          if (uVar7 <= 0xffffffff / uVar8) {
            uVar12 = uVar12 + 1;
            if (~uVar4 < uVar8 * uVar7) {
              uVar11 = uVar11 | 1;
            }
            uVar7 = uVar8 * uVar7 + uVar4;
            uVar10 = uVar11;
          }
        }
        else {
          if (uVar12 == 0) goto LAB_140d61aa;
          uVar10 = uVar12 & 0xff;
          uVar12 = 0;
          FUN_140c4416(local_34,uVar10);
          uVar10 = uVar11;
        }
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar3 = FUN_140c9da6(&local_48,&param_5);
        uVar11 = uVar2;
        if (iVar3 == 0) break;
        local_38 = FUN_140c9d64(&local_48);
        uVar11 = uVar10;
      }
    }
  }
LAB_140d61a6:
  cVar13 = '\0';
LAB_140d61aa:
  if (*(int *)(local_34[0] + -0xc) != 0) {
    FUN_140c4416(local_34,uVar12 & 0xff);
    iVar3 = FUN_140d8b0c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),local_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar12 == 0) && (uVar5 == 0)) && (*(int *)(local_34[0] + -0xc) == 0)) || (cVar13 != '\0'))
  {
    uVar6 = 0;
  }
  else {
    if (uVar11 == 0) {
      if (bVar14) {
        uVar7 = -uVar7;
      }
      *param_9 = uVar7;
      goto LAB_140d62a8;
    }
    uVar6 = 0xffffffff;
  }
  *param_9 = uVar6;
  *param_8 = 4;
LAB_140d62a8:
  if (uVar9 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  FUN_140c3fe4(local_34);
  return param_1;
}

