/* FUN_2c5f5938 @ 0x2c5f5938 */

void FUN_2c5f5938(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 100) & 0x200) == 0) {
    FUN_2c5f6b40(param_1 + 0x30);
  }
  else {
    FUN_2c5f9f08();
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + -1);
    if ((cVar1 == '\n') || (cVar1 == '\r')) goto LAB_2c5f5988;
  }
  FUN_2c5f6b1c(param_1 + 0x30,10);
LAB_2c5f5988:
  uVar2 = DAT_2c5f5c14;
  iVar3 = *(int *)(param_1 + 0x10) + 1;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x10) = iVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f5c1c,0x592,DAT_2c5f5c18,uVar2,iVar3);
}

