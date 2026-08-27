/* FUN_2c5e6566 @ 0x2c5e6566 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e6566(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *in_r3;
  undefined4 uVar4;
  
  puVar2 = _LAB_2c5e65bc;
  bVar1 = *in_r3;
  if ((bVar1 == 1) || (bVar1 == 4)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0xfffffff0;
  }
  if ((bVar1 & 0xfd) == 1) {
    uVar4 = 0x66;
  }
  else {
    uVar4 = 0xffffff44;
  }
  FUN_2c6072bc(*_LAB_2c5e65bc,bVar1,uVar3,uVar4);
  FUN_2c5e4bac(*puVar2,0,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e65c8,0xae,_LAB_2c5e65c4,_LAB_2c5e65c0,bVar1);
}

