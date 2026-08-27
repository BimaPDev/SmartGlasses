/* FUN_2c491e4a @ 0x2c491e4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c491e4a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xff,DAT_2c491f30,DAT_2c491f2c,_LAB_2c491f44,_LAB_2c491f40,param_1);
  }
  if (*(byte *)(_LAB_2c491f20 + param_4) < 5) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1bc,DAT_2c491f30,DAT_2c491f2c,DAT_2c491f28,
          *(undefined4 *)(_LAB_2c491f24 + (uint)*(byte *)(_LAB_2c491f20 + param_4) * 4));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x111,DAT_2c491f30,DAT_2c491f2c,_LAB_2c491f4c,_LAB_2c491f48);
}

