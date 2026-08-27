/* FUN_2c5c880c @ 0x2c5c880c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c880c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_2c525874();
  FUN_2c5259c0();
  pcVar1 = (char *)FUN_2c5260c4();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = (char *)registry_lookup(_LAB_2c5c8954);
  }
  if (param_1 == 0) {
    iVar3 = FUN_2c471604(1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5c8948,0x195,_LAB_2c5c894c,_LAB_2c5c8958,
                   *(char *)(iVar3 + 0x3d) == '\x03');
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c8948,0x199,_LAB_2c5c894c,_LAB_2c5c8964);
  }
  FUN_2c5c55d8();
  uVar2 = FUN_2c5c5b3c();
  iVar3 = FUN_2c66b624(uVar2,_LAB_2c5c8940);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c8948,0x187,_LAB_2c5c894c,_LAB_2c5c8944,pcVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c8948,0x184,_LAB_2c5c894c,_LAB_2c5c8968);
}

