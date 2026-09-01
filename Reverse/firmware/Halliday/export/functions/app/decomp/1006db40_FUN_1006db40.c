/* FUN_1006db40 @ 0x1006db40 */

undefined4 FUN_1006db40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = iVar1 + param_2 * 4;
  iVar2 = *(int *)(iVar3 + 0x50);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (*(char *)(iVar2 + 0xb) < 0) {
      iVar4 = param_2 * 0x40 + (uint)*(byte *)(iVar4 + 10) * 0x4000;
      *(undefined4 *)(iVar4 + 0x40088104) = 0;
      *(uint *)(iVar4 + 0x40088100) = *(uint *)(iVar4 + 0x40088100) & 0x7fffffff;
      *(undefined1 *)(iVar1 + 0x2e) = 0;
    }
    else {
      FUN_10056aa0(*(byte *)(iVar2 + 1) >> 2,0,param_3,(int)*(char *)(iVar2 + 0xb),param_4);
      *(undefined4 *)(DAT_1006dbb4 + (uint)*(byte *)(iVar4 + 10) * 0x4000 + param_2 * 0x40) = 0;
    }
    if ((((int)((uint)*(byte *)(iVar2 + 0x18) << 0x1f) < 0) && (*(int *)(iVar2 + 0x10) != 0)) &&
       (*(int *)(iVar3 + 0x60) != 0)) {
      FUN_1011ea40(*(int *)(iVar2 + 0x10),*(int *)(iVar3 + 0x60),*(undefined4 *)(iVar2 + 0x14));
    }
    *(undefined4 *)(iVar3 + 0x50) = 0;
  }
  return 0;
}

