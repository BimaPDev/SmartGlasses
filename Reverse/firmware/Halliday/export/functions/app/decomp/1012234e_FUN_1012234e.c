/* FUN_1012234e @ 0x1012234e */

uint FUN_1012234e(short *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (*param_1 == 0) break;
    uVar1 = FUN_10086a1c();
    uVar2 = (uVar2 >> 1) + uVar2 * 0x8000 + (uVar1 & 0xff);
    uVar2 = ((uVar2 & 0xffff) >> 1) + (uVar1 >> 8) + uVar2 * 0x8000 & 0xffff;
    param_1 = param_1 + 1;
  }
  return uVar2;
}

