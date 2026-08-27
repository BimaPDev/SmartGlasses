/* FUN_2c48e738 @ 0x2c48e738 */

int FUN_2c48e738(void)

{
  int iVar1;
  
  iVar1 = (*(code *)*DAT_2c48e758)(0x28);
  if (iVar1 != 0) {
    FUN_2c674268(iVar1,0,0x28);
    *(undefined4 *)(iVar1 + 0xc) = 0x40;
  }
  return iVar1;
}

