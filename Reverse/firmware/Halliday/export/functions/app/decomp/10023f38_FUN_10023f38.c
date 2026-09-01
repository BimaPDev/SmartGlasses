/* FUN_10023f38 @ 0x10023f38 */

void FUN_10023f38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  iVar8 = DAT_10023f7c;
  iVar9 = *DAT_10023f78;
  iVar6 = (**(code **)(DAT_10023f7c + 8))();
  if (iVar6 == 0x67) {
    if (*DAT_10023f78 == iVar9) goto LAB_10023f5c;
  }
  else if (*DAT_10023f78 == iVar9) {
    iVar8 = *DAT_1001d690;
    iVar6 = *DAT_1001d694;
    if (iVar6 == 0) {
      if (*DAT_1001d690 == iVar8) {
        return;
      }
    }
    else {
      if (*(int *)(iVar6 + 0x2c) != 0) {
        bVar10 = 0;
        FUN_1002efe4();
        puVar2 = PTR_s_lanucher_view_vertical_layout_fo_1001d6a4;
        puVar1 = PTR_s_add_group__d_1001d6a0;
        iVar9 = (int)PTR_DAT_1001d698 - (int)PTR_DAT_1001d69c;
        while( true ) {
          uVar3 = FUN_10126fd2(*(undefined4 *)(iVar6 + 0x2c));
          uVar7 = (uint)bVar10;
          bVar10 = bVar10 + 1;
          if (uVar3 <= uVar7) break;
          iVar4 = FUN_10126fb4(*(undefined4 *)(iVar6 + 0x2c));
          FUN_100a5b78(iVar9 * 0x20 & 0xff00U | 0xf80031,puVar2,puVar1,*(undefined4 *)(iVar4 + 0x10)
                      );
          uVar5 = FUN_10087308();
          FUN_1008740c(uVar5,iVar4);
        }
      }
      FUN_101245ce(*(undefined4 *)(iVar6 + 0x30));
      if (*DAT_1001d690 == iVar8) goto LAB_1001d61e;
    }
    FUN_1013cdc0();
LAB_1001d61e:
    FUN_10126162(*(undefined4 *)(iVar6 + 0x30),0);
    return;
  }
  FUN_1013cdc0();
LAB_10023f5c:
                    /* WARNING: Could not recover jumptable at 0x10023f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar8 + 4))();
  return;
}

