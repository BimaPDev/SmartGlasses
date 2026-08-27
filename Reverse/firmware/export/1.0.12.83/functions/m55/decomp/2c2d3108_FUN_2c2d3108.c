/* FUN_2c2d3108 @ 0x2c2d3108 */

undefined8 FUN_2c2d3108(void)

{
  int iVar1;
  int in_r3;
  int iVar2;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r9;
  
  iVar1 = *(int *)(unaff_r7 ^ unaff_r5);
  iVar2 = ((int *)(unaff_r7 ^ unaff_r5))[2];
  *(int *)(iVar1 * 2) = iVar1;
  *(char *)(unaff_r9 + iVar1) = (char)iVar1;
  return CONCAT44(in_r3 << 3,iVar2 << 3);
}

