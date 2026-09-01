/* FUN_100fb00c @ 0x100fb00c */

uint FUN_100fb00c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  if ((int)puVar2 + 3U < *(uint *)(param_1 + 0x24)) {
    puVar3 = puVar2 + 1;
    uVar1 = *puVar2;
    uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
  }
  else {
    uVar1 = 0;
    puVar3 = puVar2;
  }
  *(uint **)(param_1 + 0x20) = puVar3;
  return uVar1;
}

