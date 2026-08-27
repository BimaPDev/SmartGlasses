/* FUN_2c0005f4 @ 0x2c0005f4 */

void FUN_2c0005f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c000780;
  FUN_2c003898(0x8000,0xcafe,param_3,0);
  FUN_2c003898(0x8000,0x5fee);
  FUN_2c003718(9);
  FUN_2c003898(0x801b,0);
  FUN_2c003748(0x8002,&local_e);
  local_e = local_e & 0xefff;
  FUN_2c003898(0x8002);
  FUN_2c003748(0x800a,&local_e);
  local_e = local_e & 0xf3ff | 0x800;
  FUN_2c003898(0x800a);
  FUN_2c003718(0x10);
  FUN_2c003748(0x800b,&local_e);
  local_e = local_e & 0xf3cf | 0x820;
  FUN_2c003898(0x800b);
  FUN_2c003718(0x10);
  FUN_2c003748(0x8018,&local_e);
  local_e = local_e & 0xf3ff | 0x800;
  FUN_2c003898(0x8018);
  cVar1 = FUN_2c0009f4();
  if ((byte)(cVar1 - 1U) < 2) {
    FUN_2c003748(0x800d,&local_e);
    local_e = local_e | 1;
    FUN_2c003898(0x800d);
    FUN_2c003718(0x10);
    local_e = 0x800;
    FUN_2c003898(0x8008);
    local_e = 0xaaaa;
    FUN_2c003898(0x8003);
  }
  else {
    FUN_2c003748(0x800d,&local_e);
    local_e = local_e | 1;
    FUN_2c003898(0x800d);
    FUN_2c003718(0x10);
    FUN_2c003748(0x8003,&local_e);
    local_e = local_e & 0xfcff | 0x100;
    FUN_2c003898(0x8003);
    FUN_2c003718(0x10);
  }
  if (*DAT_2c000780 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c003558();
}

