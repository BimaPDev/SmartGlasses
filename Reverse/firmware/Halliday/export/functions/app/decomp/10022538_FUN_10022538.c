/* FUN_10022538 @ 0x10022538 */

void FUN_10022538(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  piVar2 = DAT_100225cc;
  iVar4 = *(int *)PTR_DAT_100225d0;
  if (*DAT_100225cc == 0) {
    if (*(int *)PTR_DAT_100225d0 == iVar4) {
      return;
    }
  }
  else {
    iVar1 = FUN_10025948(*DAT_100225cc,param_1,*(undefined1 *)(param_1 + 0x40),0,param_1,param_2,
                         param_3);
    uVar6 = ((int)PTR_DAT_100225d4 - (int)PTR_DAT_100225d8) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      FUN_100a5b78(DAT_100225dc | uVar6,PTR_s_notify_pin_filter_add_100225e4,
                   PTR_s_pin_filter_add_config__p__appid___100225e0,param_1,
                   *(undefined1 *)(param_1 + 0x40));
      uVar3 = 0;
      if (*(int *)PTR_DAT_100225d0 == iVar4) goto LAB_10022588;
    }
    else {
      FUN_100a5b78(uVar6 | 0x2440032,PTR_s_notify_pin_filter_add_100225e4,
                   PTR_s_pin_filter_update_config__p__app_100225e8,param_1,
                   *(undefined1 *)(param_1 + 0x40));
      if (*(int *)PTR_DAT_100225d0 == iVar4) {
        piVar2 = (int *)*piVar2;
        iVar4 = *DAT_100259e4;
        if (piVar2 == (int *)0x0) goto LAB_100259ce;
        if (param_1 == 0) goto LAB_100259ce;
        unaff_r4 = *piVar2;
        do {
          if (unaff_r4 == 0) {
LAB_100259ce:
            if (*DAT_100259e4 == iVar4) {
              return;
            }
            FUN_1013cdc0();
          }
          else {
            iVar1 = FUN_100257f0(unaff_r4,param_1);
            if (iVar1 != 0) {
              if (*(char *)(unaff_r4 + 0x40) == *(char *)(param_1 + 0x40)) {
                FUN_1011ea40(unaff_r4,param_1,0x45);
                goto LAB_100259ce;
              }
            }
          }
          unaff_r4 = *(int *)(unaff_r4 + 0x48);
        } while( true );
      }
    }
  }
  FUN_1013cdc0();
  uVar3 = extraout_r2;
LAB_10022588:
  piVar2 = (int *)*piVar2;
  iVar4 = *DAT_100258ec;
  if (((piVar2 != (int *)0x0) && (param_1 != 0)) &&
     (iVar1 = FUN_10117e44(0x4c,param_1,uVar3,0,piVar2,iVar4,unaff_r4,unaff_r5,unaff_r6,unaff_lr),
     iVar1 != 0)) {
    FUN_1011ea40(iVar1,param_1,0x45);
    iVar5 = *piVar2;
    *piVar2 = iVar1;
    *(int *)(iVar1 + 0x48) = iVar5;
  }
  if (*DAT_100258ec != iVar4) {
    FUN_1013cdc0();
  }
  return;
}

