/* FUN_2c003c60 @ 0x2c003c60 */

void FUN_2c003c60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003c78 + param_1 * 4);
  *(uint *)(iVar1 + 4) = DAT_2c003c7c & param_2 << 0xc | DAT_2c003c80 & *(uint *)(iVar1 + 4);
  return;
}

