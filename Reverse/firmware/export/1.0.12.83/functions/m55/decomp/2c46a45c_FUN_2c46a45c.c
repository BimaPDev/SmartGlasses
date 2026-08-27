/* FUN_2c46a45c @ 0x2c46a45c */

int * FUN_2c46a45c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_2c6685b4(1,0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    piVar1[2] = 0x20;
    iVar2 = FUN_2c669578();
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_2c669588(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

