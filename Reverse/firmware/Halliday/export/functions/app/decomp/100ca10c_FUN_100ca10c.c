/* FUN_100ca10c @ 0x100ca10c */

int FUN_100ca10c(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = FUN_100c9d30();
  iVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 8) = param_1;
    FUN_101334c8(iVar1 + 0x90,param_2);
    *(undefined1 *)(extraout_r2 + 9) = 1;
    *(undefined1 *)(extraout_r2 + 10) = 1;
    *(undefined1 *)(extraout_r2 + 2) = 1;
    *(undefined4 *)(extraout_r2 + 0xa8) = DAT_100ca138;
    iVar2 = extraout_r2;
  }
  return iVar2;
}

