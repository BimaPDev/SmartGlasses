/* FUN_2c538d40 @ 0x2c538d40 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c538d40(void)

{
  uint uVar1;
  
  uVar1 = FUN_2c52e5e0();
  if ((uVar1 < 0x11) && ((int)((_LAB_2c538e6c >> (uVar1 & 0xff)) << 0x1f) < 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c538e68,0x7a,_LAB_2c538e64,_LAB_2c538e60,uVar1);
}

