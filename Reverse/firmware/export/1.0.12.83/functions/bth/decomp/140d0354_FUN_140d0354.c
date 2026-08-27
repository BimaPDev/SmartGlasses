/* FUN_140d0354 @ 0x140d0354 */

undefined4 *
FUN_140d0354(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [3];
  char local_35;
  int local_34 [2];
  
  iVar3 = param_7;
  local_40 = param_3;
  local_3c = param_4;
  iVar1 = FUN_140cd4fc(auStack_38,param_7 + 0x6c);
  uVar7 = *(uint *)(iVar3 + 0xc) & 0x4a;
  local_35 = '\0';
  if (uVar7 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar7 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  uVar2 = FUN_140c5efe(&local_40,&param_5);
  if (uVar2 == 0) {
    local_35 = FUN_140c5ee0(&local_40);
    bVar16 = *(char *)(iVar1 + 0x4a) == local_35;
    if ((((bVar16) || (*(char *)(iVar1 + 0x4b) == local_35)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(char *)(iVar1 + 0x25) != local_35)))) &&
       (*(char *)(iVar1 + 0x24) != local_35)) {
      FUN_140cbffc(local_40);
      local_3c = 0xffffffff;
      iVar3 = FUN_140c5f22(&local_40,&param_5);
      if (iVar3 == 0) {
        uVar9 = 0;
        uVar10 = 0;
        uVar13 = 1;
        goto LAB_140d04ae;
      }
      local_35 = FUN_140c5ee0(&local_40);
    }
    uVar9 = 0;
    uVar10 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') &&
          (uVar13 = uVar2, *(char *)(iVar1 + 0x25) == local_35)) ||
         (uVar13 = uVar2, *(char *)(iVar1 + 0x24) == local_35)) break;
      if (*(char *)(iVar1 + 0x4e) == local_35) {
        if (uVar9 == 0) {
          if (uVar7 != 0) {
            if (uVar11 != 8) goto LAB_140d0440;
            uVar10 = 0;
LAB_140d0442:
            uVar9 = 1;
            goto LAB_140d0464;
          }
          uVar9 = 1;
        }
        else {
          if (uVar11 != 10) goto LAB_140d0448;
          if (uVar7 != 0) {
LAB_140d0440:
            uVar10 = uVar10 + 1;
            goto LAB_140d0442;
          }
        }
        uVar11 = 8;
        uVar10 = uVar7;
      }
      else {
        uVar13 = uVar9;
        if (uVar9 == 0) break;
LAB_140d0448:
        if ((*(char *)(iVar1 + 0x4c) != local_35) && (*(char *)(iVar1 + 0x4d) != local_35)) {
          uVar9 = 1;
          uVar13 = uVar2;
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
            uVar13 = uVar2;
            uVar7 = uVar11;
            goto LAB_140d04bc;
          }
          uVar9 = 0;
          uVar10 = 0;
        }
      }
LAB_140d0464:
      FUN_140cbffc(local_40);
      local_3c = 0xffffffff;
      iVar3 = FUN_140c5f22(&local_40,&param_5);
      if (iVar3 == 0) {
        uVar13 = 1;
        break;
      }
      local_35 = FUN_140c5ee0(&local_40);
      uVar13 = uVar9;
    } while (uVar9 != 0);
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    bVar16 = false;
    uVar13 = uVar2;
  }
LAB_140d04ae:
  uVar7 = uVar11;
  if (uVar11 == 0x10) {
    uVar7 = 0x16;
  }
