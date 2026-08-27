/* FUN_2c5e3f8c @ 0x2c5e3f8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e3f8c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x03') {
    iVar2 = FUN_2c5e3698();
  }
  else if (cVar1 == '\x05') {
    iVar2 = FUN_2c5e38fc();
  }
  else {
    if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c5e3ffc,0x1e5,_LAB_2c5e3ff8,_LAB_2c5e3ff4,cVar1);
    }
    iVar2 = FUN_2c5e3b08();
  }
  if (iVar2 != 0) {
    FUN_2c5dc53c(0xf,12000,10,_LAB_2c5e4004,_LAB_2c5e4000,param_1);
    FUN_2c5dc5e0();
    return 1;
  }
  return 0;
}

