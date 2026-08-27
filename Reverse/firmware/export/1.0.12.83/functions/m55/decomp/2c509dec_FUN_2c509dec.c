/* FUN_2c509dec @ 0x2c509dec */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */

void FUN_2c509dec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x44;
  }
  if (iVar3 == 0xf && iVar2 == 0) {
    FUN_2c606ff8(*(undefined4 *)(param_1 + 400),0x72);
  }
  else if (iVar3 == 0x1e && iVar2 == 0) {
    FUN_2c606ff8(*(undefined4 *)(param_1 + 400),iVar1 + 0x72);
  }
  else if (iVar3 == 0x3c && iVar2 == 0) {
    FUN_2c606ff8(*(undefined4 *)(param_1 + 400),iVar1 + 0xb6);
  }
  else if (iVar3 == 0x78 && iVar2 == 0) {
    FUN_2c606ff8(*(undefined4 *)(param_1 + 400),iVar1 + 0xfa);
  }
  iVar2 = *(int *)(param_1 + 400);
  if (iVar2 == 0) {
    return;
  }
  iVar4 = *DAT_2c606b68;
  iVar3 = FUN_2c607214();
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe;
  FUN_2c607df0(iVar2);
  iVar1 = FUN_2c607214(iVar2);
  if (iVar1 != 0) {
    FUN_2c6041d4(iVar2);
    FUN_2c607248();
    FUN_2c607248(iVar2);
  }
  iVar1 = FUN_2c607214(iVar2);
  if (iVar1 == iVar3) {
    if (*DAT_2c606b68 == iVar4) {
      return;
    }
  }
  else {
    FUN_2c6041d4(iVar2);
    if (*DAT_2c606b68 == iVar4) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

