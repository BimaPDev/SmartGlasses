/* FUN_2c4931d6 @ 0x2c4931d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4931d6(void)

{
  int *in_r3;
  int iVar1;
  int iVar2;
  
  if (*in_r3 < 4) {
    iVar2 = DAT_2c493254 + -0x24;
    iVar1 = DAT_2c493254;
    do {
      if ((*(char *)(iVar1 + 0x18) != '\0') && (*(char *)(iVar1 + 0x20) != '\0')) {
        (**(code **)(iVar1 + 0x1c))(0,*(char *)(iVar1 + 0x18),0xffffffff);
        *(undefined1 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined1 *)(iVar1 + 0x20) = 0;
      }
      iVar1 = iVar1 + -0xc;
    } while (iVar1 != iVar2);
    iVar2 = DAT_2c493258 + -0x3c;
    iVar1 = DAT_2c493258;
    do {
      if ((*(char *)(iVar1 + 0x30) != '\0') && (*(char *)(iVar1 + 0x38) != '\0')) {
        (**(code **)(iVar1 + 0x34))(0,*(char *)(iVar1 + 0x30),0xffffffff);
        *(undefined1 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x34) = 0;
        *(undefined1 *)(iVar1 + 0x38) = 0;
      }
      iVar1 = iVar1 + -0xc;
    } while (iVar1 != iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x272,_LAB_2c493264,_LAB_2c493260,_LAB_2c49325c);
}

