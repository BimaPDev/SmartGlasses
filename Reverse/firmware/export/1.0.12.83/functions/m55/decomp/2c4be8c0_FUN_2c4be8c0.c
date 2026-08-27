/* FUN_2c4be8c0 @ 0x2c4be8c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4be8c0(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = _LAB_2c4be8e4;
  uVar4 = 0;
  do {
    uVar1 = uVar4 & 0xff;
    uVar3 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & *puVar2) != 0) {
      func_0x2c4be854(0,uVar3);
    }
  } while (uVar4 != 8);
  return;
}

