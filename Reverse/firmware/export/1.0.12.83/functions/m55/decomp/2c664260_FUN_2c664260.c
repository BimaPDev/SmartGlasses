/* FUN_2c664260 @ 0x2c664260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c664260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uint uStack_60;
  uint uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [2];
  
  puVar1 = param_8;
  iVar8 = param_7 + 0x6c;
  uStack_48 = param_3;
  uStack_44 = param_4;
  uVar2 = FUN_2c65faf0(iVar8);
  iVar8 = FUN_2c6600ac(iVar8);
  pcStack_3c = _LAB_2c664514;
  uVar7 = 0;
  if ((*(int *)(iVar8 + 0x28) != 0) && (uVar7 = 0, *(int *)(iVar8 + 0x30) != 0)) {
    uVar7 = 1;
  }
  pcStack_40 = _LAB_2c664514;
  if (*(char *)(iVar8 + 0x10) != '\0') {
    FUN_2c6510f6(&pcStack_40);
  }
  iVar9 = 0;
  FUN_2c6510f6(&pcStack_3c,0x20);
  uVar11 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uStack_58 = 0;
  uStack_38 = *(undefined4 *)(iVar8 + 0x3c);
  uStack_60 = 0;
  do {
    switch(*(undefined1 *)((int)aiStack_34 + iVar9 + -4)) {
    case 0:
      uVar5 = 1;
      goto LAB_2c66454a;
    case 1:
      iVar4 = FUN_2c656c1a(&uStack_48,&param_5);
      if (iVar4 != 0) {
        uVar6 = FUN_2c656bd8(&uStack_48);
        uVar5 = FUN_2c6565e2(uVar2,8,uVar6);
        if (uVar5 != 0) {
          FUN_2c660394(&uStack_48);
          goto LAB_2c66454a;
        }
      }
      uVar5 = 0;
LAB_2c66454a:
      if (iVar9 != 3) {
        while (iVar4 = FUN_2c656c1a(&uStack_48,&param_5), iVar4 != 0) {
          uVar6 = FUN_2c656bd8(&uStack_48);
          iVar4 = FUN_2c6565e2(uVar2,8,uVar6);
          if (iVar4 == 0) break;
          FUN_2c660394(&uStack_48);
        }
      }
      break;
    case 2:
      if (((*(int *)(param_7 + 0xc) << 0x16 < 0) || (1 < uVar12)) || (iVar9 == 0)) {
LAB_2c66437c:
        iVar4 = *(int *)(iVar8 + 0x20);
        iVar13 = 0;
        while (uVar5 = FUN_2c656c1a(&uStack_48,&param_5), uVar5 != 0) {
          if (iVar13 == iVar4) goto LAB_2c6643bc;
          iVar3 = FUN_2c656bd8(&uStack_48);
          if (*(int *)(*(int *)(iVar8 + 0x1c) + iVar13 * 4) != iVar3) goto LAB_2c6643a8;
          iVar13 = iVar13 + 1;
          FUN_2c660394(&uStack_48);
        }
        if (iVar13 != iVar4) {
LAB_2c6643a8:
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
        if (((uVar7 != 0) || ((char)uStack_38 == '\x03')) || (uStack_38._2_1_ == '\x01'))
        goto LAB_2c66437c;
      }
      else if (iVar9 == 2) {
        if (uStack_38._3_1_ != '\x04') {
          if (uVar7 == 0) goto switchD_2c6642dc_default;
          uVar5 = uVar7;
          if (uStack_38._3_1_ != '\x03') break;
        }
        goto LAB_2c66437c;
      }
switchD_2c6642dc_default:
      uVar5 = 1;
      break;
    case 3:
      if (((*(int *)(iVar8 + 0x28) == 0) || (uVar5 = FUN_2c656c1a(&uStack_48,&param_5), uVar5 == 0))
         || (iVar4 = FUN_2c656bd8(&uStack_48), **(int **)(iVar8 + 0x24) != iVar4)) {
        if (((*(int *)(iVar8 + 0x30) == 0) ||
            (uVar5 = FUN_2c656c1a(&uStack_48,&param_5), uVar5 == 0)) ||
           (iVar4 = FUN_2c656bd8(&uStack_48), **(int **)(iVar8 + 0x2c) != iVar4)) {
          if ((*(int *)(iVar8 + 0x28) == 0) || (*(int *)(iVar8 + 0x30) != 0)) {
            uVar5 = uVar7 ^ 1;
          }
          else {
            uStack_60 = 1;
            uVar5 = 1;
          }
        }
        else {
          uVar12 = *(uint *)(iVar8 + 0x30);
          FUN_2c660394(&uStack_48);
          uStack_60 = uVar5;
        }
      }
      else {
        uVar12 = *(uint *)(iVar8 + 0x28);
        FUN_2c660394(&uStack_48);
      }
      break;
    case 4:
      while (uVar5 = FUN_2c656c1a(&uStack_48,&param_5), uVar5 != 0) {
        aiStack_34[0] = FUN_2c656bd8(&uStack_48);
        iVar4 = FUN_2c65137e(iVar8 + 0x44,10,aiStack_34);
        if (iVar4 == 0) {
          if ((*(int *)(iVar8 + 0x14) == aiStack_34[0]) && (uVar11 == 0)) {
            if (*(int *)(iVar8 + 0x34) < 1) goto LAB_2c66451e;
            uStack_58 = uVar10;
            uVar11 = uVar5;
            uVar10 = 0;
          }
          else {
            if ((*(byte *)(iVar8 + 0x10) == 0) ||
               ((uVar5 = (uint)*(byte *)(iVar8 + 0x10), aiStack_34[0] != *(int *)(iVar8 + 0x18) ||
                (uVar5 = uVar11, uVar11 != 0)))) goto LAB_2c66451e;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_2c66451e;
            }
            FUN_2c651292(&pcStack_40,uVar10 & 0xff);
            uVar10 = 0;
          }
        }
        else {
          FUN_2c651292(&pcStack_3c,*(undefined1 *)(*DAT_2c664518 + (iVar4 - (iVar8 + 0x40) >> 2)));
          uVar10 = uVar10 + 1;
        }
        FUN_2c660394(&uStack_48);
      }
      uVar5 = 1;
LAB_2c66451e:
      if (*(int *)(pcStack_3c + -0xc) == 0) {
        uVar5 = 0;
      }
      break;
    default:
      goto switchD_2c6642dc_default;
    }
LAB_2c6643bc:
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) {
      if (uVar12 < 2) {
        if (uVar5 != 0) goto LAB_2c6645ba;
      }
      else if (uVar5 != 0) {
        if (uStack_60 == 0) {
          iVar9 = *(int *)(iVar8 + 0x24);
        }
        else {
          iVar9 = *(int *)(iVar8 + 0x2c);
        }
        uVar7 = 1;
        goto LAB_2c6643de;
      }
      break;
    }
  } while (uVar5 != 0);
LAB_2c6642f0:
  *puVar1 = *puVar1 | 4;
LAB_2c6642fc:
  iVar8 = FUN_2c656bf6(&uStack_48,&param_5);
  if (iVar8 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  FUN_2c650e60(&pcStack_3c);
  FUN_2c650e60(&pcStack_40);
  return param_1;
LAB_2c6643de:
  iVar4 = FUN_2c656c1a(&uStack_48,&param_5);
  if (iVar4 == 0) goto LAB_2c6645b4;
  if (uVar12 == uVar7) goto LAB_2c6645ba;
  iVar4 = FUN_2c656bd8(&uStack_48);
  if (*(int *)(iVar9 + uVar7 * 4) != iVar4) goto LAB_2c6642f0;
  uVar7 = uVar7 + 1;
  FUN_2c660394(&uStack_48);
  goto LAB_2c6643de;
LAB_2c6645b4:
  if (uVar12 == uVar7) {
LAB_2c6645ba:
    if ((1 < *(uint *)(pcStack_3c + -0xc)) && (iVar9 = FUN_2c650d2e(&pcStack_3c,0x30,0), iVar9 != 0)
       ) {
      if (iVar9 == -1) {
        iVar9 = *(int *)(pcStack_3c + -0xc) + -1;
      }
      FUN_2c65f590(&pcStack_3c,0,iVar9);
    }
    if ((uStack_60 != 0) && (FUN_2c650f64(&pcStack_3c), *pcStack_3c != '0')) {
      uVar2 = FUN_2c650f76(&pcStack_3c);
      FUN_2c650fec(&pcStack_3c,uVar2,0x2d);
    }
    if (*(int *)(pcStack_40 + -0xc) != 0) {
      if (uVar11 == 0) {
        uStack_58._0_1_ = (undefined1)uVar10;
      }
      else {
      }
      FUN_2c651292(&pcStack_40,(undefined1)uStack_58);
      iVar9 = FUN_2c665bc0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),&pcStack_40);
      if (iVar9 == 0) {
        *puVar1 = *puVar1 | 4;
      }
    }
    if ((uVar11 == 0) || (*(uint *)(iVar8 + 0x34) == uVar10)) {
      FUN_2c650d04(param_9,&pcStack_3c);
      goto LAB_2c6642fc;
    }
  }
  goto LAB_2c6642f0;
}

