/* FUN_1009448c @ 0x1009448c */

void FUN_1009448c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = DAT_100944c8;
  piVar1 = DAT_100944c4;
  iVar4 = 0;
  piVar3 = DAT_100944c4;
  do {
    if (*piVar3 != 0) {
      FUN_10094268(*piVar3,uVar2);
      *piVar3 = 0;
      *(byte *)((int)piVar1 + iVar4 * 8 + 6) = *(byte *)((int)piVar1 + iVar4 * 8 + 6) & 0xfe;
      *(undefined2 *)(piVar3 + 1) = 0;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar4 != 0x10);
  return;
}

