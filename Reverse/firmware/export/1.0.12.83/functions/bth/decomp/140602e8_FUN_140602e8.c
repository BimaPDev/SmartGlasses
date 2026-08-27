/* FUN_140602e8 @ 0x140602e8 */

void FUN_140602e8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  uVar2 = FUN_140e52f8(DAT_14060304,0,0,in_r3,in_r3);
  iVar1 = DAT_14060308;
  *(undefined4 *)(DAT_14060308 + 0x98) = uVar2;
  *(undefined1 *)(iVar1 + 0xac) = 0;
  return;
}

