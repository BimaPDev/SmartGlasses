/* FUN_100a1db0 @ 0x100a1db0 */

undefined4 FUN_100a1db0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  uVar2 = DAT_100a1de4;
  iVar1 = DAT_100a1de0;
  *(undefined1 *)(*DAT_100a1ddc + 8) = 1;
  FUN_100a5b78((iVar1 - DAT_100a1de8) * 0x20 & 0xff00U | 0xd70031,uVar2,DAT_100a1dec,DAT_100a1de8,
               in_r3);
  return 0;
}

