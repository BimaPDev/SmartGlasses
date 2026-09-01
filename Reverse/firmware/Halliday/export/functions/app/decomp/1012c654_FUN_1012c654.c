/* FUN_1012c654 @ 0x1012c654 */

uint FUN_1012c654(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1008bbb4();
  return (*(byte *)(*piVar1 + 0x1c) & 0x7f) >> 6;
}

