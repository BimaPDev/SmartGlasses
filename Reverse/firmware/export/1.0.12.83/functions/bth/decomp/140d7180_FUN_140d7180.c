/* FUN_140d7180 @ 0x140d7180 */

undefined4 *
FUN_140d7180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  int local_34 [2];
  
  puVar1 = param_8;
  iVar8 = param_7 + 0x6c;
  local_48 = param_3;
  uStack_44 = param_4;
  uVar2 = FUN_140d2a04(iVar8);
  iVar8 = FUN_140d2fc0(iVar8);
  local_3c = DAT_140d7434;
  uVar7 = 0;
  if ((*(int *)(iVar8 + 0x28) != 0) && (uVar7 = 0, *(int *)(iVar8 + 0x30) != 0)) {
    uVar7 = 1;
  }
  local_40 = DAT_140d7434;
  if (*(char *)(iVar8 + 0x10) != '\0') {
    FUN_140c427a(&local_40);
  }
  iVar9 = 0;
  FUN_140c427a(&local_3c,0x20);
  uVar11 = 0;
  uVar10 = 0;
  uVar12 = 0;
  local_58 = 0;
  local_38 = *(undefined4 *)(iVar8 + 0x3c);
  local_60 = 0;
  do {
    switch(*(undefined1 *)((int)local_34 + iVar9 + -4)) {
    case 0:
      uVar5 = 1;
      goto LAB_140d746a;
    case 1:
      iVar4 = FUN_140c9da6(&local_48,&param_5);
      if (iVar4 != 0) {
        uVar6 = FUN_140c9d64(&local_48);
        uVar5 = FUN_140c976a(uVar2,8,uVar6);
        if (uVar5 != 0) {
          FUN_140d32a8(&local_48);
          goto LAB_140d746a;
        }
      }
      uVar5 = 0;
LAB_140d746a:
      if (iVar9 != 3) {
        while (iVar4 = FUN_140c9da6(&local_48,&param_5), iVar4 != 0) {
          uVar6 = FUN_140c9d64(&local_48);
          iVar4 = FUN_140c976a(uVar2,8,uVar6);
          if (iVar4 == 0) break;
          FUN_140d32a8(&local_48);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar12)) || (iVar9 == 0)) {
LAB_140d729c:
        iVar4 = *(int *)(iVar8 + 0x20);
        iVar13 = 0;
        while (uVar5 = FUN_140c9da6(&local_48,&param_5), uVar5 != 0) {
          if (iVar13 == iVar4) goto LAB_140d72dc;
          iVar3 = FUN_140c9d64(&local_48);
          if (*(int *)(*(int *)(iVar8 + 0x1c) + iVar13 * 4) != iVar3) goto LAB_140d72c8;
          iVar13 = iVar13 + 1;
          FUN_140d32a8(&local_48);
        }
        if (iVar13 != iVar4) {
LAB_140d72c8:
          if (iVar13 == 0) {
            uVar5 = ((*(uint *)(param_7 + 0xc) ^ 0x200) & 0x3ff) >> 9;
          }
          else {
            uVar5 = 0;
          }
          break;
        }
      }
      else if (iVar9 == 1) {
        if (((uVar7 != 0) || ((char)local_38 == '\x03')) || (local_38._2_1_ == '\x01'))
        goto LAB_140d729c;
      }
      else if (iVar9 == 2) {
        if (local_38._3_1_ != '\x04') {
          if (uVar7 == 0) goto switchD_140d71fc_default;
          uVar5 = uVar7;
          if (local_38._3_1_ != '\x03') break;
        }
        goto LAB_140d729c;
      }
switchD_140d71fc_default:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar8 + 0x28) == 0) || (uVar5 = FUN_140c9da6(&local_48,&param_5), uVar5 == 0))
         || (iVar4 = FUN_140c9d64(&local_48), **(int **)(iVar8 + 0x24) != iVar4)) {
        if (((*(int *)(iVar8 + 0x30) == 0) || (uVar5 = FUN_140c9da6(&local_48,&param_5), uVar5 == 0)
            ) || (iVar4 = FUN_140c9d64(&local_48), **(int **)(iVar8 + 0x2c) != iVar4)) {
          if ((*(int *)(iVar8 + 0x28) == 0) || (*(int *)(iVar8 + 0x30) != 0)) {
            uVar5 = uVar7 ^ 1;
          }
          else {
            local_60 = 1;
            uVar5 = 1;
          }
        }
        else {
          uVar12 = *(uint *)(iVar8 + 0x30);
          FUN_140d32a8(&local_48);
          local_60 = uVar5;
        }
      }
      else {
        uVar12 = *(uint *)(iVar8 + 0x28);
        FUN_140d32a8(&local_48);
      }
      break;
    case 4:
      while (uVar5 = FUN_140c9da6(&local_48,&param_5), uVar5 != 0) {
        local_34[0] = FUN_140c9d64(&local_48);
        iVar4 = FUN_140c4502(iVar8 + 0x44,10,local_34);
        if (iVar4 == 0) {
          if ((*(int *)(iVar8 + 0x14) == local_34[0]) && (uVar11 == 0)) {
            if (*(int *)(iVar8 + 0x34) < 1) goto LAB_140d743e;
            local_58 = uVar10;
            uVar11 = uVar5;
            uVar10 = 0;
          }
          else {
            if ((*(byte *)(iVar8 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar8 + 0x10), local_34[0] != *(int *)(iVar8 + 0x18) ||
                (uVar5 = uVar11, uVar11 != 0)))) goto LAB_140d743e;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_140d743e;
            }
            FUN_140c4416(&local_40,uVar10 & 0xff);
            uVar10 = 0;
          }
        }
        else {
          FUN_140c4416(&local_3c,*(undefined1 *)(*DAT_140d7438 + (iVar4 - (iVar8 + 0x40) >> 2)));
          uVar10 = uVar10 + 1;
        }
        FUN_140d32a8(&local_48);
      }
      uVar5 = 1;
