/* FUN_1012daac @ 0x1012daac */

void FUN_1012daac(int param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + (param_2 >> 1));
  if ((int)(param_2 << 0x1f) < 0) {
    param_3 = bVar1 & 0xf | param_3 << 4;
  }
  else {
    param_3 = param_3 | bVar1 & 0xf0;
  }
  *(byte *)(param_1 + (param_2 >> 1)) = param_3;
  return;
}

