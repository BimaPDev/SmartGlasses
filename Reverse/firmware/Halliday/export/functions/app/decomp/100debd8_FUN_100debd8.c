/* FUN_100debd8 @ 0x100debd8 */

void FUN_100debd8(uint param_1,uint param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*DAT_100dec04;
  while ((pbVar1 != (byte *)0x0 &&
         (((((pbVar1[1] & 0xf) >> 3 != param_1 || (*(byte *)(*(int *)(pbVar1 + 4) + 1) != param_2))
           || ((int)((uint)*pbVar1 << 0x1e) < 0)) || ((int)((uint)pbVar1[8] << 0x1d) < 0))))) {
    pbVar1 = *(byte **)(pbVar1 + 0xc);
  }
  return;
}

