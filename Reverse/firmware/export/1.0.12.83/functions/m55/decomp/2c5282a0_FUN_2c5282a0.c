/* FUN_2c5282a0 @ 0x2c5282a0 */

void FUN_2c5282a0(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(int *)(param_1 + 0x10c) != 0) && (*(int *)(param_1 + 0x104) != 0)) {
    if (param_2 == 0) {
      FUN_2c525874();
      FUN_2c5259c0();
      pcVar1 = (char *)FUN_2c5260c4();
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
        uVar3 = *(undefined4 *)(param_1 + 0x10c);
        uVar2 = registry_lookup(DAT_2c5283d0);
        FUN_2c638730(uVar3,uVar2);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x10c);
        uVar2 = registry_lookup(DAT_2c5283ec);
        uVar6 = *(undefined4 *)(param_1 + 0x40);
        FUN_2c525874();
        FUN_2c5259c0();
        uVar3 = FUN_2c5260c4();
        uVar3 = FUN_2c529960(uVar6,uVar3);
        FUN_2c638814(uVar5,DAT_2c5283f0,uVar2,uVar3);
      }
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x10c),1);
      if (*(int *)(param_1 + 0x114) != 0) {
        lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x114),1);
      }
      iVar4 = *(int *)(param_1 + 0x104);
      if (iVar4 != 0) {
        uVar2 = FUN_2c5e2e8c(DAT_2c5283d4);
        FUN_2c63140c(iVar4,uVar2);
      }
      if (*(int *)(param_1 + 0x110) != 0) {
        lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x110),1);
      }
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x104),1);
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x108),1);
      if (*DAT_2c5283d8 != 0) {
        FUN_2c62be40();
      }
      if (*DAT_2c5283dc != 0) {
        FUN_2c62be40();
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_2c62be40();
      }
      FUN_2c5283f4(param_1,1);
      FUN_2c5281e8(param_1,1);
      return;
    }
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10c),1);
    if (*(int *)(param_1 + 0x110) != 0) {
      lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x110),1);
    }
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x104),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x108),1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5283e8,0x23d,DAT_2c5283e4,DAT_2c5283e0);
}

