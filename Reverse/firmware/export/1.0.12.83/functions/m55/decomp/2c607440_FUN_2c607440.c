/* FUN_2c607440 @ 0x2c607440 */

int FUN_2c607440(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = FUN_2c6033b4(param_1,0,0x10);
  sVar2 = FUN_2c6033b4(param_1,0,0x11);
  sVar3 = FUN_2c6033b4(param_1,0,0x32);
  return (int)(short)(((1 - (sVar1 + sVar2)) + sVar3 * -2 + *(short *)(param_1 + 0x1a)) -
                     *(short *)(param_1 + 0x16));
}

