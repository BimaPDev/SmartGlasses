/* FUN_140987fc @ 0x140987fc */

bool FUN_140987fc(uint param_1,uint param_2,int *param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 != 0) {
    FUN_140e5148(*DAT_14098874,0xffffffff,param_3,DAT_14098874,param_4);
  }
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1409887c,DAT_14098878,param_1);
  }
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098880,DAT_14098878,param_2);
  }
  bVar1 = -1 < (int)((uint)*(byte *)(param_2 * 0x9c + param_1 * 0x138 + DAT_14098870 + 2) << 0x1e);
  if (!bVar1) {
    *param_3 = param_2 * 0x9c + 0x18 + param_1 * 0x138 + DAT_14098870;
  }
  if (param_4 != 0) {
    FUN_140e52d8(*DAT_14098874);
    return bVar1;
  }
  return bVar1;
}

