/* FUN_2c001eb4 @ 0x2c001eb4 */

void FUN_2c001eb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c001f40;
  FUN_2c003748(0x4001,&local_e,param_3,0);
  local_e = local_e | 0xe080;
  FUN_2c003898(0x4001);
  FUN_2c003748(0x4009,&local_e);
  local_e = local_e & 0xf87f;
  FUN_2c003898(0x4009);
  FUN_2c003748(0x400a,&local_e);
  local_e = local_e & 0x9fff;
  FUN_2c003898(0x400a);
  if (*DAT_2c001f40 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c003558();
}

