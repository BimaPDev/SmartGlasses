/* FUN_100842c4 @ 0x100842c4 */

undefined4 FUN_100842c4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_10084314;
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    piVar4 = (int *)*DAT_10084314;
    piVar3 = (int *)DAT_10084314[1];
    if (piVar4 != DAT_10084314) {
      for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        if (param_1 == piVar4) {
          FUN_100a5b78(DAT_10084324 |
                       ((int)PTR_DAT_1008431c - (int)PTR_DAT_10084318) * 0x20 & 0xff00U,DAT_10084328
                       ,PTR_s_dvfs_notifier__p_has_already_reg_10084320,param_1);
          return 0xffffffef;
        }
        if (piVar4 == piVar3) break;
      }
    }
    *param_1 = (int)DAT_10084314;
    param_1[1] = (int)piVar3;
    *piVar3 = (int)param_1;
    piVar1[1] = (int)param_1;
    uVar2 = 0;
  }
  return uVar2;
}

