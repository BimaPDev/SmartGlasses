/* FUN_2c000558 @ 0x2c000558 */

void FUN_2c000558(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c0005f0;
  local_e = 0x3f;
  FUN_2c003898(0x3002,0x3f,param_3,0);
  local_e = 7;
  FUN_2c003898(0x300e);
  FUN_2c003748(0x3004,&local_e);
  local_e = local_e | 4;
  FUN_2c003898(0x3004);
  FUN_2c003898(0x301e,0);
  FUN_2c003898(0x301f,0);
  FUN_2c003898(0x3020,0);
  FUN_2c003898(0x3021,0x1f00);
  FUN_2c003898(0x3022,0xfffe);
  if (*DAT_2c0005f0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c003558();
}

