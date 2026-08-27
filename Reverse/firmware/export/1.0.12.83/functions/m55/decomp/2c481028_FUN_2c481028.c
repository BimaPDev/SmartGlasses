/* FUN_2c481028 @ 0x2c481028 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c481028(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c481080,_LAB_2c48107c,0xe5,param_4,param_4);
  }
  if (param_2 < 5) {
    return 0xffff;
  }
  pbVar2 = (byte *)(param_1 + 3);
  uVar1 = 0xffff;
  do {
    pbVar2 = pbVar2 + 1;
    cVar3 = '\b';
    uVar1 = uVar1 ^ *pbVar2;
    do {
      cVar3 = cVar3 + -1;
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xa001;
      }
    } while (cVar3 != '\0');
  } while (pbVar2 != (byte *)(param_1 + (param_2 - 5 & 0xffff) + 4));
  return uVar1;
}

