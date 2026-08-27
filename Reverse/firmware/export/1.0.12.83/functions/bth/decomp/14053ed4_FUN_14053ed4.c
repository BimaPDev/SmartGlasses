/* FUN_14053ed4 @ 0x14053ed4 */

int FUN_14053ed4(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = FUN_14053e98();
  if ((iVar1 == 0) && (param_4 != 0)) {
    psVar2 = (short *)(param_5 + -2);
    do {
      psVar2 = psVar2 + 1;
      if (((*psVar2 == 0) && ((int)((uint)*(byte *)(param_6 + 2) << 0x1f) < 0)) &&
         (*(short *)(param_2 + (uint)*(byte *)(param_6 + 3) * 4) != 0)) {
        return 0x83;
      }
      param_6 = param_6 + 4;
    } while ((short *)(param_5 + (param_4 - 1U & 0xff) * 2) != psVar2);
  }
  return iVar1;
}

