/* FUN_100c9924 @ 0x100c9924 */

void FUN_100c9924(void)

{
  int iVar1;
  undefined4 in_r3;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = *DAT_100c9954;
  piVar2 = DAT_100c9954;
  if (iVar1 == 0) {
    uVar3 = FUN_1011ea48(DAT_100c9954,0,0x14);
    iVar1 = (int)((ulonglong)uVar3 >> 0x20);
    piVar2 = (int *)uVar3;
  }
  piVar2[1] = DAT_100c9958;
  *(undefined2 *)(piVar2 + 2) = 5;
  if (-1 < (int)((uint)*(byte *)(DAT_100c995c + 3) << 0x1c)) {
    FUN_100c3fac(DAT_100c9954,iVar1,5,in_r3);
    return;
  }
  return;
}

