/* FUN_1012d812 @ 0x1012d812 */

void FUN_1012d812(void)

{
  byte *pbVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar2;
  
  uVar2 = FUN_100a1c10();
  pbVar1 = (byte *)uVar2;
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 | 2;
  }
  FUN_1011aabe(1,(int)((ulonglong)uVar2 >> 0x20),extraout_r2,in_r3);
  return;
}

