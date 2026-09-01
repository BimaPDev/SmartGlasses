/* FUN_100f0298 @ 0x100f0298 */

uint FUN_100f0298(uint param_1)

{
  uint uVar1;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  uint uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 < 6) {
    local_1c = 0;
    local_1a = 9;
    local_19 = 0x80;
    local_18 = 0;
    local_c = 0;
    local_10 = DAT_100f02b0;
    uStack_14 = param_1;
    uVar1 = FUN_1009ece8(DAT_100e7e28,&local_1c);
    return (uVar1 ^ 1) & 0xff;
  }
  return 0xffffffea;
}

