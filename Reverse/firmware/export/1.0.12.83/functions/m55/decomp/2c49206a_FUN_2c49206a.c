/* FUN_2c49206a @ 0x2c49206a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49206a(int param_1)

{
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4921d4);
  }
  if (param_1 == 1) {
    if (*_LAB_2c4921ac == '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1e4,DAT_2c492198,DAT_2c492194,_LAB_2c4921c4,_LAB_2c4921c8);
    }
    *_LAB_2c4921ac = '\0';
  }
  else if (param_1 == 2) {
    if (*_LAB_2c4921a8 == '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1ee,DAT_2c492198,DAT_2c492194,_LAB_2c4921cc,_LAB_2c4921c8);
    }
    *_LAB_2c4921a8 = '\0';
  }
  else {
    if (param_1 != 3) {
      uVar1 = param_1 - 1U & 0xff;
      if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xff,DAT_2c492198,DAT_2c492194,_LAB_2c492190,_LAB_2c49218c,param_1);
      }
      goto LAB_2c4920dc;
    }
    if (*_LAB_2c4921c0 == '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1f8,DAT_2c492198,DAT_2c492194,_LAB_2c4921d0,_LAB_2c4921c8);
    }
    *_LAB_2c4921c0 = '\0';
  }
  uVar1 = param_1 - 1U & 0xff;
LAB_2c4920dc:
  if (4 < *(byte *)(_LAB_2c4921b0 + uVar1)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,DAT_2c492198,DAT_2c492194,_LAB_2c4921a0,_LAB_2c49219c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1fe,DAT_2c492198,DAT_2c492194,DAT_2c4921b8,
        *(undefined4 *)(_LAB_2c4921b4 + (uint)*(byte *)(_LAB_2c4921b0 + uVar1) * 4));
}

