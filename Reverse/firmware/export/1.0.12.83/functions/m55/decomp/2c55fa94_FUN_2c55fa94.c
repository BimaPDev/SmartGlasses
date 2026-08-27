/* FUN_2c55fa94 @ 0x2c55fa94 */

void FUN_2c55fa94(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if ((!in_ZR && in_NG == in_OV) &&
     (iVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x58),
                           param_4 * (*(short *)(param_1 + 0x56) + -1) + param_2 + -1), iVar1 != 0))
  {
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_2c606d60(*(int *)(param_1 + 0x50),0xff000000,0);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    FUN_2c606d60(iVar1,0xff00ff00,0);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  return;
}

