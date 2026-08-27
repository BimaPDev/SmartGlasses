/* FUN_2c62b4ac @ 0x2c62b4ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62b4ac(uint param_1,uint param_2)

{
  undefined1 uVar1;
  uint uStack_10;
  
  if (0x7f < param_1) {
    uVar1 = (undefined1)param_1;
    if (param_1 < 0x800) {
      uStack_10 = (ushort)(CONCAT11(uVar1,(char)(param_1 >> 6)) | 0xc0) & 0xffff3fff | 0x8000;
      param_1 = uStack_10;
    }
    else if (param_1 < 0x10000) {
      param_2 = 0;
      uStack_10 = (uint3)(CONCAT12(uVar1,CONCAT11((byte)((param_1 << 0x14) >> 0x1a),
                                                  (char)(param_1 >> 0xc))) | 0x80e0) & 0xff3fffff |
                  0x800000;
      param_1 = uStack_10;
    }
    else if (param_1 < 0x110000) {
      param_2 = param_1 >> 0x12 | 0xfffffff0;
      uStack_10 = CONCAT13(uVar1,CONCAT12((byte)((param_1 << 0x14) >> 0x1a),
                                          CONCAT11((byte)((param_1 << 0xe) >> 0x1a),(char)param_2)))
                  & 0x3fffffff | 0x80808000;
      param_1 = uStack_10;
    }
    else {
      param_1 = 0;
    }
  }
  if ((*_LAB_2c62b568 ^ *_LAB_2c62b568) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(param_1,param_2,*_LAB_2c62b568 ^ *_LAB_2c62b568,0);
  }
  return;
}

