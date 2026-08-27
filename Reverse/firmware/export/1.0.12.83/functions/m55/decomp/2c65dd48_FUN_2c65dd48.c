/* FUN_2c65dd48 @ 0x2c65dd48 */

undefined4 *
FUN_2c65dd48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint local_64;
  uint local_5c;
  undefined4 local_48;
  undefined4 uStack_44;
  char local_3d;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  
  puVar1 = param_8;
  iVar9 = param_7 + 0x6c;
  local_48 = param_3;
  uStack_44 = param_4;
  iVar4 = FUN_2c659524(iVar9);
  iVar9 = FUN_2c659a04(iVar9);
  local_38 = DAT_2c65e000;
  uVar8 = 0;
  if ((*(int *)(iVar9 + 0x20) != 0) && (uVar8 = 0, *(int *)(iVar9 + 0x28) != 0)) {
    uVar8 = 1;
  }
  local_3c = DAT_2c65e000;
  if (*(char *)(iVar9 + 0x10) != '\0') {
    FUN_2c6510f6(&local_3c,0x20);
  }
  iVar10 = 0;
  FUN_2c6510f6(&local_38,0x20);
  uVar12 = 0;
  uVar11 = 0;
  uVar13 = 0;
  local_5c = 0;
  local_34 = *(undefined4 *)(iVar9 + 0x34);
  local_64 = 0;
  do {
    switch(*(undefined1 *)((int)&local_34 + iVar10)) {
    case 0:
      uVar5 = 1;
      goto LAB_2c65e038;
    case 1:
      uVar5 = FUN_2c652d9a(&local_48,&param_5);
      if ((uVar5 == 0) ||
         (bVar3 = FUN_2c652d58(&local_48),
         -1 < (int)((uint)*(byte *)(*(int *)(iVar4 + 0x18) + (uint)bVar3) << 0x1c))) {
        uVar5 = 0;
      }
      else {
        FUN_2c659e18(&local_48);
      }
LAB_2c65e038:
      if (iVar10 != 3) {
        while ((iVar6 = FUN_2c652d9a(&local_48,&param_5), iVar6 != 0 &&
               (bVar3 = FUN_2c652d58(&local_48),
               (int)((uint)*(byte *)(*(int *)(iVar4 + 0x18) + (uint)bVar3) << 0x1c) < 0))) {
          FUN_2c659e18(&local_48);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar13)) || (iVar10 == 0)) {
LAB_2c65de60:
        iVar6 = *(int *)(iVar9 + 0x18);
        iVar14 = 0;
        while (uVar5 = FUN_2c652d9a(&local_48,&param_5), uVar5 != 0) {
          if (iVar14 == iVar6) goto LAB_2c65dea2;
          cVar2 = FUN_2c652d58(&local_48);
          if (*(char *)(*(int *)(iVar9 + 0x14) + iVar14) != cVar2) goto LAB_2c65de8e;
          iVar14 = iVar14 + 1;
          FUN_2c659e18(&local_48);
        }
        if (iVar14 != iVar6) {
LAB_2c65de8e:
          if (iVar14 == 0) {
            uVar5 = ((*(uint *)(param_7 + 0xc) ^ 0x200) & 0x3ff) >> 9;
          }
          else {
            uVar5 = 0;
          }
          break;
        }
      }
      else if (iVar10 == 1) {
        if (((uVar8 != 0) || ((char)local_34 == '\x03')) || (local_34._2_1_ == '\x01'))
        goto LAB_2c65de60;
      }
      else if (iVar10 == 2) {
        if (local_34._3_1_ != '\x04') {
          if (uVar8 == 0) goto switchD_2c65ddc0_default;
          uVar5 = uVar8;
          if (local_34._3_1_ != '\x03') break;
        }
        goto LAB_2c65de60;
      }
switchD_2c65ddc0_default:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar9 + 0x20) == 0) || (uVar5 = FUN_2c652d9a(&local_48,&param_5), uVar5 == 0))
         || (cVar2 = FUN_2c652d58(&local_48), **(char **)(iVar9 + 0x1c) != cVar2)) {
        if (((*(int *)(iVar9 + 0x28) == 0) || (uVar5 = FUN_2c652d9a(&local_48,&param_5), uVar5 == 0)
            ) || (cVar2 = FUN_2c652d58(&local_48), **(char **)(iVar9 + 0x24) != cVar2)) {
          if ((*(int *)(iVar9 + 0x20) == 0) || (*(int *)(iVar9 + 0x28) != 0)) {
            uVar5 = uVar8 ^ 1;
          }
          else {
            local_64 = 1;
            uVar5 = 1;
          }
        }
        else {
          uVar13 = *(uint *)(iVar9 + 0x28);
          FUN_2c659e18(&local_48);
          local_64 = uVar5;
        }
      }
      else {
        uVar13 = *(uint *)(iVar9 + 0x20);
        FUN_2c659e18(&local_48);
      }
      break;
    case 4:
      while (uVar5 = FUN_2c652d9a(&local_48,&param_5), uVar5 != 0) {
        cVar2 = FUN_2c652d58(&local_48);
        local_3d = cVar2;
        iVar6 = FUN_2c650c06(iVar9 + 0x39,10,&local_3d);
        if (iVar6 == 0) {
          if ((*(char *)(iVar9 + 0x11) == cVar2) && (uVar12 == 0)) {
            if (*(int *)(iVar9 + 0x2c) < 1) goto LAB_2c65e00a;
            local_5c = uVar11;
            uVar12 = uVar5;
            uVar11 = 0;
          }
          else {
            if ((*(byte *)(iVar9 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar9 + 0x10), *(char *)(iVar9 + 0x12) != cVar2 ||
                (uVar5 = uVar12, uVar12 != 0)))) goto LAB_2c65e00a;
            if (uVar11 == 0) {
              uVar5 = 0;
              goto LAB_2c65e00a;
            }
            FUN_2c651292(&local_3c,uVar11 & 0xff);
            uVar11 = 0;
          }
        }
        else {
          FUN_2c651292(&local_38,*(undefined1 *)(*DAT_2c65e004 + (iVar6 - (iVar9 + 0x38))));
          uVar11 = uVar11 + 1;
        }
        FUN_2c659e18(&local_48);
      }
      uVar5 = 1;
