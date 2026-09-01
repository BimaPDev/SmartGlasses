/* FUN_1000a3a0 @ 0x1000a3a0 */

void FUN_1000a3a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int iVar4;
  
  iVar4 = *DAT_1000a434;
  if (param_3 != 0) goto LAB_1000a3d6;
  FUN_10119dc2(DAT_1000a438,param_2,param_4,0);
  FUN_10119dc2(DAT_1000a43c);
  *(undefined2 *)(param_2 + 8) = 0;
  uVar3 = 0;
  while( true ) {
    if (*DAT_1000a434 == iVar4) break;
    FUN_1013cdc0(uVar3);
    param_4 = extraout_r2;
LAB_1000a3d6:
    FUN_10119dc2(DAT_1000a438);
    FUN_10119dc2(DAT_1000a440,*(undefined2 *)(param_2 + 8),param_4);
    uVar2 = FUN_1000a864();
    uVar1 = *(ushort *)(param_2 + 8);
    if (uVar2 == uVar1) {
      if (*DAT_1000a444 == '\0') {
        FUN_10009c2c(param_1,param_3);
      }
      else {
        FUN_10119dc2(DAT_1000a438);
        FUN_10119dc2(DAT_1000a448,*(undefined2 *)(param_2 + 8),param_4);
      }
    }
    else {
      uVar2 = FUN_1000a8f0();
      if (uVar1 == uVar2) {
        FUN_10009ce0(param_1,param_3,param_4);
      }
    }
    uVar3 = 1;
  }
  return;
}

