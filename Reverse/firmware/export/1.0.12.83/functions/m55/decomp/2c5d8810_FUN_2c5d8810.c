/* FUN_2c5d8810 @ 0x2c5d8810 */

void FUN_2c5d8810(int param_1)

{
  int iVar1;
  
  FUN_2c607048(*(undefined4 *)(param_1 + 4),(int)*(short *)(param_1 + 0x40));
  iVar1 = (int)*(short *)(param_1 + 0x40);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_2c606e68(*(undefined4 *)(param_1 + 4),iVar1 >> 1,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 4),0xff00ff00,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 4),0x10,0);
  return;
}

