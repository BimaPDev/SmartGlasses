/* FUN_2c5b06d0 @ 0x2c5b06d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b06d0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 == '\x03') {
    if (*(int *)(param_1 + 0x34) < 1) goto LAB_2c5b06e2;
    iVar1 = func_0x2c5b0694(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x34) + -1);
    if (iVar1 == 0) goto FUN_2c5b063c;
    cVar2 = *(char *)(param_1 + 0x48);
  }
  if (((cVar2 == '\x04') &&
      (iVar3 = *(int *)(param_1 + 0x34), iVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20)),
      iVar3 < iVar1 + -1)) &&
     (iVar1 = func_0x2c5b0694(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x34) + 1),
     iVar1 == 0)) {
FUN_2c5b063c:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5b068c,0x317,_LAB_2c5b0688,_LAB_2c5b0684);
  }
LAB_2c5b06e2:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5b0750,0x32c,_LAB_2c5b074c,_LAB_2c5b0748);
}

