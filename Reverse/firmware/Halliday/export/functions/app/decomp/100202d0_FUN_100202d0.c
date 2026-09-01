/* FUN_100202d0 @ 0x100202d0 */

undefined4 FUN_100202d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10020308;
  if (param_1 != 0) goto LAB_100202fa;
  uVar1 = FUN_1002000c(param_2,param_2,0,0,0);
  while( true ) {
    FUN_100201cc();
    if (*DAT_10020308 == iVar2) break;
    FUN_1013cdc0();
LAB_100202fa:
    uVar1 = FUN_100200ec();
  }
  return uVar1;
}

