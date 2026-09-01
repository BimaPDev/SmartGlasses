/* FUN_100d4718 @ 0x100d4718 */

int FUN_100d4718(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)*DAT_100d4744;
  while ((piVar2 != (int *)0x0 &&
         ((-1 < (int)((uint)*(byte *)(piVar2 + 0xe) << 0x1f) ||
          (iVar1 = FUN_1011ea30(param_1,piVar2 + 1,6,(uint)*(byte *)(piVar2 + 0xe) << 0x1f,param_4),
          iVar1 != 0))))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}

