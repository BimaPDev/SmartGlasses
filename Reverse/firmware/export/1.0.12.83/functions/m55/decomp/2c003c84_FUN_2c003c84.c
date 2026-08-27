/* FUN_2c003c84 @ 0x2c003c84 */

void FUN_2c003c84(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_2c003ca0 + param_1 * 4);
  do {
  } while ((int)(puVar1[3] << 0x1f) < 0);
  puVar1[1] = puVar1[1] & 0xfffffffe;
  *puVar1 = param_2 | param_3 << 8;
  return;
}

