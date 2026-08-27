/* FUN_2c62a574 @ 0x2c62a574 */

int * FUN_2c62a574(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = FUN_2c62a470();
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  }
  piVar1 = (int *)FUN_2c62c938(DAT_2c62a5b8);
  if (piVar1 != (int *)0x0) {
    FUN_2c62c3b0(piVar1,0x58);
    uVar2 = DAT_2c62a5bc;
    bVar4 = *(byte *)((int)piVar1 + 5) | 2;
    *piVar1 = param_1;
    *(byte *)((int)piVar1 + 5) = bVar4;
    uVar2 = FUN_2c62bdd8(uVar2,10,piVar1,bVar4,param_4);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return piVar1;
}

