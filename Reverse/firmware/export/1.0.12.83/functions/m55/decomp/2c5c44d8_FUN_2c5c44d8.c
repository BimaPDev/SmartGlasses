/* FUN_2c5c44d8 @ 0x2c5c44d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c44d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = *_LAB_2c5c4620;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c48bc,0x14f,_LAB_2c5c48b8,_LAB_2c5c48e4,_LAB_2c5c48e0);
  }
  iVar1 = FUN_2c62107c(param_2,param_2,param_3,0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x40) == '\0')) {
    if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5c4bc8,0x42,_LAB_2c5c4bfc,_LAB_2c5c4bf8);
    }
    uVar2 = FUN_2c63736c(*(int *)(iVar1 + 8));
    pcVar4 = *(char **)(iVar1 + 0x48);
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\x01') {
        if ((((*(char **)(pcVar4 + 8) != (char *)0x0) && (**(char **)(pcVar4 + 8) != '\0')) &&
            (*(char **)(pcVar4 + 0xc) != (char *)0x0)) && (**(char **)(pcVar4 + 0xc) != '\0')) {
          uVar2 = FUN_2c673c88();
          *(undefined4 *)(pcVar4 + 0x18) = uVar2;
          iVar3 = *(int *)(iVar1 + 0x48);
          if (((iVar3 != 0) && (pcVar4 = *(char **)(iVar3 + 4), pcVar4 != (char *)0x0)) &&
             (*pcVar4 != '\0')) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c5c4bc8,0x165,_LAB_2c5c4bc4,_LAB_2c5c4bc0,
                         *(undefined4 *)(iVar1 + 0x20),pcVar4,*(undefined4 *)(iVar3 + 8),
                         *(undefined4 *)(iVar3 + 0xc));
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5c48bc,0x16f,_LAB_2c5c48b8,_LAB_2c5c48b4,
                       *(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar3 + 8),
                       *(undefined4 *)(iVar3 + 0xc));
        }
      }
      else if (*pcVar4 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5c48bc,0x17b,_LAB_2c5c48b8,_LAB_2c5c48e8,*(undefined4 *)(iVar1 + 0x20)
                     ,*(undefined4 *)(pcVar4 + 0x10),*(undefined4 *)(pcVar4 + 0x14));
      }
    }
    FUN_2c66b624(uVar2,*(undefined4 *)(iVar1 + 0x14));
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c4630,299,_LAB_2c5c462c,_LAB_2c5c4624);
  }
  if (*_LAB_2c5c4620 == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

