/* FUN_10022ce0 @ 0x10022ce0 */

void FUN_10022ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 + 1;
  iVar3 = *(int *)PTR_DAT_10022dcc;
  iVar1 = FUN_10020860(iVar4,param_2,param_3,0);
  if (iVar1 != 0) {
    FUN_100a5b78(((int)PTR_DAT_10022dd4 - (int)PTR_DAT_10022dd0) * 0x20 & 0xff00U | 0x2840032,
                 PTR_s_appNotifyCfg_appdata_analysis_10022dd8,PTR_s_appid__d__switch__d_10022ddc,
                 iVar4,*(undefined1 *)(param_1 + 0x41));
    (**(code **)(PTR_DAT_10022de0 + 8))(iVar1,*(undefined1 *)(param_1 + 0x41));
  }
  FUN_100224f0(iVar4);
  iVar1 = extraout_r1;
  iVar2 = param_1 + 0x44;
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(param_1 + 0x42); iVar5 = iVar5 + 1) {
    iVar1 = FUN_10021b6c(iVar2,iVar1);
    if (iVar1 != 0) {
      FUN_100225ec(1,iVar2,iVar4);
      iVar1 = extraout_r1_00;
      break;
    }
    iVar1 = iVar2;
    iVar2 = iVar2 + 0x41;
  }
  iVar2 = param_1 + 0x2d0;
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(param_1 + 0x2ce); iVar5 = iVar5 + 1) {
    iVar1 = FUN_10021b6c(iVar2,iVar1);
    if (iVar1 != 0) {
      FUN_100225ec(2,iVar2,iVar4);
      iVar1 = extraout_r1_01;
      break;
    }
    iVar1 = iVar2;
    iVar2 = iVar2 + 0x41;
  }
  iVar5 = 0;
  iVar2 = param_1 + 0x416;
  do {
    if ((int)(uint)*(byte *)(param_1 + 0x414) <= iVar5) {
      if (*(int *)PTR_DAT_10022dcc == iVar3) {
        return;
      }
LAB_10022db6:
      FUN_1013cdc0();
      iVar2 = extraout_r1_02;
LAB_10022dba:
      FUN_100225ec(3,iVar2,iVar4);
      return;
    }
    iVar1 = FUN_10021b6c(iVar2,iVar1);
    if (iVar1 != 0) {
      if (*(int *)PTR_DAT_10022dcc != iVar3) goto LAB_10022db6;
      goto LAB_10022dba;
    }
    iVar5 = iVar5 + 1;
    iVar1 = iVar2;
    iVar2 = iVar2 + 0x41;
  } while( true );
}

