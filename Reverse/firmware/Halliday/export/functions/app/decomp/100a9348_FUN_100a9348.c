/* FUN_100a9348 @ 0x100a9348 */

uint FUN_100a9348(int param_1)

{
  uint uVar1;
  undefined1 auStack_24 [2];
  undefined1 local_22;
  int local_1c;
  
  FUN_1011ea48(auStack_24,0,0x14);
  if ((param_1 == 0) || (local_1c = *(int *)(param_1 + 4), local_1c == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    local_22 = 0x82;
    uVar1 = FUN_1009ece8(DAT_100a9390,auStack_24);
    if (uVar1 != 0) {
      FUN_100a92f4(param_1,0x1a,0);
    }
    uVar1 = (uVar1 ^ 1) & 0xff;
  }
  return uVar1;
}

