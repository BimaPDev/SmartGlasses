/* FUN_2c653e4c @ 0x2c653e4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c653e4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uStack_8c;
  uint uStack_84;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char cStack_65;
  undefined4 uStack_64;
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
  iVar4 = FUN_2c659524(iVar8);
  iVar8 = FUN_2c6521ec(iVar8);
  uVar7 = 0;
  if ((*(int *)(iVar8 + 0x20) != 0) && (uVar7 = 0, *(int *)(iVar8 + 0x28) != 0)) {
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
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_64 = *(undefined4 *)(iVar8 + 0x34);
  do {
    switch(*(undefined1 *)((int)&uStack_64 + iVar9)) {
    case 0:
      uVar5 = 1;
      goto LAB_2c65413e;
    case 1:
      uVar5 = FUN_2c652d9a(&uStack_70,&param_5);
      if ((uVar5 == 0) ||
         (bVar3 = FUN_2c652d58(&uStack_70),
         -1 < (int)((uint)*(byte *)(*(int *)(iVar4 + 0x18) + (uint)bVar3) << 0x1c))) {
        uVar5 = 0;
      }
      else {
        FUN_2c652294(&uStack_70);
      }
LAB_2c65413e:
      if (iVar9 != 3) {
        while ((iVar6 = FUN_2c652d9a(&uStack_70,&param_5), iVar6 != 0 &&
               (bVar3 = FUN_2c652d58(&uStack_70),
               (int)((uint)*(byte *)(*(int *)(iVar4 + 0x18) + (uint)bVar3) << 0x1c) < 0))) {
          FUN_2c652294(&uStack_70);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar12)) || (iVar9 == 0)) {
LAB_2c653f74:
        iVar6 = *(int *)(iVar8 + 0x18);
        iVar13 = 0;
        while (uVar5 = FUN_2c652d9a(&uStack_70,&param_5), uVar5 != 0) {
          if (iVar13 == iVar6) goto LAB_2c653fb6;
          cVar2 = FUN_2c652d58(&uStack_70);
          if (*(char *)(*(int *)(iVar8 + 0x14) + iVar13) != cVar2) goto LAB_2c653fa2;
          iVar13 = iVar13 + 1;
          FUN_2c652294(&uStack_70);
        }
        if (iVar13 != iVar6) {
LAB_2c653fa2:
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
        if (((uVar7 != 0) || ((char)uStack_64 == '\x03')) || (uStack_64._2_1_ == '\x01'))
        goto LAB_2c653f74;
      }
      else if (iVar9 == 2) {
        if (uStack_64._3_1_ != '\x04') {
          if (uVar7 == 0) goto LAB_2c653f56;
          uVar5 = uVar7;
          if (uStack_64._3_1_ != '\x03') break;
        }
        goto LAB_2c653f74;
      }
LAB_2c653f56:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar8 + 0x20) == 0) || (uVar5 = FUN_2c652d9a(&uStack_70,&param_5), uVar5 == 0))
         || (cVar2 = FUN_2c652d58(&uStack_70), **(char **)(iVar8 + 0x1c) != cVar2)) {
        if (((*(int *)(iVar8 + 0x28) == 0) ||
            (uVar5 = FUN_2c652d9a(&uStack_70,&param_5), uVar5 == 0)) ||
           (cVar2 = FUN_2c652d58(&uStack_70), **(char **)(iVar8 + 0x24) != cVar2)) {
          if ((*(int *)(iVar8 + 0x20) == 0) || (*(int *)(iVar8 + 0x28) != 0)) {
            uVar5 = uVar7 ^ 1;
          }
          else {
            uStack_8c = 1;
            uVar5 = 1;
          }
        }
        else {
          uVar12 = *(uint *)(iVar8 + 0x28);
          FUN_2c652294(&uStack_70);
          uStack_8c = uVar5;
        }
      }
      else {
        uVar12 = *(uint *)(iVar8 + 0x20);
        FUN_2c652294(&uStack_70);
      }
      break;
    case 4:
      while (uVar5 = FUN_2c652d9a(&uStack_70,&param_5), uVar5 != 0) {
        cVar2 = FUN_2c652d58(&uStack_70);
        cStack_65 = cVar2;
        iVar6 = FUN_2c650c06(iVar8 + 0x39,10,&cStack_65);
        if (iVar6 == 0) {
          if ((*(char *)(iVar8 + 0x11) == cVar2) && (uVar11 == 0)) {
            if (*(int *)(iVar8 + 0x2c) < 1) goto LAB_2c654114;
            uStack_84 = uVar10;
            uVar11 = uVar5;
            uVar10 = 0;
          }
          else {
            if ((*(byte *)(iVar8 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar8 + 0x10), *(char *)(iVar8 + 0x12) != cVar2 ||
                (uVar5 = uVar11, uVar11 != 0)))) goto LAB_2c654114;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_2c654114;
            }
            FUN_2c65ebe0(&puStack_60,uVar10 & 0xff);
            uVar10 = 0;
          }
        }
        else {
          FUN_2c65ebe0(&pcStack_48,*(undefined1 *)(*_LAB_2c654228 + (iVar6 - (iVar8 + 0x38))));
          uVar10 = uVar10 + 1;
        }
        FUN_2c652294(&uStack_70);
      }
      uVar5 = 1;
LAB_2c654114:
      if (uStack_44 == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto LAB_2c653f56;
    }
LAB_2c653fb6:
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      if (uVar12 < 2) {
        if (uVar5 != 0) goto LAB_2c6541a4;
      }
      else if (uVar5 != 0) {
        if (uStack_8c == 0) {
          iVar4 = *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar4 = *(int *)(iVar8 + 0x24);
        }
        uVar7 = 1;
        goto LAB_2c653fd8;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_2c653ee8:
  *puVar1 = *puVar1 | 4;
LAB_2c653ef4:
  iVar4 = FUN_2c652d76(&uStack_70,&param_5);
  if (iVar4 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  FUN_2c65e94c(&pcStack_48);
  FUN_2c65e94c(&puStack_60);
  return param_1;
LAB_2c653fd8:
  iVar9 = FUN_2c652d9a(&uStack_70,&param_5);
  if (iVar9 == 0) goto LAB_2c65419e;
  if (uVar12 == uVar7) goto LAB_2c6541a4;
  cVar2 = FUN_2c652d58(&uStack_70);
  if (*(char *)(iVar4 + uVar7) != cVar2) goto LAB_2c653ee8;
  uVar7 = uVar7 + 1;
  FUN_2c652294(&uStack_70);
  goto LAB_2c653fd8;
LAB_2c65419e:
  if (uVar12 == uVar7) {
LAB_2c6541a4:
    if ((1 < uStack_44) && (iVar4 = func_0x2c65ef5c(&pcStack_48,0x30,0), iVar4 != 0)) {
      if (iVar4 == -1) {
        iVar4 = uStack_44 - 1;
      }
      FUN_2c652254(&pcStack_48,0,iVar4);
    }
    if ((uStack_8c != 0) && (*pcStack_48 != '0')) {
      func_0x2c65ecd4(&pcStack_48,pcStack_48,0x2d);
    }
    if (iStack_5c != 0) {
      if (uVar11 == 0) {
        uStack_84._0_1_ = (undefined1)uVar10;
      }
      else {
      }
      FUN_2c65ebe0(&puStack_60,(undefined1)uStack_84);
      iVar4 = func_0x2c665c02(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),&puStack_60);
      if (iVar4 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar11 == 0) || (*(uint *)(iVar8 + 0x2c) == uVar10)) {
      func_0x2c65ee80(param_9,&pcStack_48);
      goto LAB_2c653ef4;
    }
  }
  goto LAB_2c653ee8;
}

