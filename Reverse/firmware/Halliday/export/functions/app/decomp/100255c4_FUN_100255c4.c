/* FUN_100255c4 @ 0x100255c4 */

int FUN_100255c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar1 = DAT_10025708;
  iVar8 = *DAT_10025708;
  iVar7 = *DAT_1002570c;
  if (iVar8 == 0) {
    iVar8 = FUN_10088ffc();
    *piVar1 = iVar8;
    FUN_10126ea2(iVar8,0xff,0);
    FUN_1012569c(*piVar1,DAT_10025710);
    FUN_10126f52(*piVar1,param_2,0);
    uVar2 = FUN_10092758(*piVar1);
    FUN_1012569c(uVar2,0xf0,200);
    FUN_10126e82(uVar2,0,0);
    FUN_10126ea2(uVar2,0xff,0);
    FUN_101256e8(uVar2,9,0,0);
    FUN_10126f52(uVar2,param_2,0);
    FUN_10126f32(uVar2,0xffffffff,0);
    FUN_1002efe4();
    uVar6 = DAT_10025718;
    iVar8 = 0;
    puVar9 = DAT_10025714;
    do {
      iVar3 = FUN_1002ed68(uVar2);
      FUN_1012569c(iVar3,0xf0,0x28);
      FUN_10126e82(iVar3,0x3186,0x40000);
      FUN_10086fc4(iVar3,uVar6,0,param_3);
      uVar4 = FUN_10087308();
      FUN_1008740c(uVar4,iVar3);
      *(int *)(iVar3 + 0x10) = iVar8;
      uVar4 = FUN_10096f4c(iVar3);
      FUN_101256e8(uVar4,9,0);
      uVar5 = FUN_1004cf14(*puVar9);
      iVar8 = iVar8 + 1;
      FUN_10097998(uVar4,uVar5);
      puVar9 = puVar9 + 1;
    } while (iVar8 != 3);
    FUN_10126fb4(uVar2,0);
    FUN_1002eefc();
    FUN_10126e6e(uVar2,10,0);
    uVar6 = FUN_10096f4c(*piVar1);
    uVar2 = FUN_1004cf14(0x11e);
    FUN_10097998(uVar6,uVar2);
    FUN_101256e8(uVar6,5,0,0xffffffe2);
    iVar8 = *piVar1;
  }
  if (*DAT_1002570c != iVar7) {
    FUN_1013cdc0();
  }
  return iVar8;
}

