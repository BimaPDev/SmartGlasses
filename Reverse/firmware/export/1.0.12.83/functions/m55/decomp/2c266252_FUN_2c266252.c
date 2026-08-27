/* FUN_2c266252 @ 0x2c266252 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c266252(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r4;
  int iVar3;
  int unaff_r8;
  char in_ZR;
  char in_OV;
  
  uVar1 = _DAT_2c2663d8;
  if (in_ZR == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = unaff_r4 + unaff_r8;
  uVar2 = param_3 << 2;
  do {
    uVar2 = uVar2 >> 4;
  } while (uVar2 == 0 || in_OV != '\0');
  if (uVar2 != 0 && in_OV == '\0') {
    software_interrupt(0xdd);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar3 + 100) = _DAT_2c2663d8;
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(undefined4 *)(iVar3 + 100) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

