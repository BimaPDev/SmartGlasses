/* FUN_2c00d698 @ 0x2c00d698 */

void FUN_2c00d698(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c00d6e0;
  FUN_2c008e4c(0x6f,&local_e,param_3,0);
  local_e = local_e & 0xfe00 | param_1 & 0x1ff;
  FUN_2c008f74(0x6f);
  if (*DAT_2c00d6e0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

