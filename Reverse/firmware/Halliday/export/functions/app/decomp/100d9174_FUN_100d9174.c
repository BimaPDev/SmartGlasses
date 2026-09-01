/* FUN_100d9174 @ 0x100d9174 */

void FUN_100d9174(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((int)((uint)*(byte *)*DAT_100d919c << 0x1f) < 0) &&
      (-1 < (int)((uint)*(byte *)(*DAT_100d91a0 + 0x31) << 0x1f))) &&
     (iVar1 = FUN_10136622(), iVar1 != 0)) {
    uVar2 = FUN_1013676c();
    *(undefined4 *)(iVar1 + 8) = uVar2;
  }
  return;
}

