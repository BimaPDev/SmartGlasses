/* FUN_2c5e034c @ 0x2c5e034c */

undefined4 FUN_2c5e034c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_2 + 0x24) = 0;
  iVar1 = FUN_2c5dd304();
  iVar2 = FUN_2c5deebc(param_2);
  if ((iVar2 == 0) || (iVar2 = FUN_2c5de488(param_1,*(undefined4 *)(param_2 + 0xc)), iVar2 == 0)) {
    FUN_2c5df27c(param_1,param_2);
  }
  else {
    iVar2 = FUN_2c5dd304(param_1);
    if (iVar1 != iVar2) {
      FUN_2c5dffd0(param_1,iVar2,0);
    }
  }
  return 1;
}

