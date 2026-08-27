/* FUN_2c003ca4 @ 0x2c003ca4 */

void FUN_2c003ca4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_2c003cd0 + param_1 * 4);
  do {
  } while ((int)(puVar1[3] << 0x1f) < 0);
  puVar1[1] = DAT_2c003cd4 & param_3 << 0xc | DAT_2c003cd8 & puVar1[1] | 1;
  *puVar1 = param_2;
  return;
}

