/* FUN_2c4d2320 @ 0x2c4d2320 */

undefined4 FUN_2c4d2320(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  cVar1 = *param_1;
  if (cVar1 < '\b') {
    if (cVar1 < '\x06') {
      if (cVar1 != '\x02') {
        return 0;
      }
      if (param_1[0x6e] == '\0') {
        iVar3 = *(int *)(param_1 + 0x310);
        uVar7 = *(ushort *)
                 (param_1 + ((uint)(byte)param_1[0x7c] - *(int *)(param_1 + 0x318)) * 2 + 0xca);
        if (*(int *)(param_1 + 0x60) == 0) {
          FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
        }
        else if (*(int *)(param_1 + 0x40) != 0) {
          FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
        }
        pcVar8 = param_1 + 0x44;
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        param_1[0x40] = '\0';
        param_1[0x41] = '\0';
        param_1[0x42] = '\0';
        param_1[0x43] = '\0';
        iVar2 = FUN_2c4d76a8(pcVar8);
        iVar3 = (iVar3 - iVar2) + 0x10 + (uint)(byte)param_1[0x7d];
        uVar9 = (uint)uVar7 * 8 - iVar3;
        if ((int)uVar9 < 0) {
          iVar3 = iVar3 + (uint)uVar7 * -8;
          iVar2 = *(int *)(param_1 + 0x40);
          uVar9 = *(uint *)(param_1 + 0x60);
          uVar5 = iVar3 + iVar2;
          if (uVar5 < 0x20) {
            if (uVar9 == 0) {
              *(uint *)(param_1 + 0x40) = uVar5;
              FUN_2c4d766c(pcVar8,uVar5);
              param_1[0x3c] = '\0';
              param_1[0x3d] = '\0';
              param_1[0x3e] = '\0';
              param_1[0x3f] = '\0';
              param_1[0x40] = '\0';
              param_1[0x41] = '\0';
              param_1[0x42] = '\0';
              param_1[0x43] = '\0';
              goto LAB_2c4d246e;
            }
LAB_2c4d2594:
            if (iVar2 != 0) {
              FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),iVar2);
              uVar9 = *(uint *)(param_1 + 0x60);
            }
          }
          else {
            if (uVar9 != 0) goto LAB_2c4d2594;
            FUN_2c4d766c(pcVar8);
            uVar9 = *(uint *)(param_1 + 0x60);
          }
          param_1[0x3c] = '\0';
          param_1[0x3d] = '\0';
          param_1[0x3e] = '\0';
          param_1[0x3f] = '\0';
          param_1[0x40] = '\0';
          param_1[0x41] = '\0';
          param_1[0x42] = '\0';
          param_1[0x43] = '\0';
          FUN_2c4d766c(pcVar8,iVar3,uVar9 & 0xff);
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x40);
          if (uVar9 < uVar5) {
            if (*(int *)(param_1 + 0x60) == 0) {
              *(uint *)(param_1 + 0x40) = uVar5 - uVar9;
              goto LAB_2c4d246e;
            }
LAB_2c4d2452:
            FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),uVar5);
            uVar6 = *(uint *)(param_1 + 0x60);
          }
          else {
            uVar6 = *(uint *)(param_1 + 0x60);
            if (uVar6 == 0) {
              FUN_2c4d766c(pcVar8);
              uVar6 = *(uint *)(param_1 + 0x60);
            }
            else if (uVar5 != 0) goto LAB_2c4d2452;
          }
          param_1[0x3c] = '\0';
          param_1[0x3d] = '\0';
          param_1[0x3e] = '\0';
          param_1[0x3f] = '\0';
          param_1[0x40] = '\0';
          param_1[0x41] = '\0';
          param_1[0x42] = '\0';
          param_1[0x43] = '\0';
          FUN_2c4d768c(pcVar8,uVar9,uVar6 & 0xff);
        }
LAB_2c4d246e:
        if (param_1[0x7c] != '\0') {
          if (param_1[0x6e] != '\0') {
            return 0;
          }
          iVar3 = *(int *)(param_1 + 0x40);
          uVar9 = 0x10 - iVar3;
          if ((int)uVar9 < 1) {
            uVar9 = *(uint *)(param_1 + 0x3c);
            uVar7 = 0;
          }
          else {
            if (uVar9 == 0x20) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ushort)(*(int *)(param_1 + 0x3c) << (uVar9 & 0xff));
            }
            uVar9 = FUN_2c4d74d4(pcVar8);
            *(uint *)(param_1 + 0x3c) = uVar9;
            iVar3 = *(int *)(param_1 + 0x40) + 0x20;
          }
          uVar4 = *(undefined4 *)(DAT_2c4d2718 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar3 - 0x10U;
          *(ushort *)(param_1 + 200) =
               ((ushort)(uVar9 >> (iVar3 - 0x10U & 0xff)) | uVar7) & (ushort)uVar4;
        }
      }
      else if (param_1[0x7c] != '\0') {
        return 0;
      }
      if (*(int *)(param_1 + 0x318) != 0) {
        return 0;
      }
      if (param_1[0x6e] != '\0') {
        return 0;
      }
      uVar7 = *(ushort *)(param_1 + 0x78);
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
      }
      else if (*(int *)(param_1 + 0x40) != 0) {
        FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
      }
      pcVar8 = param_1 + 0x44;
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      iVar3 = FUN_2c4d76a8(pcVar8);
      uVar9 = ((uint)uVar7 * 8 - *(int *)(param_1 + 0x30c)) + -0xc + iVar3;
      if (uVar9 == 0) {
        return 0;
      }
      uVar5 = *(uint *)(param_1 + 0x40);
      if (-1 < (int)uVar9) {
        if (uVar9 < uVar5) {
          if (*(int *)(param_1 + 0x60) == 0) {
            *(uint *)(param_1 + 0x40) = uVar5 - uVar9;
            return 0;
          }
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x60);
          if (uVar6 == 0) {
            FUN_2c4d766c(pcVar8);
            uVar6 = *(uint *)(param_1 + 0x60);
            goto LAB_2c4d251e;
          }
          if (uVar5 == 0) goto LAB_2c4d251e;
        }
        FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),uVar5);
        uVar6 = *(uint *)(param_1 + 0x60);