LAB_2c65e00a:
      if (*(int *)(local_38 + -0xc) == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto switchD_2c65ddc0_default;
    }
LAB_2c65dea2:
    iVar10 = iVar10 + 1;
    if (iVar10 == 4) {
      if (uVar13 < 2) {
        if (uVar5 != 0) goto LAB_2c65e09e;
      }
      else if (uVar5 != 0) {
        if (local_64 == 0) {
          iVar4 = *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar4 = *(int *)(iVar9 + 0x24);
        }
        uVar8 = 1;
        goto LAB_2c65dec4;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_2c65ddd4:
  *puVar1 = *puVar1 | 4;
LAB_2c65dde0:
  iVar4 = FUN_2c652d76(&local_48,&param_5);
  if (iVar4 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  FUN_2c650e60(&local_38);
  FUN_2c650e60(&local_3c);
  return param_1;
LAB_2c65dec4:
  iVar10 = FUN_2c652d9a(&local_48,&param_5);
  if (iVar10 == 0) goto LAB_2c65e098;
  if (uVar13 == uVar8) goto LAB_2c65e09e;
  cVar2 = FUN_2c652d58(&local_48);
  if (*(char *)(iVar4 + uVar8) != cVar2) goto LAB_2c65ddd4;
  uVar8 = uVar8 + 1;
  FUN_2c659e18(&local_48);
  goto LAB_2c65dec4;
LAB_2c65e098:
  if (uVar13 == uVar8) {
LAB_2c65e09e:
    if ((1 < *(uint *)(local_38 + -0xc)) && (iVar4 = FUN_2c650d2e(&local_38,0x30,0), iVar4 != 0)) {
      if (iVar4 == -1) {
        iVar4 = *(int *)(local_38 + -0xc) + -1;
      }
      FUN_2c658ff4(&local_38,0,iVar4);
    }
    if ((local_64 != 0) && (FUN_2c650f64(&local_38), *local_38 != '0')) {
      uVar7 = FUN_2c650f76(&local_38);
      FUN_2c650fec(&local_38,uVar7,0x2d);
    }
    if (*(int *)(local_3c + -0xc) != 0) {
      if (uVar12 == 0) {
        local_5c._0_1_ = (undefined1)uVar11;
      }
      else {
      }
      FUN_2c651292(&local_3c,(undefined1)local_5c);
      iVar4 = FUN_2c665bc0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc),&local_3c);
      if (iVar4 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar12 == 0) || (*(uint *)(iVar9 + 0x2c) == uVar11)) {
      FUN_2c650d04(param_9,&local_38);
      goto LAB_2c65dde0;
    }
  }
  goto LAB_2c65ddd4;
}

