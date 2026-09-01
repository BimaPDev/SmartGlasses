/* FUN_100ea6b8 @ 0x100ea6b8 */

undefined4 FUN_100ea6b8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  iVar1 = FUN_100f66a0(1);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100ea6ec - DAT_100ea6e8) * 0x20 & 0xff00U | 0xeb0011,DAT_100ea6f4,DAT_100ea6f0
                 ,DAT_100ea6e8,in_r3);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

