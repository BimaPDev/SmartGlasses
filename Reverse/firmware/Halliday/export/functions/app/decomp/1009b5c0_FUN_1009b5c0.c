/* FUN_1009b5c0 @ 0x1009b5c0 */

int FUN_1009b5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1009b5e0;
  iVar2 = FUN_10065364(DAT_1009b5e0,0xff,param_3,param_4,param_4);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    FUN_1011de72(iVar1,DAT_1009b5e4);
  }
  return iVar2;
}

