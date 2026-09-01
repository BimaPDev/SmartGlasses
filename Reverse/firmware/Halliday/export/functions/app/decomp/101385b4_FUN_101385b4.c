/* FUN_101385b4 @ 0x101385b4 */

undefined4 FUN_101385b4(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10138392();
  if (*(char *)(*piVar1 + (uint)*(byte *)(piVar1 + 1)) == '(') {
    *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) + 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}

