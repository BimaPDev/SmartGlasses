/* FUN_100226d8 @ 0x100226d8 */

void FUN_100226d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r5;
  int unaff_r6;
  undefined *unaff_r7;
  
  iVar4 = *(int *)PTR_DAT_1002279c;
  FUN_100a5b78(((int)PTR_DAT_100227a0 - (int)PTR_DAT_100227a4) * 0x20 & 0xff00U | 0x3980031,
               PTR_s_appNotifyCfg_global_analysis_100227ac,
               PTR_s_appNotifyCfg_global_analysis__d_100227a8,*(undefined1 *)(param_1 + 1),param_1,
               iVar4,param_3);
  FUN_10025a40(*(char *)(param_1 + 1) != '\0');
  FUN_100224f0(PTR_s_global_appid_100227b0);
  if (4 < *(byte *)(param_1 + 2)) goto LAB_10022728;
  unaff_r6 = 0;
  unaff_r5 = param_1 + 4;
  unaff_r7 = PTR_s_global_appid_100227b0;
  do {
    if ((int)(uint)*(byte *)(param_1 + 2) <= unaff_r6) {
LAB_10022728:
      puVar1 = PTR_s_global_appid_100227b0;
      if (*(byte *)(param_1 + 0x148) < 5) {
        unaff_r5 = param_1 + 0x14a;
        for (unaff_r6 = 0; unaff_r7 = puVar1, unaff_r6 < (int)(uint)*(byte *)(param_1 + 0x148);
            unaff_r6 = unaff_r6 + 1) {
          if (((unaff_r5 != 0) && (iVar2 = FUN_1011ea10(unaff_r5), iVar2 != 0)) &&
             (uVar3 = FUN_1011ea10(unaff_r5), uVar3 < 0x40)) {
            FUN_100225ec(2,unaff_r5,puVar1);
          }
          unaff_r5 = unaff_r5 + 0x41;
        }
      }
      if (*(int *)PTR_DAT_1002279c == iVar4) {
        return;
      }
      FUN_1013cdc0();
    }
    if (((unaff_r5 != 0) && (iVar2 = FUN_1011ea10(unaff_r5), iVar2 != 0)) &&
       (uVar3 = FUN_1011ea10(unaff_r5), uVar3 < 0x40)) {
      FUN_100225ec(1,unaff_r5,unaff_r7);
    }
    unaff_r6 = unaff_r6 + 1;
    unaff_r5 = unaff_r5 + 0x41;
  } while( true );
}

