/* FUN_100c9900 @ 0x100c9900 */

uint FUN_100c9900(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100c41c4(DAT_100c991c);
  if (iVar1 == 0) {
    uVar2 = FUN_100c41c4(DAT_100c9920);
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

