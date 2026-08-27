/* FUN_2c4db6c0 @ 0x2c4db6c0 */

byte FUN_2c4db6c0(uint param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == *param_3) {
    bVar1 = *(byte *)(param_2 + 1) ^ param_3[1];
    if ((bVar1 & 0xf6) == 0) {
      bVar2 = *(byte *)(param_2 + 2) ^ param_3[2];
      if ((bVar1 & 8) != 0 || (bVar2 & 0xc1) != 0) {
        return bVar1 & 0xf6;
      }
      if (((*(byte *)(param_2 + 3) ^ param_3[3]) & 0xc0) != 0 || (bVar2 & 0x3c) != 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

