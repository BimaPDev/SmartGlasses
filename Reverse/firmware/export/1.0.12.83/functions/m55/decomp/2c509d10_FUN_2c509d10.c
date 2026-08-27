/* FUN_2c509d10 @ 0x2c509d10 */

void FUN_2c509d10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0x1e && iVar2 == 0) {
    FUN_2c606d90(*(undefined4 *)(param_1 + 0x34),0xff,0);
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  else if (iVar3 == 0x3c && iVar2 == 0) {
    FUN_2c606d90(*(undefined4 *)(param_1 + 0x3c),0xff,0);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  else if (iVar3 == 0x78 && iVar2 == 0) {
    FUN_2c606d90(*(undefined4 *)(param_1 + 0x44),0xff,0);
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    if ((iVar3 != 0xf || iVar2 != 0) || (*(char *)(param_1 + 0xc) == '\0')) {
      return;
    }
    FUN_2c606d90(*(undefined4 *)(param_1 + 0x2c),0xff,0);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  FUN_2c603c40(uVar1,0x21,0x19,0);
  return;
}

