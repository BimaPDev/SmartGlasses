/* FUN_2c5e6502 @ 0x2c5e6502 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e6502(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *in_r3;
  
  puVar2 = _LAB_2c5e6554;
  cVar1 = *in_r3;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    FUN_2c6072bc(*_LAB_2c5e6554,1,0x10);
  }
  else {
    FUN_2c6072bc(*_LAB_2c5e6554,3,0xfffffff0);
  }
  FUN_2c5e4bac(*puVar2,0,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e6560,0x9b,_LAB_2c5e655c,_LAB_2c5e6558,cVar1);
}

