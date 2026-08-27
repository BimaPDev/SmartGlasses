/* FUN_140016a8 @ 0x140016a8 */

void FUN_140016a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_140016d4;
  do {
  } while ((int)(DAT_140016d4[3] << 0x1f) < 0);
  DAT_140016d4[1] = DAT_140016d8 & param_3 << 0xc | DAT_140016d4[1] & 0xfe000fff | 1;
  *puVar1 = param_2;
  return;
}