LAB_140d743e:
      if (*(int *)(local_3c + -0xc) == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto switchD_140d71fc_default;
    }
LAB_140d72dc:
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      if (uVar12 < 2) {
        if (uVar5 != 0) goto LAB_140d74da;
      }
      else if (uVar5 != 0) {
        if (local_60 == 0) {
          iVar9 = *(int *)(iVar8 + 0x24);
        }
        else {
          iVar9 = *(int *)(iVar8 + 0x2c);
        }
        uVar7 = 1;
        goto LAB_140d72fe;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_140d7210:
  *puVar1 = *puVar1 | 4;
LAB_140d721c:
  iVar8 = FUN_140c9d82(&local_48,&param_5);
  if (iVar8 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  FUN_140c3fe4(&local_3c);
  FUN_140c3fe4(&local_40);
  return param_1;
LAB_140d72fe:
  iVar4 = FUN_140c9da6(&local_48,&param_5);
  if (iVar4 == 0) goto LAB_140d74d4;
  if (uVar12 == uVar7) goto LAB_140d74da;
  iVar4 = FUN_140c9d64(&local_48);
  if (*(int *)(iVar9 + uVar7 * 4) != iVar4) goto LAB_140d7210;
  uVar7 = uVar7 + 1;
  FUN_140d32a8(&local_48);
  goto LAB_140d72fe;
LAB_140d74d4:
  if (uVar12 == uVar7) {
LAB_140d74da:
    if ((1 < *(uint *)(local_3c + -0xc)) && (iVar9 = FUN_140c3eb2(&local_3c,0x30,0), iVar9 != 0)) {
      if (iVar9 == -1) {
        iVar9 = *(int *)(local_3c + -0xc) + -1;
      }
      FUN_140d24a4(&local_3c,0,iVar9);
    }
    if ((local_60 != 0) && (FUN_140c40e8(&local_3c), *local_3c != '0')) {
      uVar2 = FUN_140c40fa(&local_3c);
      FUN_140c4170(&local_3c,uVar2,0x2d);
    }
    if (*(int *)(local_40 + -0xc) != 0) {
      if (uVar11 == 0) {
        local_58._0_1_ = (undefined1)uVar10;
      }
      else {
      }
      FUN_140c4416(&local_40,(undefined1)local_58);
      iVar9 = FUN_140d8b0c(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),&local_40);
      if (iVar9 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar11 == 0) || (*(uint *)(iVar8 + 0x34) == uVar10)) {
      FUN_140c3e88(param_9,&local_3c);
      goto LAB_140d721c;
    }
  }
  goto LAB_140d7210;
}

