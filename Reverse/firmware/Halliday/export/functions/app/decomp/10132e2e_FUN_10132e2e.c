/* FUN_10132e2e @ 0x10132e2e */

uint FUN_10132e2e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10132e28();
  return (int)uVar1 >> ((uint)((ulonglong)uVar1 >> 0x20) & 0xff) & 1;
}

