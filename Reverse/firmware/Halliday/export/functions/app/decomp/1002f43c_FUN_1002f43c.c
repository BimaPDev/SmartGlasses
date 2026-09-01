/* FUN_1002f43c @ 0x1002f43c */

undefined4 FUN_1002f43c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1002f494;
  uVar1 = FUN_10088ffc();
  FUN_1012569c(uVar1,DAT_1002f49c,DAT_1002f498);
  FUN_101256e8(uVar1,9,0,0x1e,param_1);
  FUN_10124c20(uVar1,0x10);
  FUN_10126e82(uVar1,0);
  FUN_10126ea2(uVar1,0xff,0);
  if (*DAT_1002f494 != iVar2) {
    FUN_1013cdc0();
  }
  return uVar1;
}

