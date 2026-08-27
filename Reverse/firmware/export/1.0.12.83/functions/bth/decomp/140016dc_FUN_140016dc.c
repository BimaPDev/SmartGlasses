/* FUN_140016dc @ 0x140016dc */

void FUN_140016dc(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_14001714;
  do {
  } while ((int)(DAT_14001714[3] << 0x1f) < 0);
  uVar2 = DAT_1400171c & param_4 << 0xd;
  DAT_14001714[1] = DAT_14001718 & param_3 << 0xc | DAT_14001714[1] & 0xfe000fff | 1;
  *puVar1 = uVar2 | param_2 | 0x100;
  return;
}

