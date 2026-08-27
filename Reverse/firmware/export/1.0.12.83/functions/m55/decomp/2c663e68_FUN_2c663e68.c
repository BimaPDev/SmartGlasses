/* FUN_2c663e68 @ 0x2c663e68 */

undefined4 *
FUN_2c663e68(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar2 = FUN_2c65faf0(iVar8);
  iVar8 = FUN_2c66023c(iVar8);
  local_3c = DAT_2c66411c;
  uVar7 = 0;
  if ((*(int *)(iVar8 + 0x28) != 0) && (uVar7 = 0, *(int *)(iVar8 + 0x30) != 0)) {
    uVar7 = 1;
  }
  local_40 = DAT_2c66411c;
  if (*(char *)(iVar8 + 0x10) != '\0') {
    FUN_2c6510f6(&local_40);
  }
  iVar9 = 0;
  FUN_2c6510f6(&local_3c,0x20);
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
      goto LAB_2c664152;
    case 1:
      iVar4 = FUN_2c656c1a(&local_48,&param_5);
      if (iVar4 != 0) {
        uVar6 = FUN_2c656bd8(&local_48);
        uVar5 = FUN_2c6565e2(uVar2,8,uVar6);
        if (uVar5 != 0) {
          FUN_2c660394(&local_48);
          goto LAB_2c664152;
        }
      }
      uVar5 = 0;
LAB_2c664152:
      if (iVar9 != 3) {
        while (iVar4 = FUN_2c656c1a(&local_48,&param_5), iVar4 != 0) {
          uVar6 = FUN_2c656bd8(&local_48);
          iVar4 = FUN_2c6565e2(uVar2,8,uVar6);
          if (iVar4 == 0) break;
          FUN_2c660394(&local_48);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar12)) || (iVar9 == 0)) {
LAB_2c663f84:
        iVar4 = *(int *)(iVar8 + 0x20);
        iVar13 = 0;
        while (uVar5 = FUN_2c656c1a(&local_48,&param_5), uVar5 != 0) {
          if (iVar13 == iVar4) goto LAB_2c663fc4;
          iVar3 = FUN_2c656bd8(&local_48);
          if (*(int *)(*(int *)(iVar8 + 0x1c) + iVar13 * 4) != iVar3) goto LAB_2c663fb0;
          iVar13 = iVar13 + 1;
          FUN_2c660394(&local_48);
        }
        if (iVar13 != iVar4) {
LAB_2c663fb0:
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
        goto LAB_2c663f84;
      }
      else if (iVar9 == 2) {
        if (local_38._3_1_ != '\x04') {
          if (uVar7 == 0) goto switchD_2c663ee4_default;
          uVar5 = uVar7;
          if (local_38._3_1_ != '\x03') break;
        }
        goto LAB_2c663f84;
      }
switchD_2c663ee4_default:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar8 + 0x28) == 0) || (uVar5 = FUN_2c656c1a(&local_48,&param_5), uVar5 == 0))
         || (iVar4 = FUN_2c656bd8(&local_48), **(int **)(iVar8 + 0x24) != iVar4)) {
        if (((*(int *)(iVar8 + 0x30) == 0) || (uVar5 = FUN_2c656c1a(&local_48,&param_5), uVar5 == 0)
            ) || (iVar4 = FUN_2c656bd8(&local_48), **(int **)(iVar8 + 0x2c) != iVar4)) {
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
          FUN_2c660394(&local_48);
          local_60 = uVar5;
        }
      }
      else {
        uVar12 = *(uint *)(iVar8 + 0x28);
        FUN_2c660394(&local_48);
      }
      break;
    case 4:
      while (uVar5 = FUN_2c656c1a(&local_48,&param_5), uVar5 != 0) {
        local_34[0] = FUN_2c656bd8(&local_48);
        iVar4 = FUN_2c65137e(iVar8 + 0x44,10,local_34);
        if (iVar4 == 0) {
          if ((*(int *)(iVar8 + 0x14) == local_34[0]) && (uVar11 == 0)) {
            if (*(int *)(iVar8 + 0x34) < 1) goto LAB_2c664126;
            local_58 = uVar10;
            uVar11 = uVar5;
            uVar10 = 0;
          }
          else {
            if ((*(byte *)(iVar8 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar8 + 0x10), local_34[0] != *(int *)(iVar8 + 0x18) ||
                (uVar5 = uVar11, uVar11 != 0)))) goto LAB_2c664126;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_2c664126;
            }
            FUN_2c651292(&local_40,uVar10 & 0xff);
            uVar10 = 0;
          }
        }
        else {
          FUN_2c651292(&local_3c,*(undefined1 *)(*DAT_2c664120 + (iVar4 - (iVar8 + 0x40) >> 2)));
          uVar10 = uVar10 + 1;
        }
        FUN_2c660394(&local_48);
      }
      uVar5 = 1;
LAB_2c664126:
      if (*(int *)(local_3c + -0xc) == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto switchD_2c663ee4_default;
    }
LAB_2c663fc4:
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      if (uVar12 < 2) {
        if (uVar5 != 0) goto LAB_2c6641c2;
      }
      else if (uVar5 != 0) {
        if (local_60 == 0) {
          iVar9 = *(int *)(iVar8 + 0x24);
        }
        else {
          iVar9 = *(int *)(iVar8 + 0x2c);
        }
        uVar7 = 1;
        goto LAB_2c663fe6;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_2c663ef8:
  *puVar1 = *puVar1 | 4;
LAB_2c663f04:
  iVar8 = FUN_2c656bf6(&local_48,&param_5);
  if (iVar8 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  FUN_2c650e60(&local_3c);
  FUN_2c650e60(&local_40);
  return param_1;
LAB_2c663fe6:
  iVar4 = FUN_2c656c1a(&local_48,&param_5);
  if (iVar4 == 0) goto LAB_2c6641bc;
  if (uVar12 == uVar7) goto LAB_2c6641c2;
  iVar4 = FUN_2c656bd8(&local_48);
  if (*(int *)(iVar9 + uVar7 * 4) != iVar4) goto LAB_2c663ef8;
  uVar7 = uVar7 + 1;
  FUN_2c660394(&local_48);
  goto LAB_2c663fe6;
LAB_2c6641bc:
  if (uVar12 == uVar7) {
LAB_2c6641c2:
    if ((1 < *(uint *)(local_3c + -0xc)) && (iVar9 = FUN_2c650d2e(&local_3c,0x30,0), iVar9 != 0)) {
      if (iVar9 == -1) {
        iVar9 = *(int *)(local_3c + -0xc) + -1;
      }
      FUN_2c65f590(&local_3c,0,iVar9);
    }
    if ((local_60 != 0) && (FUN_2c650f64(&local_3c), *local_3c != '0')) {
      uVar2 = FUN_2c650f76(&local_3c);
      FUN_2c650fec(&local_3c,uVar2,0x2d);
    }
    if (*(int *)(local_40 + -0xc) != 0) {
      if (uVar11 == 0) {
        local_58._0_1_ = (undefined1)uVar10;
      }
      else {
      }
      FUN_2c651292(&local_40,(undefined1)local_58);
      iVar9 = FUN_2c665bc0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),&local_40);
      if (iVar9 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar11 == 0) || (*(uint *)(iVar8 + 0x34) == uVar10)) {
      FUN_2c650d04(param_9,&local_3c);
      goto LAB_2c663f04;
    }
  }
  goto LAB_2c663ef8;
}