LAB_2c4d251e:
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        param_1[0x40] = '\0';
        param_1[0x41] = '\0';
        param_1[0x42] = '\0';
        param_1[0x43] = '\0';
        FUN_2c4d768c(pcVar8,uVar9,uVar6 & 0xff);
        return 0;
      }
      uVar10 = uVar5 - uVar9;
      uVar6 = *(uint *)(param_1 + 0x60);
      if (uVar10 < 0x20) {
        if (uVar6 == 0) {
          *(uint *)(param_1 + 0x40) = uVar10;
          FUN_2c4d766c(pcVar8,uVar10);
          param_1[0x3c] = '\0';
          param_1[0x3d] = '\0';
          param_1[0x3e] = '\0';
          param_1[0x3f] = '\0';
          param_1[0x40] = '\0';
          param_1[0x41] = '\0';
          param_1[0x42] = '\0';
          param_1[0x43] = '\0';
          return 0;
        }
      }
      else if (uVar6 == 0) {
        FUN_2c4d766c(pcVar8);
        uVar6 = *(uint *)(param_1 + 0x60);
        goto LAB_2c4d262e;
      }
      if (uVar5 != 0) {
        FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),uVar5);
        uVar6 = *(uint *)(param_1 + 0x60);
      }
LAB_2c4d262e:
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      FUN_2c4d766c(pcVar8,-uVar9,uVar6 & 0xff);
      return 0;
    }
  }
  else if (cVar1 != '\n') {
    return 0;
  }
  if (*(int *)(param_1 + 0x318) != 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x30c);
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
    iVar2 = *(int *)(param_1 + 0x60);
LAB_2c4d253c:
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    if (iVar2 != 0) goto LAB_2c4d2378;
    iVar2 = FUN_2c4d76a8(param_1 + 0x44);
    FUN_2c4d768c(param_1 + 0x44,iVar2 - iVar3 & 7,param_1[0x60]);
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
      iVar2 = *(int *)(param_1 + 0x60);
      goto LAB_2c4d253c;
    }
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
LAB_2c4d2378:
    iVar2 = FUN_2c4d76a8(param_1 + 0x44);
    FUN_2c4d7598(param_1 + 0x44,0,iVar3 - iVar2 & 7);
  }
  pcVar8 = param_1 + 0x44;
  if (*param_1 != '\n') {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_2c4d766c(pcVar8,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c));
  }
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  iVar2 = FUN_2c4d76a8(pcVar8);
  iVar2 = iVar2 + iVar3 * 8;
  uVar9 = iVar2 - *(int *)(param_1 + 0x30c);
  if (uVar9 == 0) {
    return 0;
  }
  if (-1 < (int)uVar9) {
    uVar5 = *(uint *)(param_1 + 0x40);
    if (uVar9 < uVar5) {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(uint *)(param_1 + 0x40) = uVar5 - uVar9;
        return 0;
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x60);
      if (uVar6 == 0) {
        FUN_2c4d766c(pcVar8);
        uVar6 = *(uint *)(param_1 + 0x60);
        goto LAB_2c4d23e6;
      }
      if (uVar5 == 0) goto LAB_2c4d23e6;
    }
    FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),uVar5);
    uVar6 = *(uint *)(param_1 + 0x60);
LAB_2c4d23e6:
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    FUN_2c4d768c(pcVar8,uVar9,uVar6 & 0xff);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x30c) - iVar2;
  iVar3 = *(int *)(param_1 + 0x40);
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar9 = iVar2 + iVar3;
  if (uVar9 < 0x20) {
    if (uVar5 == 0) {
      *(uint *)(param_1 + 0x40) = uVar9;
      FUN_2c4d766c(pcVar8);
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      return 0x401;
    }
  }
  else if (uVar5 == 0) {
    FUN_2c4d766c(pcVar8,iVar3);
    uVar5 = *(uint *)(param_1 + 0x60);
    goto LAB_2c4d26a6;
  }
  if (iVar3 != 0) {
    FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),iVar3);
    uVar5 = *(uint *)(param_1 + 0x60);
  }
LAB_2c4d26a6:
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  FUN_2c4d766c(pcVar8,iVar2,uVar5 & 0xff);
  return 0x401;
}

