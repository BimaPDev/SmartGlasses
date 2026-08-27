/* FUN_2c5e66ae @ 0x2c5e66ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e66ae(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte *in_r3;
  undefined4 uVar5;
  
  bVar1 = *in_r3;
  iVar3 = FUN_2c5e6664();
  puVar2 = _LAB_2c5e6708;
  if (iVar3 == 0) {
    return;
  }
  if ((bVar1 == 1) || (bVar1 == 4)) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0xfffffff0;
  }
  if ((bVar1 & 0xfd) == 1) {
    uVar5 = 0x66;
  }
  else {
    uVar5 = 0xffffff44;
  }
  FUN_2c6072bc(*_LAB_2c5e6708,bVar1,uVar4,uVar5);
  FUN_2c5e4bac(*puVar2,0,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e6714,0xa5,_LAB_2c5e6710,_LAB_2c5e670c,bVar1);
}

