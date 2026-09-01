/* FUN_100252d8 @ 0x100252d8 */

int FUN_100252d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  piVar1 = DAT_10025430;
  iVar8 = *DAT_10025430;
  iVar7 = *DAT_10025434;
  if (iVar8 == 0) {
    iVar8 = FUN_10088ffc();
    *piVar1 = iVar8;
    FUN_10126f52(iVar8,param_2,0);
    FUN_1012569c(*piVar1,DAT_10025438);
    FUN_10126ea2(*piVar1,0xff,0);
    FUN_10126e82(*piVar1,0,0);
    uVar2 = FUN_10092758(*piVar1);
    FUN_1012569c(uVar2,DAT_10025440,DAT_1002543c);
    FUN_10126e82(uVar2,0,0);
    FUN_10126f32(uVar2,0xffffffff,0);
    FUN_10126ea2(uVar2,0xff,0);
    FUN_101256e8(uVar2,9,0,0);
    FUN_10126e6e(uVar2,10,0);
    FUN_1002efe4();
    uVar6 = DAT_10025448;
    iVar8 = 0;
    puVar9 = DAT_10025444;
    do {
      iVar3 = FUN_1002ed68(uVar2);
      FUN_1012569c(iVar3,0xf0,0x28);
      FUN_10126e82(iVar3,0x3186,0x40000);
      uVar4 = FUN_10087308();
      FUN_1008740c(uVar4,iVar3);
      FUN_10086fc4(iVar3,uVar6,0,param_3);
      *(int *)(iVar3 + 0x10) = iVar8;
      uVar4 = FUN_10096f4c(iVar3);
      FUN_101256e8(uVar4,9,0);
      uVar5 = FUN_1004cf14(*puVar9);
      iVar8 = iVar8 + 1;
      FUN_10097998(uVar4,uVar5);
      puVar9 = puVar9 + 1;
    } while (iVar8 != 4);
    FUN_10126fb4(uVar2,0);
    FUN_1002eefc();
    uVar6 = FUN_10096f4c(*piVar1);
    uVar2 = FUN_1004cf14(0x11e);
    FUN_10097998(uVar6,uVar2);
    FUN_101256e8(uVar6,5,0,0xffffffec);
    FUN_10126f32(uVar6,0xffffffff,0);
    FUN_10126f52(uVar6,param_2,0);
    iVar8 = *piVar1;
  }
  if (*DAT_10025434 != iVar7) {
    FUN_1013cdc0();
  }
  return iVar8;
}

