/* FUN_100c98d4 @ 0x100c98d4 */

void FUN_100c98d4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  int *piVar3;
  undefined8 uVar4;
  
  iVar2 = *DAT_100c98f8;
  piVar3 = DAT_100c98f8;
  if (iVar2 == 0) {
    uVar4 = FUN_1011ea48(DAT_100c98f8,0,0x14);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    piVar3 = (int *)uVar4;
  }
  piVar1 = DAT_100c98f8;
  piVar3[1] = DAT_100c98fc;
  *(undefined2 *)(piVar3 + 2) = 5;
  FUN_100c3fac(piVar1,iVar2,5,in_r3);
  return;
}

