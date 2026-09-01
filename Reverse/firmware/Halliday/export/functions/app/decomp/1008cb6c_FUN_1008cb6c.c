/* FUN_1008cb6c @ 0x1008cb6c */

void FUN_1008cb6c(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = DAT_1008cb98;
  iVar3 = 0;
  piVar2 = DAT_1008cb94;
  do {
    if (*piVar2 != 0) {
      FUN_10094268(*piVar2,uVar1);
    }
    iVar3 = iVar3 + 1;
    FUN_1012787a(piVar2,0x1c);
    piVar2 = piVar2 + 7;
  } while (iVar3 != 4);
  return;
}

