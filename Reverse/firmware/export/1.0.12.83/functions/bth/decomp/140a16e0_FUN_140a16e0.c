/* FUN_140a16e0 @ 0x140a16e0 */

undefined4 FUN_140a16e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_140a1714;
  if (iVar2 != 0) {
    uVar1 = FUN_140a047c();
    *(undefined4 *)(iVar2 + 0x16c) = 0;
    FUN_140e5658(iVar2 + 0x170,0,0x8c0);
    FUN_140a0ebc();
    FUN_140a04dc(uVar1);
    return 0;
  }
  return 1;
}

