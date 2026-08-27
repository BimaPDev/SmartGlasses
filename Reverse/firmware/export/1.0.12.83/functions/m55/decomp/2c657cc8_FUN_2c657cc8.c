/* FUN_2c657cc8 @ 0x2c657cc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c657cc8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uint uStack_88;
  uint uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 *puStack_60;
  int iStack_5c;
  undefined1 auStack_58 [16];
  char *pcStack_48;
  uint uStack_44;
  char acStack_40 [20];
  
  puVar1 = param_8;
  iVar8 = param_7 + 0x6c;
  uStack_70 = param_3;
  uStack_6c = param_4;
  uVar2 = FUN_2c65faf0(iVar8);
  iVar8 = FUN_2c656140(iVar8);
  uVar7 = 0;
  if ((*(int *)(iVar8 + 0x28) != 0) && (uVar7 = 0, *(int *)(iVar8 + 0x30) != 0)) {
    uVar7 = 1;
  }
  puStack_60 = auStack_58;
  iStack_5c = 0;
  auStack_58[0] = 0;
  if (*(char *)(iVar8 + 0x10) != '\0') {
    FUN_2c65eb7e(&puStack_60,0x20);
  }
  iVar9 = 0;
  pcStack_48 = acStack_40;
  uVar11 = 0;
  uStack_44 = 0;
  uVar10 = 0;
  acStack_40[0] = '\0';
  FUN_2c65eb7e(&pcStack_48,0x20);
  uVar12 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_68 = *(undefined4 *)(iVar8 + 0x3c);
  do {
    switch(*(undefined1 *)((int)&uStack_68 + iVar9)) {
    case 0:
      uVar5 = 1;
      goto LAB_2c657fb4;
    case 1:
      iVar4 = FUN_2c656c1a(&uStack_70,&param_5);
      if (iVar4 != 0) {
        uVar6 = FUN_2c656bd8(&uStack_70);
        uVar5 = FUN_2c6565e2(uVar2,8,uVar6);
        if (uVar5 != 0) {
          FUN_2c6561e8(&uStack_70);
          goto LAB_2c657fb4;
        }
      }
      uVar5 = 0;
LAB_2c657fb4:
      if (iVar9 != 3) {
        while (iVar4 = FUN_2c656c1a(&uStack_70,&param_5), iVar4 != 0) {
          uVar6 = FUN_2c656bd8(&uStack_70);
          iVar4 = FUN_2c6565e2(uVar2,8,uVar6);
          if (iVar4 == 0) break;
          FUN_2c6561e8(&uStack_70);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar12)) || (iVar9 == 0)) {
LAB_2c657df2:
        iVar4 = *(int *)(iVar8 + 0x20);
        iVar13 = 0;
        while (uVar5 = FUN_2c656c1a(&uStack_70,&param_5), uVar5 != 0) {
          if (iVar13 == iVar4) goto LAB_2c657e32;
          iVar3 = FUN_2c656bd8(&uStack_70);
          if (*(int *)(*(int *)(iVar8 + 0x1c) + iVar13 * 4) != iVar3) goto LAB_2c657e1e;
          iVar13 = iVar13 + 1;
          FUN_2c6561e8(&uStack_70);
        }
        if (iVar13 != iVar4) {
LAB_2c657e1e:
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
        if (((uVar7 != 0) || ((char)uStack_68 == '\x03')) || (uStack_68._2_1_ == '\x01'))
        goto LAB_2c657df2;
      }
      else if (iVar9 == 2) {
        if (uStack_68._3_1_ != '\x04') {
          if (uVar7 == 0) goto LAB_2c657dd4;
          uVar5 = uVar7;
          if (uStack_68._3_1_ != '\x03') break;
        }
        goto LAB_2c657df2;
      }
LAB_2c657dd4:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar8 + 0x28) == 0) || (uVar5 = FUN_2c656c1a(&uStack_70,&param_5), uVar5 == 0))
         || (iVar4 = FUN_2c656bd8(&uStack_70), **(int **)(iVar8 + 0x24) != iVar4)) {
        if (((*(int *)(iVar8 + 0x30) == 0) ||
            (uVar5 = FUN_2c656c1a(&uStack_70,&param_5), uVar5 == 0)) ||
           (iVar4 = FUN_2c656bd8(&uStack_70), **(int **)(iVar8 + 0x2c) != iVar4)) {
          if ((*(int *)(iVar8 + 0x28) == 0) || (*(int *)(iVar8 + 0x30) != 0)) {
            uVar5 = uVar7 ^ 1;
          }
          else {
            uStack_88 = 1;
            uVar5 = 1;
          }
        }
        else {
          uVar12 = *(uint *)(iVar8 + 0x30);
          FUN_2c6561e8(&uStack_70);
          uStack_88 = uVar5;
        }
      }
      else {
        uVar12 = *(uint *)(iVar8 + 0x28);
        FUN_2c6561e8(&uStack_70);
      }
      break;
    case 4:
      while (uVar5 = FUN_2c656c1a(&uStack_70,&param_5), uVar5 != 0) {
        iStack_64 = FUN_2c656bd8(&uStack_70);
        iVar4 = FUN_2c65137e(iVar8 + 0x44,10,&iStack_64);
        if (iVar4 == 0) {
          if ((*(int *)(iVar8 + 0x14) == iStack_64) && (uVar11 == 0)) {
            if (*(int *)(iVar8 + 0x34) < 1) goto LAB_2c657f8c;
            uStack_80 = uVar10;
            uVar11 = uVar5;
            uVar10 = 0;
          }
          else {
            if ((*(byte *)(iVar8 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar8 + 0x10), iStack_64 != *(int *)(iVar8 + 0x18) ||
                (uVar5 = uVar11, uVar11 != 0)))) goto LAB_2c657f8c;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_2c657f8c;
            }
            FUN_2c65ebe0(&puStack_60,uVar10 & 0xff);
            uVar10 = 0;
          }
        }
        else {
          FUN_2c65ebe0(&pcStack_48,*(undefined1 *)(*_LAB_2c6580a8 + (iVar4 - (iVar8 + 0x40) >> 2)));
          uVar10 = uVar10 + 1;
        }
        FUN_2c6561e8(&uStack_70);
      }
      uVar5 = 1;
LAB_2c657f8c:
      if (uStack_44 == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto LAB_2c657dd4;
    }
LAB_2c657e32:
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      if (uVar12 < 2) {
        if (uVar5 != 0) goto LAB_2c658024;
      }
      else if (uVar5 != 0) {
        if (uStack_88 == 0) {
          iVar9 = *(int *)(iVar8 + 0x24);
        }
        else {
          iVar9 = *(int *)(iVar8 + 0x2c);
        }
        uVar7 = 1;
        goto LAB_2c657e54;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_2c657d66:
  *puVar1 = *puVar1 | 4;
LAB_2c657d72:
  iVar8 = FUN_2c656bf6(&uStack_70,&param_5);
  if (iVar8 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  FUN_2c65e94c(&pcStack_48);
  FUN_2c65e94c(&puStack_60);
  return param_1;
LAB_2c657e54:
  iVar4 = FUN_2c656c1a(&uStack_70,&param_5);
  if (iVar4 == 0) goto LAB_2c65801e;
  if (uVar12 == uVar7) goto LAB_2c658024;
  iVar4 = FUN_2c656bd8(&uStack_70);
  if (*(int *)(iVar9 + uVar7 * 4) != iVar4) goto LAB_2c657d66;
  uVar7 = uVar7 + 1;
  FUN_2c6561e8(&uStack_70);
  goto LAB_2c657e54;
LAB_2c65801e:
  if (uVar12 == uVar7) {
LAB_2c658024:
    if ((1 < uStack_44) && (iVar9 = func_0x2c65ef5c(&pcStack_48,0x30,0), iVar9 != 0)) {
      if (iVar9 == -1) {
        iVar9 = uStack_44 - 1;
      }
      FUN_2c6561a8(&pcStack_48,0,iVar9);
    }
    if ((uStack_88 != 0) && (*pcStack_48 != '0')) {
      func_0x2c65ecd4(&pcStack_48,pcStack_48,0x2d);
    }
    if (iStack_5c != 0) {
      if (uVar11 == 0) {
        uStack_80._0_1_ = (undefined1)uVar10;
      }
      else {
      }
      FUN_2c65ebe0(&puStack_60,(undefined1)uStack_80);
      iVar9 = func_0x2c665c02(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),&puStack_60);
      if (iVar9 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar11 == 0) || (*(uint *)(iVar8 + 0x34) == uVar10)) {
      func_0x2c65ee80(param_9,&pcStack_48);
      goto LAB_2c657d72;
    }
  }
  goto LAB_2c657d66;
}

