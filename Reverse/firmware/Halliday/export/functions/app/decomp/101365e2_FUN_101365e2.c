/* FUN_101365e2 @ 0x101365e2 */

void FUN_101365e2(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100d456c();
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | (int)((ulonglong)uVar2 >> 0x20) != 0;
  }
  return;
}

