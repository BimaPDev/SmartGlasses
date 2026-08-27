/* FUN_1407f80c @ 0x1407f80c */

uint FUN_1407f80c(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = 0x18;
  uVar3 = 0;
  while( true ) {
    if ((uVar2 & 0xff) - 0x61 < 0x1a) {
      uVar2 = (uint)(char)((char)uVar2 + -0x20);
    }
    else if (0x19 < (uVar2 & 0xff) - 0x41) {
      return uVar3;
    }
    uVar3 = uVar3 | uVar2 << (uVar1 & 0xff);
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
    uVar2 = (uint)*param_1;
    uVar1 = uVar1 - 8;
    if (uVar2 == 0) {
      return uVar3;
    }
  }
  return uVar3;
}

