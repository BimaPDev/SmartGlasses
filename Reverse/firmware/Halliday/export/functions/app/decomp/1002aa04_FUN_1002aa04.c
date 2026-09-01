/* FUN_1002aa04 @ 0x1002aa04 */

undefined4 FUN_1002aa04(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar10 = *DAT_1002ac90;
  if (param_1 != 0) goto LAB_1002aa28;
  do {
    uVar11 = 0;
    while( true ) {
      if (*DAT_1002ac90 == iVar10) {
        return uVar11;
      }
      FUN_1013cdc0();
LAB_1002aa28:
      uVar11 = FUN_10088ffc();
      FUN_1012569c(uVar11,DAT_1002ac94);
      FUN_10126ea2(uVar11,0xff,0);
      uVar3 = FUN_10096f4c(uVar11);
      uVar4 = FUN_1004cf14(0x15d);
      FUN_10097998(uVar3,uVar4);
      FUN_101256e8(uVar3,2,0,10);
      FUN_1012569c(uVar3,DAT_1002ac9c,DAT_1002ac98);
      iVar5 = FUN_10088ffc(uVar11);
      if (iVar5 != 0) {
        FUN_1012569c(iVar5,0xc);
        FUN_10126f7a(iVar5,0x7fff,0);
        FUN_10126e82(iVar5,0xffffffff,0);
        FUN_10126ea2(iVar5,0xff,0);
        FUN_10124c20(iVar5,0x10);
      }
      FUN_10089c2c(iVar5,uVar3,0x11,0,0);
      iVar6 = FUN_10099634(uVar11);
      FUN_1012569c(iVar6,DAT_1002aca4,DAT_1002aca0);
      FUN_10089c2c(iVar6,uVar3,0xe,0,0x22);
      FUN_1002f03c(iVar6);
      puVar1 = PTR_LAB_1002b3d8_1_1002acac;
      *(undefined **)(iVar6 + 0x10) = PTR_s_editing_1002aca8;
      FUN_10086fc4(iVar6,puVar1,0,0);
      FUN_1012c322(iVar6,1);
      FUN_10124c94(iVar6,2);
      FUN_10126ea2(iVar6,0xff,0x70000);
      piVar2 = DAT_1002acc0;
      FUN_10126e82(iVar6,0xffffffff,0x70000);
      FUN_1002a1e0(iVar6,10);
      iVar9 = *piVar2;
      *(int *)(iVar9 + 0x2c) = iVar6;
      FUN_10099ca4(iVar6,iVar9 + 0x54);
      iVar9 = FUN_1012c342(*(undefined4 *)(*piVar2 + 0x2c));
      if (iVar9 == 0) break;
      iVar7 = FUN_10125790(*(undefined4 *)(*piVar2 + 0x2c));
      iVar8 = FUN_1012691c(iVar9,0,0x57);
      FUN_1012566e(iVar9,iVar7 - *(int *)(iVar8 + 8));
      FUN_10126f70(iVar9,1,0);
      FUN_10097b98(iVar9,1);
      iVar9 = *piVar2;
      FUN_1011e9f8(iVar9 + 0x170,iVar9 + 0x54,0x13f);
      *(undefined1 *)(iVar9 + 0x2af) = 0;
      iVar9 = FUN_1002ed68(uVar11);
      FUN_1012569c(iVar9,0x5a,0x20);
      FUN_10126f7a(iVar9,4,0);
      FUN_101256e8(iVar9,5,0xffffffc4,0xffffffe2);
      uVar3 = FUN_10096f4c(iVar9);
      uVar4 = FUN_1004cf14(9);
      FUN_10097998(uVar3,uVar4);
      FUN_101256e8(uVar3,9,0,0);
      FUN_10126f70(uVar3,2,0);
      iVar7 = FUN_1002ed68(uVar11);
      FUN_1012569c(iVar7,0x5a,0x20);
      FUN_10126f7a(iVar7,4,0);
      FUN_101256e8(iVar7,5,0x3c,0xffffffe2);
      uVar3 = FUN_10096f4c(iVar7);
      uVar4 = FUN_1004cf14(0x15f);
      FUN_10097998(uVar3,uVar4);
      FUN_101256e8(uVar3,9,0,0);
      FUN_10126f70(uVar3,2,0);
      iVar8 = *piVar2;
      *(int *)(iVar8 + 0x30) = iVar7;
      *(int *)(iVar8 + 0x34) = iVar9;
      *(int *)(iVar8 + 0x38) = iVar5;
      FUN_10124cea(iVar5,1);
      *(undefined **)(iVar7 + 0x10) = PTR_s_confirm_1002acb0;
      *(undefined **)(iVar9 + 0x10) = PTR_s_cencel_1002acb4;
      puVar1 = PTR_LAB_1002a0e4_1_1002acbc;
      *(undefined **)(iVar6 + 0x10) = PTR_s_speech_1002acb8;
      FUN_10086fc4(iVar7,puVar1,0,0);
      FUN_10086fc4(iVar9,PTR_LAB_1002a0e4_1_1002acbc,0,0);
      FUN_10086fc4(iVar6,PTR_LAB_1002a0e4_1_1002acbc,0,0);
    }
  } while( true );
}

