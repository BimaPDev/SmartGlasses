/* FUN_10079ea0 @ 0x10079ea0 */

undefined4 FUN_10079ea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  int extraout_r2;
  int extraout_r2_00;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined *puVar5;
  
  uVar2 = DAT_10079f94;
  uVar1 = DAT_10079f90;
  iVar10 = 0;
  pbVar7 = *(byte **)(param_1 + 4);
  iVar11 = *(int *)(pbVar7 + 4);
  iVar8 = DAT_10079f68 - DAT_10079f64;
  iVar13 = *(int *)(param_1 + 0x10);
  iVar4 = DAT_10079f64;
  piVar12 = DAT_10079f6c;
  iVar14 = param_1;
  do {
    iVar6 = DAT_10079f70;
    if ((int)(uint)*pbVar7 <= iVar10) {
      *(int *)(iVar13 + 0x38) = param_1;
      *(undefined1 *)(iVar13 + 0x40) = 0;
      puVar5 = PTR_LAB_10079f98_1_10079f74;
      *(undefined1 *)(iVar6 + 0x41) = 0;
      thunk_FUN_101146e4(iVar13 + 8,puVar5,iVar4,iVar6,iVar14,pbVar7,param_3);
      return 0;
    }
    uVar3 = *(uint *)(iVar11 + iVar10 * 8);
    puVar5 = PTR_s_GPIOA_10079f88;
    if ((0x1f < uVar3) && (puVar5 = PTR_s_GPIOB_10079f78, 0x3f < uVar3)) {
      puVar5 = PTR_s_GPIOC_10079f7c;
    }
    iVar4 = FUN_10112e84(puVar5);
    if (iVar4 == 0) {
      uVar9 = *(undefined4 *)(iVar11 + iVar10 * 8);
      puVar5 = PTR_s_failed_to_bind_GPIO__d_10079f80;
      uVar3 = uVar2;
LAB_10079f20:
      FUN_100a5b78(iVar8 * 0x20 & 0xff00U | uVar3,PTR_s_gpiokey_acts_init_10079f84,puVar5,uVar9);
      iVar4 = extraout_r2;
    }
    else {
      FUN_10079d50(iVar4,*(uint *)(iVar11 + iVar10 * 8) & 0x1f,0x100);
      iVar6 = FUN_10079dc4(iVar4,*(uint *)(iVar11 + iVar10 * 8) & 0x1f);
      if (iVar6 < 0) {
        uVar9 = *(undefined4 *)(iVar11 + iVar10 * 8);
        puVar5 = PTR_s_failed_to_get_gpio__d_input_stat_10079f8c;
        uVar3 = uVar1;
        goto LAB_10079f20;
      }
      *(char *)(piVar12 + 1) = (char)iVar6;
      *piVar12 = iVar4;
      iVar4 = extraout_r2_00;
    }
    iVar10 = iVar10 + 1;
    piVar12 = piVar12 + 2;
  } while( true );
}

