/* FUN_2c5e64a4 @ 0x2c5e64a4 */

void FUN_2c5e64a4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_2c5e64f0;
  if (*(code **)(DAT_2c5e64ec + 4) == (code *)0x0) {
    return;
  }
  if (*(char *)(DAT_2c5e64f0 + 0x20) == '\0') {
LAB_2c5e64c8:
    uVar2 = 0;
  }
  else {
    if (*(char *)(DAT_2c5e64f0 + 0x20) == '\x06') {
      if (*(int *)(*(int *)(DAT_2c5e64f0 + 0x14) + 4) == 0) goto LAB_2c5e64c8;
    }
    uVar2 = 1;
  }
  (**(code **)(DAT_2c5e64ec + 4))(uVar2,*(undefined4 *)(DAT_2c5e64ec + 8));
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e64fc,0xf4,DAT_2c5e64f8,DAT_2c5e64f4,uVar2,*(undefined1 *)(iVar1 + 0x20));
}

