/* FUN_2c607404 @ 0x2c607404 */

int FUN_2c607404(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = FUN_2c6033b4(param_1,0,0x12);
  sVar2 = FUN_2c6033b4(param_1,0,0x13);
  sVar3 = FUN_2c6033b4(param_1,0,0x32);
  return (int)(short)(((1 - (sVar1 + sVar2)) + sVar3 * -2 + *(short *)(param_1 + 0x18)) -
                     *(short *)(param_1 + 0x14));
}

