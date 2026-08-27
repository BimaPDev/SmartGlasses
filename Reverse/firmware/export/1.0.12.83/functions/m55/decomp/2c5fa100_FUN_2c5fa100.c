/* FUN_2c5fa100 @ 0x2c5fa100 */

void FUN_2c5fa100(uint param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte local_18;
  char local_17;
  char local_16;
  char local_15;
  int local_14;
  
  local_14 = *DAT_2c5fa204;
  iVar3 = 0;
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5fa214,0xc2,DAT_2c5fa210,DAT_2c5fa20c,DAT_2c5fa208);
  }
  bVar1 = (byte)param_1;
  if ((int)param_1 < 0x80) {
    uVar2 = 1;
    local_18 = bVar1;
  }
  else if ((int)param_1 < 0x800) {
    uVar2 = 2;
    iVar3 = ((int)param_1 >> 6) + -0x40;
    local_17 = (bVar1 & 0x3f) + 0x80;
    local_18 = (byte)iVar3;
  }
  else if (param_1 == 0xffff) {
    iVar3 = 0xff;
    uVar2 = 1;
    local_18 = 0xff;
  }
  else if (param_1 == 0xfffe) {
    iVar3 = 0xfe;
    uVar2 = 1;
    local_18 = 0xfe;
  }
  else if ((int)param_1 < 0x10000) {
    uVar2 = 3;
    iVar3 = ((param_1 & 0xfff) >> 6) - 0x80;
    local_16 = (bVar1 & 0x3f) + 0x80;
    local_17 = (char)iVar3;
    local_18 = (char)((int)param_1 >> 0xc) - 0x20;
  }
  else {
    if (0x10ffff < (int)param_1) {
      if (*DAT_2c5fa204 == local_14) {
        FUN_2c5f6b40(param_2,DAT_2c5fa218,3,0);
        return;
      }
      goto LAB_2c5fa200;
    }
    local_17 = (byte)((param_1 << 0xe) >> 0x1a) + 0x80;
    iVar3 = ((param_1 & 0xfff) >> 6) - 0x80;
    local_15 = (bVar1 & 0x3f) + 0x80;
    uVar2 = 4;
    local_16 = (char)iVar3;
    local_18 = (char)((int)param_1 >> 0x12) - 0x10;
  }
  FUN_2c5f6b40(param_2,&local_18,uVar2,iVar3);
  if (*DAT_2c5fa204 == local_14) {
    return;
  }
LAB_2c5fa200:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

