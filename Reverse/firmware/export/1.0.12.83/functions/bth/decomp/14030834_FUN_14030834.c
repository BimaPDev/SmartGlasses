/* FUN_14030834 @ 0x14030834 */

uint FUN_14030834(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = param_1 >> (uVar3 & 0xff);
    if ((uVar2 & 0xe) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = uVar2 & 0xf;
    }
    uVar1 = uVar3 & 0xff;
    uVar3 = uVar3 + 4;
    uVar4 = uVar4 | uVar2 << uVar1 & 0xffff;
  } while (uVar3 != 0xc);
  FUN_1402a6e8(4,0x23e,DAT_14030880,DAT_1403087c,DAT_14030878,param_1,uVar4);
  return uVar4;
}