LAB_140d04bc:
  local_34[0] = DAT_140d06dc;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_140c427a(local_34,0x20);
  }
  uVar17 = FUN_140e414c(0xffffffff,0xffffffff,uVar11,0);
  uVar2 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar6 = (uint)*(byte *)(iVar1 + 100);
  if (uVar6 == 0) {
    uVar8 = 0;
    uVar12 = uVar8;
    uVar15 = uVar6;
    if (uVar13 == 0) {
      while (uVar6 = FUN_140cc010(uVar7,local_35), uVar6 != 0xffffffff) {
        if (uVar12 < uVar2 || uVar2 - uVar12 < (uint)(uVar8 <= (uint)uVar17)) {
          uVar14 = (uint)((ulonglong)uVar11 * (ulonglong)uVar8);
          uVar10 = uVar10 + 1;
          uVar12 = uVar11 * uVar12 + (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
          uVar8 = ~((int)uVar6 >> 0x1f);
          if (uVar8 <= uVar12 && (uint)(uVar14 <= ~uVar6) <= uVar8 - uVar12) {
            uVar15 = uVar15 | 1;
          }
          uVar8 = uVar6 + uVar14;
          uVar12 = uVar12 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar14);
        }
        else {
          uVar15 = 1;
        }
        FUN_140cbffc(local_40);
        local_3c = 0xffffffff;
        iVar3 = FUN_140c5f22(&local_40,&param_5);
        if (iVar3 == 0) {
          uVar13 = 1;
          break;
        }
        local_35 = FUN_140c5ee0(&local_40);
      }
    }
  }
  else {
    uVar8 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = uVar13;
    while (uVar13 = uVar15, uVar15 = uVar14, uVar13 == 0) {
      while( true ) {
        cVar5 = *(char *)(iVar1 + 0x10);
        if ((cVar5 == '\0') || (*(char *)(iVar1 + 0x25) != local_35)) {
          if (*(char *)(iVar1 + 0x24) == local_35) goto LAB_140d0562;
          iVar3 = FUN_140c3d8c(iVar1 + 0x4e,uVar7,&local_35);
          if (iVar3 == 0) {
            cVar5 = '\0';
            goto LAB_140d0564;
          }
          uVar4 = iVar3 - (iVar1 + 0x4e);
          if (0xf < (int)uVar4) {
            uVar4 = uVar4 - 6;
          }
          uVar14 = uVar6;
          if (uVar12 < uVar2 || uVar2 - uVar12 < (uint)(uVar8 <= (uint)uVar17)) {
            uVar14 = (uint)((ulonglong)uVar11 * (ulonglong)uVar8);
            uVar10 = uVar10 + 1;
            uVar12 = uVar11 * uVar12 + (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
            uVar8 = ~((int)uVar4 >> 0x1f);
            if (uVar8 <= uVar12 && (uint)(uVar14 <= ~uVar4) <= uVar8 - uVar12) {
              uVar15 = uVar15 | 1;
            }
            uVar8 = uVar4 + uVar14;
            uVar12 = uVar12 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,uVar14);
            uVar14 = uVar15;
          }
        }
        else {
          if (uVar10 == 0) goto LAB_140d0564;
          uVar14 = uVar10 & 0xff;
          uVar10 = 0;
          FUN_140c4416(local_34,uVar14);
          uVar14 = uVar15;
        }
        FUN_140cbffc(local_40);
        local_3c = 0xffffffff;
        iVar3 = FUN_140c5f22(&local_40,&param_5);
        uVar15 = uVar6;
        if (iVar3 == 0) break;
        local_35 = FUN_140c5ee0(&local_40);
        uVar15 = uVar14;
      }
    }
  }
LAB_140d0562:
  cVar5 = '\0';
LAB_140d0564:
  if (*(int *)(local_34[0] + -0xc) != 0) {
    FUN_140c4416(local_34,uVar10 & 0xff);
    iVar3 = FUN_140d8b0c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),local_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar10 == 0) && (uVar9 == 0)) && (*(int *)(local_34[0] + -0xc) == 0)) || (cVar5 != '\0')) {
    uVar7 = 0;
    uVar11 = 0;
  }
  else {
    if (uVar15 == 0) {
      if (bVar16) {
        bVar16 = uVar8 != 0;
        uVar8 = -uVar8;
        uVar12 = -uVar12 - (uint)bVar16;
      }
      *param_9 = uVar8;
      param_9[1] = uVar12;
      goto LAB_140d06a2;
    }
    uVar7 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  *param_9 = uVar7;
  param_9[1] = uVar11;
  *param_8 = 4;
LAB_140d06a2:
  if (uVar13 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  FUN_140c3fe4(local_34);
  return param_1;
}

