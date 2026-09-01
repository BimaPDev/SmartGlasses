/* FUN_1011febc @ 0x1011febc */

uint FUN_1011febc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)(param_1 << 10) / 300;
  }
  return uVar1;
}

