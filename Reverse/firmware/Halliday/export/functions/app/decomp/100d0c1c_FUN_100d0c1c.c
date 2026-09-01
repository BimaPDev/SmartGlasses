/* FUN_100d0c1c @ 0x100d0c1c */

void FUN_100d0c1c(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_1;
  uStack_c = param_2;
  FUN_1013547c((int)&local_10 + 1,param_1 + 0x90,param_1);
  local_10 = local_10 & 0xffffff00;
  iVar1 = FUN_100e0874(*(undefined1 *)(extraout_r2 + 8),&local_10);
  if (iVar1 == 0) {
    uVar2 = FUN_100d32ac(&local_10);
    FUN_100a5b78(DAT_100d0c68 | (DAT_100d0c60 - DAT_100d0c64) * 0x20 & 0xff00U,DAT_100d0c70,
                 DAT_100d0c6c,uVar2);
  }
  return;
}

