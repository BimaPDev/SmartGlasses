/* FUN_10116640 @ 0x10116640 */

uint FUN_10116640(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = (int *)(*(int *)(DAT_10116664 + 8) + 0xa8);
  piVar4 = (int *)*piVar1;
  if ((piVar4 == piVar1) || (piVar4 == (int *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar5 = piVar4[4];
    iVar2 = thunk_FUN_10115958();
    uVar3 = iVar5 - iVar2 & ~(iVar5 - iVar2 >> 0x1f);
  }
  return uVar3;
}

