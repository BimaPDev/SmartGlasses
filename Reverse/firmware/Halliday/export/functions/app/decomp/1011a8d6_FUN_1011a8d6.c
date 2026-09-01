/* FUN_1011a8d6 @ 0x1011a8d6 */

void FUN_1011a8d6(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = FUN_1005608c();
  if ((*(uint *)(*(int *)((int)uVar1 + 0x4c) + 8) & 0x180000) == 0) {
    FUN_1011a8ae(1,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}

