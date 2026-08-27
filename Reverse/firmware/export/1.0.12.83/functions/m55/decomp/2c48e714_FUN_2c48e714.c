/* FUN_2c48e714 @ 0x2c48e714 */

int FUN_2c48e714(void)

{
  int iVar1;
  
  iVar1 = (*(code *)*DAT_2c48e734)(0x28);
  if (iVar1 != 0) {
    FUN_2c674268(iVar1,0,0x28);
    *(undefined4 *)(iVar1 + 0xc) = 0x20;
  }
  return iVar1;
}

