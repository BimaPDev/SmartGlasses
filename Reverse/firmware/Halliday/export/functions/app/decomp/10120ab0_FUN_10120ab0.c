/* FUN_10120ab0 @ 0x10120ab0 */

ushort FUN_10120ab0(short *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  
  uVar2 = 0;
  psVar1 = param_1 + param_2;
  for (; param_1 != psVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 + *param_1;
  }
  return uVar2 ^ 0xaa55;
}

