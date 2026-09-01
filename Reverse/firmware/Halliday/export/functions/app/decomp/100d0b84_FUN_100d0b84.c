/* FUN_100d0b84 @ 0x100d0b84 */

undefined4 FUN_100d0b84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_1011ea48(param_1 + 0xd0,0,0xf0,param_4,param_4);
  iVar1 = FUN_100c9b88(param_1 + 0xf7,0x10);
  if (iVar1 == 0) {
    FUN_10135440(param_1 + 0xd0,5);
    uVar2 = FUN_100c8a18();
    *DAT_100d0bbc = uVar2;
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}

