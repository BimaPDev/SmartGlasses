/* FUN_2c47a798 @ 0x2c47a798 */

void FUN_2c47a798(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  FUN_2c479da0();
  FUN_2c47a418();
  puVar1 = DAT_2c479a2c;
  FUN_2c47bbc0(0);
  FUN_2c674268(puVar1,0,0xe1b8);
  *puVar1 = 0xff;
  FUN_2c47bc30(0);
  iVar2 = *(int *)(DAT_2c4799fc + 0x510);
  if (iVar2 == 0) {
    FUN_2c674268(DAT_2c479a00,0,0xe6b4,DAT_2c4799fc,unaff_r4);
    *(undefined1 *)(DAT_2c479a04 + 0x1b8) = 0xff;
    return;
  }
  if (*(int *)(iVar2 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(3,iVar2);
}

