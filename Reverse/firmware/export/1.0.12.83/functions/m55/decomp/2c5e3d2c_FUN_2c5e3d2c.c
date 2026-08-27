/* FUN_2c5e3d2c @ 0x2c5e3d2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e3d2c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar4 = _DAT_2c5e3f08;
  puVar3 = _LAB_2c5e3ee8;
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  cVar1 = *(char *)(puVar5 + 3);
  if (cVar1 == '\x03') {
    uVar2 = *_LAB_2c5e3ee8;
    *_LAB_2c5e3eec = 3;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c5e3ed4,0x194,_DAT_2c5e3ed0,_DAT_2c5e3ef0,puVar5[1],uVar2);
  }
  if (cVar1 != '\x05') {
    if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_DAT_2c5e3ed4,0x1a5,_DAT_2c5e3ed0,_DAT_2c5e3ecc,cVar1);
    }
    *_LAB_2c5e3eec = 1;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c5e3ed4,0x18d,_DAT_2c5e3ed0,uVar4,puVar5[1],*puVar3);
  }
  uVar2 = *_LAB_2c5e3ee8;
  *_LAB_2c5e3eec = 5;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c5e3ed4,0x19b,_DAT_2c5e3ed0,_DAT_2c5e3f0c,*puVar5,puVar5[1],uVar2);
}

