/* FUN_140d6744 @ 0x140d6744 */

undefined4 *
FUN_140d6744(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
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
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  int local_38;
  int local_34 [2];
  
  iVar3 = param_7;
  local_48 = param_3;
  local_44 = param_4;
  iVar1 = FUN_140d38a0(auStack_3c,param_7 + 0x6c);
  uVar8 = *(uint *)(iVar3 + 0xc) & 0x4a;
  local_38 = 0;
  if (uVar8 == 0x40) {
    uVar12 = 8;
  }
  else if (uVar8 == 8) {
    uVar12 = 0x10;
  }
  else {
    uVar12 = 10;
  }
  uVar2 = FUN_140c9d82(&local_48,&param_5);
  if (uVar2 == 0) {
    local_38 = FUN_140c9d64(&local_48);
    bVar17 = *(int *)(iVar1 + 0xbc) == local_38;
    if ((((bVar17) || (*(int *)(iVar1 + 0xc0) == local_38)) &&
        ((*(char *)(iVar1 + 0x10) == '\0' || (*(int *)(iVar1 + 0x28) != local_38)))) &&
       (*(int *)(iVar1 + 0x24) != local_38)) {
      FUN_140d2450(local_48);
      local_44 = 0xffffffff;
      iVar3 = FUN_140c9da6(&local_48,&param_5);
      if (iVar3 == 0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar14 = 1;
        goto LAB_140d6888;
      }
      local_38 = FUN_140c9d64(&local_48);
    }
    uVar10 = 0;
    uVar11 = 0;
    do {
      if (((*(char *)(iVar1 + 0x10) != '\0') && (uVar14 = uVar2, *(int *)(iVar1 + 0x28) == local_38)
          ) || (uVar14 = uVar2, *(int *)(iVar1 + 0x24) == local_38)) break;
      if (*(int *)(iVar1 + 0xcc) == local_38) {
        if (uVar10 == 0) {
          if (uVar8 != 0) {
            if (uVar12 != 8) goto LAB_140d681c;
            uVar11 = 0;
LAB_140d681e:
            uVar10 = 1;
            goto LAB_140d6840;
          }
          uVar10 = 1;
        }
        else {
          if (uVar12 != 10) goto LAB_140d6824;
          if (uVar8 != 0) {
LAB_140d681c:
            uVar11 = uVar11 + 1;
            goto LAB_140d681e;
          }
        }
        uVar12 = 8;
        uVar11 = uVar8;
      }
      else {
        uVar14 = uVar10;
        if (uVar10 == 0) break;
LAB_140d6824:
        if ((*(int *)(iVar1 + 0xc4) != local_38) && (*(int *)(iVar1 + 200) != local_38)) {
          uVar10 = 1;
          uVar14 = uVar2;
          break;
        }
        if (uVar8 == 0) {
          uVar12 = 0x10;
          uVar10 = 0;
          uVar11 = uVar8;
        }
        else {
          if (uVar12 != 0x10) {
            uVar10 = 1;
            uVar14 = uVar2;
            uVar8 = uVar12;
            goto LAB_140d6896;
          }
          uVar10 = 0;
          uVar11 = 0;
        }
      }
LAB_140d6840:
      FUN_140d2450(local_48);
      local_44 = 0xffffffff;
      iVar3 = FUN_140c9da6(&local_48,&param_5);
      if (iVar3 == 0) {
        uVar14 = 1;
        break;
      }
      local_38 = FUN_140c9d64(&local_48);
      uVar14 = uVar10;
    } while (uVar10 != 0);
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    bVar17 = false;
    uVar14 = uVar2;
  }
LAB_140d6888:
  uVar8 = uVar12;
  if (uVar12 == 0x10) {
    uVar8 = 0x16;
  }
LAB_140d6896:
  local_34[0] = DAT_140d6aac;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    FUN_140c427a(local_34,0x20);
  }
  uVar18 = FUN_140e414c(0xffffffff,0xffffffff,uVar12,0);
  uVar2 = (uint)((ulonglong)uVar18 >> 0x20);
  uVar6 = (uint)*(byte *)(iVar1 + 0x124);
  if (uVar6 == 0) {
    uVar9 = 0;
    uVar13 = uVar9;
    uVar16 = uVar6;
    if (uVar14 == 0) {
      while (uVar6 = FUN_140d2464(uVar8,local_38), uVar6 != 0xffffffff) {
        if (uVar13 < uVar2 || uVar2 - uVar13 < (uint)(uVar9 <= (uint)uVar18)) {
          uVar15 = (uint)((ulonglong)uVar12 * (ulonglong)uVar9);
          uVar11 = uVar11 + 1;
          uVar13 = uVar12 * uVar13 + (int)((ulonglong)uVar12 * (ulonglong)uVar9 >> 0x20);
          uVar9 = ~((int)uVar6 >> 0x1f);
          if (uVar9 <= uVar13 && (uint)(uVar15 <= ~uVar6) <= uVar9 - uVar13) {
            uVar16 = uVar16 | 1;
          }
          uVar9 = uVar6 + uVar15;
          uVar13 = uVar13 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar15);
        }
        else {
          uVar16 = 1;
        }
        FUN_140d2450(local_48);
        local_44 = 0xffffffff;
        iVar3 = FUN_140c9da6(&local_48,&param_5);
        if (iVar3 == 0) {
          uVar14 = 1;
          break;
        }
        local_38 = FUN_140c9d64(&local_48);
      }
    }
  }
  else {
    uVar9 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar16 = uVar14;
    while (uVar14 = uVar16, uVar16 = uVar15, uVar14 == 0) {
      while( true ) {
        cVar5 = *(char *)(iVar1 + 0x10);
        if ((cVar5 == '\0') || (local_38 != *(int *)(iVar1 + 0x28))) {
          if (local_38 == *(int *)(iVar1 + 0x24)) goto LAB_140d6936;
          uVar19 = FUN_140c4502(iVar1 + 0xcc,uVar8,&local_38);
          iVar3 = (int)((ulonglong)uVar19 >> 0x20);
          if ((int)uVar19 == 0) {
            cVar5 = '\0';
            goto LAB_140d6938;
          }
          iVar4 = (int)uVar19 - (iVar1 + 0xcc);
          uVar7 = iVar4 >> 2;
          if (0x3c < iVar4) {
            uVar7 = uVar7 - 6;
          }
          uVar15 = uVar6;
          if (uVar13 < uVar2 || uVar2 - uVar13 < (uint)(uVar9 <= (uint)uVar18)) {
            uVar15 = (uint)((ulonglong)uVar12 * (ulonglong)uVar9);
            uVar11 = uVar11 + 1;
            uVar13 = uVar12 * uVar13 + (int)((ulonglong)uVar12 * (ulonglong)uVar9 >> 0x20);
            uVar9 = ~((int)uVar7 >> 0x1f);
            iVar3 = (uVar9 - uVar13) - (uint)(uVar15 > ~uVar7);
            if (uVar9 <= uVar13 && (uint)(uVar15 <= ~uVar7) <= uVar9 - uVar13) {
              uVar16 = uVar16 | 1;
            }
            uVar9 = uVar7 + uVar15;
            uVar13 = uVar13 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar7,uVar15);
            uVar15 = uVar16;
          }
        }
        else {
          if (uVar11 == 0) goto LAB_140d6938;
          uVar15 = uVar11 & 0xff;
          uVar11 = 0;
          FUN_140c4416(local_34,uVar15);
          iVar3 = extraout_r1;
          uVar15 = uVar16;
        }
        FUN_140d2450(local_48,iVar3);
        local_44 = 0xffffffff;
        iVar3 = FUN_140c9da6(&local_48,&param_5);
        uVar16 = uVar6;
        if (iVar3 == 0) break;
        local_38 = FUN_140c9d64(&local_48);
        uVar16 = uVar15;
      }
    }
  }
LAB_140d6936:
  cVar5 = '\0';
LAB_140d6938:
  if (*(int *)(local_34[0] + -0xc) != 0) {
    FUN_140c4416(local_34,uVar11 & 0xff);
    iVar3 = FUN_140d8b0c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),local_34);
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar11 == 0) && (uVar10 == 0)) && (*(int *)(local_34[0] + -0xc) == 0)) || (cVar5 != '\0'))
  {
    uVar8 = 0;
    uVar12 = 0;
  }
  else {
    if (uVar16 == 0) {
      if (bVar17) {
        bVar17 = uVar9 != 0;
        uVar9 = -uVar9;
        uVar13 = -uVar13 - (uint)bVar17;
      }
      *param_9 = uVar9;
      param_9[1] = uVar13;
      goto LAB_140d6a72;
    }
    uVar8 = 0xffffffff;
    uVar12 = 0xffffffff;
  }
  *param_9 = uVar8;
  param_9[1] = uVar12;
  *param_8 = 4;
LAB_140d6a72:
  if (uVar14 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  FUN_140c3fe4(local_34);
  return param_1;
}

