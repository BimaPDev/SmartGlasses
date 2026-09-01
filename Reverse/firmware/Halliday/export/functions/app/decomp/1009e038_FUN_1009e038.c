/* FUN_1009e038 @ 0x1009e038 */

int FUN_1009e038(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  
  uVar4 = FUN_10115464();
  uVar5 = FUN_1013cd52();
  if ((((int)((uint)*(byte *)((int)param_1 + 0xb) << 0x1b) < 0) &&
      ((undefined4 *)*DAT_1009e1ec != (undefined4 *)0x0)) &&
     ((undefined4 *)*DAT_1009e1ec != param_1)) {
    FUN_100a5b78((DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00U | 0x6f0011,DAT_1009e1fc,DAT_1009e1f8
                 ,*param_1);
    return 0;
  }
  puVar6 = (undefined4 *)thunk_FUN_1009f30c(0x14,DAT_1009e200);
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  uVar12 = *param_1;
  iVar8 = param_1[1];
  puVar6[4] = param_1;
  puVar6[1] = uVar12;
  puVar6[3] = iVar8;
  puVar2 = DAT_1009e204;
  puVar10 = (undefined4 *)*DAT_1009e204;
  if (puVar10 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar10;
    while (puVar7 = puVar3, iVar8 != puVar10[3]) {
      if (puVar7 == (undefined4 *)0x0) goto LAB_1009e0f8;
      puVar3 = (undefined4 *)*puVar7;
      puVar10 = puVar7;
    }
    uVar11 = (DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00;
    FUN_100a5b78(uVar11 | 0x460012,DAT_1009e208,DAT_1009e20c,puVar10[1],iVar8);
    FUN_100a5b78(uVar11 | 0x800031,DAT_1009e1fc,DAT_1009e210);
    goto LAB_1009e0e0;
  }
LAB_1009e0f8:
  if (param_2 == 0) {
    puVar6[2] = uVar4;
LAB_1009e152:
    if (puVar6[2] == 0) {
      uVar12 = *param_1;
      uVar11 = (DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00U | 0x9b0000;
      uVar9 = DAT_1009e218;
    }
    else {
      *puVar6 = 0;
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        *puVar2 = puVar6;
        puVar2[1] = puVar6;
      }
      else {
        *(undefined4 *)puVar2[1] = puVar6;
        puVar2[1] = puVar6;
      }
      iVar8 = FUN_1009ec10(puVar6[1]);
      piVar1 = DAT_1009e1ec;
      if (iVar8 != 0) {
        if (((int)((uint)*(byte *)((int)param_1 + 0xb) << 0x1b) < 0) && (*DAT_1009e1ec == 0)) {
          FUN_100a5b78((DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00U | 0xa80031,DAT_1009e1fc,
                       DAT_1009e220,*param_1);
          *piVar1 = (int)param_1;
        }
        FUN_10115194(uVar4,uVar5);
        return iVar8;
      }
      uVar12 = puVar6[1];
      uVar11 = (DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00U | 0xa20000;
      uVar9 = DAT_1009e21c;
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_10115194(uVar4,*(byte *)((int)param_1 + 10) - 1);
      uVar12 = FUN_1011db7e(param_1[1],*(undefined2 *)(param_1 + 2),param_1[6],param_1[3],param_1[4]
                            ,param_1[5],*(undefined1 *)((int)param_1 + 10),0,0);
      uVar9 = *param_1;
      puVar6[2] = uVar12;
      FUN_10113564(uVar12,uVar9);
      goto LAB_1009e152;
    }
    uVar11 = (DAT_1009e1f4 - DAT_1009e1f0) * 0x20 & 0xff00U | 0x870000;
    uVar9 = DAT_1009e214;
  }
  FUN_100a5b78(uVar11 | 0x11,DAT_1009e1fc,uVar9,uVar12);
LAB_1009e0e0:
  FUN_1012d1f4(puVar6);
  FUN_10115194(uVar4,uVar5);
  return 0;
}

