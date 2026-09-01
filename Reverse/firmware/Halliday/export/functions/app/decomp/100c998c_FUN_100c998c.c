/* FUN_100c998c @ 0x100c998c */

void FUN_100c998c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  int *piVar3;
  undefined8 uVar4;
  
  iVar2 = *DAT_100c99b0;
  piVar3 = DAT_100c99b0;
  if (iVar2 == 0) {
    uVar4 = FUN_1011ea48(DAT_100c99b0,0,0x14);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    piVar3 = (int *)uVar4;
  }
  piVar1 = DAT_100c99b0;
  piVar3[1] = DAT_100c99b4;
  *(undefined2 *)(piVar3 + 2) = 5;
  FUN_100c3fac(piVar1,iVar2,5,in_r3);
  return;
}

