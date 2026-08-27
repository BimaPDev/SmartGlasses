/* FUN_2c003cdc @ 0x2c003cdc */

void FUN_2c003cdc(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_2c003d14 + param_1 * 4);
  do {
  } while ((int)(puVar2[3] << 0x1f) < 0);
  uVar1 = DAT_2c003d20 & param_4 << 0xd;
  puVar2[1] = DAT_2c003d18 & param_3 << 0xc | DAT_2c003d1c & puVar2[1] | 1;
  *puVar2 = uVar1 | param_2 | 0x100;
  return;
}

