/* FUN_2c4f219c @ 0x2c4f219c */

int FUN_2c4f219c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 1;
  do {
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == -1) {
      return -2;
    }
    if (*(uint *)(*(int *)(param_1 + 0x68) + 0x20) >> 1 <= uVar3) {
      return -0x54;
    }
    if (((*param_2 == iVar2) || (*param_2 == iVar1 || param_2[1] == iVar1)) ||
       (uVar3 = uVar3 + 1, param_2[1] == iVar2)) {
      return 0;
    }
    iVar2 = FUN_2c4f1b28(param_1,param_3,param_3 + 0x18,0xffffffff,0xffffffff,0,0,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = *(int *)(param_3 + 0x18);
  } while (iVar2 != -1);
  return -2;
}

