/* FUN_100eba84 @ 0x100eba84 */

int * FUN_100eba84(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_100a5b78(DAT_100ebaf8 | (DAT_100ebaf4 - DAT_100ebaf0) * 0x20 & 0xff00U,
                 PTR_s_res_manager_preload_from_picregi_100ebb00,
                 PTR_s_invalid_picreg_for_preload_100ebafc);
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_10138fb6(0,0xc,PTR_s_res_manager_preload_from_picregi_100ebb04,param_4,
                                 param_4);
    if (piVar3 == (int *)0x0) {
      FUN_100a5b78(DAT_100ebb08 | (DAT_100ebaf4 - DAT_100ebaf0) * 0x20 & 0xff00U,
                   PTR_s_res_manager_preload_from_picregi_100ebb00,DAT_100ebb0c);
    }
    else {
      iVar1 = *(int *)(*param_2 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x2c);
      piVar3[2] = param_2[1];
      *piVar3 = param_3 * 0x28 + iVar1 + iVar2;
      piVar3[1] = 0;
    }
  }
  return piVar3;
}

