/* FUN_10035380 @ 0x10035380 */

void FUN_10035380(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_2c [4];
  int local_28;
  undefined1 local_20;
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_1003544c;
  uVar5 = ((int)PTR_DAT_10035450 - (int)PTR_DAT_10035454) * 0x20 & 0xff00;
  if ((param_1 != 0) && (iVar2 = FUN_1011ea10(), iVar2 != 0)) {
    if (param_2 != param_3) goto LAB_100353d8;
    FUN_100a5b78(DAT_10035464 | uVar5,DAT_10035460,DAT_10035468);
    uVar3 = 0;
    goto LAB_100353ca;
  }
  uVar1 = DAT_10035458 | uVar5;
  puVar4 = DAT_1003545c;
LAB_100353aa:
  FUN_100a5b78(uVar1,DAT_10035460,puVar4);
  do {
    uVar3 = 0xffffffff;
LAB_100353ca:
    while( true ) {
      if (*(int *)PTR_DAT_1003544c == local_1c) {
        return;
      }
      FUN_1013cdc0(uVar3);
LAB_100353d8:
      iVar2 = param_3;
      iVar6 = param_1;
      FUN_100a5b78(DAT_1003546c | uVar5,DAT_10035460,DAT_10035470,param_2,param_3,param_1);
      FUN_1011ea48(auStack_2c,0,0x10);
      FUN_10035220(param_1,auStack_2c);
      if (local_28 == 0) break;
      local_20 = (undefined1)param_3;
      param_1 = FUN_1003512c(param_1,auStack_2c);
      if (param_1 != 0) {
        uVar1 = uVar5 | 0x2280011;
        puVar4 = PTR_s_Failed_to_save_updated_bookmark_w_1003547c;
        goto LAB_100353aa;
      }
      FUN_100a5b78(uVar5 | 0x22c0031,DAT_10035460,PTR_s_Smart_reload_completed__only_upd_10035480,
                   param_3,iVar2,iVar6);
      uVar3 = 0;
    }
    FUN_100a5b78(DAT_10035474 | uVar5,DAT_10035460,PTR_s_Failed_to_read_bookmark_for_file_10035478,
                 param_1,iVar2,iVar6);
  } while( true );
}

