/* FUN_1400168c @ 0x1400168c */

void FUN_1400168c(undefined4 param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = DAT_140016a4;
  do {
  } while ((int)(DAT_140016a4[3] << 0x1f) < 0);
  DAT_140016a4[1] = DAT_140016a4[1] & 0xfffffffe;
  *puVar1 = param_2 | param_3 << 8;
  return;
}

