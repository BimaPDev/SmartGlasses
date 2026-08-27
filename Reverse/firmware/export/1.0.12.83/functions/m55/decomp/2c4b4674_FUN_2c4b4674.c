/* FUN_2c4b4674 @ 0x2c4b4674 */

int FUN_2c4b4674(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = DAT_2c4b48bc;
  switch(param_1) {
  case 0:
    puVar5 = (undefined4 *)param_2[3];
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[3] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
    if (iVar2 == 0) {
      FUN_2c4b4248();
      FUN_2c4b4520(1);
    }
    param_2[4] = 0;
    if (*param_2 == 0) {
LAB_2c4b4744:
      uVar6 = param_2[1];
      if ((0 < (int)uVar6) && (0 < param_2[2])) {
        uVar8 = param_2[2] + 0xfU & 0xfffffff0;
        iVar2 = FUN_2c4b44a4(0x20);
        if (iVar2 == 0x355) {
          bVar3 = 3;
          uVar6 = uVar6 + 0x7f & 0xffffff80;
        }
        else if ((uVar6 & 0x7f) == 0) {
          bVar3 = 3;
        }
        else {
          bVar3 = 2;
        }
        iVar4 = uVar8 * 0x80;
        if (iVar4 < 0x2000) {
          iVar4 = 0x2000;
        }
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc | bVar3;
        uVar7 = uVar8 * 3 + 0x3f & 0xffffffc0;
        iVar2 = FUN_2c4b4310(iVar4,puVar5 + 7,puVar5 + 8,puVar5 + 6);
        if (iVar2 != 0) goto LAB_2c4b48a8;
        param_2[9] = puVar5[8];
        iVar2 = puVar5[7];
        param_2[0xc] = uVar7;
        param_2[0xd] = uVar6 | uVar8 << 0x10;
        param_2[10] = iVar2;
        param_2[0xb] = iVar4 - uVar7;
      }
      FUN_2c4b44b4(0x14,0xffffffff);
      iVar2 = param_1;
    }
    else {
      iVar2 = FUN_2c4b4310(*param_2,puVar5 + 2,puVar5 + 4,puVar5);
      if (iVar2 == 0) {
        param_2[5] = puVar5[2];
        param_2[7] = puVar5[4];
        iVar2 = FUN_2c4b4310(*param_2,puVar5 + 3,puVar5 + 5,puVar5 + 1);
        if (iVar2 == 0) {
          param_2[6] = puVar5[3];
          param_2[8] = puVar5[5];
          goto LAB_2c4b4744;
        }
      }
LAB_2c4b48a8:
      FUN_2c4b462c(puVar5);
    }
    break;
  case 1:
    FUN_2c4b462c(*param_2);
    iVar2 = 0;
    break;
  case 2:
    iVar2 = FUN_2c4b4310(*param_2,param_2 + 3,param_2 + 4,param_2 + 2);
    return iVar2;
  case 3:
    FUN_2c4b43a8(*param_2);
    iVar2 = 0;
    break;
  case 4:
    iVar2 = *param_2;
    iVar4 = *(int *)(iVar2 + (param_2[3] + 4) * 4);
    thunk_FUN_2c4b4a28();
    FUN_2c4b44b4(0x500,(param_2[1] - *(int *)(iVar2 + (param_2[3] + 2) * 4)) + iVar4);
    FUN_2c4b44b4(0x504,param_2[2] + 7U >> 3);
    iVar2 = 0;
    break;
  case 5:
    iVar2 = FUN_2c4b44f0(param_2[1],param_2[2],param_2 + 3);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = 4;
    break;
  case 6:
    FUN_2c4b4520(1);
    FUN_2c4b44b4(0x14,0xffffffff);
    iVar2 = 0;
    break;
  case 7:
    return 0;
  case 8:
    iVar2 = FUN_2c4b4510(*param_2,param_2[1],param_2[2],param_2 + 4);
    param_2[3] = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = 5;
    break;
  case 9:
    FUN_2c4b451c(*param_2);
    iVar2 = 0;
    break;
  case 10:
    iVar2 = FUN_2c4b44a4(*param_2);
    param_2[1] = iVar2;
    iVar2 = 0;
    break;
  case 0xb:
    if (*DAT_2c4b44dc != 0) {
      *param_2 = *(int *)(*DAT_2c4b44dc + 0x1c);
      return 0;
    }
    *param_2 = 0;
    return 3;
  default:
    iVar2 = 1;
    break;
  case 0x10:
    param_2[2] = param_2[1];
    return 0;
  case 0x11:
    return 0;
  }
  return iVar2;
}

